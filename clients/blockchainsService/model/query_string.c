#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "query_string.h"



query_string_t *query_string_create(
    char *value,
    int has_value
    ) {
    query_string_t *query_string_local_var = malloc(sizeof(query_string_t));
    if (!query_string_local_var) {
        return NULL;
    }
    query_string_local_var->value = value;
    query_string_local_var->has_value = has_value;

    return query_string_local_var;
}


void query_string_free(query_string_t *query_string) {
    if(NULL == query_string){
        return ;
    }
    listEntry_t *listEntry;
    if (query_string->value) {
        free(query_string->value);
        query_string->value = NULL;
    }
    free(query_string);
}

cJSON *query_string_convertToJSON(query_string_t *query_string) {
    cJSON *item = cJSON_CreateObject();

    // query_string->value
    if(query_string->value) {
    if(cJSON_AddStringToObject(item, "value", query_string->value) == NULL) {
    goto fail; //String
    }
    }


    // query_string->has_value
    if(query_string->has_value) {
    if(cJSON_AddBoolToObject(item, "hasValue", query_string->has_value) == NULL) {
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

query_string_t *query_string_parseFromJSON(cJSON *query_stringJSON){

    query_string_t *query_string_local_var = NULL;

    // query_string->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(query_stringJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // query_string->has_value
    cJSON *has_value = cJSON_GetObjectItemCaseSensitive(query_stringJSON, "hasValue");
    if (has_value) { 
    if(!cJSON_IsBool(has_value))
    {
    goto end; //Bool
    }
    }


    query_string_local_var = query_string_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        has_value ? has_value->valueint : 0
        );

    return query_string_local_var;
end:
    return NULL;

}
