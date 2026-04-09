#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_transaction_create_dto.h"



bank_transaction_create_dto_t *bank_transaction_create_dto_create(
    char *id,
    char *timestamp,
    char *bank_profile_id,
    char *bank_account_id
    ) {
    bank_transaction_create_dto_t *bank_transaction_create_dto_local_var = malloc(sizeof(bank_transaction_create_dto_t));
    if (!bank_transaction_create_dto_local_var) {
        return NULL;
    }
    bank_transaction_create_dto_local_var->id = id;
    bank_transaction_create_dto_local_var->timestamp = timestamp;
    bank_transaction_create_dto_local_var->bank_profile_id = bank_profile_id;
    bank_transaction_create_dto_local_var->bank_account_id = bank_account_id;

    return bank_transaction_create_dto_local_var;
}


void bank_transaction_create_dto_free(bank_transaction_create_dto_t *bank_transaction_create_dto) {
    if(NULL == bank_transaction_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_transaction_create_dto->id) {
        free(bank_transaction_create_dto->id);
        bank_transaction_create_dto->id = NULL;
    }
    if (bank_transaction_create_dto->timestamp) {
        free(bank_transaction_create_dto->timestamp);
        bank_transaction_create_dto->timestamp = NULL;
    }
    if (bank_transaction_create_dto->bank_profile_id) {
        free(bank_transaction_create_dto->bank_profile_id);
        bank_transaction_create_dto->bank_profile_id = NULL;
    }
    if (bank_transaction_create_dto->bank_account_id) {
        free(bank_transaction_create_dto->bank_account_id);
        bank_transaction_create_dto->bank_account_id = NULL;
    }
    free(bank_transaction_create_dto);
}

cJSON *bank_transaction_create_dto_convertToJSON(bank_transaction_create_dto_t *bank_transaction_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_transaction_create_dto->id
    if(bank_transaction_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_transaction_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_create_dto->timestamp
    if(bank_transaction_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_transaction_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_transaction_create_dto->bank_profile_id
    if(bank_transaction_create_dto->bank_profile_id) {
    if(cJSON_AddStringToObject(item, "bankProfileId", bank_transaction_create_dto->bank_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_create_dto->bank_account_id
    if(bank_transaction_create_dto->bank_account_id) {
    if(cJSON_AddStringToObject(item, "bankAccountId", bank_transaction_create_dto->bank_account_id) == NULL) {
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

bank_transaction_create_dto_t *bank_transaction_create_dto_parseFromJSON(cJSON *bank_transaction_create_dtoJSON){

    bank_transaction_create_dto_t *bank_transaction_create_dto_local_var = NULL;

    // bank_transaction_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_transaction_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_transaction_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_transaction_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_transaction_create_dto->bank_profile_id
    cJSON *bank_profile_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_create_dtoJSON, "bankProfileId");
    if (bank_profile_id) { 
    if(!cJSON_IsString(bank_profile_id) && !cJSON_IsNull(bank_profile_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_create_dto->bank_account_id
    cJSON *bank_account_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_create_dtoJSON, "bankAccountId");
    if (bank_account_id) { 
    if(!cJSON_IsString(bank_account_id) && !cJSON_IsNull(bank_account_id))
    {
    goto end; //String
    }
    }


    bank_transaction_create_dto_local_var = bank_transaction_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        bank_profile_id && !cJSON_IsNull(bank_profile_id) ? strdup(bank_profile_id->valuestring) : NULL,
        bank_account_id && !cJSON_IsNull(bank_account_id) ? strdup(bank_account_id->valuestring) : NULL
        );

    return bank_transaction_create_dto_local_var;
end:
    return NULL;

}
