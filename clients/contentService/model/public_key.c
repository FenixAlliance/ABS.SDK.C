#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "public_key.h"



public_key_t *public_key_create(
    asn_encoded_data_t *encoded_key_value,
    asn_encoded_data_t *encoded_parameters,
    asymmetric_algorithm_t *key,
    oid_t *oid
    ) {
    public_key_t *public_key_local_var = malloc(sizeof(public_key_t));
    if (!public_key_local_var) {
        return NULL;
    }
    public_key_local_var->encoded_key_value = encoded_key_value;
    public_key_local_var->encoded_parameters = encoded_parameters;
    public_key_local_var->key = key;
    public_key_local_var->oid = oid;

    return public_key_local_var;
}


void public_key_free(public_key_t *public_key) {
    if(NULL == public_key){
        return ;
    }
    listEntry_t *listEntry;
    if (public_key->encoded_key_value) {
        asn_encoded_data_free(public_key->encoded_key_value);
        public_key->encoded_key_value = NULL;
    }
    if (public_key->encoded_parameters) {
        asn_encoded_data_free(public_key->encoded_parameters);
        public_key->encoded_parameters = NULL;
    }
    if (public_key->key) {
        asymmetric_algorithm_free(public_key->key);
        public_key->key = NULL;
    }
    if (public_key->oid) {
        oid_free(public_key->oid);
        public_key->oid = NULL;
    }
    free(public_key);
}

cJSON *public_key_convertToJSON(public_key_t *public_key) {
    cJSON *item = cJSON_CreateObject();

    // public_key->encoded_key_value
    if(public_key->encoded_key_value) {
    cJSON *encoded_key_value_local_JSON = asn_encoded_data_convertToJSON(public_key->encoded_key_value);
    if(encoded_key_value_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "encodedKeyValue", encoded_key_value_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // public_key->encoded_parameters
    if(public_key->encoded_parameters) {
    cJSON *encoded_parameters_local_JSON = asn_encoded_data_convertToJSON(public_key->encoded_parameters);
    if(encoded_parameters_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "encodedParameters", encoded_parameters_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // public_key->key
    if(public_key->key) {
    cJSON *key_local_JSON = asymmetric_algorithm_convertToJSON(public_key->key);
    if(key_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "key", key_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // public_key->oid
    if(public_key->oid) {
    cJSON *oid_local_JSON = oid_convertToJSON(public_key->oid);
    if(oid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "oid", oid_local_JSON);
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

public_key_t *public_key_parseFromJSON(cJSON *public_keyJSON){

    public_key_t *public_key_local_var = NULL;

    // define the local variable for public_key->encoded_key_value
    asn_encoded_data_t *encoded_key_value_local_nonprim = NULL;

    // define the local variable for public_key->encoded_parameters
    asn_encoded_data_t *encoded_parameters_local_nonprim = NULL;

    // define the local variable for public_key->key
    asymmetric_algorithm_t *key_local_nonprim = NULL;

    // define the local variable for public_key->oid
    oid_t *oid_local_nonprim = NULL;

    // public_key->encoded_key_value
    cJSON *encoded_key_value = cJSON_GetObjectItemCaseSensitive(public_keyJSON, "encodedKeyValue");
    if (encoded_key_value) { 
    encoded_key_value_local_nonprim = asn_encoded_data_parseFromJSON(encoded_key_value); //nonprimitive
    }

    // public_key->encoded_parameters
    cJSON *encoded_parameters = cJSON_GetObjectItemCaseSensitive(public_keyJSON, "encodedParameters");
    if (encoded_parameters) { 
    encoded_parameters_local_nonprim = asn_encoded_data_parseFromJSON(encoded_parameters); //nonprimitive
    }

    // public_key->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(public_keyJSON, "key");
    if (key) { 
    key_local_nonprim = asymmetric_algorithm_parseFromJSON(key); //nonprimitive
    }

    // public_key->oid
    cJSON *oid = cJSON_GetObjectItemCaseSensitive(public_keyJSON, "oid");
    if (oid) { 
    oid_local_nonprim = oid_parseFromJSON(oid); //nonprimitive
    }


    public_key_local_var = public_key_create (
        encoded_key_value ? encoded_key_value_local_nonprim : NULL,
        encoded_parameters ? encoded_parameters_local_nonprim : NULL,
        key ? key_local_nonprim : NULL,
        oid ? oid_local_nonprim : NULL
        );

    return public_key_local_var;
end:
    if (encoded_key_value_local_nonprim) {
        asn_encoded_data_free(encoded_key_value_local_nonprim);
        encoded_key_value_local_nonprim = NULL;
    }
    if (encoded_parameters_local_nonprim) {
        asn_encoded_data_free(encoded_parameters_local_nonprim);
        encoded_parameters_local_nonprim = NULL;
    }
    if (key_local_nonprim) {
        asymmetric_algorithm_free(key_local_nonprim);
        key_local_nonprim = NULL;
    }
    if (oid_local_nonprim) {
        oid_free(oid_local_nonprim);
        oid_local_nonprim = NULL;
    }
    return NULL;

}
