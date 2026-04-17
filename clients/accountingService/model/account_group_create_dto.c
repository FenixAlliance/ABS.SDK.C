#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_group_create_dto.h"



account_group_create_dto_t *account_group_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *parent_account_group_id
    ) {
    account_group_create_dto_t *account_group_create_dto_local_var = malloc(sizeof(account_group_create_dto_t));
    if (!account_group_create_dto_local_var) {
        return NULL;
    }
    account_group_create_dto_local_var->id = id;
    account_group_create_dto_local_var->timestamp = timestamp;
    account_group_create_dto_local_var->title = title;
    account_group_create_dto_local_var->description = description;
    account_group_create_dto_local_var->parent_account_group_id = parent_account_group_id;

    return account_group_create_dto_local_var;
}


void account_group_create_dto_free(account_group_create_dto_t *account_group_create_dto) {
    if(NULL == account_group_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_group_create_dto->id) {
        free(account_group_create_dto->id);
        account_group_create_dto->id = NULL;
    }
    if (account_group_create_dto->timestamp) {
        free(account_group_create_dto->timestamp);
        account_group_create_dto->timestamp = NULL;
    }
    if (account_group_create_dto->title) {
        free(account_group_create_dto->title);
        account_group_create_dto->title = NULL;
    }
    if (account_group_create_dto->description) {
        free(account_group_create_dto->description);
        account_group_create_dto->description = NULL;
    }
    if (account_group_create_dto->parent_account_group_id) {
        free(account_group_create_dto->parent_account_group_id);
        account_group_create_dto->parent_account_group_id = NULL;
    }
    free(account_group_create_dto);
}

cJSON *account_group_create_dto_convertToJSON(account_group_create_dto_t *account_group_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_group_create_dto->id
    if(account_group_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", account_group_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // account_group_create_dto->timestamp
    if(account_group_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_group_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_group_create_dto->title
    if(account_group_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", account_group_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // account_group_create_dto->description
    if(account_group_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", account_group_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // account_group_create_dto->parent_account_group_id
    if(account_group_create_dto->parent_account_group_id) {
    if(cJSON_AddStringToObject(item, "parentAccountGroupId", account_group_create_dto->parent_account_group_id) == NULL) {
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

account_group_create_dto_t *account_group_create_dto_parseFromJSON(cJSON *account_group_create_dtoJSON){

    account_group_create_dto_t *account_group_create_dto_local_var = NULL;

    // account_group_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(account_group_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // account_group_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_group_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_group_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(account_group_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // account_group_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(account_group_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // account_group_create_dto->parent_account_group_id
    cJSON *parent_account_group_id = cJSON_GetObjectItemCaseSensitive(account_group_create_dtoJSON, "parentAccountGroupId");
    if (parent_account_group_id) { 
    if(!cJSON_IsString(parent_account_group_id) && !cJSON_IsNull(parent_account_group_id))
    {
    goto end; //String
    }
    }


    account_group_create_dto_local_var = account_group_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        parent_account_group_id && !cJSON_IsNull(parent_account_group_id) ? strdup(parent_account_group_id->valuestring) : NULL
        );

    return account_group_create_dto_local_var;
end:
    return NULL;

}
