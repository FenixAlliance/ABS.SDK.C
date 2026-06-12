#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_property.h"


char* i_edm_property_property_kind_ToString(blockchainsservice_i_edm_property_PROPERTYKIND_e property_kind) {
    char* property_kindArray[] =  { "NULL", "None", "Structural", "Navigation" };
    return property_kindArray[property_kind];
}

blockchainsservice_i_edm_property_PROPERTYKIND_e i_edm_property_property_kind_FromString(char* property_kind){
    int stringToReturn = 0;
    char *property_kindArray[] =  { "NULL", "None", "Structural", "Navigation" };
    size_t sizeofArray = sizeof(property_kindArray) / sizeof(property_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(property_kind, property_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

i_edm_property_t *i_edm_property_create(
    char *name,
    blockchainsservice_i_edm_property_PROPERTYKIND_e property_kind,
    i_edm_type_reference_t *type,
    i_edm_structured_type_t *declaring_type
    ) {
    i_edm_property_t *i_edm_property_local_var = malloc(sizeof(i_edm_property_t));
    if (!i_edm_property_local_var) {
        return NULL;
    }
    i_edm_property_local_var->name = name;
    i_edm_property_local_var->property_kind = property_kind;
    i_edm_property_local_var->type = type;
    i_edm_property_local_var->declaring_type = declaring_type;

    return i_edm_property_local_var;
}


void i_edm_property_free(i_edm_property_t *i_edm_property) {
    if(NULL == i_edm_property){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_property->name) {
        free(i_edm_property->name);
        i_edm_property->name = NULL;
    }
    if (i_edm_property->type) {
        i_edm_type_reference_free(i_edm_property->type);
        i_edm_property->type = NULL;
    }
    if (i_edm_property->declaring_type) {
        i_edm_structured_type_free(i_edm_property->declaring_type);
        i_edm_property->declaring_type = NULL;
    }
    free(i_edm_property);
}

cJSON *i_edm_property_convertToJSON(i_edm_property_t *i_edm_property) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_property->name
    if(i_edm_property->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_property->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_property->property_kind
    if(i_edm_property->property_kind != blockchainsservice_i_edm_property_PROPERTYKIND_NULL) {
    if(cJSON_AddStringToObject(item, "propertyKind", property_kindi_edm_property_ToString(i_edm_property->property_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_property->type
    if(i_edm_property->type) {
    cJSON *type_local_JSON = i_edm_type_reference_convertToJSON(i_edm_property->type);
    if(type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "type", type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_property->declaring_type
    if(i_edm_property->declaring_type) {
    cJSON *declaring_type_local_JSON = i_edm_structured_type_convertToJSON(i_edm_property->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_property_t *i_edm_property_parseFromJSON(cJSON *i_edm_propertyJSON){

    i_edm_property_t *i_edm_property_local_var = NULL;

    // define the local variable for i_edm_property->type
    i_edm_type_reference_t *type_local_nonprim = NULL;

    // define the local variable for i_edm_property->declaring_type
    i_edm_structured_type_t *declaring_type_local_nonprim = NULL;

    // i_edm_property->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_propertyJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_property->property_kind
    cJSON *property_kind = cJSON_GetObjectItemCaseSensitive(i_edm_propertyJSON, "propertyKind");
    blockchainsservice_i_edm_property_PROPERTYKIND_e property_kindVariable;
    if (property_kind) { 
    if(!cJSON_IsString(property_kind))
    {
    goto end; //Enum
    }
    property_kindVariable = i_edm_property_property_kind_FromString(property_kind->valuestring);
    }

    // i_edm_property->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(i_edm_propertyJSON, "type");
    if (type) { 
    type_local_nonprim = i_edm_type_reference_parseFromJSON(type); //nonprimitive
    }

    // i_edm_property->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(i_edm_propertyJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = i_edm_structured_type_parseFromJSON(declaring_type); //nonprimitive
    }


    i_edm_property_local_var = i_edm_property_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        property_kind ? property_kindVariable : blockchainsservice_i_edm_property_PROPERTYKIND_NULL,
        type ? type_local_nonprim : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL
        );

    return i_edm_property_local_var;
end:
    if (type_local_nonprim) {
        i_edm_type_reference_free(type_local_nonprim);
        type_local_nonprim = NULL;
    }
    if (declaring_type_local_nonprim) {
        i_edm_structured_type_free(declaring_type_local_nonprim);
        declaring_type_local_nonprim = NULL;
    }
    return NULL;

}
