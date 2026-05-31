#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_socket_manager.h"



web_socket_manager_t *web_socket_manager_create(
    int is_web_socket_request,
    list_t *web_socket_requested_protocols
    ) {
    web_socket_manager_t *web_socket_manager_local_var = malloc(sizeof(web_socket_manager_t));
    if (!web_socket_manager_local_var) {
        return NULL;
    }
    web_socket_manager_local_var->is_web_socket_request = is_web_socket_request;
    web_socket_manager_local_var->web_socket_requested_protocols = web_socket_requested_protocols;

    return web_socket_manager_local_var;
}


void web_socket_manager_free(web_socket_manager_t *web_socket_manager) {
    if(NULL == web_socket_manager){
        return ;
    }
    listEntry_t *listEntry;
    if (web_socket_manager->web_socket_requested_protocols) {
        list_ForEach(listEntry, web_socket_manager->web_socket_requested_protocols) {
            free(listEntry->data);
        }
        list_freeList(web_socket_manager->web_socket_requested_protocols);
        web_socket_manager->web_socket_requested_protocols = NULL;
    }
    free(web_socket_manager);
}

cJSON *web_socket_manager_convertToJSON(web_socket_manager_t *web_socket_manager) {
    cJSON *item = cJSON_CreateObject();

    // web_socket_manager->is_web_socket_request
    if(web_socket_manager->is_web_socket_request) {
    if(cJSON_AddBoolToObject(item, "isWebSocketRequest", web_socket_manager->is_web_socket_request) == NULL) {
    goto fail; //Bool
    }
    }


    // web_socket_manager->web_socket_requested_protocols
    if(web_socket_manager->web_socket_requested_protocols) {
    cJSON *web_socket_requested_protocols = cJSON_AddArrayToObject(item, "webSocketRequestedProtocols");
    if(web_socket_requested_protocols == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *web_socket_requested_protocolsListEntry;
    list_ForEach(web_socket_requested_protocolsListEntry, web_socket_manager->web_socket_requested_protocols) {
    if(cJSON_AddStringToObject(web_socket_requested_protocols, "", (char*)web_socket_requested_protocolsListEntry->data) == NULL)
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

web_socket_manager_t *web_socket_manager_parseFromJSON(cJSON *web_socket_managerJSON){

    web_socket_manager_t *web_socket_manager_local_var = NULL;

    // define the local list for web_socket_manager->web_socket_requested_protocols
    list_t *web_socket_requested_protocolsList = NULL;

    // web_socket_manager->is_web_socket_request
    cJSON *is_web_socket_request = cJSON_GetObjectItemCaseSensitive(web_socket_managerJSON, "isWebSocketRequest");
    if (is_web_socket_request) { 
    if(!cJSON_IsBool(is_web_socket_request))
    {
    goto end; //Bool
    }
    }

    // web_socket_manager->web_socket_requested_protocols
    cJSON *web_socket_requested_protocols = cJSON_GetObjectItemCaseSensitive(web_socket_managerJSON, "webSocketRequestedProtocols");
    if (web_socket_requested_protocols) { 
    cJSON *web_socket_requested_protocols_local = NULL;
    if(!cJSON_IsArray(web_socket_requested_protocols)) {
        goto end;//primitive container
    }
    web_socket_requested_protocolsList = list_createList();

    cJSON_ArrayForEach(web_socket_requested_protocols_local, web_socket_requested_protocols)
    {
        if(!cJSON_IsString(web_socket_requested_protocols_local))
        {
            goto end;
        }
        list_addElement(web_socket_requested_protocolsList , strdup(web_socket_requested_protocols_local->valuestring));
    }
    }


    web_socket_manager_local_var = web_socket_manager_create (
        is_web_socket_request ? is_web_socket_request->valueint : 0,
        web_socket_requested_protocols ? web_socket_requested_protocolsList : NULL
        );

    return web_socket_manager_local_var;
end:
    if (web_socket_requested_protocolsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, web_socket_requested_protocolsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(web_socket_requested_protocolsList);
        web_socket_requested_protocolsList = NULL;
    }
    return NULL;

}
