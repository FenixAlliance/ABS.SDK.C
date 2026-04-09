#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "register_request.h"



register_request_t *register_request_create(
    char *email,
    char *password
    ) {
    register_request_t *register_request_local_var = malloc(sizeof(register_request_t));
    if (!register_request_local_var) {
        return NULL;
    }
    register_request_local_var->email = email;
    register_request_local_var->password = password;

    return register_request_local_var;
}


void register_request_free(register_request_t *register_request) {
    if(NULL == register_request){
        return ;
    }
    listEntry_t *listEntry;
    if (register_request->email) {
        free(register_request->email);
        register_request->email = NULL;
    }
    if (register_request->password) {
        free(register_request->password);
        register_request->password = NULL;
    }
    free(register_request);
}

cJSON *register_request_convertToJSON(register_request_t *register_request) {
    cJSON *item = cJSON_CreateObject();

    // register_request->email
    if (!register_request->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", register_request->email) == NULL) {
    goto fail; //String
    }


    // register_request->password
    if (!register_request->password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "password", register_request->password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

register_request_t *register_request_parseFromJSON(cJSON *register_requestJSON){

    register_request_t *register_request_local_var = NULL;

    // register_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(register_requestJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // register_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(register_requestJSON, "password");
    if (!password) {
        goto end;
    }

    
    if(!cJSON_IsString(password))
    {
    goto end; //String
    }


    register_request_local_var = register_request_create (
        strdup(email->valuestring),
        strdup(password->valuestring)
        );

    return register_request_local_var;
end:
    return NULL;

}
