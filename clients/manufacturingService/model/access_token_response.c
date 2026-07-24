#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "access_token_response.h"



access_token_response_t *access_token_response_create(
    char *token_type,
    char *access_token,
    long expires_in,
    char *refresh_token
    ) {
    access_token_response_t *access_token_response_local_var = malloc(sizeof(access_token_response_t));
    if (!access_token_response_local_var) {
        return NULL;
    }
    access_token_response_local_var->token_type = token_type;
    access_token_response_local_var->access_token = access_token;
    access_token_response_local_var->expires_in = expires_in;
    access_token_response_local_var->refresh_token = refresh_token;

    return access_token_response_local_var;
}


void access_token_response_free(access_token_response_t *access_token_response) {
    if(NULL == access_token_response){
        return ;
    }
    listEntry_t *listEntry;
    if (access_token_response->token_type) {
        free(access_token_response->token_type);
        access_token_response->token_type = NULL;
    }
    if (access_token_response->access_token) {
        free(access_token_response->access_token);
        access_token_response->access_token = NULL;
    }
    if (access_token_response->refresh_token) {
        free(access_token_response->refresh_token);
        access_token_response->refresh_token = NULL;
    }
    free(access_token_response);
}

cJSON *access_token_response_convertToJSON(access_token_response_t *access_token_response) {
    cJSON *item = cJSON_CreateObject();

    // access_token_response->token_type
    if(access_token_response->token_type) {
    if(cJSON_AddStringToObject(item, "tokenType", access_token_response->token_type) == NULL) {
    goto fail; //String
    }
    }


    // access_token_response->access_token
    if (!access_token_response->access_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "accessToken", access_token_response->access_token) == NULL) {
    goto fail; //String
    }


    // access_token_response->expires_in
    if (!access_token_response->expires_in) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "expiresIn", access_token_response->expires_in) == NULL) {
    goto fail; //Numeric
    }


    // access_token_response->refresh_token
    if (!access_token_response->refresh_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "refreshToken", access_token_response->refresh_token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

access_token_response_t *access_token_response_parseFromJSON(cJSON *access_token_responseJSON){

    access_token_response_t *access_token_response_local_var = NULL;

    // access_token_response->token_type
    cJSON *token_type = cJSON_GetObjectItemCaseSensitive(access_token_responseJSON, "tokenType");
    if (token_type) { 
    if(!cJSON_IsString(token_type) && !cJSON_IsNull(token_type))
    {
    goto end; //String
    }
    }

    // access_token_response->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(access_token_responseJSON, "accessToken");
    if (!access_token) {
        goto end;
    }

    
    if(!cJSON_IsString(access_token))
    {
    goto end; //String
    }

    // access_token_response->expires_in
    cJSON *expires_in = cJSON_GetObjectItemCaseSensitive(access_token_responseJSON, "expiresIn");
    if (!expires_in) {
        goto end;
    }

    
    if(!cJSON_IsNumber(expires_in))
    {
    goto end; //Numeric
    }

    // access_token_response->refresh_token
    cJSON *refresh_token = cJSON_GetObjectItemCaseSensitive(access_token_responseJSON, "refreshToken");
    if (!refresh_token) {
        goto end;
    }

    
    if(!cJSON_IsString(refresh_token))
    {
    goto end; //String
    }


    access_token_response_local_var = access_token_response_create (
        token_type && !cJSON_IsNull(token_type) ? strdup(token_type->valuestring) : NULL,
        strdup(access_token->valuestring),
        expires_in->valuedouble,
        strdup(refresh_token->valuestring)
        );

    return access_token_response_local_var;
end:
    return NULL;

}
