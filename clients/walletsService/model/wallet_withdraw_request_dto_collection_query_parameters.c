#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wallet_withdraw_request_dto_collection_query_parameters.h"



wallet_withdraw_request_dto_collection_query_parameters_t *wallet_withdraw_request_dto_collection_query_parameters_create(
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
    wallet_withdraw_request_dto_collection_query_parameters_t *wallet_withdraw_request_dto_collection_query_parameters_local_var = malloc(sizeof(wallet_withdraw_request_dto_collection_query_parameters_t));
    if (!wallet_withdraw_request_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    wallet_withdraw_request_dto_collection_query_parameters_local_var->top = top;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->skip = skip;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->count = count;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->filter = filter;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->order_by = order_by;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->search = search;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->select = select;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->expand = expand;
    wallet_withdraw_request_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return wallet_withdraw_request_dto_collection_query_parameters_local_var;
}


void wallet_withdraw_request_dto_collection_query_parameters_free(wallet_withdraw_request_dto_collection_query_parameters_t *wallet_withdraw_request_dto_collection_query_parameters) {
    if(NULL == wallet_withdraw_request_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (wallet_withdraw_request_dto_collection_query_parameters->filter) {
        free(wallet_withdraw_request_dto_collection_query_parameters->filter);
        wallet_withdraw_request_dto_collection_query_parameters->filter = NULL;
    }
    if (wallet_withdraw_request_dto_collection_query_parameters->order_by) {
        free(wallet_withdraw_request_dto_collection_query_parameters->order_by);
        wallet_withdraw_request_dto_collection_query_parameters->order_by = NULL;
    }
    if (wallet_withdraw_request_dto_collection_query_parameters->search) {
        free(wallet_withdraw_request_dto_collection_query_parameters->search);
        wallet_withdraw_request_dto_collection_query_parameters->search = NULL;
    }
    if (wallet_withdraw_request_dto_collection_query_parameters->select) {
        free(wallet_withdraw_request_dto_collection_query_parameters->select);
        wallet_withdraw_request_dto_collection_query_parameters->select = NULL;
    }
    if (wallet_withdraw_request_dto_collection_query_parameters->expand) {
        free(wallet_withdraw_request_dto_collection_query_parameters->expand);
        wallet_withdraw_request_dto_collection_query_parameters->expand = NULL;
    }
    free(wallet_withdraw_request_dto_collection_query_parameters);
}

cJSON *wallet_withdraw_request_dto_collection_query_parameters_convertToJSON(wallet_withdraw_request_dto_collection_query_parameters_t *wallet_withdraw_request_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // wallet_withdraw_request_dto_collection_query_parameters->top
    if(wallet_withdraw_request_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", wallet_withdraw_request_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->skip
    if(wallet_withdraw_request_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", wallet_withdraw_request_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->count
    if(wallet_withdraw_request_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", wallet_withdraw_request_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->filter
    if(wallet_withdraw_request_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", wallet_withdraw_request_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->order_by
    if(wallet_withdraw_request_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", wallet_withdraw_request_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->search
    if(wallet_withdraw_request_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", wallet_withdraw_request_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->select
    if(wallet_withdraw_request_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", wallet_withdraw_request_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->expand
    if(wallet_withdraw_request_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", wallet_withdraw_request_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto_collection_query_parameters->is_empty
    if(wallet_withdraw_request_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", wallet_withdraw_request_dto_collection_query_parameters->is_empty) == NULL) {
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

wallet_withdraw_request_dto_collection_query_parameters_t *wallet_withdraw_request_dto_collection_query_parameters_parseFromJSON(cJSON *wallet_withdraw_request_dto_collection_query_parametersJSON){

    wallet_withdraw_request_dto_collection_query_parameters_t *wallet_withdraw_request_dto_collection_query_parameters_local_var = NULL;

    // wallet_withdraw_request_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    wallet_withdraw_request_dto_collection_query_parameters_local_var = wallet_withdraw_request_dto_collection_query_parameters_create (
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

    return wallet_withdraw_request_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
