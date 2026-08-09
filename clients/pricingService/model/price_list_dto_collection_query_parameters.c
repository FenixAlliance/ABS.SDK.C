#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "price_list_dto_collection_query_parameters.h"



price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters_create(
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
    price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters_local_var = malloc(sizeof(price_list_dto_collection_query_parameters_t));
    if (!price_list_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    price_list_dto_collection_query_parameters_local_var->top = top;
    price_list_dto_collection_query_parameters_local_var->skip = skip;
    price_list_dto_collection_query_parameters_local_var->count = count;
    price_list_dto_collection_query_parameters_local_var->filter = filter;
    price_list_dto_collection_query_parameters_local_var->order_by = order_by;
    price_list_dto_collection_query_parameters_local_var->search = search;
    price_list_dto_collection_query_parameters_local_var->select = select;
    price_list_dto_collection_query_parameters_local_var->expand = expand;
    price_list_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return price_list_dto_collection_query_parameters_local_var;
}


void price_list_dto_collection_query_parameters_free(price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters) {
    if(NULL == price_list_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (price_list_dto_collection_query_parameters->filter) {
        free(price_list_dto_collection_query_parameters->filter);
        price_list_dto_collection_query_parameters->filter = NULL;
    }
    if (price_list_dto_collection_query_parameters->order_by) {
        free(price_list_dto_collection_query_parameters->order_by);
        price_list_dto_collection_query_parameters->order_by = NULL;
    }
    if (price_list_dto_collection_query_parameters->search) {
        free(price_list_dto_collection_query_parameters->search);
        price_list_dto_collection_query_parameters->search = NULL;
    }
    if (price_list_dto_collection_query_parameters->select) {
        free(price_list_dto_collection_query_parameters->select);
        price_list_dto_collection_query_parameters->select = NULL;
    }
    if (price_list_dto_collection_query_parameters->expand) {
        free(price_list_dto_collection_query_parameters->expand);
        price_list_dto_collection_query_parameters->expand = NULL;
    }
    free(price_list_dto_collection_query_parameters);
}

cJSON *price_list_dto_collection_query_parameters_convertToJSON(price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // price_list_dto_collection_query_parameters->top
    if(price_list_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", price_list_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // price_list_dto_collection_query_parameters->skip
    if(price_list_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", price_list_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // price_list_dto_collection_query_parameters->count
    if(price_list_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", price_list_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // price_list_dto_collection_query_parameters->filter
    if(price_list_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", price_list_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto_collection_query_parameters->order_by
    if(price_list_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", price_list_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto_collection_query_parameters->search
    if(price_list_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", price_list_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto_collection_query_parameters->select
    if(price_list_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", price_list_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto_collection_query_parameters->expand
    if(price_list_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", price_list_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto_collection_query_parameters->is_empty
    if(price_list_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", price_list_dto_collection_query_parameters->is_empty) == NULL) {
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

price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters_parseFromJSON(cJSON *price_list_dto_collection_query_parametersJSON){

    price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters_local_var = NULL;

    // price_list_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // price_list_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // price_list_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // price_list_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // price_list_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // price_list_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // price_list_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // price_list_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // price_list_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(price_list_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    price_list_dto_collection_query_parameters_local_var = price_list_dto_collection_query_parameters_create (
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

    return price_list_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
