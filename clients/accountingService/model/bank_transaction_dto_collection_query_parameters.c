#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_transaction_dto_collection_query_parameters.h"



bank_transaction_dto_collection_query_parameters_t *bank_transaction_dto_collection_query_parameters_create(
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
    bank_transaction_dto_collection_query_parameters_t *bank_transaction_dto_collection_query_parameters_local_var = malloc(sizeof(bank_transaction_dto_collection_query_parameters_t));
    if (!bank_transaction_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    bank_transaction_dto_collection_query_parameters_local_var->top = top;
    bank_transaction_dto_collection_query_parameters_local_var->skip = skip;
    bank_transaction_dto_collection_query_parameters_local_var->count = count;
    bank_transaction_dto_collection_query_parameters_local_var->filter = filter;
    bank_transaction_dto_collection_query_parameters_local_var->order_by = order_by;
    bank_transaction_dto_collection_query_parameters_local_var->search = search;
    bank_transaction_dto_collection_query_parameters_local_var->select = select;
    bank_transaction_dto_collection_query_parameters_local_var->expand = expand;
    bank_transaction_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return bank_transaction_dto_collection_query_parameters_local_var;
}


void bank_transaction_dto_collection_query_parameters_free(bank_transaction_dto_collection_query_parameters_t *bank_transaction_dto_collection_query_parameters) {
    if(NULL == bank_transaction_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_transaction_dto_collection_query_parameters->filter) {
        free(bank_transaction_dto_collection_query_parameters->filter);
        bank_transaction_dto_collection_query_parameters->filter = NULL;
    }
    if (bank_transaction_dto_collection_query_parameters->order_by) {
        free(bank_transaction_dto_collection_query_parameters->order_by);
        bank_transaction_dto_collection_query_parameters->order_by = NULL;
    }
    if (bank_transaction_dto_collection_query_parameters->search) {
        free(bank_transaction_dto_collection_query_parameters->search);
        bank_transaction_dto_collection_query_parameters->search = NULL;
    }
    if (bank_transaction_dto_collection_query_parameters->select) {
        free(bank_transaction_dto_collection_query_parameters->select);
        bank_transaction_dto_collection_query_parameters->select = NULL;
    }
    if (bank_transaction_dto_collection_query_parameters->expand) {
        free(bank_transaction_dto_collection_query_parameters->expand);
        bank_transaction_dto_collection_query_parameters->expand = NULL;
    }
    free(bank_transaction_dto_collection_query_parameters);
}

cJSON *bank_transaction_dto_collection_query_parameters_convertToJSON(bank_transaction_dto_collection_query_parameters_t *bank_transaction_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // bank_transaction_dto_collection_query_parameters->top
    if(bank_transaction_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", bank_transaction_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto_collection_query_parameters->skip
    if(bank_transaction_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", bank_transaction_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto_collection_query_parameters->count
    if(bank_transaction_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", bank_transaction_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // bank_transaction_dto_collection_query_parameters->filter
    if(bank_transaction_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", bank_transaction_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto_collection_query_parameters->order_by
    if(bank_transaction_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", bank_transaction_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto_collection_query_parameters->search
    if(bank_transaction_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", bank_transaction_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto_collection_query_parameters->select
    if(bank_transaction_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", bank_transaction_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto_collection_query_parameters->expand
    if(bank_transaction_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", bank_transaction_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto_collection_query_parameters->is_empty
    if(bank_transaction_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", bank_transaction_dto_collection_query_parameters->is_empty) == NULL) {
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

bank_transaction_dto_collection_query_parameters_t *bank_transaction_dto_collection_query_parameters_parseFromJSON(cJSON *bank_transaction_dto_collection_query_parametersJSON){

    bank_transaction_dto_collection_query_parameters_t *bank_transaction_dto_collection_query_parameters_local_var = NULL;

    // bank_transaction_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // bank_transaction_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(bank_transaction_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    bank_transaction_dto_collection_query_parameters_local_var = bank_transaction_dto_collection_query_parameters_create (
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

    return bank_transaction_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
