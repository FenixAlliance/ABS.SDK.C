#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "follow_record_dto_collection_query_parameters.h"



follow_record_dto_collection_query_parameters_t *follow_record_dto_collection_query_parameters_create(
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
    follow_record_dto_collection_query_parameters_t *follow_record_dto_collection_query_parameters_local_var = malloc(sizeof(follow_record_dto_collection_query_parameters_t));
    if (!follow_record_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    follow_record_dto_collection_query_parameters_local_var->top = top;
    follow_record_dto_collection_query_parameters_local_var->skip = skip;
    follow_record_dto_collection_query_parameters_local_var->count = count;
    follow_record_dto_collection_query_parameters_local_var->filter = filter;
    follow_record_dto_collection_query_parameters_local_var->order_by = order_by;
    follow_record_dto_collection_query_parameters_local_var->search = search;
    follow_record_dto_collection_query_parameters_local_var->select = select;
    follow_record_dto_collection_query_parameters_local_var->expand = expand;
    follow_record_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return follow_record_dto_collection_query_parameters_local_var;
}


void follow_record_dto_collection_query_parameters_free(follow_record_dto_collection_query_parameters_t *follow_record_dto_collection_query_parameters) {
    if(NULL == follow_record_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (follow_record_dto_collection_query_parameters->filter) {
        free(follow_record_dto_collection_query_parameters->filter);
        follow_record_dto_collection_query_parameters->filter = NULL;
    }
    if (follow_record_dto_collection_query_parameters->order_by) {
        free(follow_record_dto_collection_query_parameters->order_by);
        follow_record_dto_collection_query_parameters->order_by = NULL;
    }
    if (follow_record_dto_collection_query_parameters->search) {
        free(follow_record_dto_collection_query_parameters->search);
        follow_record_dto_collection_query_parameters->search = NULL;
    }
    if (follow_record_dto_collection_query_parameters->select) {
        free(follow_record_dto_collection_query_parameters->select);
        follow_record_dto_collection_query_parameters->select = NULL;
    }
    if (follow_record_dto_collection_query_parameters->expand) {
        free(follow_record_dto_collection_query_parameters->expand);
        follow_record_dto_collection_query_parameters->expand = NULL;
    }
    free(follow_record_dto_collection_query_parameters);
}

cJSON *follow_record_dto_collection_query_parameters_convertToJSON(follow_record_dto_collection_query_parameters_t *follow_record_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // follow_record_dto_collection_query_parameters->top
    if(follow_record_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", follow_record_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // follow_record_dto_collection_query_parameters->skip
    if(follow_record_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", follow_record_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // follow_record_dto_collection_query_parameters->count
    if(follow_record_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", follow_record_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // follow_record_dto_collection_query_parameters->filter
    if(follow_record_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", follow_record_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_collection_query_parameters->order_by
    if(follow_record_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", follow_record_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_collection_query_parameters->search
    if(follow_record_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", follow_record_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_collection_query_parameters->select
    if(follow_record_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", follow_record_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_collection_query_parameters->expand
    if(follow_record_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", follow_record_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_collection_query_parameters->is_empty
    if(follow_record_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", follow_record_dto_collection_query_parameters->is_empty) == NULL) {
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

follow_record_dto_collection_query_parameters_t *follow_record_dto_collection_query_parameters_parseFromJSON(cJSON *follow_record_dto_collection_query_parametersJSON){

    follow_record_dto_collection_query_parameters_t *follow_record_dto_collection_query_parameters_local_var = NULL;

    // follow_record_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // follow_record_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // follow_record_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // follow_record_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // follow_record_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // follow_record_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // follow_record_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // follow_record_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // follow_record_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(follow_record_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    follow_record_dto_collection_query_parameters_local_var = follow_record_dto_collection_query_parameters_create (
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

    return follow_record_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
