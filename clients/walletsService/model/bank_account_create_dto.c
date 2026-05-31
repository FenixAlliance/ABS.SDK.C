#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_account_create_dto.h"



bank_account_create_dto_t *bank_account_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *iban,
    char *swift,
    char *branch_code,
    char *bank_account_number,
    char *qualified_name,
    char *bank_id,
    char *bank_profile_id
    ) {
    bank_account_create_dto_t *bank_account_create_dto_local_var = malloc(sizeof(bank_account_create_dto_t));
    if (!bank_account_create_dto_local_var) {
        return NULL;
    }
    bank_account_create_dto_local_var->id = id;
    bank_account_create_dto_local_var->timestamp = timestamp;
    bank_account_create_dto_local_var->name = name;
    bank_account_create_dto_local_var->iban = iban;
    bank_account_create_dto_local_var->swift = swift;
    bank_account_create_dto_local_var->branch_code = branch_code;
    bank_account_create_dto_local_var->bank_account_number = bank_account_number;
    bank_account_create_dto_local_var->qualified_name = qualified_name;
    bank_account_create_dto_local_var->bank_id = bank_id;
    bank_account_create_dto_local_var->bank_profile_id = bank_profile_id;

    return bank_account_create_dto_local_var;
}


void bank_account_create_dto_free(bank_account_create_dto_t *bank_account_create_dto) {
    if(NULL == bank_account_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_account_create_dto->id) {
        free(bank_account_create_dto->id);
        bank_account_create_dto->id = NULL;
    }
    if (bank_account_create_dto->timestamp) {
        free(bank_account_create_dto->timestamp);
        bank_account_create_dto->timestamp = NULL;
    }
    if (bank_account_create_dto->name) {
        free(bank_account_create_dto->name);
        bank_account_create_dto->name = NULL;
    }
    if (bank_account_create_dto->iban) {
        free(bank_account_create_dto->iban);
        bank_account_create_dto->iban = NULL;
    }
    if (bank_account_create_dto->swift) {
        free(bank_account_create_dto->swift);
        bank_account_create_dto->swift = NULL;
    }
    if (bank_account_create_dto->branch_code) {
        free(bank_account_create_dto->branch_code);
        bank_account_create_dto->branch_code = NULL;
    }
    if (bank_account_create_dto->bank_account_number) {
        free(bank_account_create_dto->bank_account_number);
        bank_account_create_dto->bank_account_number = NULL;
    }
    if (bank_account_create_dto->qualified_name) {
        free(bank_account_create_dto->qualified_name);
        bank_account_create_dto->qualified_name = NULL;
    }
    if (bank_account_create_dto->bank_id) {
        free(bank_account_create_dto->bank_id);
        bank_account_create_dto->bank_id = NULL;
    }
    if (bank_account_create_dto->bank_profile_id) {
        free(bank_account_create_dto->bank_profile_id);
        bank_account_create_dto->bank_profile_id = NULL;
    }
    free(bank_account_create_dto);
}

cJSON *bank_account_create_dto_convertToJSON(bank_account_create_dto_t *bank_account_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_account_create_dto->id
    if(bank_account_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_account_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->timestamp
    if(bank_account_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_account_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_account_create_dto->name
    if(bank_account_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", bank_account_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->iban
    if(bank_account_create_dto->iban) {
    if(cJSON_AddStringToObject(item, "iban", bank_account_create_dto->iban) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->swift
    if(bank_account_create_dto->swift) {
    if(cJSON_AddStringToObject(item, "swift", bank_account_create_dto->swift) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->branch_code
    if(bank_account_create_dto->branch_code) {
    if(cJSON_AddStringToObject(item, "branchCode", bank_account_create_dto->branch_code) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->bank_account_number
    if(bank_account_create_dto->bank_account_number) {
    if(cJSON_AddStringToObject(item, "bankAccountNumber", bank_account_create_dto->bank_account_number) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->qualified_name
    if(bank_account_create_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", bank_account_create_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->bank_id
    if(bank_account_create_dto->bank_id) {
    if(cJSON_AddStringToObject(item, "bankId", bank_account_create_dto->bank_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->bank_profile_id
    if(bank_account_create_dto->bank_profile_id) {
    if(cJSON_AddStringToObject(item, "bankProfileId", bank_account_create_dto->bank_profile_id) == NULL) {
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

bank_account_create_dto_t *bank_account_create_dto_parseFromJSON(cJSON *bank_account_create_dtoJSON){

    bank_account_create_dto_t *bank_account_create_dto_local_var = NULL;

    // bank_account_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_account_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->iban
    cJSON *iban = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "iban");
    if (iban) { 
    if(!cJSON_IsString(iban) && !cJSON_IsNull(iban))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->swift
    cJSON *swift = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "swift");
    if (swift) { 
    if(!cJSON_IsString(swift) && !cJSON_IsNull(swift))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->branch_code
    cJSON *branch_code = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "branchCode");
    if (branch_code) { 
    if(!cJSON_IsString(branch_code) && !cJSON_IsNull(branch_code))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->bank_account_number
    cJSON *bank_account_number = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "bankAccountNumber");
    if (bank_account_number) { 
    if(!cJSON_IsString(bank_account_number) && !cJSON_IsNull(bank_account_number))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->bank_id
    cJSON *bank_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "bankId");
    if (bank_id) { 
    if(!cJSON_IsString(bank_id) && !cJSON_IsNull(bank_id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->bank_profile_id
    cJSON *bank_profile_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "bankProfileId");
    if (bank_profile_id) { 
    if(!cJSON_IsString(bank_profile_id) && !cJSON_IsNull(bank_profile_id))
    {
    goto end; //String
    }
    }


    bank_account_create_dto_local_var = bank_account_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        iban && !cJSON_IsNull(iban) ? strdup(iban->valuestring) : NULL,
        swift && !cJSON_IsNull(swift) ? strdup(swift->valuestring) : NULL,
        branch_code && !cJSON_IsNull(branch_code) ? strdup(branch_code->valuestring) : NULL,
        bank_account_number && !cJSON_IsNull(bank_account_number) ? strdup(bank_account_number->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        bank_id && !cJSON_IsNull(bank_id) ? strdup(bank_id->valuestring) : NULL,
        bank_profile_id && !cJSON_IsNull(bank_profile_id) ? strdup(bank_profile_id->valuestring) : NULL
        );

    return bank_account_create_dto_local_var;
end:
    return NULL;

}
