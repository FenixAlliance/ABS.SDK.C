#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "refresh_request.h"



refresh_request_t *refresh_request_create(
    char *refresh_token
    ) {
    refresh_request_t *refresh_request_local_var = malloc(sizeof(refresh_request_t));
    if (!refresh_request_local_var) {
        return NULL;
    }
    refresh_request_local_var->refresh_token = refresh_token;

    return refresh_request_local_var;
}


void refresh_request_free(refresh_request_t *refresh_request) {
    if(NULL == refresh_request){
        return ;
    }
    listEntry_t *listEntry;
    if (refresh_request->refresh_token) {
        free(refresh_request->refresh_token);
        refresh_request->refresh_token = NULL;
    }
    free(refresh_request);
}

cJSON *refresh_request_convertToJSON(refresh_request_t *refresh_request) {
    cJSON *item = cJSON_CreateObject();

    // refresh_request->refresh_token
    if (!refresh_request->refresh_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "refreshToken", refresh_request->refresh_token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

refresh_request_t *refresh_request_parseFromJSON(cJSON *refresh_requestJSON){

    refresh_request_t *refresh_request_local_var = NULL;

    // refresh_request->refresh_token
    cJSON *refresh_token = cJSON_GetObjectItemCaseSensitive(refresh_requestJSON, "refreshToken");
    if (!refresh_token) {
        goto end;
    }

    
    if(!cJSON_IsString(refresh_token))
    {
    goto end; //String
    }


    refresh_request_local_var = refresh_request_create (
        strdup(refresh_token->valuestring)
        );

    return refresh_request_local_var;
end:
    return NULL;

}
