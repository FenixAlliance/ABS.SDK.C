#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_commission_update_dto.h"



payment_commission_update_dto_t *payment_commission_update_dto_create(
    char *title,
    char *description,
    double base_amount,
    double added_percent,
    double added_amount,
    double tax_comission,
    char *salary_id,
    char *emisor_wallet_account_id,
    char *receiver_wallet_account_id,
    char *emisor_contact_id,
    char *receiver_contact_id,
    char *payment_id
    ) {
    payment_commission_update_dto_t *payment_commission_update_dto_local_var = malloc(sizeof(payment_commission_update_dto_t));
    if (!payment_commission_update_dto_local_var) {
        return NULL;
    }
    payment_commission_update_dto_local_var->title = title;
    payment_commission_update_dto_local_var->description = description;
    payment_commission_update_dto_local_var->base_amount = base_amount;
    payment_commission_update_dto_local_var->added_percent = added_percent;
    payment_commission_update_dto_local_var->added_amount = added_amount;
    payment_commission_update_dto_local_var->tax_comission = tax_comission;
    payment_commission_update_dto_local_var->salary_id = salary_id;
    payment_commission_update_dto_local_var->emisor_wallet_account_id = emisor_wallet_account_id;
    payment_commission_update_dto_local_var->receiver_wallet_account_id = receiver_wallet_account_id;
    payment_commission_update_dto_local_var->emisor_contact_id = emisor_contact_id;
    payment_commission_update_dto_local_var->receiver_contact_id = receiver_contact_id;
    payment_commission_update_dto_local_var->payment_id = payment_id;

    return payment_commission_update_dto_local_var;
}


void payment_commission_update_dto_free(payment_commission_update_dto_t *payment_commission_update_dto) {
    if(NULL == payment_commission_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_commission_update_dto->title) {
        free(payment_commission_update_dto->title);
        payment_commission_update_dto->title = NULL;
    }
    if (payment_commission_update_dto->description) {
        free(payment_commission_update_dto->description);
        payment_commission_update_dto->description = NULL;
    }
    if (payment_commission_update_dto->salary_id) {
        free(payment_commission_update_dto->salary_id);
        payment_commission_update_dto->salary_id = NULL;
    }
    if (payment_commission_update_dto->emisor_wallet_account_id) {
        free(payment_commission_update_dto->emisor_wallet_account_id);
        payment_commission_update_dto->emisor_wallet_account_id = NULL;
    }
    if (payment_commission_update_dto->receiver_wallet_account_id) {
        free(payment_commission_update_dto->receiver_wallet_account_id);
        payment_commission_update_dto->receiver_wallet_account_id = NULL;
    }
    if (payment_commission_update_dto->emisor_contact_id) {
        free(payment_commission_update_dto->emisor_contact_id);
        payment_commission_update_dto->emisor_contact_id = NULL;
    }
    if (payment_commission_update_dto->receiver_contact_id) {
        free(payment_commission_update_dto->receiver_contact_id);
        payment_commission_update_dto->receiver_contact_id = NULL;
    }
    if (payment_commission_update_dto->payment_id) {
        free(payment_commission_update_dto->payment_id);
        payment_commission_update_dto->payment_id = NULL;
    }
    free(payment_commission_update_dto);
}

