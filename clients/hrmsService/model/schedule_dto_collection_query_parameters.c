#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "schedule_dto_collection_query_parameters.h"



schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters_create(
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
    schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters_local_var = malloc(sizeof(schedule_dto_collection_query_parameters_t));
    if (!schedule_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    schedule_dto_collection_query_parameters_local_var->top = top;
    schedule_dto_collection_query_parameters_local_var->skip = skip;
    schedule_dto_collection_query_parameters_local_var->count = count;
    schedule_dto_collection_query_parameters_local_var->filter = filter;
    schedule_dto_collection_query_parameters_local_var->order_by = order_by;
    schedule_dto_collection_query_parameters_local_var->search = search;
    schedule_dto_collection_query_parameters_local_var->select = select;
    schedule_dto_collection_query_parameters_local_var->expand = expand;
    schedule_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return schedule_dto_collection_query_parameters_local_var;
}


void schedule_dto_collection_query_parameters_free(schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters) {
    if(NULL == schedule_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (schedule_dto_collection_query_parameters->filter) {
        free(schedule_dto_collection_query_parameters->filter);
        schedule_dto_collection_query_parameters->filter = NULL;
    }
    if (schedule_dto_collection_query_parameters->order_by) {
        free(schedule_dto_collection_query_parameters->order_by);
        schedule_dto_collection_query_parameters->order_by = NULL;
    }
    if (schedule_dto_collection_query_parameters->search) {
        free(schedule_dto_collection_query_parameters->search);
        schedule_dto_collection_query_parameters->search = NULL;
    }
    if (schedule_dto_collection_query_parameters->select) {
        free(schedule_dto_collection_query_parameters->select);
        schedule_dto_collection_query_parameters->select = NULL;
    }
    if (schedule_dto_collection_query_parameters->expand) {
        free(schedule_dto_collection_query_parameters->expand);
        schedule_dto_collection_query_parameters->expand = NULL;
    }
    free(schedule_dto_collection_query_parameters);
}

cJSON *schedule_dto_collection_query_parameters_convertToJSON(schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // schedule_dto_collection_query_parameters->top
    if(schedule_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", schedule_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // schedule_dto_collection_query_parameters->skip
    if(schedule_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", schedule_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // schedule_dto_collection_query_parameters->count
    if(schedule_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", schedule_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto_collection_query_parameters->filter
    if(schedule_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", schedule_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto_collection_query_parameters->order_by
    if(schedule_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", schedule_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto_collection_query_parameters->search
    if(schedule_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", schedule_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto_collection_query_parameters->select
    if(schedule_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", schedule_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto_collection_query_parameters->expand
    if(schedule_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", schedule_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto_collection_query_parameters->is_empty
    if(schedule_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", schedule_dto_collection_query_parameters->is_empty) == NULL) {
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

schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters_parseFromJSON(cJSON *schedule_dto_collection_query_parametersJSON){

    schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters_local_var = NULL;

    // schedule_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // schedule_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // schedule_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // schedule_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // schedule_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // schedule_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // schedule_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // schedule_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // schedule_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(schedule_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    schedule_dto_collection_query_parameters_local_var = schedule_dto_collection_query_parameters_create (
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

    return schedule_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
