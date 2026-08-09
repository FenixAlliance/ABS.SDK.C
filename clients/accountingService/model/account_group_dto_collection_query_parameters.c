#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_group_dto_collection_query_parameters.h"



account_group_dto_collection_query_parameters_t *account_group_dto_collection_query_parameters_create(
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
    account_group_dto_collection_query_parameters_t *account_group_dto_collection_query_parameters_local_var = malloc(sizeof(account_group_dto_collection_query_parameters_t));
    if (!account_group_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    account_group_dto_collection_query_parameters_local_var->top = top;
    account_group_dto_collection_query_parameters_local_var->skip = skip;
    account_group_dto_collection_query_parameters_local_var->count = count;
    account_group_dto_collection_query_parameters_local_var->filter = filter;
    account_group_dto_collection_query_parameters_local_var->order_by = order_by;
    account_group_dto_collection_query_parameters_local_var->search = search;
    account_group_dto_collection_query_parameters_local_var->select = select;
    account_group_dto_collection_query_parameters_local_var->expand = expand;
    account_group_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return account_group_dto_collection_query_parameters_local_var;
}


void account_group_dto_collection_query_parameters_free(account_group_dto_collection_query_parameters_t *account_group_dto_collection_query_parameters) {
    if(NULL == account_group_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (account_group_dto_collection_query_parameters->filter) {
        free(account_group_dto_collection_query_parameters->filter);
        account_group_dto_collection_query_parameters->filter = NULL;
    }
    if (account_group_dto_collection_query_parameters->order_by) {
        free(account_group_dto_collection_query_parameters->order_by);
        account_group_dto_collection_query_parameters->order_by = NULL;
    }
    if (account_group_dto_collection_query_parameters->search) {
        free(account_group_dto_collection_query_parameters->search);
        account_group_dto_collection_query_parameters->search = NULL;
    }
    if (account_group_dto_collection_query_parameters->select) {
        free(account_group_dto_collection_query_parameters->select);
        account_group_dto_collection_query_parameters->select = NULL;
    }
    if (account_group_dto_collection_query_parameters->expand) {
        free(account_group_dto_collection_query_parameters->expand);
        account_group_dto_collection_query_parameters->expand = NULL;
    }
    free(account_group_dto_collection_query_parameters);
}

cJSON *account_group_dto_collection_query_parameters_convertToJSON(account_group_dto_collection_query_parameters_t *account_group_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // account_group_dto_collection_query_parameters->top
    if(account_group_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", account_group_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_group_dto_collection_query_parameters->skip
    if(account_group_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", account_group_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_group_dto_collection_query_parameters->count
    if(account_group_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", account_group_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // account_group_dto_collection_query_parameters->filter
    if(account_group_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", account_group_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_collection_query_parameters->order_by
    if(account_group_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", account_group_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_collection_query_parameters->search
    if(account_group_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", account_group_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_collection_query_parameters->select
    if(account_group_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", account_group_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_collection_query_parameters->expand
    if(account_group_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", account_group_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_collection_query_parameters->is_empty
    if(account_group_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", account_group_dto_collection_query_parameters->is_empty) == NULL) {
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

account_group_dto_collection_query_parameters_t *account_group_dto_collection_query_parameters_parseFromJSON(cJSON *account_group_dto_collection_query_parametersJSON){

    account_group_dto_collection_query_parameters_t *account_group_dto_collection_query_parameters_local_var = NULL;

    // account_group_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // account_group_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // account_group_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // account_group_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // account_group_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // account_group_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // account_group_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // account_group_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // account_group_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(account_group_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    account_group_dto_collection_query_parameters_local_var = account_group_dto_collection_query_parameters_create (
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

    return account_group_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
