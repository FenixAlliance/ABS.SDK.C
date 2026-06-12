/*
 * i_edm_schema_element.h
 *
 * 
 */

#ifndef _i_edm_schema_element_H_
#define _i_edm_schema_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_schema_element_t i_edm_schema_element_t;


// Enum SCHEMAELEMENTKIND for i_edm_schema_element

typedef enum  { blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_NULL = 0, blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_None, blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_TypeDefinition, blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_Term, blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_Action, blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_EntityContainer, blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_Function } blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_e;

char* i_edm_schema_element_schema_element_kind_ToString(blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind);

blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_e i_edm_schema_element_schema_element_kind_FromString(char* schema_element_kind);



typedef struct i_edm_schema_element_t {
    char *name; // string
    blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind; //enum
    char *_namespace; // string

} i_edm_schema_element_t;

i_edm_schema_element_t *i_edm_schema_element_create(
    char *name,
    blockchainsservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace
);

void i_edm_schema_element_free(i_edm_schema_element_t *i_edm_schema_element);

i_edm_schema_element_t *i_edm_schema_element_parseFromJSON(cJSON *i_edm_schema_elementJSON);

cJSON *i_edm_schema_element_convertToJSON(i_edm_schema_element_t *i_edm_schema_element);

#endif /* _i_edm_schema_element_H_ */

