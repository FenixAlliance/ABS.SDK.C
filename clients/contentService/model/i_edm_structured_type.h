/*
 * i_edm_structured_type.h
 *
 * 
 */

#ifndef _i_edm_structured_type_H_
#define _i_edm_structured_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_structured_type_t i_edm_structured_type_t;

#include "i_edm_property.h"

// Enum TYPEKIND for i_edm_structured_type

typedef enum  { contentservice_i_edm_structured_type_TYPEKIND_NULL = 0, contentservice_i_edm_structured_type_TYPEKIND_None, contentservice_i_edm_structured_type_TYPEKIND_Primitive, contentservice_i_edm_structured_type_TYPEKIND_Entity, contentservice_i_edm_structured_type_TYPEKIND_Complex, contentservice_i_edm_structured_type_TYPEKIND_Collection, contentservice_i_edm_structured_type_TYPEKIND_EntityReference, contentservice_i_edm_structured_type_TYPEKIND__Enum, contentservice_i_edm_structured_type_TYPEKIND_TypeDefinition, contentservice_i_edm_structured_type_TYPEKIND_Untyped, contentservice_i_edm_structured_type_TYPEKIND_Path } contentservice_i_edm_structured_type_TYPEKIND_e;

char* i_edm_structured_type_type_kind_ToString(contentservice_i_edm_structured_type_TYPEKIND_e type_kind);

contentservice_i_edm_structured_type_TYPEKIND_e i_edm_structured_type_type_kind_FromString(char* type_kind);



typedef struct i_edm_structured_type_t {
    contentservice_i_edm_structured_type_TYPEKIND_e type_kind; //enum
    int is_abstract; //boolean
    int is_open; //boolean
    struct i_edm_structured_type_t *base_type; //model
    list_t *declared_properties; //nonprimitive container

} i_edm_structured_type_t;

i_edm_structured_type_t *i_edm_structured_type_create(
    contentservice_i_edm_structured_type_TYPEKIND_e type_kind,
    int is_abstract,
    int is_open,
    i_edm_structured_type_t *base_type,
    list_t *declared_properties
);

void i_edm_structured_type_free(i_edm_structured_type_t *i_edm_structured_type);

i_edm_structured_type_t *i_edm_structured_type_parseFromJSON(cJSON *i_edm_structured_typeJSON);

cJSON *i_edm_structured_type_convertToJSON(i_edm_structured_type_t *i_edm_structured_type);

#endif /* _i_edm_structured_type_H_ */

