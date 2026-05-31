#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asymmetric_algorithm.h"



asymmetric_algorithm_t *asymmetric_algorithm_create(
    int key_size,
    list_t *legal_key_sizes,
    char *signature_algorithm,
    char *key_exchange_algorithm
    ) {
    asymmetric_algorithm_t *asymmetric_algorithm_local_var = malloc(sizeof(asymmetric_algorithm_t));
    if (!asymmetric_algorithm_local_var) {
        return NULL;
    }
    asymmetric_algorithm_local_var->key_size = key_size;
    asymmetric_algorithm_local_var->legal_key_sizes = legal_key_sizes;
    asymmetric_algorithm_local_var->signature_algorithm = signature_algorithm;
    asymmetric_algorithm_local_var->key_exchange_algorithm = key_exchange_algorithm;

    return asymmetric_algorithm_local_var;
}


void asymmetric_algorithm_free(asymmetric_algorithm_t *asymmetric_algorithm) {
    if(NULL == asymmetric_algorithm){
        return ;
    }
    listEntry_t *listEntry;
    if (asymmetric_algorithm->legal_key_sizes) {
        list_ForEach(listEntry, asymmetric_algorithm->legal_key_sizes) {
            key_sizes_free(listEntry->data);
        }
        list_freeList(asymmetric_algorithm->legal_key_sizes);
        asymmetric_algorithm->legal_key_sizes = NULL;
    }
    if (asymmetric_algorithm->signature_algorithm) {
        free(asymmetric_algorithm->signature_algorithm);
        asymmetric_algorithm->signature_algorithm = NULL;
    }
    if (asymmetric_algorithm->key_exchange_algorithm) {
        free(asymmetric_algorithm->key_exchange_algorithm);
        asymmetric_algorithm->key_exchange_algorithm = NULL;
    }
    free(asymmetric_algorithm);
}

cJSON *asymmetric_algorithm_convertToJSON(asymmetric_algorithm_t *asymmetric_algorithm) {
    cJSON *item = cJSON_CreateObject();

    // asymmetric_algorithm->key_size
    if(asymmetric_algorithm->key_size) {
    if(cJSON_AddNumberToObject(item, "keySize", asymmetric_algorithm->key_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // asymmetric_algorithm->legal_key_sizes
    if(asymmetric_algorithm->legal_key_sizes) {
    cJSON *legal_key_sizes = cJSON_AddArrayToObject(item, "legalKeySizes");
    if(legal_key_sizes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *legal_key_sizesListEntry;
    if (asymmetric_algorithm->legal_key_sizes) {
    list_ForEach(legal_key_sizesListEntry, asymmetric_algorithm->legal_key_sizes) {
    cJSON *itemLocal = key_sizes_convertToJSON(legal_key_sizesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(legal_key_sizes, itemLocal);
    }
    }
    }


    // asymmetric_algorithm->signature_algorithm
    if(asymmetric_algorithm->signature_algorithm) {
    if(cJSON_AddStringToObject(item, "signatureAlgorithm", asymmetric_algorithm->signature_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // asymmetric_algorithm->key_exchange_algorithm
    if(asymmetric_algorithm->key_exchange_algorithm) {
    if(cJSON_AddStringToObject(item, "keyExchangeAlgorithm", asymmetric_algorithm->key_exchange_algorithm) == NULL) {
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

asymmetric_algorithm_t *asymmetric_algorithm_parseFromJSON(cJSON *asymmetric_algorithmJSON){

    asymmetric_algorithm_t *asymmetric_algorithm_local_var = NULL;

    // define the local list for asymmetric_algorithm->legal_key_sizes
    list_t *legal_key_sizesList = NULL;

    // asymmetric_algorithm->key_size
    cJSON *key_size = cJSON_GetObjectItemCaseSensitive(asymmetric_algorithmJSON, "keySize");
    if (key_size) { 
    if(!cJSON_IsNumber(key_size))
    {
    goto end; //Numeric
    }
    }

    // asymmetric_algorithm->legal_key_sizes
    cJSON *legal_key_sizes = cJSON_GetObjectItemCaseSensitive(asymmetric_algorithmJSON, "legalKeySizes");
    if (legal_key_sizes) { 
    cJSON *legal_key_sizes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(legal_key_sizes)){
        goto end; //nonprimitive container
    }

    legal_key_sizesList = list_createList();

    cJSON_ArrayForEach(legal_key_sizes_local_nonprimitive,legal_key_sizes )
    {
        if(!cJSON_IsObject(legal_key_sizes_local_nonprimitive)){
            goto end;
        }
        key_sizes_t *legal_key_sizesItem = key_sizes_parseFromJSON(legal_key_sizes_local_nonprimitive);

        list_addElement(legal_key_sizesList, legal_key_sizesItem);
    }
    }

    // asymmetric_algorithm->signature_algorithm
    cJSON *signature_algorithm = cJSON_GetObjectItemCaseSensitive(asymmetric_algorithmJSON, "signatureAlgorithm");
    if (signature_algorithm) { 
    if(!cJSON_IsString(signature_algorithm) && !cJSON_IsNull(signature_algorithm))
    {
    goto end; //String
    }
    }

    // asymmetric_algorithm->key_exchange_algorithm
    cJSON *key_exchange_algorithm = cJSON_GetObjectItemCaseSensitive(asymmetric_algorithmJSON, "keyExchangeAlgorithm");
    if (key_exchange_algorithm) { 
    if(!cJSON_IsString(key_exchange_algorithm) && !cJSON_IsNull(key_exchange_algorithm))
    {
    goto end; //String
    }
    }


    asymmetric_algorithm_local_var = asymmetric_algorithm_create (
        key_size ? key_size->valuedouble : 0,
        legal_key_sizes ? legal_key_sizesList : NULL,
        signature_algorithm && !cJSON_IsNull(signature_algorithm) ? strdup(signature_algorithm->valuestring) : NULL,
        key_exchange_algorithm && !cJSON_IsNull(key_exchange_algorithm) ? strdup(key_exchange_algorithm->valuestring) : NULL
        );

    return asymmetric_algorithm_local_var;
end:
    if (legal_key_sizesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, legal_key_sizesList) {
            key_sizes_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(legal_key_sizesList);
        legal_key_sizesList = NULL;
    }
    return NULL;

}
