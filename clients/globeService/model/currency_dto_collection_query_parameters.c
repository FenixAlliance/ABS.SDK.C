#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_dto_collection_query_parameters.h"



currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters_create(
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
    currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters_local_var = malloc(sizeof(currency_dto_collection_query_parameters_t));
    if (!currency_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    currency_dto_collection_query_parameters_local_var->top = top;
    currency_dto_collection_query_parameters_local_var->skip = skip;
    currency_dto_collection_query_parameters_local_var->count = count;
    currency_dto_collection_query_parameters_local_var->filter = filter;
    currency_dto_collection_query_parameters_local_var->order_by = order_by;
    currency_dto_collection_query_parameters_local_var->search = search;
    currency_dto_collection_query_parameters_local_var->select = select;
    currency_dto_collection_query_parameters_local_var->expand = expand;
    currency_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return currency_dto_collection_query_parameters_local_var;
}


void currency_dto_collection_query_parameters_free(currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters) {
    if(NULL == currency_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (currency_dto_collection_query_parameters->filter) {
        free(currency_dto_collection_query_parameters->filter);
        currency_dto_collection_query_parameters->filter = NULL;
    }
    if (currency_dto_collection_query_parameters->order_by) {
        free(currency_dto_collection_query_parameters->order_by);
        currency_dto_collection_query_parameters->order_by = NULL;
    }
    if (currency_dto_collection_query_parameters->search) {
        free(currency_dto_collection_query_parameters->search);
        currency_dto_collection_query_parameters->search = NULL;
    }
    if (currency_dto_collection_query_parameters->select) {
        free(currency_dto_collection_query_parameters->select);
        currency_dto_collection_query_parameters->select = NULL;
    }
    if (currency_dto_collection_query_parameters->expand) {
        free(currency_dto_collection_query_parameters->expand);
        currency_dto_collection_query_parameters->expand = NULL;
    }
    free(currency_dto_collection_query_parameters);
}

cJSON *currency_dto_collection_query_parameters_convertToJSON(currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // currency_dto_collection_query_parameters->top
    if(currency_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", currency_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // currency_dto_collection_query_parameters->skip
    if(currency_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", currency_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // currency_dto_collection_query_parameters->count
    if(currency_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", currency_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // currency_dto_collection_query_parameters->filter
    if(currency_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", currency_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_collection_query_parameters->order_by
    if(currency_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", currency_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_collection_query_parameters->search
    if(currency_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", currency_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_collection_query_parameters->select
    if(currency_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", currency_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_collection_query_parameters->expand
    if(currency_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", currency_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_collection_query_parameters->is_empty
    if(currency_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", currency_dto_collection_query_parameters->is_empty) == NULL) {
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

currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters_parseFromJSON(cJSON *currency_dto_collection_query_parametersJSON){

    currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters_local_var = NULL;

    // currency_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // currency_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // currency_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // currency_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // currency_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // currency_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // currency_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // currency_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // currency_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(currency_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    currency_dto_collection_query_parameters_local_var = currency_dto_collection_query_parameters_create (
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

    return currency_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
