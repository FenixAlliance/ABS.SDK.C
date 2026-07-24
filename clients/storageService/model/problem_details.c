#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "problem_details.h"



problem_details_t *problem_details_create(
    char *type,
    char *title,
    int status,
    char *detail,
    char *instance
    ) {
    problem_details_t *problem_details_local_var = malloc(sizeof(problem_details_t));
    if (!problem_details_local_var) {
        return NULL;
    }
    problem_details_local_var->type = type;
    problem_details_local_var->title = title;
    problem_details_local_var->status = status;
    problem_details_local_var->detail = detail;
    problem_details_local_var->instance = instance;

    return problem_details_local_var;
}


void problem_details_free(problem_details_t *problem_details) {
    if(NULL == problem_details){
        return ;
    }
    listEntry_t *listEntry;
    if (problem_details->type) {
        free(problem_details->type);
        problem_details->type = NULL;
    }
    if (problem_details->title) {
        free(problem_details->title);
        problem_details->title = NULL;
    }
    if (problem_details->detail) {
        free(problem_details->detail);
        problem_details->detail = NULL;
    }
    if (problem_details->instance) {
        free(problem_details->instance);
        problem_details->instance = NULL;
    }
    free(problem_details);
}

cJSON *problem_details_convertToJSON(problem_details_t *problem_details) {
    cJSON *item = cJSON_CreateObject();

    // problem_details->type
    if(problem_details->type) {
    if(cJSON_AddStringToObject(item, "type", problem_details->type) == NULL) {
    goto fail; //String
    }
    }


    // problem_details->title
    if(problem_details->title) {
    if(cJSON_AddStringToObject(item, "title", problem_details->title) == NULL) {
    goto fail; //String
    }
    }


    // problem_details->status
    if(problem_details->status) {
    if(cJSON_AddNumberToObject(item, "status", problem_details->status) == NULL) {
    goto fail; //Numeric
    }
    }


    // problem_details->detail
    if(problem_details->detail) {
    if(cJSON_AddStringToObject(item, "detail", problem_details->detail) == NULL) {
    goto fail; //String
    }
    }


    // problem_details->instance
    if(problem_details->instance) {
    if(cJSON_AddStringToObject(item, "instance", problem_details->instance) == NULL) {
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

problem_details_t *problem_details_parseFromJSON(cJSON *problem_detailsJSON){

    problem_details_t *problem_details_local_var = NULL;

    // problem_details->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(problem_detailsJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // problem_details->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(problem_detailsJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // problem_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(problem_detailsJSON, "status");
    if (status) { 
    if(!cJSON_IsNumber(status))
    {
    goto end; //Numeric
    }
    }

    // problem_details->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(problem_detailsJSON, "detail");
    if (detail) { 
    if(!cJSON_IsString(detail) && !cJSON_IsNull(detail))
    {
    goto end; //String
    }
    }

    // problem_details->instance
    cJSON *instance = cJSON_GetObjectItemCaseSensitive(problem_detailsJSON, "instance");
    if (instance) { 
    if(!cJSON_IsString(instance) && !cJSON_IsNull(instance))
    {
    goto end; //String
    }
    }


    problem_details_local_var = problem_details_create (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        status ? status->valuedouble : 0,
        detail && !cJSON_IsNull(detail) ? strdup(detail->valuestring) : NULL,
        instance && !cJSON_IsNull(instance) ? strdup(instance->valuestring) : NULL
        );

    return problem_details_local_var;
end:
    return NULL;

}
