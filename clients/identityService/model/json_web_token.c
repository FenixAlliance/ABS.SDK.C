#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "json_web_token.h"



json_web_token_t *json_web_token_create(
    json_web_token_header_t *header,
    json_web_token_payload_t *payload,
    char *signature,
    char *token_type,
    long expires_in,
    char *access_token
    ) {
    json_web_token_t *json_web_token_local_var = malloc(sizeof(json_web_token_t));
    if (!json_web_token_local_var) {
        return NULL;
    }
    json_web_token_local_var->header = header;
    json_web_token_local_var->payload = payload;
    json_web_token_local_var->signature = signature;
    json_web_token_local_var->token_type = token_type;
    json_web_token_local_var->expires_in = expires_in;
    json_web_token_local_var->access_token = access_token;

    return json_web_token_local_var;
}


void json_web_token_free(json_web_token_t *json_web_token) {
    if(NULL == json_web_token){
        return ;
    }
    listEntry_t *listEntry;
    if (json_web_token->header) {
        json_web_token_header_free(json_web_token->header);
        json_web_token->header = NULL;
    }
    if (json_web_token->payload) {
        json_web_token_payload_free(json_web_token->payload);
        json_web_token->payload = NULL;
    }
    if (json_web_token->signature) {
        free(json_web_token->signature);
        json_web_token->signature = NULL;
    }
    if (json_web_token->token_type) {
        free(json_web_token->token_type);
        json_web_token->token_type = NULL;
    }
    if (json_web_token->access_token) {
        free(json_web_token->access_token);
        json_web_token->access_token = NULL;
    }
    free(json_web_token);
}

cJSON *json_web_token_convertToJSON(json_web_token_t *json_web_token) {
    cJSON *item = cJSON_CreateObject();

    // json_web_token->header
    if(json_web_token->header) {
    cJSON *header_local_JSON = json_web_token_header_convertToJSON(json_web_token->header);
    if(header_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "header", header_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // json_web_token->payload
    if(json_web_token->payload) {
    cJSON *payload_local_JSON = json_web_token_payload_convertToJSON(json_web_token->payload);
    if(payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payload", payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // json_web_token->signature
    if(json_web_token->signature) {
    if(cJSON_AddStringToObject(item, "signature", json_web_token->signature) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token->token_type
    if(json_web_token->token_type) {
    if(cJSON_AddStringToObject(item, "tokenType", json_web_token->token_type) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token->expires_in
    if(json_web_token->expires_in) {
    if(cJSON_AddNumberToObject(item, "expiresIn", json_web_token->expires_in) == NULL) {
    goto fail; //Numeric
    }
    }


    // json_web_token->access_token
    if(json_web_token->access_token) {
    if(cJSON_AddStringToObject(item, "accessToken", json_web_token->access_token) == NULL) {
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

json_web_token_t *json_web_token_parseFromJSON(cJSON *json_web_tokenJSON){

    json_web_token_t *json_web_token_local_var = NULL;

    // define the local variable for json_web_token->header
    json_web_token_header_t *header_local_nonprim = NULL;

    // define the local variable for json_web_token->payload
    json_web_token_payload_t *payload_local_nonprim = NULL;

    // json_web_token->header
    cJSON *header = cJSON_GetObjectItemCaseSensitive(json_web_tokenJSON, "header");
    if (header) { 
    header_local_nonprim = json_web_token_header_parseFromJSON(header); //nonprimitive
    }

    // json_web_token->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(json_web_tokenJSON, "payload");
    if (payload) { 
    payload_local_nonprim = json_web_token_payload_parseFromJSON(payload); //nonprimitive
    }

    // json_web_token->signature
    cJSON *signature = cJSON_GetObjectItemCaseSensitive(json_web_tokenJSON, "signature");
    if (signature) { 
    if(!cJSON_IsString(signature) && !cJSON_IsNull(signature))
    {
    goto end; //String
    }
    }

    // json_web_token->token_type
    cJSON *token_type = cJSON_GetObjectItemCaseSensitive(json_web_tokenJSON, "tokenType");
    if (token_type) { 
    if(!cJSON_IsString(token_type) && !cJSON_IsNull(token_type))
    {
    goto end; //String
    }
    }

    // json_web_token->expires_in
    cJSON *expires_in = cJSON_GetObjectItemCaseSensitive(json_web_tokenJSON, "expiresIn");
    if (expires_in) { 
    if(!cJSON_IsNumber(expires_in))
    {
    goto end; //Numeric
    }
    }

    // json_web_token->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(json_web_tokenJSON, "accessToken");
    if (access_token) { 
    if(!cJSON_IsString(access_token) && !cJSON_IsNull(access_token))
    {
    goto end; //String
    }
    }


    json_web_token_local_var = json_web_token_create (
        header ? header_local_nonprim : NULL,
        payload ? payload_local_nonprim : NULL,
        signature && !cJSON_IsNull(signature) ? strdup(signature->valuestring) : NULL,
        token_type && !cJSON_IsNull(token_type) ? strdup(token_type->valuestring) : NULL,
        expires_in ? expires_in->valuedouble : 0,
        access_token && !cJSON_IsNull(access_token) ? strdup(access_token->valuestring) : NULL
        );

    return json_web_token_local_var;
end:
    if (header_local_nonprim) {
        json_web_token_header_free(header_local_nonprim);
        header_local_nonprim = NULL;
    }
    if (payload_local_nonprim) {
        json_web_token_payload_free(payload_local_nonprim);
        payload_local_nonprim = NULL;
    }
    return NULL;

}
