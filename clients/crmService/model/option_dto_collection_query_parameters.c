#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "option_dto_collection_query_parameters.h"



option_dto_collection_query_parameters_t *option_dto_collection_query_parameters_create(
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
    option_dto_collection_query_parameters_t *option_dto_collection_query_parameters_local_var = malloc(sizeof(option_dto_collection_query_parameters_t));
    if (!option_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    option_dto_collection_query_parameters_local_var->top = top;
    option_dto_collection_query_parameters_local_var->skip = skip;
    option_dto_collection_query_parameters_local_var->count = count;
    option_dto_collection_query_parameters_local_var->filter = filter;
    option_dto_collection_query_parameters_local_var->order_by = order_by;
    option_dto_collection_query_parameters_local_var->search = search;
    option_dto_collection_query_parameters_local_var->select = select;
    option_dto_collection_query_parameters_local_var->expand = expand;
    option_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return option_dto_collection_query_parameters_local_var;
}


void option_dto_collection_query_parameters_free(option_dto_collection_query_parameters_t *option_dto_collection_query_parameters) {
    if(NULL == option_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (option_dto_collection_query_parameters->filter) {
        free(option_dto_collection_query_parameters->filter);
        option_dto_collection_query_parameters->filter = NULL;
    }
    if (option_dto_collection_query_parameters->order_by) {
        free(option_dto_collection_query_parameters->order_by);
        option_dto_collection_query_parameters->order_by = NULL;
    }
    if (option_dto_collection_query_parameters->search) {
        free(option_dto_collection_query_parameters->search);
        option_dto_collection_query_parameters->search = NULL;
    }
    if (option_dto_collection_query_parameters->select) {
        free(option_dto_collection_query_parameters->select);
        option_dto_collection_query_parameters->select = NULL;
    }
    if (option_dto_collection_query_parameters->expand) {
        free(option_dto_collection_query_parameters->expand);
        option_dto_collection_query_parameters->expand = NULL;
    }
    free(option_dto_collection_query_parameters);
}

cJSON *option_dto_collection_query_parameters_convertToJSON(option_dto_collection_query_parameters_t *option_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // option_dto_collection_query_parameters->top
    if(option_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", option_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // option_dto_collection_query_parameters->skip
    if(option_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", option_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // option_dto_collection_query_parameters->count
    if(option_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", option_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // option_dto_collection_query_parameters->filter
    if(option_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", option_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_collection_query_parameters->order_by
    if(option_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", option_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_collection_query_parameters->search
    if(option_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", option_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_collection_query_parameters->select
    if(option_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", option_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_collection_query_parameters->expand
    if(option_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", option_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_collection_query_parameters->is_empty
    if(option_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", option_dto_collection_query_parameters->is_empty) == NULL) {
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

option_dto_collection_query_parameters_t *option_dto_collection_query_parameters_parseFromJSON(cJSON *option_dto_collection_query_parametersJSON){

    option_dto_collection_query_parameters_t *option_dto_collection_query_parameters_local_var = NULL;

    // option_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // option_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // option_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // option_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // option_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // option_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // option_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // option_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // option_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(option_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    option_dto_collection_query_parameters_local_var = option_dto_collection_query_parameters_create (
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

    return option_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
