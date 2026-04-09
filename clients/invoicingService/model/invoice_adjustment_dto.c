#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_adjustment_dto.h"


char* invoice_adjustment_dto_type_ToString(invoicingservice_invoice_adjustment_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Discount", "Surcharge" };
    return typeArray[type];
}

invoicingservice_invoice_adjustment_dto_TYPE_e invoice_adjustment_dto_type_FromString(char* type){
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

invoice_adjustment_dto_t *invoice_adjustment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *invoice_id,
    char *currency_id,
    char *enrollment_id,
    char *description,
    double surcharge_percent,
    double surcharge_amount,
    double discount_percent,
    double discount_amount,
    double total_surcharge,
    double total_discount,
    invoicingservice_invoice_adjustment_dto_TYPE_e type
    ) {
    invoice_adjustment_dto_t *invoice_adjustment_dto_local_var = malloc(sizeof(invoice_adjustment_dto_t));
    if (!invoice_adjustment_dto_local_var) {
        return NULL;
    }
    invoice_adjustment_dto_local_var->id = id;
    invoice_adjustment_dto_local_var->timestamp = timestamp;
    invoice_adjustment_dto_local_var->tenant_id = tenant_id;
    invoice_adjustment_dto_local_var->invoice_id = invoice_id;
    invoice_adjustment_dto_local_var->currency_id = currency_id;
    invoice_adjustment_dto_local_var->enrollment_id = enrollment_id;
    invoice_adjustment_dto_local_var->description = description;
    invoice_adjustment_dto_local_var->surcharge_percent = surcharge_percent;
    invoice_adjustment_dto_local_var->surcharge_amount = surcharge_amount;
    invoice_adjustment_dto_local_var->discount_percent = discount_percent;
    invoice_adjustment_dto_local_var->discount_amount = discount_amount;
    invoice_adjustment_dto_local_var->total_surcharge = total_surcharge;
    invoice_adjustment_dto_local_var->total_discount = total_discount;
    invoice_adjustment_dto_local_var->type = type;

    return invoice_adjustment_dto_local_var;
}


void invoice_adjustment_dto_free(invoice_adjustment_dto_t *invoice_adjustment_dto) {
    if(NULL == invoice_adjustment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_adjustment_dto->id) {
        free(invoice_adjustment_dto->id);
        invoice_adjustment_dto->id = NULL;
    }
    if (invoice_adjustment_dto->timestamp) {
        free(invoice_adjustment_dto->timestamp);
        invoice_adjustment_dto->timestamp = NULL;
    }
    if (invoice_adjustment_dto->tenant_id) {
        free(invoice_adjustment_dto->tenant_id);
        invoice_adjustment_dto->tenant_id = NULL;
    }
    if (invoice_adjustment_dto->invoice_id) {
        free(invoice_adjustment_dto->invoice_id);
        invoice_adjustment_dto->invoice_id = NULL;
    }
    if (invoice_adjustment_dto->currency_id) {
        free(invoice_adjustment_dto->currency_id);
        invoice_adjustment_dto->currency_id = NULL;
    }
    if (invoice_adjustment_dto->enrollment_id) {
        free(invoice_adjustment_dto->enrollment_id);
        invoice_adjustment_dto->enrollment_id = NULL;
    }
    if (invoice_adjustment_dto->description) {
        free(invoice_adjustment_dto->description);
        invoice_adjustment_dto->description = NULL;
    }
    free(invoice_adjustment_dto);
}

cJSON *invoice_adjustment_dto_convertToJSON(invoice_adjustment_dto_t *invoice_adjustment_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_adjustment_dto->id
    if(invoice_adjustment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_adjustment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto->timestamp
    if(invoice_adjustment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_adjustment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_adjustment_dto->tenant_id
    if(invoice_adjustment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", invoice_adjustment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto->invoice_id
    if(invoice_adjustment_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", invoice_adjustment_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto->currency_id
    if(invoice_adjustment_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", invoice_adjustment_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto->enrollment_id
    if(invoice_adjustment_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", invoice_adjustment_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto->description
    if(invoice_adjustment_dto->description) {
    if(cJSON_AddStringToObject(item, "description", invoice_adjustment_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto->surcharge_percent
    if(invoice_adjustment_dto->surcharge_percent) {
    if(cJSON_AddNumberToObject(item, "surchargePercent", invoice_adjustment_dto->surcharge_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto->surcharge_amount
    if(invoice_adjustment_dto->surcharge_amount) {
    if(cJSON_AddNumberToObject(item, "surchargeAmount", invoice_adjustment_dto->surcharge_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto->discount_percent
    if(invoice_adjustment_dto->discount_percent) {
    if(cJSON_AddNumberToObject(item, "discountPercent", invoice_adjustment_dto->discount_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto->discount_amount
    if(invoice_adjustment_dto->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discountAmount", invoice_adjustment_dto->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto->total_surcharge
    if(invoice_adjustment_dto->total_surcharge) {
    if(cJSON_AddNumberToObject(item, "totalSurcharge", invoice_adjustment_dto->total_surcharge) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto->total_discount
    if(invoice_adjustment_dto->total_discount) {
    if(cJSON_AddNumberToObject(item, "totalDiscount", invoice_adjustment_dto->total_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto->type
    if(invoice_adjustment_dto->type != invoicingservice_invoice_adjustment_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typeinvoice_adjustment_dto_ToString(invoice_adjustment_dto->type)) == NULL)
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

invoice_adjustment_dto_t *invoice_adjustment_dto_parseFromJSON(cJSON *invoice_adjustment_dtoJSON){

    invoice_adjustment_dto_t *invoice_adjustment_dto_local_var = NULL;

    // invoice_adjustment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_adjustment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto->surcharge_percent
    cJSON *surcharge_percent = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "surchargePercent");
    if (surcharge_percent) { 
    if(!cJSON_IsNumber(surcharge_percent))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto->surcharge_amount
    cJSON *surcharge_amount = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "surchargeAmount");
    if (surcharge_amount) { 
    if(!cJSON_IsNumber(surcharge_amount))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto->discount_percent
    cJSON *discount_percent = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "discountPercent");
    if (discount_percent) { 
    if(!cJSON_IsNumber(discount_percent))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "discountAmount");
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto->total_surcharge
    cJSON *total_surcharge = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "totalSurcharge");
    if (total_surcharge) { 
    if(!cJSON_IsNumber(total_surcharge))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto->total_discount
    cJSON *total_discount = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "totalDiscount");
    if (total_discount) { 
    if(!cJSON_IsNumber(total_discount))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dtoJSON, "type");
    invoicingservice_invoice_adjustment_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = invoice_adjustment_dto_type_FromString(type->valuestring);
    }


    invoice_adjustment_dto_local_var = invoice_adjustment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        surcharge_percent ? surcharge_percent->valuedouble : 0,
        surcharge_amount ? surcharge_amount->valuedouble : 0,
        discount_percent ? discount_percent->valuedouble : 0,
        discount_amount ? discount_amount->valuedouble : 0,
        total_surcharge ? total_surcharge->valuedouble : 0,
        total_discount ? total_discount->valuedouble : 0,
        type ? typeVariable : invoicingservice_invoice_adjustment_dto_TYPE_NULL
        );

    return invoice_adjustment_dto_local_var;
end:
    return NULL;

}
