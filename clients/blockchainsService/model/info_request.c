#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "info_request.h"



info_request_t *info_request_create(
    char *new_email,
    char *new_password,
    char *old_password
    ) {
    info_request_t *info_request_local_var = malloc(sizeof(info_request_t));
    if (!info_request_local_var) {
        return NULL;
    }
    info_request_local_var->new_email = new_email;
    info_request_local_var->new_password = new_password;
    info_request_local_var->old_password = old_password;

    return info_request_local_var;
}


void info_request_free(info_request_t *info_request) {
    if(NULL == info_request){
        return ;
    }
    listEntry_t *listEntry;
    if (info_request->new_email) {
        free(info_request->new_email);
        info_request->new_email = NULL;
    }
    if (info_request->new_password) {
        free(info_request->new_password);
        info_request->new_password = NULL;
    }
    if (info_request->old_password) {
        free(info_request->old_password);
        info_request->old_password = NULL;
    }
    free(info_request);
}

cJSON *info_request_convertToJSON(info_request_t *info_request) {
    cJSON *item = cJSON_CreateObject();

    // info_request->new_email
    if(info_request->new_email) {
    if(cJSON_AddStringToObject(item, "newEmail", info_request->new_email) == NULL) {
    goto fail; //String
    }
    }


    // info_request->new_password
    if(info_request->new_password) {
    if(cJSON_AddStringToObject(item, "newPassword", info_request->new_password) == NULL) {
    goto fail; //String
    }
    }


    // info_request->old_password
    if(info_request->old_password) {
    if(cJSON_AddStringToObject(item, "oldPassword", info_request->old_password) == NULL) {
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

info_request_t *info_request_parseFromJSON(cJSON *info_requestJSON){

    info_request_t *info_request_local_var = NULL;

    // info_request->new_email
    cJSON *new_email = cJSON_GetObjectItemCaseSensitive(info_requestJSON, "newEmail");
    if (new_email) { 
    if(!cJSON_IsString(new_email) && !cJSON_IsNull(new_email))
    {
    goto end; //String
    }
    }

    // info_request->new_password
    cJSON *new_password = cJSON_GetObjectItemCaseSensitive(info_requestJSON, "newPassword");
    if (new_password) { 
    if(!cJSON_IsString(new_password) && !cJSON_IsNull(new_password))
    {
    goto end; //String
    }
    }

    // info_request->old_password
    cJSON *old_password = cJSON_GetObjectItemCaseSensitive(info_requestJSON, "oldPassword");
    if (old_password) { 
    if(!cJSON_IsString(old_password) && !cJSON_IsNull(old_password))
    {
    goto end; //String
    }
    }


    info_request_local_var = info_request_create (
        new_email && !cJSON_IsNull(new_email) ? strdup(new_email->valuestring) : NULL,
        new_password && !cJSON_IsNull(new_password) ? strdup(new_password->valuestring) : NULL,
        old_password && !cJSON_IsNull(old_password) ? strdup(old_password->valuestring) : NULL
        );

    return info_request_local_var;
end:
    return NULL;

}
