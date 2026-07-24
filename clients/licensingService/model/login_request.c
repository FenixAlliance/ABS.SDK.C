#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_request.h"



login_request_t *login_request_create(
    char *email,
    char *password,
    char *two_factor_code,
    char *two_factor_recovery_code
    ) {
    login_request_t *login_request_local_var = malloc(sizeof(login_request_t));
    if (!login_request_local_var) {
        return NULL;
    }
    login_request_local_var->email = email;
    login_request_local_var->password = password;
    login_request_local_var->two_factor_code = two_factor_code;
    login_request_local_var->two_factor_recovery_code = two_factor_recovery_code;

    return login_request_local_var;
}


void login_request_free(login_request_t *login_request) {
    if(NULL == login_request){
        return ;
    }
    listEntry_t *listEntry;
    if (login_request->email) {
        free(login_request->email);
        login_request->email = NULL;
    }
    if (login_request->password) {
        free(login_request->password);
        login_request->password = NULL;
    }
    if (login_request->two_factor_code) {
        free(login_request->two_factor_code);
        login_request->two_factor_code = NULL;
    }
    if (login_request->two_factor_recovery_code) {
        free(login_request->two_factor_recovery_code);
        login_request->two_factor_recovery_code = NULL;
    }
    free(login_request);
}

cJSON *login_request_convertToJSON(login_request_t *login_request) {
    cJSON *item = cJSON_CreateObject();

    // login_request->email
    if (!login_request->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", login_request->email) == NULL) {
    goto fail; //String
    }


    // login_request->password
    if (!login_request->password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "password", login_request->password) == NULL) {
    goto fail; //String
    }


    // login_request->two_factor_code
    if(login_request->two_factor_code) {
    if(cJSON_AddStringToObject(item, "twoFactorCode", login_request->two_factor_code) == NULL) {
    goto fail; //String
    }
    }


    // login_request->two_factor_recovery_code
    if(login_request->two_factor_recovery_code) {
    if(cJSON_AddStringToObject(item, "twoFactorRecoveryCode", login_request->two_factor_recovery_code) == NULL) {
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

login_request_t *login_request_parseFromJSON(cJSON *login_requestJSON){

    login_request_t *login_request_local_var = NULL;

    // login_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(login_requestJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // login_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(login_requestJSON, "password");
    if (!password) {
        goto end;
    }

    
    if(!cJSON_IsString(password))
    {
    goto end; //String
    }

    // login_request->two_factor_code
    cJSON *two_factor_code = cJSON_GetObjectItemCaseSensitive(login_requestJSON, "twoFactorCode");
    if (two_factor_code) { 
    if(!cJSON_IsString(two_factor_code) && !cJSON_IsNull(two_factor_code))
    {
    goto end; //String
    }
    }

    // login_request->two_factor_recovery_code
    cJSON *two_factor_recovery_code = cJSON_GetObjectItemCaseSensitive(login_requestJSON, "twoFactorRecoveryCode");
    if (two_factor_recovery_code) { 
    if(!cJSON_IsString(two_factor_recovery_code) && !cJSON_IsNull(two_factor_recovery_code))
    {
    goto end; //String
    }
    }


    login_request_local_var = login_request_create (
        strdup(email->valuestring),
        strdup(password->valuestring),
        two_factor_code && !cJSON_IsNull(two_factor_code) ? strdup(two_factor_code->valuestring) : NULL,
        two_factor_recovery_code && !cJSON_IsNull(two_factor_recovery_code) ? strdup(two_factor_recovery_code->valuestring) : NULL
        );

    return login_request_local_var;
end:
    return NULL;

}
