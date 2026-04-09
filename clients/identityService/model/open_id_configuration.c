#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "open_id_configuration.h"



open_id_configuration_t *open_id_configuration_create(
    char *issuer,
    char *authorization_endpoint,
    char *token_endpoint,
    char *end_session_endpoint,
    char *jwks_uri,
    list_t *response_modes_supported,
    list_t *response_types_supported,
    list_t *scopes_supported,
    list_t *subject_types_supported,
    list_t *id_token_signing_alg_values_supported,
    list_t *token_endpoint_auth_methods_supported,
    list_t *claims_supported
    ) {
    open_id_configuration_t *open_id_configuration_local_var = malloc(sizeof(open_id_configuration_t));
    if (!open_id_configuration_local_var) {
        return NULL;
    }
    open_id_configuration_local_var->issuer = issuer;
    open_id_configuration_local_var->authorization_endpoint = authorization_endpoint;
    open_id_configuration_local_var->token_endpoint = token_endpoint;
    open_id_configuration_local_var->end_session_endpoint = end_session_endpoint;
    open_id_configuration_local_var->jwks_uri = jwks_uri;
    open_id_configuration_local_var->response_modes_supported = response_modes_supported;
    open_id_configuration_local_var->response_types_supported = response_types_supported;
    open_id_configuration_local_var->scopes_supported = scopes_supported;
    open_id_configuration_local_var->subject_types_supported = subject_types_supported;
    open_id_configuration_local_var->id_token_signing_alg_values_supported = id_token_signing_alg_values_supported;
    open_id_configuration_local_var->token_endpoint_auth_methods_supported = token_endpoint_auth_methods_supported;
    open_id_configuration_local_var->claims_supported = claims_supported;

    return open_id_configuration_local_var;
}


void open_id_configuration_free(open_id_configuration_t *open_id_configuration) {
    if(NULL == open_id_configuration){
        return ;
    }
    listEntry_t *listEntry;
    if (open_id_configuration->issuer) {
        free(open_id_configuration->issuer);
        open_id_configuration->issuer = NULL;
    }
    if (open_id_configuration->authorization_endpoint) {
        free(open_id_configuration->authorization_endpoint);
        open_id_configuration->authorization_endpoint = NULL;
    }
    if (open_id_configuration->token_endpoint) {
        free(open_id_configuration->token_endpoint);
        open_id_configuration->token_endpoint = NULL;
    }
    if (open_id_configuration->end_session_endpoint) {
        free(open_id_configuration->end_session_endpoint);
        open_id_configuration->end_session_endpoint = NULL;
    }
    if (open_id_configuration->jwks_uri) {
        free(open_id_configuration->jwks_uri);
        open_id_configuration->jwks_uri = NULL;
    }
    if (open_id_configuration->response_modes_supported) {
        list_ForEach(listEntry, open_id_configuration->response_modes_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->response_modes_supported);
        open_id_configuration->response_modes_supported = NULL;
    }
    if (open_id_configuration->response_types_supported) {
        list_ForEach(listEntry, open_id_configuration->response_types_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->response_types_supported);
        open_id_configuration->response_types_supported = NULL;
    }
    if (open_id_configuration->scopes_supported) {
        list_ForEach(listEntry, open_id_configuration->scopes_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->scopes_supported);
        open_id_configuration->scopes_supported = NULL;
    }
    if (open_id_configuration->subject_types_supported) {
        list_ForEach(listEntry, open_id_configuration->subject_types_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->subject_types_supported);
        open_id_configuration->subject_types_supported = NULL;
    }
    if (open_id_configuration->id_token_signing_alg_values_supported) {
        list_ForEach(listEntry, open_id_configuration->id_token_signing_alg_values_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->id_token_signing_alg_values_supported);
        open_id_configuration->id_token_signing_alg_values_supported = NULL;
    }
    if (open_id_configuration->token_endpoint_auth_methods_supported) {
        list_ForEach(listEntry, open_id_configuration->token_endpoint_auth_methods_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->token_endpoint_auth_methods_supported);
        open_id_configuration->token_endpoint_auth_methods_supported = NULL;
    }
    if (open_id_configuration->claims_supported) {
        list_ForEach(listEntry, open_id_configuration->claims_supported) {
            free(listEntry->data);
        }
        list_freeList(open_id_configuration->claims_supported);
        open_id_configuration->claims_supported = NULL;
    }
    free(open_id_configuration);
}

