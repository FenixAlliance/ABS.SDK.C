#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_reference_dto.h"



invoice_reference_dto_t *invoice_reference_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *referral_invoice_id,
    char *referenced_invoice_id
    ) {
    invoice_reference_dto_t *invoice_reference_dto_local_var = malloc(sizeof(invoice_reference_dto_t));
    if (!invoice_reference_dto_local_var) {
        return NULL;
    }
    invoice_reference_dto_local_var->id = id;
    invoice_reference_dto_local_var->timestamp = timestamp;
    invoice_reference_dto_local_var->tenant_id = tenant_id;
    invoice_reference_dto_local_var->enrollment_id = enrollment_id;
    invoice_reference_dto_local_var->referral_invoice_id = referral_invoice_id;
    invoice_reference_dto_local_var->referenced_invoice_id = referenced_invoice_id;

    return invoice_reference_dto_local_var;
}


void invoice_reference_dto_free(invoice_reference_dto_t *invoice_reference_dto) {
    if(NULL == invoice_reference_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_reference_dto->id) {
        free(invoice_reference_dto->id);
        invoice_reference_dto->id = NULL;
    }
    if (invoice_reference_dto->timestamp) {
        free(invoice_reference_dto->timestamp);
        invoice_reference_dto->timestamp = NULL;
    }
    if (invoice_reference_dto->tenant_id) {
        free(invoice_reference_dto->tenant_id);
        invoice_reference_dto->tenant_id = NULL;
    }
    if (invoice_reference_dto->enrollment_id) {
        free(invoice_reference_dto->enrollment_id);
        invoice_reference_dto->enrollment_id = NULL;
    }
    if (invoice_reference_dto->referral_invoice_id) {
        free(invoice_reference_dto->referral_invoice_id);
        invoice_reference_dto->referral_invoice_id = NULL;
    }
    if (invoice_reference_dto->referenced_invoice_id) {
        free(invoice_reference_dto->referenced_invoice_id);
        invoice_reference_dto->referenced_invoice_id = NULL;
    }
    free(invoice_reference_dto);
}

cJSON *invoice_reference_dto_convertToJSON(invoice_reference_dto_t *invoice_reference_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_reference_dto->id
    if(invoice_reference_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_reference_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_reference_dto->timestamp
    if(invoice_reference_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_reference_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_reference_dto->tenant_id
    if(invoice_reference_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", invoice_reference_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_reference_dto->enrollment_id
    if(invoice_reference_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", invoice_reference_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_reference_dto->referral_invoice_id
    if(invoice_reference_dto->referral_invoice_id) {
    if(cJSON_AddStringToObject(item, "referralInvoiceId", invoice_reference_dto->referral_invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_reference_dto->referenced_invoice_id
    if(invoice_reference_dto->referenced_invoice_id) {
    if(cJSON_AddStringToObject(item, "referencedInvoiceId", invoice_reference_dto->referenced_invoice_id) == NULL) {
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

invoice_reference_dto_t *invoice_reference_dto_parseFromJSON(cJSON *invoice_reference_dtoJSON){

    invoice_reference_dto_t *invoice_reference_dto_local_var = NULL;

    // invoice_reference_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_reference_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_reference_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_reference_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_reference_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_reference_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_reference_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(invoice_reference_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // invoice_reference_dto->referral_invoice_id
    cJSON *referral_invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_reference_dtoJSON, "referralInvoiceId");
    if (referral_invoice_id) { 
    if(!cJSON_IsString(referral_invoice_id) && !cJSON_IsNull(referral_invoice_id))
    {
    goto end; //String
    }
    }

    // invoice_reference_dto->referenced_invoice_id
    cJSON *referenced_invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_reference_dtoJSON, "referencedInvoiceId");
    if (referenced_invoice_id) { 
    if(!cJSON_IsString(referenced_invoice_id) && !cJSON_IsNull(referenced_invoice_id))
    {
    goto end; //String
    }
    }


    invoice_reference_dto_local_var = invoice_reference_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        referral_invoice_id && !cJSON_IsNull(referral_invoice_id) ? strdup(referral_invoice_id->valuestring) : NULL,
        referenced_invoice_id && !cJSON_IsNull(referenced_invoice_id) ? strdup(referenced_invoice_id->valuestring) : NULL
        );

    return invoice_reference_dto_local_var;
end:
    return NULL;

}
