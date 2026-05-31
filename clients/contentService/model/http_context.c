#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "http_context.h"



http_context_t *http_context_create(
    list_t *features,
    http_request_t *request,
    http_response_t *response,
    connection_info_t *connection,
    web_socket_manager_t *web_sockets,
    claims_principal_t *user,
    list_t* items,
    object_t *request_services,
    cancellation_token_t *request_aborted,
    char *trace_identifier,
    i_session_t *session
    ) {
    http_context_t *http_context_local_var = malloc(sizeof(http_context_t));
    if (!http_context_local_var) {
        return NULL;
    }
    http_context_local_var->features = features;
    http_context_local_var->request = request;
    http_context_local_var->response = response;
    http_context_local_var->connection = connection;
    http_context_local_var->web_sockets = web_sockets;
    http_context_local_var->user = user;
    http_context_local_var->items = items;
    http_context_local_var->request_services = request_services;
    http_context_local_var->request_aborted = request_aborted;
    http_context_local_var->trace_identifier = trace_identifier;
    http_context_local_var->session = session;

    return http_context_local_var;
}


void http_context_free(http_context_t *http_context) {
    if(NULL == http_context){
        return ;
    }
    listEntry_t *listEntry;
    if (http_context->features) {
        list_ForEach(listEntry, http_context->features) {
            type_object_key_value_pair_free(listEntry->data);
        }
        list_freeList(http_context->features);
        http_context->features = NULL;
    }
    if (http_context->request) {
        http_request_free(http_context->request);
        http_context->request = NULL;
    }
    if (http_context->response) {
        http_response_free(http_context->response);
        http_context->response = NULL;
    }
    if (http_context->connection) {
        connection_info_free(http_context->connection);
        http_context->connection = NULL;
    }
    if (http_context->web_sockets) {
        web_socket_manager_free(http_context->web_sockets);
        http_context->web_sockets = NULL;
    }
    if (http_context->user) {
        claims_principal_free(http_context->user);
        http_context->user = NULL;
    }
    if (http_context->items) {
        list_ForEach(listEntry, http_context->items) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(http_context->items);
        http_context->items = NULL;
    }
    if (http_context->request_services) {
        object_free(http_context->request_services);
        http_context->request_services = NULL;
    }
    if (http_context->request_aborted) {
        cancellation_token_free(http_context->request_aborted);
        http_context->request_aborted = NULL;
    }
    if (http_context->trace_identifier) {
        free(http_context->trace_identifier);
        http_context->trace_identifier = NULL;
    }
    if (http_context->session) {
        i_session_free(http_context->session);
        http_context->session = NULL;
    }
    free(http_context);
}

