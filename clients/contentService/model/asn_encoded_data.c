#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asn_encoded_data.h"



asn_encoded_data_t *asn_encoded_data_create(
    oid_t *oid,
    char *raw_data
    ) {
    asn_encoded_data_t *asn_encoded_data_local_var = malloc(sizeof(asn_encoded_data_t));
    if (!asn_encoded_data_local_var) {
        return NULL;
    }
    asn_encoded_data_local_var->oid = oid;
    asn_encoded_data_local_var->raw_data = raw_data;

    return asn_encoded_data_local_var;
}


void asn_encoded_data_free(asn_encoded_data_t *asn_encoded_data) {
    if(NULL == asn_encoded_data){
        return ;
    }
    listEntry_t *listEntry;
    if (asn_encoded_data->oid) {
        oid_free(asn_encoded_data->oid);
        asn_encoded_data->oid = NULL;
    }
    if (asn_encoded_data->raw_data) {
        free(asn_encoded_data->raw_data);
        asn_encoded_data->raw_data = NULL;
    }
    free(asn_encoded_data);
}

cJSON *asn_encoded_data_convertToJSON(asn_encoded_data_t *asn_encoded_data) {
    cJSON *item = cJSON_CreateObject();

    // asn_encoded_data->oid
    if(asn_encoded_data->oid) {
    cJSON *oid_local_JSON = oid_convertToJSON(asn_encoded_data->oid);
    if(oid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "oid", oid_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // asn_encoded_data->raw_data
    if(asn_encoded_data->raw_data) {
    if(cJSON_AddStringToObject(item, "rawData", asn_encoded_data->raw_data) == NULL) {
    goto fail; //ByteArray
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

asn_encoded_data_t *asn_encoded_data_parseFromJSON(cJSON *asn_encoded_dataJSON){

    asn_encoded_data_t *asn_encoded_data_local_var = NULL;

    // define the local variable for asn_encoded_data->oid
    oid_t *oid_local_nonprim = NULL;

    // asn_encoded_data->oid
    cJSON *oid = cJSON_GetObjectItemCaseSensitive(asn_encoded_dataJSON, "oid");
    if (oid) { 
    oid_local_nonprim = oid_parseFromJSON(oid); //nonprimitive
    }

    // asn_encoded_data->raw_data
    cJSON *raw_data = cJSON_GetObjectItemCaseSensitive(asn_encoded_dataJSON, "rawData");
    if (raw_data) { 
    if(!cJSON_IsString(raw_data))
    {
    goto end; //ByteArray
    }
    }


    asn_encoded_data_local_var = asn_encoded_data_create (
        oid ? oid_local_nonprim : NULL,
        raw_data ? strdup(raw_data->valuestring) : NULL
        );

    return asn_encoded_data_local_var;
end:
    if (oid_local_nonprim) {
        oid_free(oid_local_nonprim);
        oid_local_nonprim = NULL;
    }
    return NULL;

}
