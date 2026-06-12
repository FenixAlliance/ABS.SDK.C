#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_method_update_dto.h"


char* shipping_method_update_dto_shipping_class_calculation_type_ToString(shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_class_calculation_type) {
    char* shipping_class_calculation_typeArray[] =  { "NULL", "PerClass", "PerOrder" };
    return shipping_class_calculation_typeArray[shipping_class_calculation_type];
}

shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_method_update_dto_shipping_class_calculation_type_FromString(char* shipping_class_calculation_type){
    int stringToReturn = 0;
    char *shipping_class_calculation_typeArray[] =  { "NULL", "PerClass", "PerOrder" };
    size_t sizeofArray = sizeof(shipping_class_calculation_typeArray) / sizeof(shipping_class_calculation_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(shipping_class_calculation_type, shipping_class_calculation_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

shipping_method_update_dto_t *shipping_method_update_dto_create(
    char *name,
    char *description,
    double cost,
    int taxable,
    int tax_included,
    char *currency_id,
    shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_class_calculation_type
    ) {
    shipping_method_update_dto_t *shipping_method_update_dto_local_var = malloc(sizeof(shipping_method_update_dto_t));
    if (!shipping_method_update_dto_local_var) {
        return NULL;
    }
    shipping_method_update_dto_local_var->name = name;
    shipping_method_update_dto_local_var->description = description;
    shipping_method_update_dto_local_var->cost = cost;
    shipping_method_update_dto_local_var->taxable = taxable;
    shipping_method_update_dto_local_var->tax_included = tax_included;
    shipping_method_update_dto_local_var->currency_id = currency_id;
    shipping_method_update_dto_local_var->shipping_class_calculation_type = shipping_class_calculation_type;

    return shipping_method_update_dto_local_var;
}


void shipping_method_update_dto_free(shipping_method_update_dto_t *shipping_method_update_dto) {
    if(NULL == shipping_method_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_method_update_dto->name) {
        free(shipping_method_update_dto->name);
        shipping_method_update_dto->name = NULL;
    }
    if (shipping_method_update_dto->description) {
        free(shipping_method_update_dto->description);
        shipping_method_update_dto->description = NULL;
    }
    if (shipping_method_update_dto->currency_id) {
        free(shipping_method_update_dto->currency_id);
        shipping_method_update_dto->currency_id = NULL;
    }
    free(shipping_method_update_dto);
}

cJSON *shipping_method_update_dto_convertToJSON(shipping_method_update_dto_t *shipping_method_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_method_update_dto->name
    if(shipping_method_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_method_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_method_update_dto->description
    if(shipping_method_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", shipping_method_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // shipping_method_update_dto->cost
    if(shipping_method_update_dto->cost) {
    if(cJSON_AddNumberToObject(item, "cost", shipping_method_update_dto->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipping_method_update_dto->taxable
    if(shipping_method_update_dto->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", shipping_method_update_dto->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_method_update_dto->tax_included
    if(shipping_method_update_dto->tax_included) {
    if(cJSON_AddBoolToObject(item, "taxIncluded", shipping_method_update_dto->tax_included) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_method_update_dto->currency_id
    if(shipping_method_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", shipping_method_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_method_update_dto->shipping_class_calculation_type
    if(shipping_method_update_dto->shipping_class_calculation_type != shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "shippingClassCalculationType", shipping_class_calculation_typeshipping_method_update_dto_ToString(shipping_method_update_dto->shipping_class_calculation_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

shipping_method_update_dto_t *shipping_method_update_dto_parseFromJSON(cJSON *shipping_method_update_dtoJSON){

    shipping_method_update_dto_t *shipping_method_update_dto_local_var = NULL;

    // shipping_method_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_method_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // shipping_method_update_dto->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "cost");
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    }

    // shipping_method_update_dto->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // shipping_method_update_dto->tax_included
    cJSON *tax_included = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "taxIncluded");
    if (tax_included) { 
    if(!cJSON_IsBool(tax_included))
    {
    goto end; //Bool
    }
    }

    // shipping_method_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // shipping_method_update_dto->shipping_class_calculation_type
    cJSON *shipping_class_calculation_type = cJSON_GetObjectItemCaseSensitive(shipping_method_update_dtoJSON, "shippingClassCalculationType");
    shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_class_calculation_typeVariable;
    if (shipping_class_calculation_type) { 
    if(!cJSON_IsString(shipping_class_calculation_type))
    {
    goto end; //Enum
    }
    shipping_class_calculation_typeVariable = shipping_method_update_dto_shipping_class_calculation_type_FromString(shipping_class_calculation_type->valuestring);
    }


    shipping_method_update_dto_local_var = shipping_method_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        cost ? cost->valuedouble : 0,
        taxable ? taxable->valueint : 0,
        tax_included ? tax_included->valueint : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        shipping_class_calculation_type ? shipping_class_calculation_typeVariable : shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_NULL
        );

    return shipping_method_update_dto_local_var;
end:
    return NULL;

}
