/*
 * i_edm_entity_type.h
 *
 * 
 */

#ifndef _i_edm_entity_type_H_
#define _i_edm_entity_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_entity_type_t i_edm_entity_type_t;

#include "i_edm_property.h"
#include "i_edm_structural_property.h"
#include "i_edm_structured_type.h"

// Enum TYPEKIND for i_edm_entity_type

typedef enum  { blockchainsservice_i_edm_entity_type_TYPEKIND_NULL = 0, blockchainsservice_i_edm_entity_type_TYPEKIND_None, blockchainsservice_i_edm_entity_type_TYPEKIND_Primitive, blockchainsservice_i_edm_entity_type_TYPEKIND_Entity, blockchainsservice_i_edm_entity_type_TYPEKIND_Complex, blockchainsservice_i_edm_entity_type_TYPEKIND_Collection, blockchainsservice_i_edm_entity_type_TYPEKIND_EntityReference, blockchainsservice_i_edm_entity_type_TYPEKIND__Enum, blockchainsservice_i_edm_entity_type_TYPEKIND_TypeDefinition, blockchainsservice_i_edm_entity_type_TYPEKIND_Untyped, blockchainsservice_i_edm_entity_type_TYPEKIND_Path } blockchainsservice_i_edm_entity_type_TYPEKIND_e;

char* i_edm_entity_type_type_kind_ToString(blockchainsservice_i_edm_entity_type_TYPEKIND_e type_kind);

blockchainsservice_i_edm_entity_type_TYPEKIND_e i_edm_entity_type_type_kind_FromString(char* type_kind);

// Enum SCHEMAELEMENTKIND for i_edm_entity_type

typedef enum  { blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_NULL = 0, blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_None, blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_TypeDefinition, blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_Term, blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_Action, blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_EntityContainer, blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_Function } blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_e;

char* i_edm_entity_type_schema_element_kind_ToString(blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_e schema_element_kind);

blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_e i_edm_entity_type_schema_element_kind_FromString(char* schema_element_kind);



typedef struct i_edm_entity_type_t {
    blockchainsservice_i_edm_entity_type_TYPEKIND_e type_kind; //enum
    char *name; // string
    int is_abstract; //boolean
    int is_open; //boolean
    struct i_edm_structured_type_t *base_type; //model
    list_t *declared_properties; //nonprimitive container
    blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_e schema_element_kind; //enum
    char *_namespace; // string
    list_t *declared_key; //nonprimitive container
    int has_stream; //boolean

} i_edm_entity_type_t;

i_edm_entity_type_t *i_edm_entity_type_create(
    blockchainsservice_i_edm_entity_type_TYPEKIND_e type_kind,
    char *name,
    int is_abstract,
    int is_open,
    i_edm_structured_type_t *base_type,
    list_t *declared_properties,
    blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace,
    list_t *declared_key,
    int has_stream
);

void i_edm_entity_type_free(i_edm_entity_type_t *i_edm_entity_type);

i_edm_entity_type_t *i_edm_entity_type_parseFromJSON(cJSON *i_edm_entity_typeJSON);

cJSON *i_edm_entity_type_convertToJSON(i_edm_entity_type_t *i_edm_entity_type);

#endif /* _i_edm_entity_type_H_ */

