/*
 * i_edm_type.h
 *
 * 
 */

#ifndef _i_edm_type_H_
#define _i_edm_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_type_t i_edm_type_t;


// Enum TYPEKIND for i_edm_type

typedef enum  { contentservice_i_edm_type_TYPEKIND_NULL = 0, contentservice_i_edm_type_TYPEKIND_None, contentservice_i_edm_type_TYPEKIND_Primitive, contentservice_i_edm_type_TYPEKIND_Entity, contentservice_i_edm_type_TYPEKIND_Complex, contentservice_i_edm_type_TYPEKIND_Collection, contentservice_i_edm_type_TYPEKIND_EntityReference, contentservice_i_edm_type_TYPEKIND__Enum, contentservice_i_edm_type_TYPEKIND_TypeDefinition, contentservice_i_edm_type_TYPEKIND_Untyped, contentservice_i_edm_type_TYPEKIND_Path } contentservice_i_edm_type_TYPEKIND_e;

char* i_edm_type_type_kind_ToString(contentservice_i_edm_type_TYPEKIND_e type_kind);

contentservice_i_edm_type_TYPEKIND_e i_edm_type_type_kind_FromString(char* type_kind);



typedef struct i_edm_type_t {
    contentservice_i_edm_type_TYPEKIND_e type_kind; //enum

} i_edm_type_t;

i_edm_type_t *i_edm_type_create(
    contentservice_i_edm_type_TYPEKIND_e type_kind
);

void i_edm_type_free(i_edm_type_t *i_edm_type);

i_edm_type_t *i_edm_type_parseFromJSON(cJSON *i_edm_typeJSON);

cJSON *i_edm_type_convertToJSON(i_edm_type_t *i_edm_type);

#endif /* _i_edm_type_H_ */

