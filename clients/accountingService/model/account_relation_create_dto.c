#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_relation_create_dto.h"



account_relation_create_dto_t *account_relation_create_dto_create(
    char *id,
    char *timestamp,
    char *account_id
    ) {
    account_relation_create_dto_t *account_relation_create_dto_local_var = malloc(sizeof(account_relation_create_dto_t));
    if (!account_relation_create_dto_local_var) {
        return NULL;
    }
    account_relation_create_dto_local_var->id = id;
    account_relation_create_dto_local_var->timestamp = timestamp;
    account_relation_create_dto_local_var->account_id = account_id;

    return account_relation_create_dto_local_var;
}


void account_relation_create_dto_free(account_relation_create_dto_t *account_relation_create_dto) {
    if(NULL == account_relation_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_relation_create_dto->id) {
        free(account_relation_create_dto->id);
        account_relation_create_dto->id = NULL;
    }
    if (account_relation_create_dto->timestamp) {
        free(account_relation_create_dto->timestamp);
        account_relation_create_dto->timestamp = NULL;
    }
    if (account_relation_create_dto->account_id) {
        free(account_relation_create_dto->account_id);
        account_relation_create_dto->account_id = NULL;
    }
    free(account_relation_create_dto);
}

cJSON *account_relation_create_dto_convertToJSON(account_relation_create_dto_t *account_relation_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_relation_create_dto->id
    if(account_relation_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", account_relation_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_create_dto->timestamp
    if(account_relation_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_relation_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_relation_create_dto->account_id
    if(account_relation_create_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", account_relation_create_dto->account_id) == NULL) {
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

account_relation_create_dto_t *account_relation_create_dto_parseFromJSON(cJSON *account_relation_create_dtoJSON){

    account_relation_create_dto_t *account_relation_create_dto_local_var = NULL;

    // account_relation_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(account_relation_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // account_relation_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_relation_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_relation_create_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(account_relation_create_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }


    account_relation_create_dto_local_var = account_relation_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL
        );

    return account_relation_create_dto_local_var;
end:
    return NULL;

}