cJSON *payment_commission_update_dto_convertToJSON(payment_commission_update_dto_t *payment_commission_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_commission_update_dto->title
    if(payment_commission_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", payment_commission_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->description
    if(payment_commission_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payment_commission_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->base_amount
    if(payment_commission_update_dto->base_amount) {
    if(cJSON_AddNumberToObject(item, "baseAmount", payment_commission_update_dto->base_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_commission_update_dto->added_percent
    if(payment_commission_update_dto->added_percent) {
    if(cJSON_AddNumberToObject(item, "addedPercent", payment_commission_update_dto->added_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_commission_update_dto->added_amount
    if(payment_commission_update_dto->added_amount) {
    if(cJSON_AddNumberToObject(item, "addedAmount", payment_commission_update_dto->added_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_commission_update_dto->tax_comission
    if(payment_commission_update_dto->tax_comission) {
    if(cJSON_AddNumberToObject(item, "taxComission", payment_commission_update_dto->tax_comission) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_commission_update_dto->salary_id
    if(payment_commission_update_dto->salary_id) {
    if(cJSON_AddStringToObject(item, "salaryId", payment_commission_update_dto->salary_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->emisor_wallet_account_id
    if(payment_commission_update_dto->emisor_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "emisorWalletAccountId", payment_commission_update_dto->emisor_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->receiver_wallet_account_id
    if(payment_commission_update_dto->receiver_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "receiverWalletAccountId", payment_commission_update_dto->receiver_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->emisor_contact_id
    if(payment_commission_update_dto->emisor_contact_id) {
    if(cJSON_AddStringToObject(item, "emisorContactId", payment_commission_update_dto->emisor_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->receiver_contact_id
    if(payment_commission_update_dto->receiver_contact_id) {
    if(cJSON_AddStringToObject(item, "receiverContactId", payment_commission_update_dto->receiver_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_update_dto->payment_id
    if(payment_commission_update_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", payment_commission_update_dto->payment_id) == NULL) {
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

payment_commission_update_dto_t *payment_commission_update_dto_parseFromJSON(cJSON *payment_commission_update_dtoJSON){

    payment_commission_update_dto_t *payment_commission_update_dto_local_var = NULL;

    // payment_commission_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->base_amount
    cJSON *base_amount = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "baseAmount");
    if (base_amount) { 
    if(!cJSON_IsNumber(base_amount))
    {
    goto end; //Numeric
    }
    }

    // payment_commission_update_dto->added_percent
    cJSON *added_percent = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "addedPercent");
    if (added_percent) { 
    if(!cJSON_IsNumber(added_percent))
    {
    goto end; //Numeric
    }
    }

    // payment_commission_update_dto->added_amount
    cJSON *added_amount = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "addedAmount");
    if (added_amount) { 
    if(!cJSON_IsNumber(added_amount))
    {
    goto end; //Numeric
    }
    }

    // payment_commission_update_dto->tax_comission
    cJSON *tax_comission = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "taxComission");
    if (tax_comission) { 
    if(!cJSON_IsNumber(tax_comission))
    {
    goto end; //Numeric
    }
    }

    // payment_commission_update_dto->salary_id
    cJSON *salary_id = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "salaryId");
    if (salary_id) { 
    if(!cJSON_IsString(salary_id) && !cJSON_IsNull(salary_id))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->emisor_wallet_account_id
    cJSON *emisor_wallet_account_id = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "emisorWalletAccountId");
    if (emisor_wallet_account_id) { 
    if(!cJSON_IsString(emisor_wallet_account_id) && !cJSON_IsNull(emisor_wallet_account_id))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->receiver_wallet_account_id
    cJSON *receiver_wallet_account_id = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "receiverWalletAccountId");
    if (receiver_wallet_account_id) { 
    if(!cJSON_IsString(receiver_wallet_account_id) && !cJSON_IsNull(receiver_wallet_account_id))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->emisor_contact_id
    cJSON *emisor_contact_id = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "emisorContactId");
    if (emisor_contact_id) { 
    if(!cJSON_IsString(emisor_contact_id) && !cJSON_IsNull(emisor_contact_id))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->receiver_contact_id
    cJSON *receiver_contact_id = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "receiverContactId");
    if (receiver_contact_id) { 
    if(!cJSON_IsString(receiver_contact_id) && !cJSON_IsNull(receiver_contact_id))
    {
    goto end; //String
    }
    }

    // payment_commission_update_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(payment_commission_update_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }


    payment_commission_update_dto_local_var = payment_commission_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        base_amount ? base_amount->valuedouble : 0,
        added_percent ? added_percent->valuedouble : 0,
        added_amount ? added_amount->valuedouble : 0,
        tax_comission ? tax_comission->valuedouble : 0,
        salary_id && !cJSON_IsNull(salary_id) ? strdup(salary_id->valuestring) : NULL,
        emisor_wallet_account_id && !cJSON_IsNull(emisor_wallet_account_id) ? strdup(emisor_wallet_account_id->valuestring) : NULL,
        receiver_wallet_account_id && !cJSON_IsNull(receiver_wallet_account_id) ? strdup(receiver_wallet_account_id->valuestring) : NULL,
        emisor_contact_id && !cJSON_IsNull(emisor_contact_id) ? strdup(emisor_contact_id->valuestring) : NULL,
        receiver_contact_id && !cJSON_IsNull(receiver_contact_id) ? strdup(receiver_contact_id->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL
        );

    return payment_commission_update_dto_local_var;
end:
    return NULL;

}
