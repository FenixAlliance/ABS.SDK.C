#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_user_password_dto.h"



set_user_password_dto_t *set_user_password_dto_create(
    char *new_password
    ) {
    set_user_password_dto_t *set_user_password_dto_local_var = malloc(sizeof(set_user_password_dto_t));
    if (!set_user_password_dto_local_var) {
        return NULL;
    }
    set_user_password_dto_local_var->new_password = new_password;

    return set_user_password_dto_local_var;
}


void set_user_password_dto_free(set_user_password_dto_t *set_user_password_dto) {
    if(NULL == set_user_password_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (set_user_password_dto->new_password) {
        free(set_user_password_dto->new_password);
        set_user_password_dto->new_password = NULL;
    }
    free(set_user_password_dto);
}

cJSON *set_user_password_dto_convertToJSON(set_user_password_dto_t *set_user_password_dto) {
    cJSON *item = cJSON_CreateObject();

    // set_user_password_dto->new_password
    if (!set_user_password_dto->new_password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "newPassword", set_user_password_dto->new_password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

set_user_password_dto_t *set_user_password_dto_parseFromJSON(cJSON *set_user_password_dtoJSON){

    set_user_password_dto_t *set_user_password_dto_local_var = NULL;

    // set_user_password_dto->new_password
    cJSON *new_password = cJSON_GetObjectItemCaseSensitive(set_user_password_dtoJSON, "newPassword");
    if (!new_password) {
        goto end;
    }

    
    if(!cJSON_IsString(new_password))
    {
    goto end; //String
    }


    set_user_password_dto_local_var = set_user_password_dto_create (
        strdup(new_password->valuestring)
        );

    return set_user_password_dto_local_var;
end:
    return NULL;

}
