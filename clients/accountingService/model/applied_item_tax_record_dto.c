#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "applied_item_tax_record_dto.h"



applied_item_tax_record_dto_t *applied_item_tax_record_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *tax_policy_id,
    char *invoice_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd,
    char *billing_item_record_id
    ) {
    applied_item_tax_record_dto_t *applied_item_tax_record_dto_local_var = malloc(sizeof(applied_item_tax_record_dto_t));
    if (!applied_item_tax_record_dto_local_var) {
        return NULL;
    }
    applied_item_tax_record_dto_local_var->id = id;
    applied_item_tax_record_dto_local_var->timestamp = timestamp;
    applied_item_tax_record_dto_local_var->tenant_id = tenant_id;
    applied_item_tax_record_dto_local_var->enrollment_id = enrollment_id;
    applied_item_tax_record_dto_local_var->tax_policy_id = tax_policy_id;
    applied_item_tax_record_dto_local_var->invoice_id = invoice_id;
    applied_item_tax_record_dto_local_var->item_id = item_id;
    applied_item_tax_record_dto_local_var->tax_amount_in_usd = tax_amount_in_usd;
    applied_item_tax_record_dto_local_var->tax_base_amount_in_usd = tax_base_amount_in_usd;
    applied_item_tax_record_dto_local_var->billing_item_record_id = billing_item_record_id;

    return applied_item_tax_record_dto_local_var;
}


void applied_item_tax_record_dto_free(applied_item_tax_record_dto_t *applied_item_tax_record_dto) {
    if(NULL == applied_item_tax_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (applied_item_tax_record_dto->id) {
        free(applied_item_tax_record_dto->id);
        applied_item_tax_record_dto->id = NULL;
    }
    if (applied_item_tax_record_dto->timestamp) {
        free(applied_item_tax_record_dto->timestamp);
        applied_item_tax_record_dto->timestamp = NULL;
    }
    if (applied_item_tax_record_dto->tenant_id) {
        free(applied_item_tax_record_dto->tenant_id);
        applied_item_tax_record_dto->tenant_id = NULL;
    }
    if (applied_item_tax_record_dto->enrollment_id) {
        free(applied_item_tax_record_dto->enrollment_id);
        applied_item_tax_record_dto->enrollment_id = NULL;
    }
    if (applied_item_tax_record_dto->tax_policy_id) {
        free(applied_item_tax_record_dto->tax_policy_id);
        applied_item_tax_record_dto->tax_policy_id = NULL;
    }
    if (applied_item_tax_record_dto->invoice_id) {
        free(applied_item_tax_record_dto->invoice_id);
        applied_item_tax_record_dto->invoice_id = NULL;
    }
    if (applied_item_tax_record_dto->item_id) {
        free(applied_item_tax_record_dto->item_id);
        applied_item_tax_record_dto->item_id = NULL;
    }
    if (applied_item_tax_record_dto->billing_item_record_id) {
        free(applied_item_tax_record_dto->billing_item_record_id);
        applied_item_tax_record_dto->billing_item_record_id = NULL;
    }
    free(applied_item_tax_record_dto);
}

cJSON *applied_item_tax_record_dto_convertToJSON(applied_item_tax_record_dto_t *applied_item_tax_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // applied_item_tax_record_dto->id
    if(applied_item_tax_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", applied_item_tax_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto->timestamp
    if(applied_item_tax_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", applied_item_tax_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // applied_item_tax_record_dto->tenant_id
    if(applied_item_tax_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", applied_item_tax_record_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto->enrollment_id
    if(applied_item_tax_record_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", applied_item_tax_record_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto->tax_policy_id
    if(applied_item_tax_record_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", applied_item_tax_record_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto->invoice_id
    if(applied_item_tax_record_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", applied_item_tax_record_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto->item_id
    if(applied_item_tax_record_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", applied_item_tax_record_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto->tax_amount_in_usd
    if(applied_item_tax_record_dto->tax_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxAmountInUSD", applied_item_tax_record_dto->tax_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_item_tax_record_dto->tax_base_amount_in_usd
    if(applied_item_tax_record_dto->tax_base_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxBaseAmountInUSD", applied_item_tax_record_dto->tax_base_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_item_tax_record_dto->billing_item_record_id
    if(applied_item_tax_record_dto->billing_item_record_id) {
    if(cJSON_AddStringToObject(item, "billingItemRecordId", applied_item_tax_record_dto->billing_item_record_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

applied_item_tax_record_dto_t *applied_item_tax_record_dto_parseFromJSON(cJSON *applied_item_tax_record_dtoJSON){

    applied_item_tax_record_dto_t *applied_item_tax_record_dto_local_var = NULL;

    // applied_item_tax_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // applied_item_tax_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto->tax_amount_in_usd
    cJSON *tax_amount_in_usd = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "taxAmountInUSD");
    if (tax_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // applied_item_tax_record_dto->tax_base_amount_in_usd
    cJSON *tax_base_amount_in_usd = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "taxBaseAmountInUSD");
    if (tax_base_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_base_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // applied_item_tax_record_dto->billing_item_record_id
    cJSON *billing_item_record_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dtoJSON, "billingItemRecordId");
    if (billing_item_record_id) { 
    if(!cJSON_IsString(billing_item_record_id) && !cJSON_IsNull(billing_item_record_id))
    {
    goto end; //String
    }
    }


    applied_item_tax_record_dto_local_var = applied_item_tax_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        tax_amount_in_usd ? tax_amount_in_usd->valuedouble : 0,
        tax_base_amount_in_usd ? tax_base_amount_in_usd->valuedouble : 0,
        billing_item_record_id && !cJSON_IsNull(billing_item_record_id) ? strdup(billing_item_record_id->valuestring) : NULL
        );

    return applied_item_tax_record_dto_local_var;
end:
    return NULL;

}
