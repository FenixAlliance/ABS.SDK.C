/*
 * module.h
 *
 * 
 */

#ifndef _module_H_
#define _module_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_t module_t;

#include "i_swagger_spec.h"

// Enum TYPE for module

typedef enum  { systemservice_module_TYPE_NULL = 0, systemservice_module_TYPE_Module, systemservice_module_TYPE_Integration, systemservice_module_TYPE_StudioModule, systemservice_module_TYPE_StudioIntegration } systemservice_module_TYPE_e;

char* module_type_ToString(systemservice_module_TYPE_e type);

systemservice_module_TYPE_e module_type_FromString(char* type);



typedef struct module_t {
    int enable; //boolean
    int active; //boolean
    int order; //numeric
    char *id; // string
    char *name; // string
    char *full_name; // string
    char *description; // string
    systemservice_module_TYPE_e type; //enum
    char *configuration; // string
    char *author; // string
    char *author_url; // string
    char *license; // string
    int require_license_acceptance; //boolean
    char *repository; // string
    char *path; // string
    char *icon; // string
    char *image; // string
    char *nu_spec_path; // string
    char *manifest; // string
    char *documentation; // string
    char *website; // string
    char *logo; // string
    struct i_swagger_spec_t *swagger_spec; //model
    list_t *swagger_specs; //nonprimitive container
    char *url; // string
    list_t *assembly_paths; //primitive container
    int marked_for_deletion; //boolean
    char *version; // string

} module_t;

module_t *module_create(
    int enable,
    int active,
    int order,
    char *id,
    char *name,
    char *full_name,
    char *description,
    systemservice_module_TYPE_e type,
    char *configuration,
    char *author,
    char *author_url,
    char *license,
    int require_license_acceptance,
    char *repository,
    char *path,
    char *icon,
    char *image,
    char *nu_spec_path,
    char *manifest,
    char *documentation,
    char *website,
    char *logo,
    i_swagger_spec_t *swagger_spec,
    list_t *swagger_specs,
    char *url,
    list_t *assembly_paths,
    int marked_for_deletion,
    char *version
);

void module_free(module_t *module);

module_t *module_parseFromJSON(cJSON *moduleJSON);

cJSON *module_convertToJSON(module_t *module);

#endif /* _module_H_ */

