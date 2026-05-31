#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "x500_distinguished_name.h"



x500_distinguished_name_t *x500_distinguished_name_create(
    oid_t *oid,
    char *raw_data,
    char *name
    ) {
    x500_distinguished_name_t *x500_distinguished_name_local_var = malloc(sizeof(x500_distinguished_name_t));
    if (!x500_distinguished_name_local_var) {
        return NULL;
    }
    x500_distinguished_name_local_var->oid = oid;
    x500_distinguished_name_local_var->raw_data = raw_data;
    x500_distinguished_name_local_var->name = name;

    return x500_distinguished_name_local_var;
}


void x500_distinguished_name_free(x500_distinguished_name_t *x500_distinguished_name) {
    if(NULL == x500_distinguished_name){
        return ;
    }
    listEntry_t *listEntry;
    if (x500_distinguished_name->oid) {
        oid_free(x500_distinguished_name->oid);
        x500_distinguished_name->oid = NULL;
    }
    if (x500_distinguished_name->raw_data) {
        free(x500_distinguished_name->raw_data);
        x500_distinguished_name->raw_data = NULL;
    }
    if (x500_distinguished_name->name) {
        free(x500_distinguished_name->name);
        x500_distinguished_name->name = NULL;
    }
    free(x500_distinguished_name);
}

cJSON *x500_distinguished_name_convertToJSON(x500_distinguished_name_t *x500_distinguished_name) {
    cJSON *item = cJSON_CreateObject();

    // x500_distinguished_name->oid
    if(x500_distinguished_name->oid) {
    cJSON *oid_local_JSON = oid_convertToJSON(x500_distinguished_name->oid);
    if(oid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "oid", oid_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x500_distinguished_name->raw_data
    if(x500_distinguished_name->raw_data) {
    if(cJSON_AddStringToObject(item, "rawData", x500_distinguished_name->raw_data) == NULL) {
    goto fail; //ByteArray
    }
    }


    // x500_distinguished_name->name
    if(x500_distinguished_name->name) {
    if(cJSON_AddStringToObject(item, "name", x500_distinguished_name->name) == NULL) {
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

x500_distinguished_name_t *x500_distinguished_name_parseFromJSON(cJSON *x500_distinguished_nameJSON){

    x500_distinguished_name_t *x500_distinguished_name_local_var = NULL;

    // define the local variable for x500_distinguished_name->oid
    oid_t *oid_local_nonprim = NULL;

    // x500_distinguished_name->oid
    cJSON *oid = cJSON_GetObjectItemCaseSensitive(x500_distinguished_nameJSON, "oid");
    if (oid) { 
    oid_local_nonprim = oid_parseFromJSON(oid); //nonprimitive
    }

    // x500_distinguished_name->raw_data
    cJSON *raw_data = cJSON_GetObjectItemCaseSensitive(x500_distinguished_nameJSON, "rawData");
    if (raw_data) { 
    if(!cJSON_IsString(raw_data))
    {
    goto end; //ByteArray
    }
    }

    // x500_distinguished_name->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(x500_distinguished_nameJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    x500_distinguished_name_local_var = x500_distinguished_name_create (
        oid ? oid_local_nonprim : NULL,
        raw_data ? strdup(raw_data->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return x500_distinguished_name_local_var;
end:
    if (oid_local_nonprim) {
        oid_free(oid_local_nonprim);
        oid_local_nonprim = NULL;
    }
    return NULL;

}
