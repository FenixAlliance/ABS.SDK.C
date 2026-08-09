#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_dto_collection_query_parameters.h"



cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters_create(
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
    cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters_local_var = malloc(sizeof(cart_dto_collection_query_parameters_t));
    if (!cart_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    cart_dto_collection_query_parameters_local_var->top = top;
    cart_dto_collection_query_parameters_local_var->skip = skip;
    cart_dto_collection_query_parameters_local_var->count = count;
    cart_dto_collection_query_parameters_local_var->filter = filter;
    cart_dto_collection_query_parameters_local_var->order_by = order_by;
    cart_dto_collection_query_parameters_local_var->search = search;
    cart_dto_collection_query_parameters_local_var->select = select;
    cart_dto_collection_query_parameters_local_var->expand = expand;
    cart_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return cart_dto_collection_query_parameters_local_var;
}


void cart_dto_collection_query_parameters_free(cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters) {
    if(NULL == cart_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (cart_dto_collection_query_parameters->filter) {
        free(cart_dto_collection_query_parameters->filter);
        cart_dto_collection_query_parameters->filter = NULL;
    }
    if (cart_dto_collection_query_parameters->order_by) {
        free(cart_dto_collection_query_parameters->order_by);
        cart_dto_collection_query_parameters->order_by = NULL;
    }
    if (cart_dto_collection_query_parameters->search) {
        free(cart_dto_collection_query_parameters->search);
        cart_dto_collection_query_parameters->search = NULL;
    }
    if (cart_dto_collection_query_parameters->select) {
        free(cart_dto_collection_query_parameters->select);
        cart_dto_collection_query_parameters->select = NULL;
    }
    if (cart_dto_collection_query_parameters->expand) {
        free(cart_dto_collection_query_parameters->expand);
        cart_dto_collection_query_parameters->expand = NULL;
    }
    free(cart_dto_collection_query_parameters);
}

cJSON *cart_dto_collection_query_parameters_convertToJSON(cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // cart_dto_collection_query_parameters->top
    if(cart_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", cart_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto_collection_query_parameters->skip
    if(cart_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", cart_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto_collection_query_parameters->count
    if(cart_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", cart_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_dto_collection_query_parameters->filter
    if(cart_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", cart_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_collection_query_parameters->order_by
    if(cart_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", cart_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_collection_query_parameters->search
    if(cart_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", cart_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_collection_query_parameters->select
    if(cart_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", cart_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_collection_query_parameters->expand
    if(cart_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", cart_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_collection_query_parameters->is_empty
    if(cart_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", cart_dto_collection_query_parameters->is_empty) == NULL) {
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

cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters_parseFromJSON(cJSON *cart_dto_collection_query_parametersJSON){

    cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters_local_var = NULL;

    // cart_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // cart_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // cart_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // cart_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // cart_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // cart_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // cart_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // cart_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // cart_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(cart_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    cart_dto_collection_query_parameters_local_var = cart_dto_collection_query_parameters_create (
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

    return cart_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
