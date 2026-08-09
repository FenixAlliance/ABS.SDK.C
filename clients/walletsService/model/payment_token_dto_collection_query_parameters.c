#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_token_dto_collection_query_parameters.h"



payment_token_dto_collection_query_parameters_t *payment_token_dto_collection_query_parameters_create(
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
    payment_token_dto_collection_query_parameters_t *payment_token_dto_collection_query_parameters_local_var = malloc(sizeof(payment_token_dto_collection_query_parameters_t));
    if (!payment_token_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    payment_token_dto_collection_query_parameters_local_var->top = top;
    payment_token_dto_collection_query_parameters_local_var->skip = skip;
    payment_token_dto_collection_query_parameters_local_var->count = count;
    payment_token_dto_collection_query_parameters_local_var->filter = filter;
    payment_token_dto_collection_query_parameters_local_var->order_by = order_by;
    payment_token_dto_collection_query_parameters_local_var->search = search;
    payment_token_dto_collection_query_parameters_local_var->select = select;
    payment_token_dto_collection_query_parameters_local_var->expand = expand;
    payment_token_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return payment_token_dto_collection_query_parameters_local_var;
}


void payment_token_dto_collection_query_parameters_free(payment_token_dto_collection_query_parameters_t *payment_token_dto_collection_query_parameters) {
    if(NULL == payment_token_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_token_dto_collection_query_parameters->filter) {
        free(payment_token_dto_collection_query_parameters->filter);
        payment_token_dto_collection_query_parameters->filter = NULL;
    }
    if (payment_token_dto_collection_query_parameters->order_by) {
        free(payment_token_dto_collection_query_parameters->order_by);
        payment_token_dto_collection_query_parameters->order_by = NULL;
    }
    if (payment_token_dto_collection_query_parameters->search) {
        free(payment_token_dto_collection_query_parameters->search);
        payment_token_dto_collection_query_parameters->search = NULL;
    }
    if (payment_token_dto_collection_query_parameters->select) {
        free(payment_token_dto_collection_query_parameters->select);
        payment_token_dto_collection_query_parameters->select = NULL;
    }
    if (payment_token_dto_collection_query_parameters->expand) {
        free(payment_token_dto_collection_query_parameters->expand);
        payment_token_dto_collection_query_parameters->expand = NULL;
    }
    free(payment_token_dto_collection_query_parameters);
}

cJSON *payment_token_dto_collection_query_parameters_convertToJSON(payment_token_dto_collection_query_parameters_t *payment_token_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // payment_token_dto_collection_query_parameters->top
    if(payment_token_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", payment_token_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_token_dto_collection_query_parameters->skip
    if(payment_token_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", payment_token_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_token_dto_collection_query_parameters->count
    if(payment_token_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", payment_token_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_token_dto_collection_query_parameters->filter
    if(payment_token_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", payment_token_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_dto_collection_query_parameters->order_by
    if(payment_token_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", payment_token_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_dto_collection_query_parameters->search
    if(payment_token_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", payment_token_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_dto_collection_query_parameters->select
    if(payment_token_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", payment_token_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_dto_collection_query_parameters->expand
    if(payment_token_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", payment_token_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_dto_collection_query_parameters->is_empty
    if(payment_token_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", payment_token_dto_collection_query_parameters->is_empty) == NULL) {
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

payment_token_dto_collection_query_parameters_t *payment_token_dto_collection_query_parameters_parseFromJSON(cJSON *payment_token_dto_collection_query_parametersJSON){

    payment_token_dto_collection_query_parameters_t *payment_token_dto_collection_query_parameters_local_var = NULL;

    // payment_token_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // payment_token_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // payment_token_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // payment_token_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // payment_token_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // payment_token_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // payment_token_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // payment_token_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // payment_token_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(payment_token_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    payment_token_dto_collection_query_parameters_local_var = payment_token_dto_collection_query_parameters_create (
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

    return payment_token_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
