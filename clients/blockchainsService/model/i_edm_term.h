/*
 * i_edm_term.h
 *
 * 
 */

#ifndef _i_edm_term_H_
#define _i_edm_term_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_term_t i_edm_term_t;

#include "i_edm_type_reference.h"

// Enum SCHEMAELEMENTKIND for i_edm_term

typedef enum  { blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_NULL = 0, blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_None, blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_TypeDefinition, blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_Term, blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_Action, blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_EntityContainer, blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_Function } blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e;

char* i_edm_term_schema_element_kind_ToString(blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e schema_element_kind);

blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e i_edm_term_schema_element_kind_FromString(char* schema_element_kind);



typedef struct i_edm_term_t {
    char *name; // string
    blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e schema_element_kind; //enum
    char *_namespace; // string
    struct i_edm_type_reference_t *type; //model
    char *applies_to; // string
    char *default_value; // string

} i_edm_term_t;

i_edm_term_t *i_edm_term_create(
    char *name,
    blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace,
    i_edm_type_reference_t *type,
    char *applies_to,
    char *default_value
);

void i_edm_term_free(i_edm_term_t *i_edm_term);

i_edm_term_t *i_edm_term_parseFromJSON(cJSON *i_edm_termJSON);

cJSON *i_edm_term_convertToJSON(i_edm_term_t *i_edm_term);

#endif /* _i_edm_term_H_ */

