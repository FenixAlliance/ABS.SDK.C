#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task_category_dto_collection_query_parameters.h"



task_category_dto_collection_query_parameters_t *task_category_dto_collection_query_parameters_create(
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
    task_category_dto_collection_query_parameters_t *task_category_dto_collection_query_parameters_local_var = malloc(sizeof(task_category_dto_collection_query_parameters_t));
    if (!task_category_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    task_category_dto_collection_query_parameters_local_var->top = top;
    task_category_dto_collection_query_parameters_local_var->skip = skip;
    task_category_dto_collection_query_parameters_local_var->count = count;
    task_category_dto_collection_query_parameters_local_var->filter = filter;
    task_category_dto_collection_query_parameters_local_var->order_by = order_by;
    task_category_dto_collection_query_parameters_local_var->search = search;
    task_category_dto_collection_query_parameters_local_var->select = select;
    task_category_dto_collection_query_parameters_local_var->expand = expand;
    task_category_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return task_category_dto_collection_query_parameters_local_var;
}


void task_category_dto_collection_query_parameters_free(task_category_dto_collection_query_parameters_t *task_category_dto_collection_query_parameters) {
    if(NULL == task_category_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (task_category_dto_collection_query_parameters->filter) {
        free(task_category_dto_collection_query_parameters->filter);
        task_category_dto_collection_query_parameters->filter = NULL;
    }
    if (task_category_dto_collection_query_parameters->order_by) {
        free(task_category_dto_collection_query_parameters->order_by);
        task_category_dto_collection_query_parameters->order_by = NULL;
    }
    if (task_category_dto_collection_query_parameters->search) {
        free(task_category_dto_collection_query_parameters->search);
        task_category_dto_collection_query_parameters->search = NULL;
    }
    if (task_category_dto_collection_query_parameters->select) {
        free(task_category_dto_collection_query_parameters->select);
        task_category_dto_collection_query_parameters->select = NULL;
    }
    if (task_category_dto_collection_query_parameters->expand) {
        free(task_category_dto_collection_query_parameters->expand);
        task_category_dto_collection_query_parameters->expand = NULL;
    }
    free(task_category_dto_collection_query_parameters);
}

cJSON *task_category_dto_collection_query_parameters_convertToJSON(task_category_dto_collection_query_parameters_t *task_category_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // task_category_dto_collection_query_parameters->top
    if(task_category_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", task_category_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // task_category_dto_collection_query_parameters->skip
    if(task_category_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", task_category_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // task_category_dto_collection_query_parameters->count
    if(task_category_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", task_category_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // task_category_dto_collection_query_parameters->filter
    if(task_category_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", task_category_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_collection_query_parameters->order_by
    if(task_category_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", task_category_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_collection_query_parameters->search
    if(task_category_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", task_category_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_collection_query_parameters->select
    if(task_category_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", task_category_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_collection_query_parameters->expand
    if(task_category_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", task_category_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_collection_query_parameters->is_empty
    if(task_category_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", task_category_dto_collection_query_parameters->is_empty) == NULL) {
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

task_category_dto_collection_query_parameters_t *task_category_dto_collection_query_parameters_parseFromJSON(cJSON *task_category_dto_collection_query_parametersJSON){

    task_category_dto_collection_query_parameters_t *task_category_dto_collection_query_parameters_local_var = NULL;

    // task_category_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // task_category_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // task_category_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // task_category_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // task_category_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // task_category_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // task_category_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // task_category_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // task_category_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(task_category_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    task_category_dto_collection_query_parameters_local_var = task_category_dto_collection_query_parameters_create (
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

    return task_category_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
