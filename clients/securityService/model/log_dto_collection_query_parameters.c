#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "log_dto_collection_query_parameters.h"



log_dto_collection_query_parameters_t *log_dto_collection_query_parameters_create(
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
    log_dto_collection_query_parameters_t *log_dto_collection_query_parameters_local_var = malloc(sizeof(log_dto_collection_query_parameters_t));
    if (!log_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    log_dto_collection_query_parameters_local_var->top = top;
    log_dto_collection_query_parameters_local_var->skip = skip;
    log_dto_collection_query_parameters_local_var->count = count;
    log_dto_collection_query_parameters_local_var->filter = filter;
    log_dto_collection_query_parameters_local_var->order_by = order_by;
    log_dto_collection_query_parameters_local_var->search = search;
    log_dto_collection_query_parameters_local_var->select = select;
    log_dto_collection_query_parameters_local_var->expand = expand;
    log_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return log_dto_collection_query_parameters_local_var;
}


void log_dto_collection_query_parameters_free(log_dto_collection_query_parameters_t *log_dto_collection_query_parameters) {
    if(NULL == log_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (log_dto_collection_query_parameters->filter) {
        free(log_dto_collection_query_parameters->filter);
        log_dto_collection_query_parameters->filter = NULL;
    }
    if (log_dto_collection_query_parameters->order_by) {
        free(log_dto_collection_query_parameters->order_by);
        log_dto_collection_query_parameters->order_by = NULL;
    }
    if (log_dto_collection_query_parameters->search) {
        free(log_dto_collection_query_parameters->search);
        log_dto_collection_query_parameters->search = NULL;
    }
    if (log_dto_collection_query_parameters->select) {
        free(log_dto_collection_query_parameters->select);
        log_dto_collection_query_parameters->select = NULL;
    }
    if (log_dto_collection_query_parameters->expand) {
        free(log_dto_collection_query_parameters->expand);
        log_dto_collection_query_parameters->expand = NULL;
    }
    free(log_dto_collection_query_parameters);
}

cJSON *log_dto_collection_query_parameters_convertToJSON(log_dto_collection_query_parameters_t *log_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // log_dto_collection_query_parameters->top
    if(log_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", log_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // log_dto_collection_query_parameters->skip
    if(log_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", log_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // log_dto_collection_query_parameters->count
    if(log_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", log_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // log_dto_collection_query_parameters->filter
    if(log_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", log_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // log_dto_collection_query_parameters->order_by
    if(log_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", log_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // log_dto_collection_query_parameters->search
    if(log_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", log_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // log_dto_collection_query_parameters->select
    if(log_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", log_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // log_dto_collection_query_parameters->expand
    if(log_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", log_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // log_dto_collection_query_parameters->is_empty
    if(log_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", log_dto_collection_query_parameters->is_empty) == NULL) {
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

log_dto_collection_query_parameters_t *log_dto_collection_query_parameters_parseFromJSON(cJSON *log_dto_collection_query_parametersJSON){

    log_dto_collection_query_parameters_t *log_dto_collection_query_parameters_local_var = NULL;

    // log_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // log_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // log_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // log_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // log_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // log_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // log_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // log_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // log_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(log_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    log_dto_collection_query_parameters_local_var = log_dto_collection_query_parameters_create (
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

    return log_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
