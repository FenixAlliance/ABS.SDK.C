#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reset_password_request.h"



reset_password_request_t *reset_password_request_create(
    char *email,
    char *reset_code,
    char *new_password
    ) {
    reset_password_request_t *reset_password_request_local_var = malloc(sizeof(reset_password_request_t));
    if (!reset_password_request_local_var) {
        return NULL;
    }
    reset_password_request_local_var->email = email;
    reset_password_request_local_var->reset_code = reset_code;
    reset_password_request_local_var->new_password = new_password;

    return reset_password_request_local_var;
}


void reset_password_request_free(reset_password_request_t *reset_password_request) {
    if(NULL == reset_password_request){
        return ;
    }
    listEntry_t *listEntry;
    if (reset_password_request->email) {
        free(reset_password_request->email);
        reset_password_request->email = NULL;
    }
    if (reset_password_request->reset_code) {
        free(reset_password_request->reset_code);
        reset_password_request->reset_code = NULL;
    }
    if (reset_password_request->new_password) {
        free(reset_password_request->new_password);
        reset_password_request->new_password = NULL;
    }
    free(reset_password_request);
}

cJSON *reset_password_request_convertToJSON(reset_password_request_t *reset_password_request) {
    cJSON *item = cJSON_CreateObject();

    // reset_password_request->email
    if (!reset_password_request->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", reset_password_request->email) == NULL) {
    goto fail; //String
    }


    // reset_password_request->reset_code
    if (!reset_password_request->reset_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "resetCode", reset_password_request->reset_code) == NULL) {
    goto fail; //String
    }


    // reset_password_request->new_password
    if (!reset_password_request->new_password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "newPassword", reset_password_request->new_password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

reset_password_request_t *reset_password_request_parseFromJSON(cJSON *reset_password_requestJSON){

    reset_password_request_t *reset_password_request_local_var = NULL;

    // reset_password_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(reset_password_requestJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // reset_password_request->reset_code
    cJSON *reset_code = cJSON_GetObjectItemCaseSensitive(reset_password_requestJSON, "resetCode");
    if (!reset_code) {
        goto end;
    }

    
    if(!cJSON_IsString(reset_code))
    {
    goto end; //String
    }

    // reset_password_request->new_password
    cJSON *new_password = cJSON_GetObjectItemCaseSensitive(reset_password_requestJSON, "newPassword");
    if (!new_password) {
        goto end;
    }

    
    if(!cJSON_IsString(new_password))
    {
    goto end; //String
    }


    reset_password_request_local_var = reset_password_request_create (
        strdup(email->valuestring),
        strdup(reset_code->valuestring),
        strdup(new_password->valuestring)
        );

    return reset_password_request_local_var;
end:
    return NULL;

}
