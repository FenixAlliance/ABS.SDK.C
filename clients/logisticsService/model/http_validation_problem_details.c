#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "http_validation_problem_details.h"



http_validation_problem_details_t *http_validation_problem_details_create(
    char *type,
    char *title,
    int status,
    char *detail,
    char *instance,
    list_t* errors
    ) {
    http_validation_problem_details_t *http_validation_problem_details_local_var = malloc(sizeof(http_validation_problem_details_t));
    if (!http_validation_problem_details_local_var) {
        return NULL;
    }
    http_validation_problem_details_local_var->type = type;
    http_validation_problem_details_local_var->title = title;
    http_validation_problem_details_local_var->status = status;
    http_validation_problem_details_local_var->detail = detail;
    http_validation_problem_details_local_var->instance = instance;
    http_validation_problem_details_local_var->errors = errors;

    return http_validation_problem_details_local_var;
}


void http_validation_problem_details_free(http_validation_problem_details_t *http_validation_problem_details) {
    if(NULL == http_validation_problem_details){
        return ;
    }
    listEntry_t *listEntry;
    if (http_validation_problem_details->type) {
        free(http_validation_problem_details->type);
        http_validation_problem_details->type = NULL;
    }
    if (http_validation_problem_details->title) {
        free(http_validation_problem_details->title);
        http_validation_problem_details->title = NULL;
    }
    if (http_validation_problem_details->detail) {
        free(http_validation_problem_details->detail);
        http_validation_problem_details->detail = NULL;
    }
    if (http_validation_problem_details->instance) {
        free(http_validation_problem_details->instance);
        http_validation_problem_details->instance = NULL;
    }
    if (http_validation_problem_details->errors) {
        list_ForEach(listEntry, http_validation_problem_details->errors) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(http_validation_problem_details->errors);
        http_validation_problem_details->errors = NULL;
    }
    free(http_validation_problem_details);
}

cJSON *http_validation_problem_details_convertToJSON(http_validation_problem_details_t *http_validation_problem_details) {
    cJSON *item = cJSON_CreateObject();

    // http_validation_problem_details->type
    if(http_validation_problem_details->type) {
    if(cJSON_AddStringToObject(item, "type", http_validation_problem_details->type) == NULL) {
    goto fail; //String
    }
    }


    // http_validation_problem_details->title
    if(http_validation_problem_details->title) {
    if(cJSON_AddStringToObject(item, "title", http_validation_problem_details->title) == NULL) {
    goto fail; //String
    }
    }


    // http_validation_problem_details->status
    if(http_validation_problem_details->status) {
    if(cJSON_AddNumberToObject(item, "status", http_validation_problem_details->status) == NULL) {
    goto fail; //Numeric
    }
    }


    // http_validation_problem_details->detail
    if(http_validation_problem_details->detail) {
    if(cJSON_AddStringToObject(item, "detail", http_validation_problem_details->detail) == NULL) {
    goto fail; //String
    }
    }


    // http_validation_problem_details->instance
    if(http_validation_problem_details->instance) {
    if(cJSON_AddStringToObject(item, "instance", http_validation_problem_details->instance) == NULL) {
    goto fail; //String
    }
    }


    // http_validation_problem_details->errors
    if(http_validation_problem_details->errors) {
    cJSON *errors = cJSON_AddObjectToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = errors;
    listEntry_t *errorsListEntry;
    if (http_validation_problem_details->errors) {
    list_ForEach(errorsListEntry, http_validation_problem_details->errors) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)errorsListEntry->data;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

http_validation_problem_details_t *http_validation_problem_details_parseFromJSON(cJSON *http_validation_problem_detailsJSON){

    http_validation_problem_details_t *http_validation_problem_details_local_var = NULL;

    // define the local map for http_validation_problem_details->errors
    list_t *errorsList = NULL;

    // http_validation_problem_details->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(http_validation_problem_detailsJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // http_validation_problem_details->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(http_validation_problem_detailsJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // http_validation_problem_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(http_validation_problem_detailsJSON, "status");
    if (status) { 
    if(!cJSON_IsNumber(status))
    {
    goto end; //Numeric
    }
    }

    // http_validation_problem_details->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(http_validation_problem_detailsJSON, "detail");
    if (detail) { 
    if(!cJSON_IsString(detail) && !cJSON_IsNull(detail))
    {
    goto end; //String
    }
    }

    // http_validation_problem_details->instance
    cJSON *instance = cJSON_GetObjectItemCaseSensitive(http_validation_problem_detailsJSON, "instance");
    if (instance) { 
    if(!cJSON_IsString(instance) && !cJSON_IsNull(instance))
    {
    goto end; //String
    }
    }

    // http_validation_problem_details->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(http_validation_problem_detailsJSON, "errors");
    if (errors) { 
    cJSON *errors_local_map = NULL;
    if(!cJSON_IsObject(errors) && !cJSON_IsNull(errors))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(errors))
    {
        errorsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(errors_local_map, errors)
        {
            cJSON *localMapObject = errors_local_map;
            list_addElement(errorsList , localMapKeyPair);
        }
    }
    }


    http_validation_problem_details_local_var = http_validation_problem_details_create (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        status ? status->valuedouble : 0,
        detail && !cJSON_IsNull(detail) ? strdup(detail->valuestring) : NULL,
        instance && !cJSON_IsNull(instance) ? strdup(instance->valuestring) : NULL,
        errors ? errorsList : NULL
        );

    return http_validation_problem_details_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    return NULL;

}
