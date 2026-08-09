#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resend_confirmation_email_request.h"



resend_confirmation_email_request_t *resend_confirmation_email_request_create(
    char *email
    ) {
    resend_confirmation_email_request_t *resend_confirmation_email_request_local_var = malloc(sizeof(resend_confirmation_email_request_t));
    if (!resend_confirmation_email_request_local_var) {
        return NULL;
    }
    resend_confirmation_email_request_local_var->email = email;

    return resend_confirmation_email_request_local_var;
}


void resend_confirmation_email_request_free(resend_confirmation_email_request_t *resend_confirmation_email_request) {
    if(NULL == resend_confirmation_email_request){
        return ;
    }
    listEntry_t *listEntry;
    if (resend_confirmation_email_request->email) {
        free(resend_confirmation_email_request->email);
        resend_confirmation_email_request->email = NULL;
    }
    free(resend_confirmation_email_request);
}

cJSON *resend_confirmation_email_request_convertToJSON(resend_confirmation_email_request_t *resend_confirmation_email_request) {
    cJSON *item = cJSON_CreateObject();

    // resend_confirmation_email_request->email
    if (!resend_confirmation_email_request->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", resend_confirmation_email_request->email) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

resend_confirmation_email_request_t *resend_confirmation_email_request_parseFromJSON(cJSON *resend_confirmation_email_requestJSON){

    resend_confirmation_email_request_t *resend_confirmation_email_request_local_var = NULL;

    // resend_confirmation_email_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(resend_confirmation_email_requestJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }


    resend_confirmation_email_request_local_var = resend_confirmation_email_request_create (
        strdup(email->valuestring)
        );

    return resend_confirmation_email_request_local_var;
end:
    return NULL;

}
