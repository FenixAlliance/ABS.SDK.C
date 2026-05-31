#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "applied_item_tax_record_update_dto.h"



applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto_create(
    char *tax_policy_id,
    char *invoice_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd,
    char *billing_item_record_id
    ) {
    applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto_local_var = malloc(sizeof(applied_item_tax_record_update_dto_t));
    if (!applied_item_tax_record_update_dto_local_var) {
        return NULL;
    }
    applied_item_tax_record_update_dto_local_var->tax_policy_id = tax_policy_id;
    applied_item_tax_record_update_dto_local_var->invoice_id = invoice_id;
    applied_item_tax_record_update_dto_local_var->item_id = item_id;
    applied_item_tax_record_update_dto_local_var->tax_amount_in_usd = tax_amount_in_usd;
    applied_item_tax_record_update_dto_local_var->tax_base_amount_in_usd = tax_base_amount_in_usd;
    applied_item_tax_record_update_dto_local_var->billing_item_record_id = billing_item_record_id;

    return applied_item_tax_record_update_dto_local_var;
}


void applied_item_tax_record_update_dto_free(applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto) {
    if(NULL == applied_item_tax_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (applied_item_tax_record_update_dto->tax_policy_id) {
        free(applied_item_tax_record_update_dto->tax_policy_id);
        applied_item_tax_record_update_dto->tax_policy_id = NULL;
    }
    if (applied_item_tax_record_update_dto->invoice_id) {
        free(applied_item_tax_record_update_dto->invoice_id);
        applied_item_tax_record_update_dto->invoice_id = NULL;
    }
    if (applied_item_tax_record_update_dto->item_id) {
        free(applied_item_tax_record_update_dto->item_id);
        applied_item_tax_record_update_dto->item_id = NULL;
    }
    if (applied_item_tax_record_update_dto->billing_item_record_id) {
        free(applied_item_tax_record_update_dto->billing_item_record_id);
        applied_item_tax_record_update_dto->billing_item_record_id = NULL;
    }
    free(applied_item_tax_record_update_dto);
}

cJSON *applied_item_tax_record_update_dto_convertToJSON(applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // applied_item_tax_record_update_dto->tax_policy_id
    if(applied_item_tax_record_update_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", applied_item_tax_record_update_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_update_dto->invoice_id
    if(applied_item_tax_record_update_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", applied_item_tax_record_update_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_update_dto->item_id
    if(applied_item_tax_record_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", applied_item_tax_record_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_update_dto->tax_amount_in_usd
    if(applied_item_tax_record_update_dto->tax_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxAmountInUSD", applied_item_tax_record_update_dto->tax_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_item_tax_record_update_dto->tax_base_amount_in_usd
    if(applied_item_tax_record_update_dto->tax_base_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxBaseAmountInUSD", applied_item_tax_record_update_dto->tax_base_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_item_tax_record_update_dto->billing_item_record_id
    if(applied_item_tax_record_update_dto->billing_item_record_id) {
    if(cJSON_AddStringToObject(item, "billingItemRecordId", applied_item_tax_record_update_dto->billing_item_record_id) == NULL) {
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

applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto_parseFromJSON(cJSON *applied_item_tax_record_update_dtoJSON){

    applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto_local_var = NULL;

    // applied_item_tax_record_update_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_update_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_update_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_update_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_update_dto->tax_amount_in_usd
    cJSON *tax_amount_in_usd = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_update_dtoJSON, "taxAmountInUSD");
    if (tax_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // applied_item_tax_record_update_dto->tax_base_amount_in_usd
    cJSON *tax_base_amount_in_usd = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_update_dtoJSON, "taxBaseAmountInUSD");
    if (tax_base_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_base_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // applied_item_tax_record_update_dto->billing_item_record_id
    cJSON *billing_item_record_id = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_update_dtoJSON, "billingItemRecordId");
    if (billing_item_record_id) { 
    if(!cJSON_IsString(billing_item_record_id) && !cJSON_IsNull(billing_item_record_id))
    {
    goto end; //String
    }
    }


    applied_item_tax_record_update_dto_local_var = applied_item_tax_record_update_dto_create (
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        tax_amount_in_usd ? tax_amount_in_usd->valuedouble : 0,
        tax_base_amount_in_usd ? tax_base_amount_in_usd->valuedouble : 0,
        billing_item_record_id && !cJSON_IsNull(billing_item_record_id) ? strdup(billing_item_record_id->valuestring) : NULL
        );

    return applied_item_tax_record_update_dto_local_var;
end:
    return NULL;

}
