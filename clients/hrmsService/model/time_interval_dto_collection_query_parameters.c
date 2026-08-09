#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "time_interval_dto_collection_query_parameters.h"



time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters_create(
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
    time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters_local_var = malloc(sizeof(time_interval_dto_collection_query_parameters_t));
    if (!time_interval_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    time_interval_dto_collection_query_parameters_local_var->top = top;
    time_interval_dto_collection_query_parameters_local_var->skip = skip;
    time_interval_dto_collection_query_parameters_local_var->count = count;
    time_interval_dto_collection_query_parameters_local_var->filter = filter;
    time_interval_dto_collection_query_parameters_local_var->order_by = order_by;
    time_interval_dto_collection_query_parameters_local_var->search = search;
    time_interval_dto_collection_query_parameters_local_var->select = select;
    time_interval_dto_collection_query_parameters_local_var->expand = expand;
    time_interval_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return time_interval_dto_collection_query_parameters_local_var;
}


void time_interval_dto_collection_query_parameters_free(time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters) {
    if(NULL == time_interval_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (time_interval_dto_collection_query_parameters->filter) {
        free(time_interval_dto_collection_query_parameters->filter);
        time_interval_dto_collection_query_parameters->filter = NULL;
    }
    if (time_interval_dto_collection_query_parameters->order_by) {
        free(time_interval_dto_collection_query_parameters->order_by);
        time_interval_dto_collection_query_parameters->order_by = NULL;
    }
    if (time_interval_dto_collection_query_parameters->search) {
        free(time_interval_dto_collection_query_parameters->search);
        time_interval_dto_collection_query_parameters->search = NULL;
    }
    if (time_interval_dto_collection_query_parameters->select) {
        free(time_interval_dto_collection_query_parameters->select);
        time_interval_dto_collection_query_parameters->select = NULL;
    }
    if (time_interval_dto_collection_query_parameters->expand) {
        free(time_interval_dto_collection_query_parameters->expand);
        time_interval_dto_collection_query_parameters->expand = NULL;
    }
    free(time_interval_dto_collection_query_parameters);
}

cJSON *time_interval_dto_collection_query_parameters_convertToJSON(time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // time_interval_dto_collection_query_parameters->top
    if(time_interval_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", time_interval_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // time_interval_dto_collection_query_parameters->skip
    if(time_interval_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", time_interval_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // time_interval_dto_collection_query_parameters->count
    if(time_interval_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", time_interval_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_dto_collection_query_parameters->filter
    if(time_interval_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", time_interval_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_dto_collection_query_parameters->order_by
    if(time_interval_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", time_interval_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_dto_collection_query_parameters->search
    if(time_interval_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", time_interval_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_dto_collection_query_parameters->select
    if(time_interval_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", time_interval_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_dto_collection_query_parameters->expand
    if(time_interval_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", time_interval_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_dto_collection_query_parameters->is_empty
    if(time_interval_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", time_interval_dto_collection_query_parameters->is_empty) == NULL) {
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

time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters_parseFromJSON(cJSON *time_interval_dto_collection_query_parametersJSON){

    time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters_local_var = NULL;

    // time_interval_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // time_interval_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // time_interval_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // time_interval_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // time_interval_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // time_interval_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // time_interval_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // time_interval_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // time_interval_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(time_interval_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    time_interval_dto_collection_query_parameters_local_var = time_interval_dto_collection_query_parameters_create (
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

    return time_interval_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
