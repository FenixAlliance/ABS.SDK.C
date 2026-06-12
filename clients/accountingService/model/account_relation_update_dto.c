#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_relation_update_dto.h"



account_relation_update_dto_t *account_relation_update_dto_create(
    char *account_id,
    char *type
    ) {
    account_relation_update_dto_t *account_relation_update_dto_local_var = malloc(sizeof(account_relation_update_dto_t));
    if (!account_relation_update_dto_local_var) {
        return NULL;
    }
    account_relation_update_dto_local_var->account_id = account_id;
    account_relation_update_dto_local_var->type = type;

    return account_relation_update_dto_local_var;
}


void account_relation_update_dto_free(account_relation_update_dto_t *account_relation_update_dto) {
    if(NULL == account_relation_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_relation_update_dto->account_id) {
        free(account_relation_update_dto->account_id);
        account_relation_update_dto->account_id = NULL;
    }
    if (account_relation_update_dto->type) {
        free(account_relation_update_dto->type);
        account_relation_update_dto->type = NULL;
    }
    free(account_relation_update_dto);
}

cJSON *account_relation_update_dto_convertToJSON(account_relation_update_dto_t *account_relation_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_relation_update_dto->account_id
    if(account_relation_update_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", account_relation_update_dto->account_id) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_update_dto->type
    if(account_relation_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", account_relation_update_dto->type) == NULL) {
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

account_relation_update_dto_t *account_relation_update_dto_parseFromJSON(cJSON *account_relation_update_dtoJSON){

    account_relation_update_dto_t *account_relation_update_dto_local_var = NULL;

    // account_relation_update_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(account_relation_update_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // account_relation_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(account_relation_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    account_relation_update_dto_local_var = account_relation_update_dto_create (
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return account_relation_update_dto_local_var;
end:
    return NULL;

}
