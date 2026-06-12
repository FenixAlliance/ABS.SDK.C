#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "x509_extension.h"



x509_extension_t *x509_extension_create(
    oid_t *oid,
    char *raw_data,
    int critical
    ) {
    x509_extension_t *x509_extension_local_var = malloc(sizeof(x509_extension_t));
    if (!x509_extension_local_var) {
        return NULL;
    }
    x509_extension_local_var->oid = oid;
    x509_extension_local_var->raw_data = raw_data;
    x509_extension_local_var->critical = critical;

    return x509_extension_local_var;
}


void x509_extension_free(x509_extension_t *x509_extension) {
    if(NULL == x509_extension){
        return ;
    }
    listEntry_t *listEntry;
    if (x509_extension->oid) {
        oid_free(x509_extension->oid);
        x509_extension->oid = NULL;
    }
    if (x509_extension->raw_data) {
        free(x509_extension->raw_data);
        x509_extension->raw_data = NULL;
    }
    free(x509_extension);
}

cJSON *x509_extension_convertToJSON(x509_extension_t *x509_extension) {
    cJSON *item = cJSON_CreateObject();

    // x509_extension->oid
    if(x509_extension->oid) {
    cJSON *oid_local_JSON = oid_convertToJSON(x509_extension->oid);
    if(oid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "oid", oid_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_extension->raw_data
    if(x509_extension->raw_data) {
    if(cJSON_AddStringToObject(item, "rawData", x509_extension->raw_data) == NULL) {
    goto fail; //ByteArray
    }
    }


    // x509_extension->critical
    if(x509_extension->critical) {
    if(cJSON_AddBoolToObject(item, "critical", x509_extension->critical) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

x509_extension_t *x509_extension_parseFromJSON(cJSON *x509_extensionJSON){

    x509_extension_t *x509_extension_local_var = NULL;

    // define the local variable for x509_extension->oid
    oid_t *oid_local_nonprim = NULL;

    // x509_extension->oid
    cJSON *oid = cJSON_GetObjectItemCaseSensitive(x509_extensionJSON, "oid");
    if (oid) { 
    oid_local_nonprim = oid_parseFromJSON(oid); //nonprimitive
    }

    // x509_extension->raw_data
    cJSON *raw_data = cJSON_GetObjectItemCaseSensitive(x509_extensionJSON, "rawData");
    if (raw_data) { 
    if(!cJSON_IsString(raw_data))
    {
    goto end; //ByteArray
    }
    }

    // x509_extension->critical
    cJSON *critical = cJSON_GetObjectItemCaseSensitive(x509_extensionJSON, "critical");
    if (critical) { 
    if(!cJSON_IsBool(critical))
    {
    goto end; //Bool
    }
    }


    x509_extension_local_var = x509_extension_create (
        oid ? oid_local_nonprim : NULL,
        raw_data ? strdup(raw_data->valuestring) : NULL,
        critical ? critical->valueint : 0
        );

    return x509_extension_local_var;
end:
    if (oid_local_nonprim) {
        oid_free(oid_local_nonprim);
        oid_local_nonprim = NULL;
    }
    return NULL;

}
