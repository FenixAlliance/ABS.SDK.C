/*
 * assembly.h
 *
 * 
 */

#ifndef _assembly_H_
#define _assembly_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct assembly_t assembly_t;

#include "custom_attribute_data.h"
#include "method_info.h"
#include "module.h"
#include "type.h"
#include "type_info.h"

// Enum SECURITYRULESET for assembly

typedef enum  { contentservice_assembly_SECURITYRULESET_NULL = 0, contentservice_assembly_SECURITYRULESET_None, contentservice_assembly_SECURITYRULESET_Level1, contentservice_assembly_SECURITYRULESET_Level2 } contentservice_assembly_SECURITYRULESET_e;

char* assembly_security_rule_set_ToString(contentservice_assembly_SECURITYRULESET_e security_rule_set);

contentservice_assembly_SECURITYRULESET_e assembly_security_rule_set_FromString(char* security_rule_set);



typedef struct assembly_t {
    list_t *defined_types; //nonprimitive container
    list_t *exported_types; //nonprimitive container
    char *code_base; // string
    struct method_info_t *entry_point; //model
    char *full_name; // string
    char *image_runtime_version; // string
    int is_dynamic; //boolean
    char *location; // string
    int reflection_only; //boolean
    int is_collectible; //boolean
    int is_fully_trusted; //boolean
    list_t *custom_attributes; //nonprimitive container
    char *escaped_code_base; // string
    struct module_t *manifest_module; //model
    list_t *modules; //nonprimitive container
    int global_assembly_cache; //boolean
    long host_context; //numeric
    contentservice_assembly_SECURITYRULESET_e security_rule_set; //enum

} assembly_t;

assembly_t *assembly_create(
    list_t *defined_types,
    list_t *exported_types,
    char *code_base,
    method_info_t *entry_point,
    char *full_name,
    char *image_runtime_version,
    int is_dynamic,
    char *location,
    int reflection_only,
    int is_collectible,
    int is_fully_trusted,
    list_t *custom_attributes,
    char *escaped_code_base,
    module_t *manifest_module,
    list_t *modules,
    int global_assembly_cache,
    long host_context,
    contentservice_assembly_SECURITYRULESET_e security_rule_set
);

void assembly_free(assembly_t *assembly);

assembly_t *assembly_parseFromJSON(cJSON *assemblyJSON);

cJSON *assembly_convertToJSON(assembly_t *assembly);

#endif /* _assembly_H_ */

