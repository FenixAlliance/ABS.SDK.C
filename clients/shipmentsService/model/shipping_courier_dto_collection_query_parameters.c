#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_courier_dto_collection_query_parameters.h"



shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters_create(
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
    shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters_local_var = malloc(sizeof(shipping_courier_dto_collection_query_parameters_t));
    if (!shipping_courier_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    shipping_courier_dto_collection_query_parameters_local_var->top = top;
    shipping_courier_dto_collection_query_parameters_local_var->skip = skip;
    shipping_courier_dto_collection_query_parameters_local_var->count = count;
    shipping_courier_dto_collection_query_parameters_local_var->filter = filter;
    shipping_courier_dto_collection_query_parameters_local_var->order_by = order_by;
    shipping_courier_dto_collection_query_parameters_local_var->search = search;
    shipping_courier_dto_collection_query_parameters_local_var->select = select;
    shipping_courier_dto_collection_query_parameters_local_var->expand = expand;
    shipping_courier_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return shipping_courier_dto_collection_query_parameters_local_var;
}


void shipping_courier_dto_collection_query_parameters_free(shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters) {
    if(NULL == shipping_courier_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_courier_dto_collection_query_parameters->filter) {
        free(shipping_courier_dto_collection_query_parameters->filter);
        shipping_courier_dto_collection_query_parameters->filter = NULL;
    }
    if (shipping_courier_dto_collection_query_parameters->order_by) {
        free(shipping_courier_dto_collection_query_parameters->order_by);
        shipping_courier_dto_collection_query_parameters->order_by = NULL;
    }
    if (shipping_courier_dto_collection_query_parameters->search) {
        free(shipping_courier_dto_collection_query_parameters->search);
        shipping_courier_dto_collection_query_parameters->search = NULL;
    }
    if (shipping_courier_dto_collection_query_parameters->select) {
        free(shipping_courier_dto_collection_query_parameters->select);
        shipping_courier_dto_collection_query_parameters->select = NULL;
    }
    if (shipping_courier_dto_collection_query_parameters->expand) {
        free(shipping_courier_dto_collection_query_parameters->expand);
        shipping_courier_dto_collection_query_parameters->expand = NULL;
    }
    free(shipping_courier_dto_collection_query_parameters);
}

cJSON *shipping_courier_dto_collection_query_parameters_convertToJSON(shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // shipping_courier_dto_collection_query_parameters->top
    if(shipping_courier_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", shipping_courier_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipping_courier_dto_collection_query_parameters->skip
    if(shipping_courier_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", shipping_courier_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipping_courier_dto_collection_query_parameters->count
    if(shipping_courier_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", shipping_courier_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_courier_dto_collection_query_parameters->filter
    if(shipping_courier_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", shipping_courier_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto_collection_query_parameters->order_by
    if(shipping_courier_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", shipping_courier_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto_collection_query_parameters->search
    if(shipping_courier_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", shipping_courier_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto_collection_query_parameters->select
    if(shipping_courier_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", shipping_courier_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto_collection_query_parameters->expand
    if(shipping_courier_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", shipping_courier_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto_collection_query_parameters->is_empty
    if(shipping_courier_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", shipping_courier_dto_collection_query_parameters->is_empty) == NULL) {
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

shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters_parseFromJSON(cJSON *shipping_courier_dto_collection_query_parametersJSON){

    shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters_local_var = NULL;

    // shipping_courier_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // shipping_courier_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // shipping_courier_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // shipping_courier_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(shipping_courier_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    shipping_courier_dto_collection_query_parameters_local_var = shipping_courier_dto_collection_query_parameters_create (
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

    return shipping_courier_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
