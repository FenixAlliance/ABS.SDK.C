#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_auth_token_request.h"



o_auth_token_request_t *o_auth_token_request_create(
    char *client_id,
    char *client_secret,
    char *grant_type,
    char *requested_scopes,
    char *requested_enrollment
    ) {
    o_auth_token_request_t *o_auth_token_request_local_var = malloc(sizeof(o_auth_token_request_t));
    if (!o_auth_token_request_local_var) {
        return NULL;
    }
    o_auth_token_request_local_var->client_id = client_id;
    o_auth_token_request_local_var->client_secret = client_secret;
    o_auth_token_request_local_var->grant_type = grant_type;
    o_auth_token_request_local_var->requested_scopes = requested_scopes;
    o_auth_token_request_local_var->requested_enrollment = requested_enrollment;

    return o_auth_token_request_local_var;
}


void o_auth_token_request_free(o_auth_token_request_t *o_auth_token_request) {
    if(NULL == o_auth_token_request){
        return ;
    }
    listEntry_t *listEntry;
    if (o_auth_token_request->client_id) {
        free(o_auth_token_request->client_id);
        o_auth_token_request->client_id = NULL;
    }
    if (o_auth_token_request->client_secret) {
        free(o_auth_token_request->client_secret);
        o_auth_token_request->client_secret = NULL;
    }
    if (o_auth_token_request->grant_type) {
        free(o_auth_token_request->grant_type);
        o_auth_token_request->grant_type = NULL;
    }
    if (o_auth_token_request->requested_scopes) {
        free(o_auth_token_request->requested_scopes);
        o_auth_token_request->requested_scopes = NULL;
    }
    if (o_auth_token_request->requested_enrollment) {
        free(o_auth_token_request->requested_enrollment);
        o_auth_token_request->requested_enrollment = NULL;
    }
    free(o_auth_token_request);
}

cJSON *o_auth_token_request_convertToJSON(o_auth_token_request_t *o_auth_token_request) {
    cJSON *item = cJSON_CreateObject();

    // o_auth_token_request->client_id
    if(o_auth_token_request->client_id) {
    if(cJSON_AddStringToObject(item, "client_id", o_auth_token_request->client_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_token_request->client_secret
    if(o_auth_token_request->client_secret) {
    if(cJSON_AddStringToObject(item, "client_secret", o_auth_token_request->client_secret) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_token_request->grant_type
    if(o_auth_token_request->grant_type) {
    if(cJSON_AddStringToObject(item, "grant_type", o_auth_token_request->grant_type) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_token_request->requested_scopes
    if(o_auth_token_request->requested_scopes) {
    if(cJSON_AddStringToObject(item, "requested_scopes", o_auth_token_request->requested_scopes) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_token_request->requested_enrollment
    if(o_auth_token_request->requested_enrollment) {
    if(cJSON_AddStringToObject(item, "requested_enrollment", o_auth_token_request->requested_enrollment) == NULL) {
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

o_auth_token_request_t *o_auth_token_request_parseFromJSON(cJSON *o_auth_token_requestJSON){

    o_auth_token_request_t *o_auth_token_request_local_var = NULL;

    // o_auth_token_request->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(o_auth_token_requestJSON, "client_id");
    if (client_id) { 
    if(!cJSON_IsString(client_id) && !cJSON_IsNull(client_id))
    {
    goto end; //String
    }
    }

    // o_auth_token_request->client_secret
    cJSON *client_secret = cJSON_GetObjectItemCaseSensitive(o_auth_token_requestJSON, "client_secret");
    if (client_secret) { 
    if(!cJSON_IsString(client_secret) && !cJSON_IsNull(client_secret))
    {
    goto end; //String
    }
    }

    // o_auth_token_request->grant_type
    cJSON *grant_type = cJSON_GetObjectItemCaseSensitive(o_auth_token_requestJSON, "grant_type");
    if (grant_type) { 
    if(!cJSON_IsString(grant_type) && !cJSON_IsNull(grant_type))
    {
    goto end; //String
    }
    }

    // o_auth_token_request->requested_scopes
    cJSON *requested_scopes = cJSON_GetObjectItemCaseSensitive(o_auth_token_requestJSON, "requested_scopes");
    if (requested_scopes) { 
    if(!cJSON_IsString(requested_scopes) && !cJSON_IsNull(requested_scopes))
    {
    goto end; //String
    }
    }

    // o_auth_token_request->requested_enrollment
    cJSON *requested_enrollment = cJSON_GetObjectItemCaseSensitive(o_auth_token_requestJSON, "requested_enrollment");
    if (requested_enrollment) { 
    if(!cJSON_IsString(requested_enrollment) && !cJSON_IsNull(requested_enrollment))
    {
    goto end; //String
    }
    }


    o_auth_token_request_local_var = o_auth_token_request_create (
        client_id && !cJSON_IsNull(client_id) ? strdup(client_id->valuestring) : NULL,
        client_secret && !cJSON_IsNull(client_secret) ? strdup(client_secret->valuestring) : NULL,
        grant_type && !cJSON_IsNull(grant_type) ? strdup(grant_type->valuestring) : NULL,
        requested_scopes && !cJSON_IsNull(requested_scopes) ? strdup(requested_scopes->valuestring) : NULL,
        requested_enrollment && !cJSON_IsNull(requested_enrollment) ? strdup(requested_enrollment->valuestring) : NULL
        );

    return o_auth_token_request_local_var;
end:
    return NULL;

}
