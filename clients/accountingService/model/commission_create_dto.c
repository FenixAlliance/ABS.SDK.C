#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commission_create_dto.h"



commission_create_dto_t *commission_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    double base_amount,
    double added_percent,
    double added_amount,
    double tax_comission,
    char *tenant_id,
    char *enrollment_id,
    char *salary_id,
    char *emisor_wallet_account_id,
    char *receiver_wallet_account_id,
    char *emisor_contact_id,
    char *receiver_contact_id
    ) {
    commission_create_dto_t *commission_create_dto_local_var = malloc(sizeof(commission_create_dto_t));
    if (!commission_create_dto_local_var) {
        return NULL;
    }
    commission_create_dto_local_var->id = id;
    commission_create_dto_local_var->timestamp = timestamp;
    commission_create_dto_local_var->title = title;
    commission_create_dto_local_var->description = description;
    commission_create_dto_local_var->base_amount = base_amount;
    commission_create_dto_local_var->added_percent = added_percent;
    commission_create_dto_local_var->added_amount = added_amount;
    commission_create_dto_local_var->tax_comission = tax_comission;
    commission_create_dto_local_var->tenant_id = tenant_id;
    commission_create_dto_local_var->enrollment_id = enrollment_id;
    commission_create_dto_local_var->salary_id = salary_id;
    commission_create_dto_local_var->emisor_wallet_account_id = emisor_wallet_account_id;
    commission_create_dto_local_var->receiver_wallet_account_id = receiver_wallet_account_id;
    commission_create_dto_local_var->emisor_contact_id = emisor_contact_id;
    commission_create_dto_local_var->receiver_contact_id = receiver_contact_id;

    return commission_create_dto_local_var;
}