cJSON *http_context_convertToJSON(http_context_t *http_context) {
    cJSON *item = cJSON_CreateObject();

    // http_context->features
    if(http_context->features) {
    cJSON *features = cJSON_AddArrayToObject(item, "features");
    if(features == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *featuresListEntry;
    if (http_context->features) {
    list_ForEach(featuresListEntry, http_context->features) {
    cJSON *itemLocal = type_object_key_value_pair_convertToJSON(featuresListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(features, itemLocal);
    }
    }
    }


    // http_context->request
    if(http_context->request) {
    cJSON *request_local_JSON = http_request_convertToJSON(http_context->request);
    if(request_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "request", request_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->response
    if(http_context->response) {
    cJSON *response_local_JSON = http_response_convertToJSON(http_context->response);
    if(response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "response", response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->connection
    if(http_context->connection) {
    cJSON *connection_local_JSON = connection_info_convertToJSON(http_context->connection);
    if(connection_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "connection", connection_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->web_sockets
    if(http_context->web_sockets) {
    cJSON *web_sockets_local_JSON = web_socket_manager_convertToJSON(http_context->web_sockets);
    if(web_sockets_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "webSockets", web_sockets_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->user
    if(http_context->user) {
    cJSON *user_local_JSON = claims_principal_convertToJSON(http_context->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->items
    if(http_context->items) {
    cJSON *items = cJSON_AddObjectToObject(item, "items");
    if(items == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = items;
    listEntry_t *itemsListEntry;
    if (http_context->items) {
    list_ForEach(itemsListEntry, http_context->items) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)itemsListEntry->data;
    }
    }
    }


    // http_context->request_services
    if(http_context->request_services) {
    cJSON *request_services_object = object_convertToJSON(http_context->request_services);
    if(request_services_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestServices", request_services_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->request_aborted
    if(http_context->request_aborted) {
    cJSON *request_aborted_local_JSON = cancellation_token_convertToJSON(http_context->request_aborted);
    if(request_aborted_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestAborted", request_aborted_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_context->trace_identifier
    if(http_context->trace_identifier) {
    if(cJSON_AddStringToObject(item, "traceIdentifier", http_context->trace_identifier) == NULL) {
    goto fail; //String
    }
    }


    // http_context->session
    if(http_context->session) {
    cJSON *session_local_JSON = i_session_convertToJSON(http_context->session);
    if(session_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "session", session_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

http_context_t *http_context_parseFromJSON(cJSON *http_contextJSON){

    http_context_t *http_context_local_var = NULL;

    // define the local list for http_context->features
    list_t *featuresList = NULL;

    // define the local variable for http_context->request
    http_request_t *request_local_nonprim = NULL;

    // define the local variable for http_context->response
    http_response_t *response_local_nonprim = NULL;

    // define the local variable for http_context->connection
    connection_info_t *connection_local_nonprim = NULL;

    // define the local variable for http_context->web_sockets
    web_socket_manager_t *web_sockets_local_nonprim = NULL;

    // define the local variable for http_context->user
    claims_principal_t *user_local_nonprim = NULL;

    // define the local map for http_context->items
    list_t *itemsList = NULL;

    // define the local variable for http_context->request_aborted
    cancellation_token_t *request_aborted_local_nonprim = NULL;

    // define the local variable for http_context->session
    i_session_t *session_local_nonprim = NULL;

    // http_context->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "features");
    if (features) { 
    cJSON *features_local_nonprimitive = NULL;
    if(!cJSON_IsArray(features)){
        goto end; //nonprimitive container
    }

    featuresList = list_createList();

    cJSON_ArrayForEach(features_local_nonprimitive,features )
    {
        if(!cJSON_IsObject(features_local_nonprimitive)){
            goto end;
        }
        type_object_key_value_pair_t *featuresItem = type_object_key_value_pair_parseFromJSON(features_local_nonprimitive);

        list_addElement(featuresList, featuresItem);
    }
    }

    // http_context->request
    cJSON *request = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "request");
    if (request) { 
    request_local_nonprim = http_request_parseFromJSON(request); //nonprimitive
    }

    // http_context->response
    cJSON *response = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "response");
    if (response) { 
    response_local_nonprim = http_response_parseFromJSON(response); //nonprimitive
    }

    // http_context->connection
    cJSON *connection = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "connection");
    if (connection) { 
    connection_local_nonprim = connection_info_parseFromJSON(connection); //nonprimitive
    }

    // http_context->web_sockets
    cJSON *web_sockets = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "webSockets");
    if (web_sockets) { 
    web_sockets_local_nonprim = web_socket_manager_parseFromJSON(web_sockets); //nonprimitive
    }

    // http_context->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "user");
    if (user) { 
    user_local_nonprim = claims_principal_parseFromJSON(user); //nonprimitive
    }

    // http_context->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "items");
    if (items) { 
    cJSON *items_local_map = NULL;
    if(!cJSON_IsObject(items) && !cJSON_IsNull(items))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(items))
    {
        itemsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(items_local_map, items)
        {
            cJSON *localMapObject = items_local_map;
            list_addElement(itemsList , localMapKeyPair);
        }
    }
    }

    // http_context->request_services
    cJSON *request_services = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "requestServices");
    object_t *request_services_local_object = NULL;
    if (request_services) { 
    request_services_local_object = object_parseFromJSON(request_services); //object
    }

    // http_context->request_aborted
    cJSON *request_aborted = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "requestAborted");
    if (request_aborted) { 
    request_aborted_local_nonprim = cancellation_token_parseFromJSON(request_aborted); //nonprimitive
    }

    // http_context->trace_identifier
    cJSON *trace_identifier = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "traceIdentifier");
    if (trace_identifier) { 
    if(!cJSON_IsString(trace_identifier) && !cJSON_IsNull(trace_identifier))
    {
    goto end; //String
    }
    }

    // http_context->session
    cJSON *session = cJSON_GetObjectItemCaseSensitive(http_contextJSON, "session");
    if (session) { 
    session_local_nonprim = i_session_parseFromJSON(session); //nonprimitive
    }


    http_context_local_var = http_context_create (
        features ? featuresList : NULL,
        request ? request_local_nonprim : NULL,
        response ? response_local_nonprim : NULL,
        connection ? connection_local_nonprim : NULL,
        web_sockets ? web_sockets_local_nonprim : NULL,
        user ? user_local_nonprim : NULL,
        items ? itemsList : NULL,
        request_services ? request_services_local_object : NULL,
        request_aborted ? request_aborted_local_nonprim : NULL,
        trace_identifier && !cJSON_IsNull(trace_identifier) ? strdup(trace_identifier->valuestring) : NULL,
        session ? session_local_nonprim : NULL
        );

    return http_context_local_var;
end:
    if (featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, featuresList) {
            type_object_key_value_pair_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(featuresList);
        featuresList = NULL;
    }
    if (request_local_nonprim) {
        http_request_free(request_local_nonprim);
        request_local_nonprim = NULL;
    }
    if (response_local_nonprim) {
        http_response_free(response_local_nonprim);
        response_local_nonprim = NULL;
    }
    if (connection_local_nonprim) {
        connection_info_free(connection_local_nonprim);
        connection_local_nonprim = NULL;
    }
    if (web_sockets_local_nonprim) {
        web_socket_manager_free(web_sockets_local_nonprim);
        web_sockets_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        claims_principal_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    if (request_aborted_local_nonprim) {
        cancellation_token_free(request_aborted_local_nonprim);
        request_aborted_local_nonprim = NULL;
    }
    if (session_local_nonprim) {
        i_session_free(session_local_nonprim);
        session_local_nonprim = NULL;
    }
    return NULL;

}
