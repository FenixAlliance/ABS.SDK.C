#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "info_response.h"



info_response_t *info_response_create(
    char *email,
    int is_email_confirmed
    ) {
    info_response_t *info_response_local_var = malloc(sizeof(info_response_t));
    if (!info_response_local_var) {
        return NULL;
    }
    info_response_local_var->email = email;
    info_response_local_var->is_email_confirmed = is_email_confirmed;

    return info_response_local_var;
}


void info_response_free(info_response_t *info_response) {
    if(NULL == info_response){
        return ;
    }
    listEntry_t *listEntry;
    if (info_response->email) {
        free(info_response->email);
        info_response->email = NULL;
    }
    free(info_response);
}

cJSON *info_response_convertToJSON(info_response_t *info_response) {
    cJSON *item = cJSON_CreateObject();

    // info_response->email
    if (!info_response->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", info_response->email) == NULL) {
    goto fail; //String
    }


    // info_response->is_email_confirmed
    if (!info_response->is_email_confirmed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "isEmailConfirmed", info_response->is_email_confirmed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

info_response_t *info_response_parseFromJSON(cJSON *info_responseJSON){

    info_response_t *info_response_local_var = NULL;

    // info_response->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(info_responseJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // info_response->is_email_confirmed
    cJSON *is_email_confirmed = cJSON_GetObjectItemCaseSensitive(info_responseJSON, "isEmailConfirmed");
    if (!is_email_confirmed) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_email_confirmed))
    {
    goto end; //Bool
    }


    info_response_local_var = info_response_create (
        strdup(email->valuestring),
        is_email_confirmed->valueint
        );

    return info_response_local_var;
end:
    return NULL;

}