void commission_create_dto_free(commission_create_dto_t *commission_create_dto) {
    if(NULL == commission_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (commission_create_dto->id) {
        free(commission_create_dto->id);
        commission_create_dto->id = NULL;
    }
    if (commission_create_dto->timestamp) {
        free(commission_create_dto->timestamp);
        commission_create_dto->timestamp = NULL;
    }
    if (commission_create_dto->title) {
        free(commission_create_dto->title);
        commission_create_dto->title = NULL;
    }
    if (commission_create_dto->description) {
        free(commission_create_dto->description);
        commission_create_dto->description = NULL;
    }
    if (commission_create_dto->tenant_id) {
        free(commission_create_dto->tenant_id);
        commission_create_dto->tenant_id = NULL;
    }
    if (commission_create_dto->enrollment_id) {
        free(commission_create_dto->enrollment_id);
        commission_create_dto->enrollment_id = NULL;
    }
    if (commission_create_dto->salary_id) {
        free(commission_create_dto->salary_id);
        commission_create_dto->salary_id = NULL;
    }
    if (commission_create_dto->emisor_wallet_account_id) {
        free(commission_create_dto->emisor_wallet_account_id);
        commission_create_dto->emisor_wallet_account_id = NULL;
    }
    if (commission_create_dto->receiver_wallet_account_id) {
        free(commission_create_dto->receiver_wallet_account_id);
        commission_create_dto->receiver_wallet_account_id = NULL;
    }
    if (commission_create_dto->emisor_contact_id) {
        free(commission_create_dto->emisor_contact_id);
        commission_create_dto->emisor_contact_id = NULL;
    }
    if (commission_create_dto->receiver_contact_id) {
        free(commission_create_dto->receiver_contact_id);
        commission_create_dto->receiver_contact_id = NULL;
    }
    free(commission_create_dto);
}

cJSON *commission_create_dto_convertToJSON(commission_create_dto_t *commission_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // commission_create_dto->id
    if(commission_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", commission_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->timestamp
    if(commission_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", commission_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // commission_create_dto->title
    if(commission_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", commission_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->description
    if(commission_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", commission_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->base_amount
    if(commission_create_dto->base_amount) {
    if(cJSON_AddNumberToObject(item, "baseAmount", commission_create_dto->base_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // commission_create_dto->added_percent
    if(commission_create_dto->added_percent) {
    if(cJSON_AddNumberToObject(item, "addedPercent", commission_create_dto->added_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // commission_create_dto->added_amount
    if(commission_create_dto->added_amount) {
    if(cJSON_AddNumberToObject(item, "addedAmount", commission_create_dto->added_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // commission_create_dto->tax_comission
    if(commission_create_dto->tax_comission) {
    if(cJSON_AddNumberToObject(item, "taxComission", commission_create_dto->tax_comission) == NULL) {
    goto fail; //Numeric
    }
    }


    // commission_create_dto->tenant_id
    if(commission_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", commission_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->enrollment_id
    if(commission_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", commission_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->salary_id
    if(commission_create_dto->salary_id) {
    if(cJSON_AddStringToObject(item, "salaryId", commission_create_dto->salary_id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->emisor_wallet_account_id
    if(commission_create_dto->emisor_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "emisorWalletAccountId", commission_create_dto->emisor_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->receiver_wallet_account_id
    if(commission_create_dto->receiver_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "receiverWalletAccountId", commission_create_dto->receiver_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->emisor_contact_id
    if(commission_create_dto->emisor_contact_id) {
    if(cJSON_AddStringToObject(item, "emisorContactId", commission_create_dto->emisor_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // commission_create_dto->receiver_contact_id
    if(commission_create_dto->receiver_contact_id) {
    if(cJSON_AddStringToObject(item, "receiverContactId", commission_create_dto->receiver_contact_id) == NULL) {
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

commission_create_dto_t *commission_create_dto_parseFromJSON(cJSON *commission_create_dtoJSON){

    commission_create_dto_t *commission_create_dto_local_var = NULL;

    // commission_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // commission_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // commission_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // commission_create_dto->base_amount
    cJSON *base_amount = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "baseAmount");
    if (base_amount) { 
    if(!cJSON_IsNumber(base_amount))
    {
    goto end; //Numeric
    }
    }

    // commission_create_dto->added_percent
    cJSON *added_percent = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "addedPercent");
    if (added_percent) { 
    if(!cJSON_IsNumber(added_percent))
    {
    goto end; //Numeric
    }
    }

    // commission_create_dto->added_amount
    cJSON *added_amount = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "addedAmount");
    if (added_amount) { 
    if(!cJSON_IsNumber(added_amount))
    {
    goto end; //Numeric
    }
    }

    // commission_create_dto->tax_comission
    cJSON *tax_comission = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "taxComission");
    if (tax_comission) { 
    if(!cJSON_IsNumber(tax_comission))
    {
    goto end; //Numeric
    }
    }

    // commission_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->salary_id
    cJSON *salary_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "salaryId");
    if (salary_id) { 
    if(!cJSON_IsString(salary_id) && !cJSON_IsNull(salary_id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->emisor_wallet_account_id
    cJSON *emisor_wallet_account_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "emisorWalletAccountId");
    if (emisor_wallet_account_id) { 
    if(!cJSON_IsString(emisor_wallet_account_id) && !cJSON_IsNull(emisor_wallet_account_id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->receiver_wallet_account_id
    cJSON *receiver_wallet_account_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "receiverWalletAccountId");
    if (receiver_wallet_account_id) { 
    if(!cJSON_IsString(receiver_wallet_account_id) && !cJSON_IsNull(receiver_wallet_account_id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->emisor_contact_id
    cJSON *emisor_contact_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "emisorContactId");
    if (emisor_contact_id) { 
    if(!cJSON_IsString(emisor_contact_id) && !cJSON_IsNull(emisor_contact_id))
    {
    goto end; //String
    }
    }

    // commission_create_dto->receiver_contact_id
    cJSON *receiver_contact_id = cJSON_GetObjectItemCaseSensitive(commission_create_dtoJSON, "receiverContactId");
    if (receiver_contact_id) { 
    if(!cJSON_IsString(receiver_contact_id) && !cJSON_IsNull(receiver_contact_id))
    {
    goto end; //String
    }
    }


    commission_create_dto_local_var = commission_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        base_amount ? base_amount->valuedouble : 0,
        added_percent ? added_percent->valuedouble : 0,
        added_amount ? added_amount->valuedouble : 0,
        tax_comission ? tax_comission->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        salary_id && !cJSON_IsNull(salary_id) ? strdup(salary_id->valuestring) : NULL,
        emisor_wallet_account_id && !cJSON_IsNull(emisor_wallet_account_id) ? strdup(emisor_wallet_account_id->valuestring) : NULL,
        receiver_wallet_account_id && !cJSON_IsNull(receiver_wallet_account_id) ? strdup(receiver_wallet_account_id->valuestring) : NULL,
        emisor_contact_id && !cJSON_IsNull(emisor_contact_id) ? strdup(emisor_contact_id->valuestring) : NULL,
        receiver_contact_id && !cJSON_IsNull(receiver_contact_id) ? strdup(receiver_contact_id->valuestring) : NULL
        );

    return commission_create_dto_local_var;
end:
    return NULL;

}
