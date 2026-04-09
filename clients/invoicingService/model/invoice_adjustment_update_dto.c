#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_adjustment_update_dto.h"


char* invoice_adjustment_update_dto_type_ToString(invoicingservice_invoice_adjustment_update_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Discount", "Surcharge" };
    return typeArray[type];
}

invoicingservice_invoice_adjustment_update_dto_TYPE_e invoice_adjustment_update_dto_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Discount", "Surcharge" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

invoice_adjustment_update_dto_t *invoice_adjustment_update_dto_create(
    char *currency_id,
    char *description,
    double surcharge_percent,
    double surcharge_amount,
    double discount_percent,
    double discount_amount,
    double total_surcharge,
    double total_discount,
    invoicingservice_invoice_adjustment_update_dto_TYPE_e type
    ) {
    invoice_adjustment_update_dto_t *invoice_adjustment_update_dto_local_var = malloc(sizeof(invoice_adjustment_update_dto_t));
    if (!invoice_adjustment_update_dto_local_var) {
        return NULL;
    }
    invoice_adjustment_update_dto_local_var->currency_id = currency_id;
    invoice_adjustment_update_dto_local_var->description = description;
    invoice_adjustment_update_dto_local_var->surcharge_percent = surcharge_percent;
    invoice_adjustment_update_dto_local_var->surcharge_amount = surcharge_amount;
    invoice_adjustment_update_dto_local_var->discount_percent = discount_percent;
    invoice_adjustment_update_dto_local_var->discount_amount = discount_amount;
    invoice_adjustment_update_dto_local_var->total_surcharge = total_surcharge;
    invoice_adjustment_update_dto_local_var->total_discount = total_discount;
    invoice_adjustment_update_dto_local_var->type = type;

    return invoice_adjustment_update_dto_local_var;
}


void invoice_adjustment_update_dto_free(invoice_adjustment_update_dto_t *invoice_adjustment_update_dto) {
    if(NULL == invoice_adjustment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_adjustment_update_dto->currency_id) {
        free(invoice_adjustment_update_dto->currency_id);
        invoice_adjustment_update_dto->currency_id = NULL;
    }
    if (invoice_adjustment_update_dto->description) {
        free(invoice_adjustment_update_dto->description);
        invoice_adjustment_update_dto->description = NULL;
    }
    free(invoice_adjustment_update_dto);
}

cJSON *invoice_adjustment_update_dto_convertToJSON(invoice_adjustment_update_dto_t *invoice_adjustment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_adjustment_update_dto->currency_id
    if(invoice_adjustment_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", invoice_adjustment_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_update_dto->description
    if(invoice_adjustment_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", invoice_adjustment_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_update_dto->surcharge_percent
    if(invoice_adjustment_update_dto->surcharge_percent) {
    if(cJSON_AddNumberToObject(item, "surchargePercent", invoice_adjustment_update_dto->surcharge_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_update_dto->surcharge_amount
    if(invoice_adjustment_update_dto->surcharge_amount) {
    if(cJSON_AddNumberToObject(item, "surchargeAmount", invoice_adjustment_update_dto->surcharge_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_update_dto->discount_percent
    if(invoice_adjustment_update_dto->discount_percent) {
    if(cJSON_AddNumberToObject(item, "discountPercent", invoice_adjustment_update_dto->discount_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_update_dto->discount_amount
    if(invoice_adjustment_update_dto->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discountAmount", invoice_adjustment_update_dto->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_update_dto->total_surcharge
    if(invoice_adjustment_update_dto->total_surcharge) {
    if(cJSON_AddNumberToObject(item, "totalSurcharge", invoice_adjustment_update_dto->total_surcharge) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_update_dto->total_discount
    if(invoice_adjustment_update_dto->total_discount) {
    if(cJSON_AddNumberToObject(item, "totalDiscount", invoice_adjustment_update_dto->total_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_update_dto->type
    if(invoice_adjustment_update_dto->type != invoicingservice_invoice_adjustment_update_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typeinvoice_adjustment_update_dto_ToString(invoice_adjustment_update_dto->type)) == NULL)
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

invoice_adjustment_update_dto_t *invoice_adjustment_update_dto_parseFromJSON(cJSON *invoice_adjustment_update_dtoJSON){

    invoice_adjustment_update_dto_t *invoice_adjustment_update_dto_local_var = NULL;

    // invoice_adjustment_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_update_dto->surcharge_percent
    cJSON *surcharge_percent = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "surchargePercent");
    if (surcharge_percent) { 
    if(!cJSON_IsNumber(surcharge_percent))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_update_dto->surcharge_amount
    cJSON *surcharge_amount = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "surchargeAmount");
    if (surcharge_amount) { 
    if(!cJSON_IsNumber(surcharge_amount))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_update_dto->discount_percent
    cJSON *discount_percent = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "discountPercent");
    if (discount_percent) { 
    if(!cJSON_IsNumber(discount_percent))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_update_dto->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "discountAmount");
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_update_dto->total_surcharge
    cJSON *total_surcharge = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "totalSurcharge");
    if (total_surcharge) { 
    if(!cJSON_IsNumber(total_surcharge))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_update_dto->total_discount
    cJSON *total_discount = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "totalDiscount");
    if (total_discount) { 
    if(!cJSON_IsNumber(total_discount))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_update_dtoJSON, "type");
    invoicingservice_invoice_adjustment_update_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = invoice_adjustment_update_dto_type_FromString(type->valuestring);
    }


    invoice_adjustment_update_dto_local_var = invoice_adjustment_update_dto_create (
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        surcharge_percent ? surcharge_percent->valuedouble : 0,
        surcharge_amount ? surcharge_amount->valuedouble : 0,
        discount_percent ? discount_percent->valuedouble : 0,
        discount_amount ? discount_amount->valuedouble : 0,
        total_surcharge ? total_surcharge->valuedouble : 0,
        total_discount ? total_discount->valuedouble : 0,
        type ? typeVariable : invoicingservice_invoice_adjustment_update_dto_TYPE_NULL
        );

    return invoice_adjustment_update_dto_local_var;
end:
    return NULL;

}
