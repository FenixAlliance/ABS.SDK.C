#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "path_string.h"



path_string_t *path_string_create(
    char *value,
    int has_value
    ) {
    path_string_t *path_string_local_var = malloc(sizeof(path_string_t));
    if (!path_string_local_var) {
        return NULL;
    }
    path_string_local_var->value = value;
    path_string_local_var->has_value = has_value;

    return path_string_local_var;
}


void path_string_free(path_string_t *path_string) {
    if(NULL == path_string){
        return ;
    }
    listEntry_t *listEntry;
    if (path_string->value) {
        free(path_string->value);
        path_string->value = NULL;
    }
    free(path_string);
}

cJSON *path_string_convertToJSON(path_string_t *path_string) {
    cJSON *item = cJSON_CreateObject();

    // path_string->value
    if(path_string->value) {
    if(cJSON_AddStringToObject(item, "value", path_string->value) == NULL) {
    goto fail; //String
    }
    }


    // path_string->has_value
    if(path_string->has_value) {
    if(cJSON_AddBoolToObject(item, "hasValue", path_string->has_value) == NULL) {
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

path_string_t *path_string_parseFromJSON(cJSON *path_stringJSON){

    path_string_t *path_string_local_var = NULL;

    // path_string->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(path_stringJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // path_string->has_value
    cJSON *has_value = cJSON_GetObjectItemCaseSensitive(path_stringJSON, "hasValue");
    if (has_value) { 
    if(!cJSON_IsBool(has_value))
    {
    goto end; //Bool
    }
    }


    path_string_local_var = path_string_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        has_value ? has_value->valueint : 0
        );

    return path_string_local_var;
end:
    return NULL;

}
