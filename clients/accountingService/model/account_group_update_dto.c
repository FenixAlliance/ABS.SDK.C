#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_group_update_dto.h"



account_group_update_dto_t *account_group_update_dto_create(
    char *title,
    char *description,
    char *parent_account_group_id
    ) {
    account_group_update_dto_t *account_group_update_dto_local_var = malloc(sizeof(account_group_update_dto_t));
    if (!account_group_update_dto_local_var) {
        return NULL;
    }
    account_group_update_dto_local_var->title = title;
    account_group_update_dto_local_var->description = description;
    account_group_update_dto_local_var->parent_account_group_id = parent_account_group_id;

    return account_group_update_dto_local_var;
}


void account_group_update_dto_free(account_group_update_dto_t *account_group_update_dto) {
    if(NULL == account_group_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_group_update_dto->title) {
        free(account_group_update_dto->title);
        account_group_update_dto->title = NULL;
    }
    if (account_group_update_dto->description) {
        free(account_group_update_dto->description);
        account_group_update_dto->description = NULL;
    }
    if (account_group_update_dto->parent_account_group_id) {
        free(account_group_update_dto->parent_account_group_id);
        account_group_update_dto->parent_account_group_id = NULL;
    }
    free(account_group_update_dto);
}

cJSON *account_group_update_dto_convertToJSON(account_group_update_dto_t *account_group_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_group_update_dto->title
    if(account_group_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", account_group_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // account_group_update_dto->description
    if(account_group_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", account_group_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // account_group_update_dto->parent_account_group_id
    if(account_group_update_dto->parent_account_group_id) {
    if(cJSON_AddStringToObject(item, "parentAccountGroupId", account_group_update_dto->parent_account_group_id) == NULL) {
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

account_group_update_dto_t *account_group_update_dto_parseFromJSON(cJSON *account_group_update_dtoJSON){

    account_group_update_dto_t *account_group_update_dto_local_var = NULL;

    // account_group_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(account_group_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // account_group_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(account_group_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // account_group_update_dto->parent_account_group_id
    cJSON *parent_account_group_id = cJSON_GetObjectItemCaseSensitive(account_group_update_dtoJSON, "parentAccountGroupId");
    if (parent_account_group_id) { 
    if(!cJSON_IsString(parent_account_group_id) && !cJSON_IsNull(parent_account_group_id))
    {
    goto end; //String
    }
    }


    account_group_update_dto_local_var = account_group_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        parent_account_group_id && !cJSON_IsNull(parent_account_group_id) ? strdup(parent_account_group_id->valuestring) : NULL
        );

    return account_group_update_dto_local_var;
end:
    return NULL;

}
