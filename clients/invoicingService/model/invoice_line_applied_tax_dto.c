#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_line_applied_tax_dto.h"



invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *invoice_id,
    char *enrollment_id,
    char *invoice_line_id,
    char *tax_policy_id,
    char *item_price_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd,
    char *tax_policy_name,
    char *tax_policy_description
    ) {
    invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto_local_var = malloc(sizeof(invoice_line_applied_tax_dto_t));
    if (!invoice_line_applied_tax_dto_local_var) {
        return NULL;
    }
    invoice_line_applied_tax_dto_local_var->id = id;
    invoice_line_applied_tax_dto_local_var->timestamp = timestamp;
    invoice_line_applied_tax_dto_local_var->tenant_id = tenant_id;
    invoice_line_applied_tax_dto_local_var->invoice_id = invoice_id;
    invoice_line_applied_tax_dto_local_var->enrollment_id = enrollment_id;
    invoice_line_applied_tax_dto_local_var->invoice_line_id = invoice_line_id;
    invoice_line_applied_tax_dto_local_var->tax_policy_id = tax_policy_id;
    invoice_line_applied_tax_dto_local_var->item_price_id = item_price_id;
    invoice_line_applied_tax_dto_local_var->item_id = item_id;
    invoice_line_applied_tax_dto_local_var->tax_amount_in_usd = tax_amount_in_usd;
    invoice_line_applied_tax_dto_local_var->tax_base_amount_in_usd = tax_base_amount_in_usd;
    invoice_line_applied_tax_dto_local_var->tax_policy_name = tax_policy_name;
    invoice_line_applied_tax_dto_local_var->tax_policy_description = tax_policy_description;

    return invoice_line_applied_tax_dto_local_var;
}


void invoice_line_applied_tax_dto_free(invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto) {
    if(NULL == invoice_line_applied_tax_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_line_applied_tax_dto->id) {
        free(invoice_line_applied_tax_dto->id);
        invoice_line_applied_tax_dto->id = NULL;
    }
    if (invoice_line_applied_tax_dto->timestamp) {
        free(invoice_line_applied_tax_dto->timestamp);
        invoice_line_applied_tax_dto->timestamp = NULL;
    }
    if (invoice_line_applied_tax_dto->tenant_id) {
        free(invoice_line_applied_tax_dto->tenant_id);
        invoice_line_applied_tax_dto->tenant_id = NULL;
    }
    if (invoice_line_applied_tax_dto->invoice_id) {
        free(invoice_line_applied_tax_dto->invoice_id);
        invoice_line_applied_tax_dto->invoice_id = NULL;
    }
    if (invoice_line_applied_tax_dto->enrollment_id) {
        free(invoice_line_applied_tax_dto->enrollment_id);
        invoice_line_applied_tax_dto->enrollment_id = NULL;
    }
    if (invoice_line_applied_tax_dto->invoice_line_id) {
        free(invoice_line_applied_tax_dto->invoice_line_id);
        invoice_line_applied_tax_dto->invoice_line_id = NULL;
    }
    if (invoice_line_applied_tax_dto->tax_policy_id) {
        free(invoice_line_applied_tax_dto->tax_policy_id);
        invoice_line_applied_tax_dto->tax_policy_id = NULL;
    }
    if (invoice_line_applied_tax_dto->item_price_id) {
        free(invoice_line_applied_tax_dto->item_price_id);
        invoice_line_applied_tax_dto->item_price_id = NULL;
    }
    if (invoice_line_applied_tax_dto->item_id) {
        free(invoice_line_applied_tax_dto->item_id);
        invoice_line_applied_tax_dto->item_id = NULL;
    }
    if (invoice_line_applied_tax_dto->tax_policy_name) {
        free(invoice_line_applied_tax_dto->tax_policy_name);
        invoice_line_applied_tax_dto->tax_policy_name = NULL;
    }
    if (invoice_line_applied_tax_dto->tax_policy_description) {
        free(invoice_line_applied_tax_dto->tax_policy_description);
        invoice_line_applied_tax_dto->tax_policy_description = NULL;
    }
    free(invoice_line_applied_tax_dto);
}

