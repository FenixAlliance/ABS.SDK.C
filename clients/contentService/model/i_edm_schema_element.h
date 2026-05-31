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

typedef enum  { contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_NULL = 0, contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_None, contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_TypeDefinition, contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_Term, contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_Action, contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_EntityContainer, contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_Function } contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e;

char* i_edm_schema_element_schema_element_kind_ToString(contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind);

contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e i_edm_schema_element_schema_element_kind_FromString(char* schema_element_kind);



typedef struct i_edm_schema_element_t {
    char *name; // string
    contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind; //enum
    char *_namespace; // string

} i_edm_schema_element_t;

i_edm_schema_element_t *i_edm_schema_element_create(
    char *name,
    contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace
);

void i_edm_schema_element_free(i_edm_schema_element_t *i_edm_schema_element);

i_edm_schema_element_t *i_edm_schema_element_parseFromJSON(cJSON *i_edm_schema_elementJSON);

cJSON *i_edm_schema_element_convertToJSON(i_edm_schema_element_t *i_edm_schema_element);

#endif /* _i_edm_schema_element_H_ */

