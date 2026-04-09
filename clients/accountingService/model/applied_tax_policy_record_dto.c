#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "applied_tax_policy_record_dto.h"



applied_tax_policy_record_dto_t *applied_tax_policy_record_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *tax_policy_id,
    char *invoice_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd
    ) {
    applied_tax_policy_record_dto_t *applied_tax_policy_record_dto_local_var = malloc(sizeof(applied_tax_policy_record_dto_t));
    if (!applied_tax_policy_record_dto_local_var) {
        return NULL;
    }
    applied_tax_policy_record_dto_local_var->id = id;
    applied_tax_policy_record_dto_local_var->timestamp = timestamp;
    applied_tax_policy_record_dto_local_var->tenant_id = tenant_id;
    applied_tax_policy_record_dto_local_var->enrollment_id = enrollment_id;
    applied_tax_policy_record_dto_local_var->tax_policy_id = tax_policy_id;
    applied_tax_policy_record_dto_local_var->invoice_id = invoice_id;
    applied_tax_policy_record_dto_local_var->item_id = item_id;
    applied_tax_policy_record_dto_local_var->tax_amount_in_usd = tax_amount_in_usd;
    applied_tax_policy_record_dto_local_var->tax_base_amount_in_usd = tax_base_amount_in_usd;

    return applied_tax_policy_record_dto_local_var;
}


void applied_tax_policy_record_dto_free(applied_tax_policy_record_dto_t *applied_tax_policy_record_dto) {
    if(NULL == applied_tax_policy_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (applied_tax_policy_record_dto->id) {
        free(applied_tax_policy_record_dto->id);
        applied_tax_policy_record_dto->id = NULL;
    }
    if (applied_tax_policy_record_dto->timestamp) {
        free(applied_tax_policy_record_dto->timestamp);
        applied_tax_policy_record_dto->timestamp = NULL;
    }
    if (applied_tax_policy_record_dto->tenant_id) {
        free(applied_tax_policy_record_dto->tenant_id);
        applied_tax_policy_record_dto->tenant_id = NULL;
    }
    if (applied_tax_policy_record_dto->enrollment_id) {
        free(applied_tax_policy_record_dto->enrollment_id);
        applied_tax_policy_record_dto->enrollment_id = NULL;
    }
    if (applied_tax_policy_record_dto->tax_policy_id) {
        free(applied_tax_policy_record_dto->tax_policy_id);
        applied_tax_policy_record_dto->tax_policy_id = NULL;
    }
    if (applied_tax_policy_record_dto->invoice_id) {
        free(applied_tax_policy_record_dto->invoice_id);
        applied_tax_policy_record_dto->invoice_id = NULL;
    }
    if (applied_tax_policy_record_dto->item_id) {
        free(applied_tax_policy_record_dto->item_id);
        applied_tax_policy_record_dto->item_id = NULL;
    }
    free(applied_tax_policy_record_dto);
}

cJSON *applied_tax_policy_record_dto_convertToJSON(applied_tax_policy_record_dto_t *applied_tax_policy_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // applied_tax_policy_record_dto->id
    if(applied_tax_policy_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", applied_tax_policy_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto->timestamp
    if(applied_tax_policy_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", applied_tax_policy_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // applied_tax_policy_record_dto->tenant_id
    if(applied_tax_policy_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", applied_tax_policy_record_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto->enrollment_id
    if(applied_tax_policy_record_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", applied_tax_policy_record_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto->tax_policy_id
    if(applied_tax_policy_record_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", applied_tax_policy_record_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto->invoice_id
    if(applied_tax_policy_record_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", applied_tax_policy_record_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto->item_id
    if(applied_tax_policy_record_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", applied_tax_policy_record_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto->tax_amount_in_usd
    if(applied_tax_policy_record_dto->tax_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxAmountInUSD", applied_tax_policy_record_dto->tax_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_tax_policy_record_dto->tax_base_amount_in_usd
    if(applied_tax_policy_record_dto->tax_base_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxBaseAmountInUSD", applied_tax_policy_record_dto->tax_base_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

applied_tax_policy_record_dto_t *applied_tax_policy_record_dto_parseFromJSON(cJSON *applied_tax_policy_record_dtoJSON){

    applied_tax_policy_record_dto_t *applied_tax_policy_record_dto_local_var = NULL;

    // applied_tax_policy_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // applied_tax_policy_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto->tax_amount_in_usd
    cJSON *tax_amount_in_usd = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "taxAmountInUSD");
    if (tax_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // applied_tax_policy_record_dto->tax_base_amount_in_usd
    cJSON *tax_base_amount_in_usd = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dtoJSON, "taxBaseAmountInUSD");
    if (tax_base_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_base_amount_in_usd))
    {
    goto end; //Numeric
    }
    }


    applied_tax_policy_record_dto_local_var = applied_tax_policy_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        tax_amount_in_usd ? tax_amount_in_usd->valuedouble : 0,
        tax_base_amount_in_usd ? tax_base_amount_in_usd->valuedouble : 0
        );

    return applied_tax_policy_record_dto_local_var;
end:
    return NULL;

}
