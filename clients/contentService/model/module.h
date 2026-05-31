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

#include "assembly.h"
#include "custom_attribute_data.h"
#include "module_handle.h"



typedef struct module_t {
    struct assembly_t *assembly; //model
    char *fully_qualified_name; // string
    char *name; // string
    int md_stream_version; //numeric
    char *module_version_id; // string
    char *scope_name; // string
    struct module_handle_t *module_handle; //model
    list_t *custom_attributes; //nonprimitive container
    int metadata_token; //numeric

} module_t;

module_t *module_create(
    assembly_t *assembly,
    char *fully_qualified_name,
    char *name,
    int md_stream_version,
    char *module_version_id,
    char *scope_name,
    module_handle_t *module_handle,
    list_t *custom_attributes,
    int metadata_token
);

void module_free(module_t *module);

module_t *module_parseFromJSON(cJSON *moduleJSON);

cJSON *module_convertToJSON(module_t *module);

#endif /* _module_H_ */

