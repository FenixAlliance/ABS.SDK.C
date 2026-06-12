#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "oid.h"



oid_t *oid_create(
    char *value,
    char *friendly_name
    ) {
    oid_t *oid_local_var = malloc(sizeof(oid_t));
    if (!oid_local_var) {
        return NULL;
    }
    oid_local_var->value = value;
    oid_local_var->friendly_name = friendly_name;

    return oid_local_var;
}


void oid_free(oid_t *oid) {
    if(NULL == oid){
        return ;
    }
    listEntry_t *listEntry;
    if (oid->value) {
        free(oid->value);
        oid->value = NULL;
    }
    if (oid->friendly_name) {
        free(oid->friendly_name);
        oid->friendly_name = NULL;
    }
    free(oid);
}

cJSON *oid_convertToJSON(oid_t *oid) {
    cJSON *item = cJSON_CreateObject();

    // oid->value
    if(oid->value) {
    if(cJSON_AddStringToObject(item, "value", oid->value) == NULL) {
    goto fail; //String
    }
    }


    // oid->friendly_name
    if(oid->friendly_name) {
    if(cJSON_AddStringToObject(item, "friendlyName", oid->friendly_name) == NULL) {
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

oid_t *oid_parseFromJSON(cJSON *oidJSON){

    oid_t *oid_local_var = NULL;

    // oid->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(oidJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // oid->friendly_name
    cJSON *friendly_name = cJSON_GetObjectItemCaseSensitive(oidJSON, "friendlyName");
    if (friendly_name) { 
    if(!cJSON_IsString(friendly_name) && !cJSON_IsNull(friendly_name))
    {
    goto end; //String
    }
    }


    oid_local_var = oid_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        friendly_name && !cJSON_IsNull(friendly_name) ? strdup(friendly_name->valuestring) : NULL
        );

    return oid_local_var;
end:
    return NULL;

}
