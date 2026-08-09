#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_dto_collection_query_parameters.h"



non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters_create(
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
    non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters_local_var = malloc(sizeof(non_fungible_token_dto_collection_query_parameters_t));
    if (!non_fungible_token_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    non_fungible_token_dto_collection_query_parameters_local_var->top = top;
    non_fungible_token_dto_collection_query_parameters_local_var->skip = skip;
    non_fungible_token_dto_collection_query_parameters_local_var->count = count;
    non_fungible_token_dto_collection_query_parameters_local_var->filter = filter;
    non_fungible_token_dto_collection_query_parameters_local_var->order_by = order_by;
    non_fungible_token_dto_collection_query_parameters_local_var->search = search;
    non_fungible_token_dto_collection_query_parameters_local_var->select = select;
    non_fungible_token_dto_collection_query_parameters_local_var->expand = expand;
    non_fungible_token_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return non_fungible_token_dto_collection_query_parameters_local_var;
}


void non_fungible_token_dto_collection_query_parameters_free(non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters) {
    if(NULL == non_fungible_token_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_dto_collection_query_parameters->filter) {
        free(non_fungible_token_dto_collection_query_parameters->filter);
        non_fungible_token_dto_collection_query_parameters->filter = NULL;
    }
    if (non_fungible_token_dto_collection_query_parameters->order_by) {
        free(non_fungible_token_dto_collection_query_parameters->order_by);
        non_fungible_token_dto_collection_query_parameters->order_by = NULL;
    }
    if (non_fungible_token_dto_collection_query_parameters->search) {
        free(non_fungible_token_dto_collection_query_parameters->search);
        non_fungible_token_dto_collection_query_parameters->search = NULL;
    }
    if (non_fungible_token_dto_collection_query_parameters->select) {
        free(non_fungible_token_dto_collection_query_parameters->select);
        non_fungible_token_dto_collection_query_parameters->select = NULL;
    }
    if (non_fungible_token_dto_collection_query_parameters->expand) {
        free(non_fungible_token_dto_collection_query_parameters->expand);
        non_fungible_token_dto_collection_query_parameters->expand = NULL;
    }
    free(non_fungible_token_dto_collection_query_parameters);
}

cJSON *non_fungible_token_dto_collection_query_parameters_convertToJSON(non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_dto_collection_query_parameters->top
    if(non_fungible_token_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", non_fungible_token_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // non_fungible_token_dto_collection_query_parameters->skip
    if(non_fungible_token_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", non_fungible_token_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // non_fungible_token_dto_collection_query_parameters->count
    if(non_fungible_token_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", non_fungible_token_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_dto_collection_query_parameters->filter
    if(non_fungible_token_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", non_fungible_token_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto_collection_query_parameters->order_by
    if(non_fungible_token_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", non_fungible_token_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto_collection_query_parameters->search
    if(non_fungible_token_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", non_fungible_token_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto_collection_query_parameters->select
    if(non_fungible_token_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", non_fungible_token_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto_collection_query_parameters->expand
    if(non_fungible_token_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", non_fungible_token_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto_collection_query_parameters->is_empty
    if(non_fungible_token_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", non_fungible_token_dto_collection_query_parameters->is_empty) == NULL) {
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

non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters_parseFromJSON(cJSON *non_fungible_token_dto_collection_query_parametersJSON){

    non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters_local_var = NULL;

    // non_fungible_token_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // non_fungible_token_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // non_fungible_token_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    non_fungible_token_dto_collection_query_parameters_local_var = non_fungible_token_dto_collection_query_parameters_create (
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

    return non_fungible_token_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
