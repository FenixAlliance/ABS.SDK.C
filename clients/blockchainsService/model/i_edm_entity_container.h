/*
 * i_edm_entity_container.h
 *
 * 
 */

#ifndef _i_edm_entity_container_H_
#define _i_edm_entity_container_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_entity_container_t i_edm_entity_container_t;

#include "i_edm_entity_container_element.h"

// Enum SCHEMAELEMENTKIND for i_edm_entity_container

typedef enum  { blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_NULL = 0, blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_None, blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_TypeDefinition, blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_Term, blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_Action, blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_EntityContainer, blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_Function } blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_e;

char* i_edm_entity_container_schema_element_kind_ToString(blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_e schema_element_kind);

blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_e i_edm_entity_container_schema_element_kind_FromString(char* schema_element_kind);



typedef struct i_edm_entity_container_t {
    char *name; // string
    blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_e schema_element_kind; //enum
    char *_namespace; // string
    list_t *elements; //nonprimitive container

} i_edm_entity_container_t;

i_edm_entity_container_t *i_edm_entity_container_create(
    char *name,
    blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace,
    list_t *elements
);

void i_edm_entity_container_free(i_edm_entity_container_t *i_edm_entity_container);

i_edm_entity_container_t *i_edm_entity_container_parseFromJSON(cJSON *i_edm_entity_containerJSON);

cJSON *i_edm_entity_container_convertToJSON(i_edm_entity_container_t *i_edm_entity_container);

#endif /* _i_edm_entity_container_H_ */

