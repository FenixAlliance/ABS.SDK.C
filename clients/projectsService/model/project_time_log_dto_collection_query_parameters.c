#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_time_log_dto_collection_query_parameters.h"



project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters_create(
    int top,
    int skip,
    int count,
    char *filter,
    char *order_by,
    char *search,
    char *select,
    char *expand,
    int is_empty
    ) {
    project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters_local_var = malloc(sizeof(project_time_log_dto_collection_query_parameters_t));
    if (!project_time_log_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    project_time_log_dto_collection_query_parameters_local_var->top = top;
    project_time_log_dto_collection_query_parameters_local_var->skip = skip;
    project_time_log_dto_collection_query_parameters_local_var->count = count;
    project_time_log_dto_collection_query_parameters_local_var->filter = filter;
    project_time_log_dto_collection_query_parameters_local_var->order_by = order_by;
    project_time_log_dto_collection_query_parameters_local_var->search = search;
    project_time_log_dto_collection_query_parameters_local_var->select = select;
    project_time_log_dto_collection_query_parameters_local_var->expand = expand;
    project_time_log_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return project_time_log_dto_collection_query_parameters_local_var;
}


void project_time_log_dto_collection_query_parameters_free(project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters) {
    if(NULL == project_time_log_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (project_time_log_dto_collection_query_parameters->filter) {
        free(project_time_log_dto_collection_query_parameters->filter);
        project_time_log_dto_collection_query_parameters->filter = NULL;
    }
    if (project_time_log_dto_collection_query_parameters->order_by) {
        free(project_time_log_dto_collection_query_parameters->order_by);
        project_time_log_dto_collection_query_parameters->order_by = NULL;
    }
    if (project_time_log_dto_collection_query_parameters->search) {
        free(project_time_log_dto_collection_query_parameters->search);
        project_time_log_dto_collection_query_parameters->search = NULL;
    }
    if (project_time_log_dto_collection_query_parameters->select) {
        free(project_time_log_dto_collection_query_parameters->select);
        project_time_log_dto_collection_query_parameters->select = NULL;
    }
    if (project_time_log_dto_collection_query_parameters->expand) {
        free(project_time_log_dto_collection_query_parameters->expand);
        project_time_log_dto_collection_query_parameters->expand = NULL;
    }
    free(project_time_log_dto_collection_query_parameters);
}

cJSON *project_time_log_dto_collection_query_parameters_convertToJSON(project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // project_time_log_dto_collection_query_parameters->top
    if(project_time_log_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", project_time_log_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // project_time_log_dto_collection_query_parameters->skip
    if(project_time_log_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", project_time_log_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // project_time_log_dto_collection_query_parameters->count
    if(project_time_log_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", project_time_log_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // project_time_log_dto_collection_query_parameters->filter
    if(project_time_log_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", project_time_log_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto_collection_query_parameters->order_by
    if(project_time_log_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", project_time_log_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto_collection_query_parameters->search
    if(project_time_log_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", project_time_log_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto_collection_query_parameters->select
    if(project_time_log_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", project_time_log_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto_collection_query_parameters->expand
    if(project_time_log_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", project_time_log_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto_collection_query_parameters->is_empty
    if(project_time_log_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", project_time_log_dto_collection_query_parameters->is_empty) == NULL) {
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

project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters_parseFromJSON(cJSON *project_time_log_dto_collection_query_parametersJSON){

    project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters_local_var = NULL;

    // project_time_log_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // project_time_log_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // project_time_log_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // project_time_log_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // project_time_log_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // project_time_log_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // project_time_log_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // project_time_log_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // project_time_log_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(project_time_log_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    project_time_log_dto_collection_query_parameters_local_var = project_time_log_dto_collection_query_parameters_create (
        top ? top->valuedouble : 0,
        skip ? skip->valuedouble : 0,
        count ? count->valueint : 0,
        filter && !cJSON_IsNull(filter) ? strdup(filter->valuestring) : NULL,
        order_by && !cJSON_IsNull(order_by) ? strdup(order_by->valuestring) : NULL,
        search && !cJSON_IsNull(search) ? strdup(search->valuestring) : NULL,
        select && !cJSON_IsNull(select) ? strdup(select->valuestring) : NULL,
        expand && !cJSON_IsNull(expand) ? strdup(expand->valuestring) : NULL,
        is_empty ? is_empty->valueint : 0
        );

    return project_time_log_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
