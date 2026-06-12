#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "host_string.h"



host_string_t *host_string_create(
    char *value,
    int has_value,
    char *host,
    int port
    ) {
    host_string_t *host_string_local_var = malloc(sizeof(host_string_t));
    if (!host_string_local_var) {
        return NULL;
    }
    host_string_local_var->value = value;
    host_string_local_var->has_value = has_value;
    host_string_local_var->host = host;
    host_string_local_var->port = port;

    return host_string_local_var;
}


void host_string_free(host_string_t *host_string) {
    if(NULL == host_string){
        return ;
    }
    listEntry_t *listEntry;
    if (host_string->value) {
        free(host_string->value);
        host_string->value = NULL;
    }
    if (host_string->host) {
        free(host_string->host);
        host_string->host = NULL;
    }
    free(host_string);
}

cJSON *host_string_convertToJSON(host_string_t *host_string) {
    cJSON *item = cJSON_CreateObject();

    // host_string->value
    if(host_string->value) {
    if(cJSON_AddStringToObject(item, "value", host_string->value) == NULL) {
    goto fail; //String
    }
    }


    // host_string->has_value
    if(host_string->has_value) {
    if(cJSON_AddBoolToObject(item, "hasValue", host_string->has_value) == NULL) {
    goto fail; //Bool
    }
    }


    // host_string->host
    if(host_string->host) {
    if(cJSON_AddStringToObject(item, "host", host_string->host) == NULL) {
    goto fail; //String
    }
    }


    // host_string->port
    if(host_string->port) {
    if(cJSON_AddNumberToObject(item, "port", host_string->port) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

host_string_t *host_string_parseFromJSON(cJSON *host_stringJSON){

    host_string_t *host_string_local_var = NULL;

    // host_string->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(host_stringJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // host_string->has_value
    cJSON *has_value = cJSON_GetObjectItemCaseSensitive(host_stringJSON, "hasValue");
    if (has_value) { 
    if(!cJSON_IsBool(has_value))
    {
    goto end; //Bool
    }
    }

    // host_string->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(host_stringJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host) && !cJSON_IsNull(host))
    {
    goto end; //String
    }
    }

    // host_string->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(host_stringJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }


    host_string_local_var = host_string_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        has_value ? has_value->valueint : 0,
        host && !cJSON_IsNull(host) ? strdup(host->valuestring) : NULL,
        port ? port->valuedouble : 0
        );

    return host_string_local_var;
end:
    return NULL;

}
