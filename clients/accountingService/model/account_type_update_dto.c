#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_type_update_dto.h"



account_type_update_dto_t *account_type_update_dto_create(
    char *name,
    char *description
    ) {
    account_type_update_dto_t *account_type_update_dto_local_var = malloc(sizeof(account_type_update_dto_t));
    if (!account_type_update_dto_local_var) {
        return NULL;
    }
    account_type_update_dto_local_var->name = name;
    account_type_update_dto_local_var->description = description;

    return account_type_update_dto_local_var;
}


void account_type_update_dto_free(account_type_update_dto_t *account_type_update_dto) {
    if(NULL == account_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_type_update_dto->name) {
        free(account_type_update_dto->name);
        account_type_update_dto->name = NULL;
    }
    if (account_type_update_dto->description) {
        free(account_type_update_dto->description);
        account_type_update_dto->description = NULL;
    }
    free(account_type_update_dto);
}

cJSON *account_type_update_dto_convertToJSON(account_type_update_dto_t *account_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_type_update_dto->name
    if(account_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", account_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // account_type_update_dto->description
    if(account_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", account_type_update_dto->description) == NULL) {
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

account_type_update_dto_t *account_type_update_dto_parseFromJSON(cJSON *account_type_update_dtoJSON){

    account_type_update_dto_t *account_type_update_dto_local_var = NULL;

    // account_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(account_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    account_type_update_dto_local_var = account_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return account_type_update_dto_local_var;
end:
    return NULL;

}
