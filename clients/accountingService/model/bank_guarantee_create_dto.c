#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_guarantee_create_dto.h"


char* bank_guarantee_create_dto_bank_guarantee_type_ToString(accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_type) {
    char* bank_guarantee_typeArray[] =  { "NULL", "Receiving", "Providing" };
    return bank_guarantee_typeArray[bank_guarantee_type];
}

accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_create_dto_bank_guarantee_type_FromString(char* bank_guarantee_type){
    int stringToReturn = 0;
    char *bank_guarantee_typeArray[] =  { "NULL", "Receiving", "Providing" };
    size_t sizeofArray = sizeof(bank_guarantee_typeArray) / sizeof(bank_guarantee_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(bank_guarantee_type, bank_guarantee_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

bank_guarantee_create_dto_t *bank_guarantee_create_dto_create(
    char *id,
    char *timestamp,
    double margin,
    double charges,
    char *beneficiary_name,
    char *guarantee_number,
    char *guarantee_conditions,
    double fixed_deposit_number,
    char *start_date,
    char *end_date,
    int validity_in_days,
    accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_type,
    char *contact_id,
    char *project_id,
    char *order_id,
    char *bank_profile_id,
    char *bank_account_id,
    char *currency_id
    ) {
    bank_guarantee_create_dto_t *bank_guarantee_create_dto_local_var = malloc(sizeof(bank_guarantee_create_dto_t));
    if (!bank_guarantee_create_dto_local_var) {
        return NULL;
    }
    bank_guarantee_create_dto_local_var->id = id;
    bank_guarantee_create_dto_local_var->timestamp = timestamp;
    bank_guarantee_create_dto_local_var->margin = margin;
    bank_guarantee_create_dto_local_var->charges = charges;
    bank_guarantee_create_dto_local_var->beneficiary_name = beneficiary_name;
    bank_guarantee_create_dto_local_var->guarantee_number = guarantee_number;
    bank_guarantee_create_dto_local_var->guarantee_conditions = guarantee_conditions;
    bank_guarantee_create_dto_local_var->fixed_deposit_number = fixed_deposit_number;
    bank_guarantee_create_dto_local_var->start_date = start_date;
    bank_guarantee_create_dto_local_var->end_date = end_date;
    bank_guarantee_create_dto_local_var->validity_in_days = validity_in_days;
    bank_guarantee_create_dto_local_var->bank_guarantee_type = bank_guarantee_type;
    bank_guarantee_create_dto_local_var->contact_id = contact_id;
    bank_guarantee_create_dto_local_var->project_id = project_id;
    bank_guarantee_create_dto_local_var->order_id = order_id;
    bank_guarantee_create_dto_local_var->bank_profile_id = bank_profile_id;
    bank_guarantee_create_dto_local_var->bank_account_id = bank_account_id;
    bank_guarantee_create_dto_local_var->currency_id = currency_id;

    return bank_guarantee_create_dto_local_var;
}


void bank_guarantee_create_dto_free(bank_guarantee_create_dto_t *bank_guarantee_create_dto) {
    if(NULL == bank_guarantee_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_guarantee_create_dto->id) {
        free(bank_guarantee_create_dto->id);
        bank_guarantee_create_dto->id = NULL;
    }
    if (bank_guarantee_create_dto->timestamp) {
        free(bank_guarantee_create_dto->timestamp);
        bank_guarantee_create_dto->timestamp = NULL;
    }
    if (bank_guarantee_create_dto->beneficiary_name) {
        free(bank_guarantee_create_dto->beneficiary_name);
        bank_guarantee_create_dto->beneficiary_name = NULL;
    }
    if (bank_guarantee_create_dto->guarantee_number) {
        free(bank_guarantee_create_dto->guarantee_number);
        bank_guarantee_create_dto->guarantee_number = NULL;
    }
    if (bank_guarantee_create_dto->guarantee_conditions) {
        free(bank_guarantee_create_dto->guarantee_conditions);
        bank_guarantee_create_dto->guarantee_conditions = NULL;
    }
    if (bank_guarantee_create_dto->start_date) {
        free(bank_guarantee_create_dto->start_date);
        bank_guarantee_create_dto->start_date = NULL;
    }
    if (bank_guarantee_create_dto->end_date) {
        free(bank_guarantee_create_dto->end_date);
        bank_guarantee_create_dto->end_date = NULL;
    }
    if (bank_guarantee_create_dto->contact_id) {
        free(bank_guarantee_create_dto->contact_id);
        bank_guarantee_create_dto->contact_id = NULL;
    }
    if (bank_guarantee_create_dto->project_id) {
        free(bank_guarantee_create_dto->project_id);
        bank_guarantee_create_dto->project_id = NULL;
    }
    if (bank_guarantee_create_dto->order_id) {
        free(bank_guarantee_create_dto->order_id);
        bank_guarantee_create_dto->order_id = NULL;
    }
    if (bank_guarantee_create_dto->bank_profile_id) {
        free(bank_guarantee_create_dto->bank_profile_id);
        bank_guarantee_create_dto->bank_profile_id = NULL;
    }
    if (bank_guarantee_create_dto->bank_account_id) {
        free(bank_guarantee_create_dto->bank_account_id);
        bank_guarantee_create_dto->bank_account_id = NULL;
    }
    if (bank_guarantee_create_dto->currency_id) {
        free(bank_guarantee_create_dto->currency_id);
        bank_guarantee_create_dto->currency_id = NULL;
    }
    free(bank_guarantee_create_dto);
}

cJSON *bank_guarantee_create_dto_convertToJSON(bank_guarantee_create_dto_t *bank_guarantee_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_guarantee_create_dto->id
    if(bank_guarantee_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_guarantee_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->timestamp
    if(bank_guarantee_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_guarantee_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_guarantee_create_dto->margin
    if(bank_guarantee_create_dto->margin) {
    if(cJSON_AddNumberToObject(item, "margin", bank_guarantee_create_dto->margin) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_guarantee_create_dto->charges
    if(bank_guarantee_create_dto->charges) {
    if(cJSON_AddNumberToObject(item, "charges", bank_guarantee_create_dto->charges) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_guarantee_create_dto->beneficiary_name
    if(bank_guarantee_create_dto->beneficiary_name) {
    if(cJSON_AddStringToObject(item, "beneficiaryName", bank_guarantee_create_dto->beneficiary_name) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->guarantee_number
    if(bank_guarantee_create_dto->guarantee_number) {
    if(cJSON_AddStringToObject(item, "guaranteeNumber", bank_guarantee_create_dto->guarantee_number) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->guarantee_conditions
    if(bank_guarantee_create_dto->guarantee_conditions) {
    if(cJSON_AddStringToObject(item, "guaranteeConditions", bank_guarantee_create_dto->guarantee_conditions) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->fixed_deposit_number
    if(bank_guarantee_create_dto->fixed_deposit_number) {
    if(cJSON_AddNumberToObject(item, "fixedDepositNumber", bank_guarantee_create_dto->fixed_deposit_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_guarantee_create_dto->start_date
    if(bank_guarantee_create_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", bank_guarantee_create_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_guarantee_create_dto->end_date
    if(bank_guarantee_create_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", bank_guarantee_create_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_guarantee_create_dto->validity_in_days
    if(bank_guarantee_create_dto->validity_in_days) {
    if(cJSON_AddNumberToObject(item, "validityInDays", bank_guarantee_create_dto->validity_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_guarantee_create_dto->bank_guarantee_type
    if(bank_guarantee_create_dto->bank_guarantee_type != accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "bankGuaranteeType", bank_guarantee_typebank_guarantee_create_dto_ToString(bank_guarantee_create_dto->bank_guarantee_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // bank_guarantee_create_dto->contact_id
    if(bank_guarantee_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", bank_guarantee_create_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->project_id
    if(bank_guarantee_create_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectId", bank_guarantee_create_dto->project_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->order_id
    if(bank_guarantee_create_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", bank_guarantee_create_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->bank_profile_id
    if(bank_guarantee_create_dto->bank_profile_id) {
    if(cJSON_AddStringToObject(item, "bankProfileId", bank_guarantee_create_dto->bank_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->bank_account_id
    if(bank_guarantee_create_dto->bank_account_id) {
    if(cJSON_AddStringToObject(item, "bankAccountId", bank_guarantee_create_dto->bank_account_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_guarantee_create_dto->currency_id
    if(bank_guarantee_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", bank_guarantee_create_dto->currency_id) == NULL) {
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

bank_guarantee_create_dto_t *bank_guarantee_create_dto_parseFromJSON(cJSON *bank_guarantee_create_dtoJSON){

    bank_guarantee_create_dto_t *bank_guarantee_create_dto_local_var = NULL;

    // bank_guarantee_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_guarantee_create_dto->margin
    cJSON *margin = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "margin");
    if (margin) { 
    if(!cJSON_IsNumber(margin))
    {
    goto end; //Numeric
    }
    }

    // bank_guarantee_create_dto->charges
    cJSON *charges = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "charges");
    if (charges) { 
    if(!cJSON_IsNumber(charges))
    {
    goto end; //Numeric
    }
    }

    // bank_guarantee_create_dto->beneficiary_name
    cJSON *beneficiary_name = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "beneficiaryName");
    if (beneficiary_name) { 
    if(!cJSON_IsString(beneficiary_name) && !cJSON_IsNull(beneficiary_name))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->guarantee_number
    cJSON *guarantee_number = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "guaranteeNumber");
    if (guarantee_number) { 
    if(!cJSON_IsString(guarantee_number) && !cJSON_IsNull(guarantee_number))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->guarantee_conditions
    cJSON *guarantee_conditions = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "guaranteeConditions");
    if (guarantee_conditions) { 
    if(!cJSON_IsString(guarantee_conditions) && !cJSON_IsNull(guarantee_conditions))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->fixed_deposit_number
    cJSON *fixed_deposit_number = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "fixedDepositNumber");
    if (fixed_deposit_number) { 
    if(!cJSON_IsNumber(fixed_deposit_number))
    {
    goto end; //Numeric
    }
    }

    // bank_guarantee_create_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // bank_guarantee_create_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // bank_guarantee_create_dto->validity_in_days
    cJSON *validity_in_days = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "validityInDays");
    if (validity_in_days) { 
    if(!cJSON_IsNumber(validity_in_days))
    {
    goto end; //Numeric
    }
    }

    // bank_guarantee_create_dto->bank_guarantee_type
    cJSON *bank_guarantee_type = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "bankGuaranteeType");
    accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_typeVariable;
    if (bank_guarantee_type) { 
    if(!cJSON_IsString(bank_guarantee_type))
    {
    goto end; //Enum
    }
    bank_guarantee_typeVariable = bank_guarantee_create_dto_bank_guarantee_type_FromString(bank_guarantee_type->valuestring);
    }

    // bank_guarantee_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "projectId");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->bank_profile_id
    cJSON *bank_profile_id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "bankProfileId");
    if (bank_profile_id) { 
    if(!cJSON_IsString(bank_profile_id) && !cJSON_IsNull(bank_profile_id))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->bank_account_id
    cJSON *bank_account_id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "bankAccountId");
    if (bank_account_id) { 
    if(!cJSON_IsString(bank_account_id) && !cJSON_IsNull(bank_account_id))
    {
    goto end; //String
    }
    }

    // bank_guarantee_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(bank_guarantee_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    bank_guarantee_create_dto_local_var = bank_guarantee_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        margin ? margin->valuedouble : 0,
        charges ? charges->valuedouble : 0,
        beneficiary_name && !cJSON_IsNull(beneficiary_name) ? strdup(beneficiary_name->valuestring) : NULL,
        guarantee_number && !cJSON_IsNull(guarantee_number) ? strdup(guarantee_number->valuestring) : NULL,
        guarantee_conditions && !cJSON_IsNull(guarantee_conditions) ? strdup(guarantee_conditions->valuestring) : NULL,
        fixed_deposit_number ? fixed_deposit_number->valuedouble : 0,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        validity_in_days ? validity_in_days->valuedouble : 0,
        bank_guarantee_type ? bank_guarantee_typeVariable : accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        bank_profile_id && !cJSON_IsNull(bank_profile_id) ? strdup(bank_profile_id->valuestring) : NULL,
        bank_account_id && !cJSON_IsNull(bank_account_id) ? strdup(bank_account_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return bank_guarantee_create_dto_local_var;
end:
    return NULL;

}
