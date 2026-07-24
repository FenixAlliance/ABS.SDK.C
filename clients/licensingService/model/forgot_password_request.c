#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "forgot_password_request.h"



forgot_password_request_t *forgot_password_request_create(
    char *email
    ) {
    forgot_password_request_t *forgot_password_request_local_var = malloc(sizeof(forgot_password_request_t));
    if (!forgot_password_request_local_var) {
        return NULL;
    }
    forgot_password_request_local_var->email = email;

    return forgot_password_request_local_var;
}


void forgot_password_request_free(forgot_password_request_t *forgot_password_request) {
    if(NULL == forgot_password_request){
        return ;
    }
    listEntry_t *listEntry;
    if (forgot_password_request->email) {
        free(forgot_password_request->email);
        forgot_password_request->email = NULL;
    }
    free(forgot_password_request);
}

cJSON *forgot_password_request_convertToJSON(forgot_password_request_t *forgot_password_request) {
    cJSON *item = cJSON_CreateObject();

    // forgot_password_request->email
    if (!forgot_password_request->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", forgot_password_request->email) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

forgot_password_request_t *forgot_password_request_parseFromJSON(cJSON *forgot_password_requestJSON){

    forgot_password_request_t *forgot_password_request_local_var = NULL;

    // forgot_password_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(forgot_password_requestJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }


    forgot_password_request_local_var = forgot_password_request_create (
        strdup(email->valuestring)
        );

    return forgot_password_request_local_var;
end:
    return NULL;

}
