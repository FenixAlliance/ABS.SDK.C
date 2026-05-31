#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error.h"



error_t *error_create(
    char *id,
    char *description,
    char *help
    ) {
    error_t *error_local_var = malloc(sizeof(error_t));
    if (!error_local_var) {
        return NULL;
    }
    error_local_var->id = id;
    error_local_var->description = description;
    error_local_var->help = help;

    return error_local_var;
}


void error_free(error_t *error) {
    if(NULL == error){
        return ;
    }
    listEntry_t *listEntry;
    if (error->id) {
        free(error->id);
        error->id = NULL;
    }
    if (error->description) {
        free(error->description);
        error->description = NULL;
    }
    if (error->help) {
        free(error->help);
        error->help = NULL;
    }
    free(error);
}

cJSON *error_convertToJSON(error_t *error) {
    cJSON *item = cJSON_CreateObject();

    // error->id
    if(error->id) {
    if(cJSON_AddStringToObject(item, "id", error->id) == NULL) {
    goto fail; //String
    }
    }


    // error->description
    if(error->description) {
    if(cJSON_AddStringToObject(item, "description", error->description) == NULL) {
    goto fail; //String
    }
    }


    // error->help
    if(error->help) {
    if(cJSON_AddStringToObject(item, "help", error->help) == NULL) {
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

error_t *error_parseFromJSON(cJSON *errorJSON){

    error_t *error_local_var = NULL;

    // error->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(errorJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // error->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(errorJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // error->help
    cJSON *help = cJSON_GetObjectItemCaseSensitive(errorJSON, "help");
    if (help) { 
    if(!cJSON_IsString(help) && !cJSON_IsNull(help))
    {
    goto end; //String
    }
    }


    error_local_var = error_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        help && !cJSON_IsNull(help) ? strdup(help->valuestring) : NULL
        );

    return error_local_var;
end:
    return NULL;

}
