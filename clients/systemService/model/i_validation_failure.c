#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_validation_failure.h"



i_validation_failure_t *i_validation_failure_create(
    char *message,
    char *how_to_resolve
    ) {
    i_validation_failure_t *i_validation_failure_local_var = malloc(sizeof(i_validation_failure_t));
    if (!i_validation_failure_local_var) {
        return NULL;
    }
    i_validation_failure_local_var->message = message;
    i_validation_failure_local_var->how_to_resolve = how_to_resolve;

    return i_validation_failure_local_var;
}


void i_validation_failure_free(i_validation_failure_t *i_validation_failure) {
    if(NULL == i_validation_failure){
        return ;
    }
    listEntry_t *listEntry;
    if (i_validation_failure->message) {
        free(i_validation_failure->message);
        i_validation_failure->message = NULL;
    }
    if (i_validation_failure->how_to_resolve) {
        free(i_validation_failure->how_to_resolve);
        i_validation_failure->how_to_resolve = NULL;
    }
    free(i_validation_failure);
}

cJSON *i_validation_failure_convertToJSON(i_validation_failure_t *i_validation_failure) {
    cJSON *item = cJSON_CreateObject();

    // i_validation_failure->message
    if(i_validation_failure->message) {
    if(cJSON_AddStringToObject(item, "message", i_validation_failure->message) == NULL) {
    goto fail; //String
    }
    }


    // i_validation_failure->how_to_resolve
    if(i_validation_failure->how_to_resolve) {
    if(cJSON_AddStringToObject(item, "howToResolve", i_validation_failure->how_to_resolve) == NULL) {
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

i_validation_failure_t *i_validation_failure_parseFromJSON(cJSON *i_validation_failureJSON){

    i_validation_failure_t *i_validation_failure_local_var = NULL;

    // i_validation_failure->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(i_validation_failureJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // i_validation_failure->how_to_resolve
    cJSON *how_to_resolve = cJSON_GetObjectItemCaseSensitive(i_validation_failureJSON, "howToResolve");
    if (how_to_resolve) { 
    if(!cJSON_IsString(how_to_resolve) && !cJSON_IsNull(how_to_resolve))
    {
    goto end; //String
    }
    }


    i_validation_failure_local_var = i_validation_failure_create (
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        how_to_resolve && !cJSON_IsNull(how_to_resolve) ? strdup(how_to_resolve->valuestring) : NULL
        );

    return i_validation_failure_local_var;
end:
    return NULL;

}
