#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "connection_info.h"



connection_info_t *connection_info_create(
    char *id,
    ip_address_t *remote_ip_address,
    int remote_port,
    ip_address_t *local_ip_address,
    int local_port,
    x509_certificate2_t *client_certificate
    ) {
    connection_info_t *connection_info_local_var = malloc(sizeof(connection_info_t));
    if (!connection_info_local_var) {
        return NULL;
    }
    connection_info_local_var->id = id;
    connection_info_local_var->remote_ip_address = remote_ip_address;
    connection_info_local_var->remote_port = remote_port;
    connection_info_local_var->local_ip_address = local_ip_address;
    connection_info_local_var->local_port = local_port;
    connection_info_local_var->client_certificate = client_certificate;

    return connection_info_local_var;
}


void connection_info_free(connection_info_t *connection_info) {
    if(NULL == connection_info){
        return ;
    }
    listEntry_t *listEntry;
    if (connection_info->id) {
        free(connection_info->id);
        connection_info->id = NULL;
    }
    if (connection_info->remote_ip_address) {
        ip_address_free(connection_info->remote_ip_address);
        connection_info->remote_ip_address = NULL;
    }
    if (connection_info->local_ip_address) {
        ip_address_free(connection_info->local_ip_address);
        connection_info->local_ip_address = NULL;
    }
    if (connection_info->client_certificate) {
        x509_certificate2_free(connection_info->client_certificate);
        connection_info->client_certificate = NULL;
    }
    free(connection_info);
}

cJSON *connection_info_convertToJSON(connection_info_t *connection_info) {
    cJSON *item = cJSON_CreateObject();

    // connection_info->id
    if(connection_info->id) {
    if(cJSON_AddStringToObject(item, "id", connection_info->id) == NULL) {
    goto fail; //String
    }
    }


    // connection_info->remote_ip_address
    if(connection_info->remote_ip_address) {
    cJSON *remote_ip_address_local_JSON = ip_address_convertToJSON(connection_info->remote_ip_address);
    if(remote_ip_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "remoteIpAddress", remote_ip_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // connection_info->remote_port
    if(connection_info->remote_port) {
    if(cJSON_AddNumberToObject(item, "remotePort", connection_info->remote_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // connection_info->local_ip_address
    if(connection_info->local_ip_address) {
    cJSON *local_ip_address_local_JSON = ip_address_convertToJSON(connection_info->local_ip_address);
    if(local_ip_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "localIpAddress", local_ip_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // connection_info->local_port
    if(connection_info->local_port) {
    if(cJSON_AddNumberToObject(item, "localPort", connection_info->local_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // connection_info->client_certificate
    if(connection_info->client_certificate) {
    cJSON *client_certificate_local_JSON = x509_certificate2_convertToJSON(connection_info->client_certificate);
    if(client_certificate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clientCertificate", client_certificate_local_JSON);
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

connection_info_t *connection_info_parseFromJSON(cJSON *connection_infoJSON){

    connection_info_t *connection_info_local_var = NULL;

    // define the local variable for connection_info->remote_ip_address
    ip_address_t *remote_ip_address_local_nonprim = NULL;

    // define the local variable for connection_info->local_ip_address
    ip_address_t *local_ip_address_local_nonprim = NULL;

    // define the local variable for connection_info->client_certificate
    x509_certificate2_t *client_certificate_local_nonprim = NULL;

    // connection_info->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(connection_infoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // connection_info->remote_ip_address
    cJSON *remote_ip_address = cJSON_GetObjectItemCaseSensitive(connection_infoJSON, "remoteIpAddress");
    if (remote_ip_address) { 
    remote_ip_address_local_nonprim = ip_address_parseFromJSON(remote_ip_address); //nonprimitive
    }

    // connection_info->remote_port
    cJSON *remote_port = cJSON_GetObjectItemCaseSensitive(connection_infoJSON, "remotePort");
    if (remote_port) { 
    if(!cJSON_IsNumber(remote_port))
    {
    goto end; //Numeric
    }
    }

    // connection_info->local_ip_address
    cJSON *local_ip_address = cJSON_GetObjectItemCaseSensitive(connection_infoJSON, "localIpAddress");
    if (local_ip_address) { 
    local_ip_address_local_nonprim = ip_address_parseFromJSON(local_ip_address); //nonprimitive
    }

    // connection_info->local_port
    cJSON *local_port = cJSON_GetObjectItemCaseSensitive(connection_infoJSON, "localPort");
    if (local_port) { 
    if(!cJSON_IsNumber(local_port))
    {
    goto end; //Numeric
    }
    }

    // connection_info->client_certificate
    cJSON *client_certificate = cJSON_GetObjectItemCaseSensitive(connection_infoJSON, "clientCertificate");
    if (client_certificate) { 
    client_certificate_local_nonprim = x509_certificate2_parseFromJSON(client_certificate); //nonprimitive
    }


    connection_info_local_var = connection_info_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        remote_ip_address ? remote_ip_address_local_nonprim : NULL,
        remote_port ? remote_port->valuedouble : 0,
        local_ip_address ? local_ip_address_local_nonprim : NULL,
        local_port ? local_port->valuedouble : 0,
        client_certificate ? client_certificate_local_nonprim : NULL
        );

    return connection_info_local_var;
end:
    if (remote_ip_address_local_nonprim) {
        ip_address_free(remote_ip_address_local_nonprim);
        remote_ip_address_local_nonprim = NULL;
    }
    if (local_ip_address_local_nonprim) {
        ip_address_free(local_ip_address_local_nonprim);
        local_ip_address_local_nonprim = NULL;
    }
    if (client_certificate_local_nonprim) {
        x509_certificate2_free(client_certificate_local_nonprim);
        client_certificate_local_nonprim = NULL;
    }
    return NULL;

}