cJSON *invoice_line_applied_tax_dto_convertToJSON(invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_line_applied_tax_dto->id
    if(invoice_line_applied_tax_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_line_applied_tax_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->timestamp
    if(invoice_line_applied_tax_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_line_applied_tax_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_line_applied_tax_dto->tenant_id
    if(invoice_line_applied_tax_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", invoice_line_applied_tax_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->invoice_id
    if(invoice_line_applied_tax_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", invoice_line_applied_tax_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->enrollment_id
    if(invoice_line_applied_tax_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", invoice_line_applied_tax_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->invoice_line_id
    if(invoice_line_applied_tax_dto->invoice_line_id) {
    if(cJSON_AddStringToObject(item, "invoiceLineId", invoice_line_applied_tax_dto->invoice_line_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->tax_policy_id
    if(invoice_line_applied_tax_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", invoice_line_applied_tax_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->item_price_id
    if(invoice_line_applied_tax_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", invoice_line_applied_tax_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->item_id
    if(invoice_line_applied_tax_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", invoice_line_applied_tax_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->tax_amount_in_usd
    if(invoice_line_applied_tax_dto->tax_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxAmountInUsd", invoice_line_applied_tax_dto->tax_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_applied_tax_dto->tax_base_amount_in_usd
    if(invoice_line_applied_tax_dto->tax_base_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxBaseAmountInUsd", invoice_line_applied_tax_dto->tax_base_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_applied_tax_dto->tax_policy_name
    if(invoice_line_applied_tax_dto->tax_policy_name) {
    if(cJSON_AddStringToObject(item, "taxPolicyName", invoice_line_applied_tax_dto->tax_policy_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_dto->tax_policy_description
    if(invoice_line_applied_tax_dto->tax_policy_description) {
    if(cJSON_AddStringToObject(item, "taxPolicyDescription", invoice_line_applied_tax_dto->tax_policy_description) == NULL) {
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

invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto_parseFromJSON(cJSON *invoice_line_applied_tax_dtoJSON){

    invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto_local_var = NULL;

    // invoice_line_applied_tax_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_line_applied_tax_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->invoice_line_id
    cJSON *invoice_line_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "invoiceLineId");
    if (invoice_line_id) { 
    if(!cJSON_IsString(invoice_line_id) && !cJSON_IsNull(invoice_line_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->tax_amount_in_usd
    cJSON *tax_amount_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "taxAmountInUsd");
    if (tax_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_applied_tax_dto->tax_base_amount_in_usd
    cJSON *tax_base_amount_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "taxBaseAmountInUsd");
    if (tax_base_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_base_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_applied_tax_dto->tax_policy_name
    cJSON *tax_policy_name = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "taxPolicyName");
    if (tax_policy_name) { 
    if(!cJSON_IsString(tax_policy_name) && !cJSON_IsNull(tax_policy_name))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_dto->tax_policy_description
    cJSON *tax_policy_description = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_dtoJSON, "taxPolicyDescription");
    if (tax_policy_description) { 
    if(!cJSON_IsString(tax_policy_description) && !cJSON_IsNull(tax_policy_description))
    {
    goto end; //String
    }
    }


    invoice_line_applied_tax_dto_local_var = invoice_line_applied_tax_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        invoice_line_id && !cJSON_IsNull(invoice_line_id) ? strdup(invoice_line_id->valuestring) : NULL,
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        item_price_id && !cJSON_IsNull(item_price_id) ? strdup(item_price_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        tax_amount_in_usd ? tax_amount_in_usd->valuedouble : 0,
        tax_base_amount_in_usd ? tax_base_amount_in_usd->valuedouble : 0,
        tax_policy_name && !cJSON_IsNull(tax_policy_name) ? strdup(tax_policy_name->valuestring) : NULL,
        tax_policy_description && !cJSON_IsNull(tax_policy_description) ? strdup(tax_policy_description->valuestring) : NULL
        );

    return invoice_line_applied_tax_dto_local_var;
end:
    return NULL;

}
