#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "key_sizes.h"



key_sizes_t *key_sizes_create(
    int min_size,
    int max_size,
    int skip_size
    ) {
    key_sizes_t *key_sizes_local_var = malloc(sizeof(key_sizes_t));
    if (!key_sizes_local_var) {
        return NULL;
    }
    key_sizes_local_var->min_size = min_size;
    key_sizes_local_var->max_size = max_size;
    key_sizes_local_var->skip_size = skip_size;

    return key_sizes_local_var;
}


void key_sizes_free(key_sizes_t *key_sizes) {
    if(NULL == key_sizes){
        return ;
    }
    listEntry_t *listEntry;
    free(key_sizes);
}

cJSON *key_sizes_convertToJSON(key_sizes_t *key_sizes) {
    cJSON *item = cJSON_CreateObject();

    // key_sizes->min_size
    if(key_sizes->min_size) {
    if(cJSON_AddNumberToObject(item, "minSize", key_sizes->min_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // key_sizes->max_size
    if(key_sizes->max_size) {
    if(cJSON_AddNumberToObject(item, "maxSize", key_sizes->max_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // key_sizes->skip_size
    if(key_sizes->skip_size) {
    if(cJSON_AddNumberToObject(item, "skipSize", key_sizes->skip_size) == NULL) {
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

key_sizes_t *key_sizes_parseFromJSON(cJSON *key_sizesJSON){

    key_sizes_t *key_sizes_local_var = NULL;

    // key_sizes->min_size
    cJSON *min_size = cJSON_GetObjectItemCaseSensitive(key_sizesJSON, "minSize");
    if (min_size) { 
    if(!cJSON_IsNumber(min_size))
    {
    goto end; //Numeric
    }
    }

    // key_sizes->max_size
    cJSON *max_size = cJSON_GetObjectItemCaseSensitive(key_sizesJSON, "maxSize");
    if (max_size) { 
    if(!cJSON_IsNumber(max_size))
    {
    goto end; //Numeric
    }
    }

    // key_sizes->skip_size
    cJSON *skip_size = cJSON_GetObjectItemCaseSensitive(key_sizesJSON, "skipSize");
    if (skip_size) { 
    if(!cJSON_IsNumber(skip_size))
    {
    goto end; //Numeric
    }
    }


    key_sizes_local_var = key_sizes_create (
        min_size ? min_size->valuedouble : 0,
        max_size ? max_size->valuedouble : 0,
        skip_size ? skip_size->valuedouble : 0
        );

    return key_sizes_local_var;
end:
    return NULL;

}
