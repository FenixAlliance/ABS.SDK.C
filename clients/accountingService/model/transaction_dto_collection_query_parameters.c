#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_dto_collection_query_parameters.h"



transaction_dto_collection_query_parameters_t *transaction_dto_collection_query_parameters_create(
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
    transaction_dto_collection_query_parameters_t *transaction_dto_collection_query_parameters_local_var = malloc(sizeof(transaction_dto_collection_query_parameters_t));
    if (!transaction_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    transaction_dto_collection_query_parameters_local_var->top = top;
    transaction_dto_collection_query_parameters_local_var->skip = skip;
    transaction_dto_collection_query_parameters_local_var->count = count;
    transaction_dto_collection_query_parameters_local_var->filter = filter;
    transaction_dto_collection_query_parameters_local_var->order_by = order_by;
    transaction_dto_collection_query_parameters_local_var->search = search;
    transaction_dto_collection_query_parameters_local_var->select = select;
    transaction_dto_collection_query_parameters_local_var->expand = expand;
    transaction_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return transaction_dto_collection_query_parameters_local_var;
}


void transaction_dto_collection_query_parameters_free(transaction_dto_collection_query_parameters_t *transaction_dto_collection_query_parameters) {
    if(NULL == transaction_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_dto_collection_query_parameters->filter) {
        free(transaction_dto_collection_query_parameters->filter);
        transaction_dto_collection_query_parameters->filter = NULL;
    }
    if (transaction_dto_collection_query_parameters->order_by) {
        free(transaction_dto_collection_query_parameters->order_by);
        transaction_dto_collection_query_parameters->order_by = NULL;
    }
    if (transaction_dto_collection_query_parameters->search) {
        free(transaction_dto_collection_query_parameters->search);
        transaction_dto_collection_query_parameters->search = NULL;
    }
    if (transaction_dto_collection_query_parameters->select) {
        free(transaction_dto_collection_query_parameters->select);
        transaction_dto_collection_query_parameters->select = NULL;
    }
    if (transaction_dto_collection_query_parameters->expand) {
        free(transaction_dto_collection_query_parameters->expand);
        transaction_dto_collection_query_parameters->expand = NULL;
    }
    free(transaction_dto_collection_query_parameters);
}

cJSON *transaction_dto_collection_query_parameters_convertToJSON(transaction_dto_collection_query_parameters_t *transaction_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // transaction_dto_collection_query_parameters->top
    if(transaction_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", transaction_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto_collection_query_parameters->skip
    if(transaction_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", transaction_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto_collection_query_parameters->count
    if(transaction_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", transaction_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // transaction_dto_collection_query_parameters->filter
    if(transaction_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", transaction_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_collection_query_parameters->order_by
    if(transaction_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", transaction_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_collection_query_parameters->search
    if(transaction_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", transaction_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_collection_query_parameters->select
    if(transaction_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", transaction_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_collection_query_parameters->expand
    if(transaction_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", transaction_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_collection_query_parameters->is_empty
    if(transaction_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", transaction_dto_collection_query_parameters->is_empty) == NULL) {
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

transaction_dto_collection_query_parameters_t *transaction_dto_collection_query_parameters_parseFromJSON(cJSON *transaction_dto_collection_query_parametersJSON){

    transaction_dto_collection_query_parameters_t *transaction_dto_collection_query_parameters_local_var = NULL;

    // transaction_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // transaction_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // transaction_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // transaction_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // transaction_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // transaction_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // transaction_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(transaction_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    transaction_dto_collection_query_parameters_local_var = transaction_dto_collection_query_parameters_create (
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

    return transaction_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
