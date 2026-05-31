/*
 * i_edm_property.h
 *
 * 
 */

#ifndef _i_edm_property_H_
#define _i_edm_property_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_property_t i_edm_property_t;

#include "i_edm_structured_type.h"
#include "i_edm_type_reference.h"

// Enum PROPERTYKIND for i_edm_property

typedef enum  { contentservice_i_edm_property_PROPERTYKIND_NULL = 0, contentservice_i_edm_property_PROPERTYKIND_None, contentservice_i_edm_property_PROPERTYKIND_Structural, contentservice_i_edm_property_PROPERTYKIND_Navigation } contentservice_i_edm_property_PROPERTYKIND_e;

char* i_edm_property_property_kind_ToString(contentservice_i_edm_property_PROPERTYKIND_e property_kind);

contentservice_i_edm_property_PROPERTYKIND_e i_edm_property_property_kind_FromString(char* property_kind);



typedef struct i_edm_property_t {
    char *name; // string
    contentservice_i_edm_property_PROPERTYKIND_e property_kind; //enum
    struct i_edm_type_reference_t *type; //model
    struct i_edm_structured_type_t *declaring_type; //model

} i_edm_property_t;

i_edm_property_t *i_edm_property_create(
    char *name,
    contentservice_i_edm_property_PROPERTYKIND_e property_kind,
    i_edm_type_reference_t *type,
    i_edm_structured_type_t *declaring_type
);

void i_edm_property_free(i_edm_property_t *i_edm_property);

i_edm_property_t *i_edm_property_parseFromJSON(cJSON *i_edm_propertyJSON);

cJSON *i_edm_property_convertToJSON(i_edm_property_t *i_edm_property);

#endif /* _i_edm_property_H_ */

