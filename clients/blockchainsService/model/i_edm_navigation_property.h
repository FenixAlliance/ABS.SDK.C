/*
 * i_edm_navigation_property.h
 *
 * 
 */

#ifndef _i_edm_navigation_property_H_
#define _i_edm_navigation_property_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_navigation_property_t i_edm_navigation_property_t;

#include "i_edm_referential_constraint.h"
#include "i_edm_structured_type.h"
#include "i_edm_type_reference.h"

// Enum PROPERTYKIND for i_edm_navigation_property

typedef enum  { blockchainsservice_i_edm_navigation_property_PROPERTYKIND_NULL = 0, blockchainsservice_i_edm_navigation_property_PROPERTYKIND_None, blockchainsservice_i_edm_navigation_property_PROPERTYKIND_Structural, blockchainsservice_i_edm_navigation_property_PROPERTYKIND_Navigation } blockchainsservice_i_edm_navigation_property_PROPERTYKIND_e;

char* i_edm_navigation_property_property_kind_ToString(blockchainsservice_i_edm_navigation_property_PROPERTYKIND_e property_kind);

blockchainsservice_i_edm_navigation_property_PROPERTYKIND_e i_edm_navigation_property_property_kind_FromString(char* property_kind);

// Enum ONDELETE for i_edm_navigation_property

typedef enum  { blockchainsservice_i_edm_navigation_property_ONDELETE_NULL = 0, blockchainsservice_i_edm_navigation_property_ONDELETE_None, blockchainsservice_i_edm_navigation_property_ONDELETE_Cascade } blockchainsservice_i_edm_navigation_property_ONDELETE_e;

char* i_edm_navigation_property_on_delete_ToString(blockchainsservice_i_edm_navigation_property_ONDELETE_e on_delete);

blockchainsservice_i_edm_navigation_property_ONDELETE_e i_edm_navigation_property_on_delete_FromString(char* on_delete);



typedef struct i_edm_navigation_property_t {
    char *name; // string
    blockchainsservice_i_edm_navigation_property_PROPERTYKIND_e property_kind; //enum
    struct i_edm_type_reference_t *type; //model
    struct i_edm_structured_type_t *declaring_type; //model
    struct i_edm_navigation_property_t *partner; //model
    blockchainsservice_i_edm_navigation_property_ONDELETE_e on_delete; //enum
    int contains_target; //boolean
    struct i_edm_referential_constraint_t *referential_constraint; //model

} i_edm_navigation_property_t;

i_edm_navigation_property_t *i_edm_navigation_property_create(
    char *name,
    blockchainsservice_i_edm_navigation_property_PROPERTYKIND_e property_kind,
    i_edm_type_reference_t *type,
    i_edm_structured_type_t *declaring_type,
    i_edm_navigation_property_t *partner,
    blockchainsservice_i_edm_navigation_property_ONDELETE_e on_delete,
    int contains_target,
    i_edm_referential_constraint_t *referential_constraint
);

void i_edm_navigation_property_free(i_edm_navigation_property_t *i_edm_navigation_property);

i_edm_navigation_property_t *i_edm_navigation_property_parseFromJSON(cJSON *i_edm_navigation_propertyJSON);

cJSON *i_edm_navigation_property_convertToJSON(i_edm_navigation_property_t *i_edm_navigation_property);

#endif /* _i_edm_navigation_property_H_ */

