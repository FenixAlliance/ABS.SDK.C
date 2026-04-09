#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_line_applied_tax_create_dto.h"



invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *invoice_id,
    char *tax_policy_id,
    char *enrollment_id
    ) {
    invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto_local_var = malloc(sizeof(invoice_line_applied_tax_create_dto_t));
    if (!invoice_line_applied_tax_create_dto_local_var) {
        return NULL;
    }
    invoice_line_applied_tax_create_dto_local_var->id = id;
    invoice_line_applied_tax_create_dto_local_var->timestamp = timestamp;
    invoice_line_applied_tax_create_dto_local_var->tenant_id = tenant_id;
    invoice_line_applied_tax_create_dto_local_var->invoice_id = invoice_id;
    invoice_line_applied_tax_create_dto_local_var->tax_policy_id = tax_policy_id;
    invoice_line_applied_tax_create_dto_local_var->enrollment_id = enrollment_id;

    return invoice_line_applied_tax_create_dto_local_var;
}


void invoice_line_applied_tax_create_dto_free(invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto) {
    if(NULL == invoice_line_applied_tax_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_line_applied_tax_create_dto->id) {
        free(invoice_line_applied_tax_create_dto->id);
        invoice_line_applied_tax_create_dto->id = NULL;
    }
    if (invoice_line_applied_tax_create_dto->timestamp) {
        free(invoice_line_applied_tax_create_dto->timestamp);
        invoice_line_applied_tax_create_dto->timestamp = NULL;
    }
    if (invoice_line_applied_tax_create_dto->tenant_id) {
        free(invoice_line_applied_tax_create_dto->tenant_id);
        invoice_line_applied_tax_create_dto->tenant_id = NULL;
    }
    if (invoice_line_applied_tax_create_dto->invoice_id) {
        free(invoice_line_applied_tax_create_dto->invoice_id);
        invoice_line_applied_tax_create_dto->invoice_id = NULL;
    }
    if (invoice_line_applied_tax_create_dto->tax_policy_id) {
        free(invoice_line_applied_tax_create_dto->tax_policy_id);
        invoice_line_applied_tax_create_dto->tax_policy_id = NULL;
    }
    if (invoice_line_applied_tax_create_dto->enrollment_id) {
        free(invoice_line_applied_tax_create_dto->enrollment_id);
        invoice_line_applied_tax_create_dto->enrollment_id = NULL;
    }
    free(invoice_line_applied_tax_create_dto);
}

cJSON *invoice_line_applied_tax_create_dto_convertToJSON(invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_line_applied_tax_create_dto->id
    if(invoice_line_applied_tax_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_line_applied_tax_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_create_dto->timestamp
    if(invoice_line_applied_tax_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_line_applied_tax_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_line_applied_tax_create_dto->tenant_id
    if(invoice_line_applied_tax_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", invoice_line_applied_tax_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_create_dto->invoice_id
    if(invoice_line_applied_tax_create_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", invoice_line_applied_tax_create_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_create_dto->tax_policy_id
    if(invoice_line_applied_tax_create_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", invoice_line_applied_tax_create_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_applied_tax_create_dto->enrollment_id
    if(invoice_line_applied_tax_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", invoice_line_applied_tax_create_dto->enrollment_id) == NULL) {
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

invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto_parseFromJSON(cJSON *invoice_line_applied_tax_create_dtoJSON){

    invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto_local_var = NULL;

    // invoice_line_applied_tax_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_line_applied_tax_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_create_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_create_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_create_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_create_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_applied_tax_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    invoice_line_applied_tax_create_dto_local_var = invoice_line_applied_tax_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return invoice_line_applied_tax_create_dto_local_var;
end:
    return NULL;

}