cJSON *open_id_configuration_convertToJSON(open_id_configuration_t *open_id_configuration) {
    cJSON *item = cJSON_CreateObject();

    // open_id_configuration->issuer
    if(open_id_configuration->issuer) {
    if(cJSON_AddStringToObject(item, "issuer", open_id_configuration->issuer) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration->authorization_endpoint
    if(open_id_configuration->authorization_endpoint) {
    if(cJSON_AddStringToObject(item, "authorizationEndpoint", open_id_configuration->authorization_endpoint) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration->token_endpoint
    if(open_id_configuration->token_endpoint) {
    if(cJSON_AddStringToObject(item, "tokenEndpoint", open_id_configuration->token_endpoint) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration->end_session_endpoint
    if(open_id_configuration->end_session_endpoint) {
    if(cJSON_AddStringToObject(item, "endSessionEndpoint", open_id_configuration->end_session_endpoint) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration->jwks_uri
    if(open_id_configuration->jwks_uri) {
    if(cJSON_AddStringToObject(item, "jwksUri", open_id_configuration->jwks_uri) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration->response_modes_supported
    if(open_id_configuration->response_modes_supported) {
    cJSON *response_modes_supported = cJSON_AddArrayToObject(item, "responseModesSupported");
    if(response_modes_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *response_modes_supportedListEntry;
    list_ForEach(response_modes_supportedListEntry, open_id_configuration->response_modes_supported) {
    if(cJSON_AddStringToObject(response_modes_supported, "", (char*)response_modes_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // open_id_configuration->response_types_supported
    if(open_id_configuration->response_types_supported) {
    cJSON *response_types_supported = cJSON_AddArrayToObject(item, "responseTypesSupported");
    if(response_types_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *response_types_supportedListEntry;
    list_ForEach(response_types_supportedListEntry, open_id_configuration->response_types_supported) {
    if(cJSON_AddStringToObject(response_types_supported, "", (char*)response_types_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // open_id_configuration->scopes_supported
    if(open_id_configuration->scopes_supported) {
    cJSON *scopes_supported = cJSON_AddArrayToObject(item, "scopesSupported");
    if(scopes_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *scopes_supportedListEntry;
    list_ForEach(scopes_supportedListEntry, open_id_configuration->scopes_supported) {
    if(cJSON_AddStringToObject(scopes_supported, "", (char*)scopes_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // open_id_configuration->subject_types_supported
    if(open_id_configuration->subject_types_supported) {
    cJSON *subject_types_supported = cJSON_AddArrayToObject(item, "subjectTypesSupported");
    if(subject_types_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *subject_types_supportedListEntry;
    list_ForEach(subject_types_supportedListEntry, open_id_configuration->subject_types_supported) {
    if(cJSON_AddStringToObject(subject_types_supported, "", (char*)subject_types_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // open_id_configuration->id_token_signing_alg_values_supported
    if(open_id_configuration->id_token_signing_alg_values_supported) {
    cJSON *id_token_signing_alg_values_supported = cJSON_AddArrayToObject(item, "idTokenSigningAlgValuesSupported");
    if(id_token_signing_alg_values_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *id_token_signing_alg_values_supportedListEntry;
    list_ForEach(id_token_signing_alg_values_supportedListEntry, open_id_configuration->id_token_signing_alg_values_supported) {
    if(cJSON_AddStringToObject(id_token_signing_alg_values_supported, "", (char*)id_token_signing_alg_values_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // open_id_configuration->token_endpoint_auth_methods_supported
    if(open_id_configuration->token_endpoint_auth_methods_supported) {
    cJSON *token_endpoint_auth_methods_supported = cJSON_AddArrayToObject(item, "tokenEndpointAuthMethodsSupported");
    if(token_endpoint_auth_methods_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *token_endpoint_auth_methods_supportedListEntry;
    list_ForEach(token_endpoint_auth_methods_supportedListEntry, open_id_configuration->token_endpoint_auth_methods_supported) {
    if(cJSON_AddStringToObject(token_endpoint_auth_methods_supported, "", (char*)token_endpoint_auth_methods_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // open_id_configuration->claims_supported
    if(open_id_configuration->claims_supported) {
    cJSON *claims_supported = cJSON_AddArrayToObject(item, "claimsSupported");
    if(claims_supported == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *claims_supportedListEntry;
    list_ForEach(claims_supportedListEntry, open_id_configuration->claims_supported) {
    if(cJSON_AddStringToObject(claims_supported, "", (char*)claims_supportedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

open_id_configuration_t *open_id_configuration_parseFromJSON(cJSON *open_id_configurationJSON){

    open_id_configuration_t *open_id_configuration_local_var = NULL;

    // define the local list for open_id_configuration->response_modes_supported
    list_t *response_modes_supportedList = NULL;

    // define the local list for open_id_configuration->response_types_supported
    list_t *response_types_supportedList = NULL;

    // define the local list for open_id_configuration->scopes_supported
    list_t *scopes_supportedList = NULL;

    // define the local list for open_id_configuration->subject_types_supported
    list_t *subject_types_supportedList = NULL;

    // define the local list for open_id_configuration->id_token_signing_alg_values_supported
    list_t *id_token_signing_alg_values_supportedList = NULL;

    // define the local list for open_id_configuration->token_endpoint_auth_methods_supported
    list_t *token_endpoint_auth_methods_supportedList = NULL;

    // define the local list for open_id_configuration->claims_supported
    list_t *claims_supportedList = NULL;

    // open_id_configuration->issuer
    cJSON *issuer = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "issuer");
    if (issuer) { 
    if(!cJSON_IsString(issuer) && !cJSON_IsNull(issuer))
    {
    goto end; //String
    }
    }

    // open_id_configuration->authorization_endpoint
    cJSON *authorization_endpoint = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "authorizationEndpoint");
    if (authorization_endpoint) { 
    if(!cJSON_IsString(authorization_endpoint) && !cJSON_IsNull(authorization_endpoint))
    {
    goto end; //String
    }
    }

    // open_id_configuration->token_endpoint
    cJSON *token_endpoint = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "tokenEndpoint");
    if (token_endpoint) { 
    if(!cJSON_IsString(token_endpoint) && !cJSON_IsNull(token_endpoint))
    {
    goto end; //String
    }
    }

    // open_id_configuration->end_session_endpoint
    cJSON *end_session_endpoint = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "endSessionEndpoint");
    if (end_session_endpoint) { 
    if(!cJSON_IsString(end_session_endpoint) && !cJSON_IsNull(end_session_endpoint))
    {
    goto end; //String
    }
    }

    // open_id_configuration->jwks_uri
    cJSON *jwks_uri = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "jwksUri");
    if (jwks_uri) { 
    if(!cJSON_IsString(jwks_uri) && !cJSON_IsNull(jwks_uri))
    {
    goto end; //String
    }
    }

    // open_id_configuration->response_modes_supported
    cJSON *response_modes_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "responseModesSupported");
    if (response_modes_supported) { 
    cJSON *response_modes_supported_local = NULL;
    if(!cJSON_IsArray(response_modes_supported)) {
        goto end;//primitive container
    }
    response_modes_supportedList = list_createList();

    cJSON_ArrayForEach(response_modes_supported_local, response_modes_supported)
    {
        if(!cJSON_IsString(response_modes_supported_local))
        {
            goto end;
        }
        list_addElement(response_modes_supportedList , strdup(response_modes_supported_local->valuestring));
    }
    }

    // open_id_configuration->response_types_supported
    cJSON *response_types_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "responseTypesSupported");
    if (response_types_supported) { 
    cJSON *response_types_supported_local = NULL;
    if(!cJSON_IsArray(response_types_supported)) {
        goto end;//primitive container
    }
    response_types_supportedList = list_createList();

    cJSON_ArrayForEach(response_types_supported_local, response_types_supported)
    {
        if(!cJSON_IsString(response_types_supported_local))
        {
            goto end;
        }
        list_addElement(response_types_supportedList , strdup(response_types_supported_local->valuestring));
    }
    }

    // open_id_configuration->scopes_supported
    cJSON *scopes_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "scopesSupported");
    if (scopes_supported) { 
    cJSON *scopes_supported_local = NULL;
    if(!cJSON_IsArray(scopes_supported)) {
        goto end;//primitive container
    }
    scopes_supportedList = list_createList();

    cJSON_ArrayForEach(scopes_supported_local, scopes_supported)
    {
        if(!cJSON_IsString(scopes_supported_local))
        {
            goto end;
        }
        list_addElement(scopes_supportedList , strdup(scopes_supported_local->valuestring));
    }
    }

    // open_id_configuration->subject_types_supported
    cJSON *subject_types_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "subjectTypesSupported");
    if (subject_types_supported) { 
    cJSON *subject_types_supported_local = NULL;
    if(!cJSON_IsArray(subject_types_supported)) {
        goto end;//primitive container
    }
    subject_types_supportedList = list_createList();

    cJSON_ArrayForEach(subject_types_supported_local, subject_types_supported)
    {
        if(!cJSON_IsString(subject_types_supported_local))
        {
            goto end;
        }
        list_addElement(subject_types_supportedList , strdup(subject_types_supported_local->valuestring));
    }
    }

    // open_id_configuration->id_token_signing_alg_values_supported
    cJSON *id_token_signing_alg_values_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "idTokenSigningAlgValuesSupported");
    if (id_token_signing_alg_values_supported) { 
    cJSON *id_token_signing_alg_values_supported_local = NULL;
    if(!cJSON_IsArray(id_token_signing_alg_values_supported)) {
        goto end;//primitive container
    }
    id_token_signing_alg_values_supportedList = list_createList();

    cJSON_ArrayForEach(id_token_signing_alg_values_supported_local, id_token_signing_alg_values_supported)
    {
        if(!cJSON_IsString(id_token_signing_alg_values_supported_local))
        {
            goto end;
        }
        list_addElement(id_token_signing_alg_values_supportedList , strdup(id_token_signing_alg_values_supported_local->valuestring));
    }
    }

    // open_id_configuration->token_endpoint_auth_methods_supported
    cJSON *token_endpoint_auth_methods_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "tokenEndpointAuthMethodsSupported");
    if (token_endpoint_auth_methods_supported) { 
    cJSON *token_endpoint_auth_methods_supported_local = NULL;
    if(!cJSON_IsArray(token_endpoint_auth_methods_supported)) {
        goto end;//primitive container
    }
    token_endpoint_auth_methods_supportedList = list_createList();

    cJSON_ArrayForEach(token_endpoint_auth_methods_supported_local, token_endpoint_auth_methods_supported)
    {
        if(!cJSON_IsString(token_endpoint_auth_methods_supported_local))
        {
            goto end;
        }
        list_addElement(token_endpoint_auth_methods_supportedList , strdup(token_endpoint_auth_methods_supported_local->valuestring));
    }
    }

    // open_id_configuration->claims_supported
    cJSON *claims_supported = cJSON_GetObjectItemCaseSensitive(open_id_configurationJSON, "claimsSupported");
    if (claims_supported) { 
    cJSON *claims_supported_local = NULL;
    if(!cJSON_IsArray(claims_supported)) {
        goto end;//primitive container
    }
    claims_supportedList = list_createList();

    cJSON_ArrayForEach(claims_supported_local, claims_supported)
    {
        if(!cJSON_IsString(claims_supported_local))
        {
            goto end;
        }
        list_addElement(claims_supportedList , strdup(claims_supported_local->valuestring));
    }
    }


    open_id_configuration_local_var = open_id_configuration_create (
        issuer && !cJSON_IsNull(issuer) ? strdup(issuer->valuestring) : NULL,
        authorization_endpoint && !cJSON_IsNull(authorization_endpoint) ? strdup(authorization_endpoint->valuestring) : NULL,
        token_endpoint && !cJSON_IsNull(token_endpoint) ? strdup(token_endpoint->valuestring) : NULL,
        end_session_endpoint && !cJSON_IsNull(end_session_endpoint) ? strdup(end_session_endpoint->valuestring) : NULL,
        jwks_uri && !cJSON_IsNull(jwks_uri) ? strdup(jwks_uri->valuestring) : NULL,
        response_modes_supported ? response_modes_supportedList : NULL,
        response_types_supported ? response_types_supportedList : NULL,
        scopes_supported ? scopes_supportedList : NULL,
        subject_types_supported ? subject_types_supportedList : NULL,
        id_token_signing_alg_values_supported ? id_token_signing_alg_values_supportedList : NULL,
        token_endpoint_auth_methods_supported ? token_endpoint_auth_methods_supportedList : NULL,
        claims_supported ? claims_supportedList : NULL
        );

    return open_id_configuration_local_var;
end:
    if (response_modes_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, response_modes_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(response_modes_supportedList);
        response_modes_supportedList = NULL;
    }
    if (response_types_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, response_types_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(response_types_supportedList);
        response_types_supportedList = NULL;
    }
    if (scopes_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, scopes_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(scopes_supportedList);
        scopes_supportedList = NULL;
    }
    if (subject_types_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, subject_types_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(subject_types_supportedList);
        subject_types_supportedList = NULL;
    }
    if (id_token_signing_alg_values_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, id_token_signing_alg_values_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(id_token_signing_alg_values_supportedList);
        id_token_signing_alg_values_supportedList = NULL;
    }
    if (token_endpoint_auth_methods_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, token_endpoint_auth_methods_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(token_endpoint_auth_methods_supportedList);
        token_endpoint_auth_methods_supportedList = NULL;
    }
    if (claims_supportedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, claims_supportedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(claims_supportedList);
        claims_supportedList = NULL;
    }
    return NULL;

}
