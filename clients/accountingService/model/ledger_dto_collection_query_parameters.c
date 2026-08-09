#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ledger_dto_collection_query_parameters.h"



ledger_dto_collection_query_parameters_t *ledger_dto_collection_query_parameters_create(
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
    ledger_dto_collection_query_parameters_t *ledger_dto_collection_query_parameters_local_var = malloc(sizeof(ledger_dto_collection_query_parameters_t));
    if (!ledger_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    ledger_dto_collection_query_parameters_local_var->top = top;
    ledger_dto_collection_query_parameters_local_var->skip = skip;
    ledger_dto_collection_query_parameters_local_var->count = count;
    ledger_dto_collection_query_parameters_local_var->filter = filter;
    ledger_dto_collection_query_parameters_local_var->order_by = order_by;
    ledger_dto_collection_query_parameters_local_var->search = search;
    ledger_dto_collection_query_parameters_local_var->select = select;
    ledger_dto_collection_query_parameters_local_var->expand = expand;
    ledger_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return ledger_dto_collection_query_parameters_local_var;
}


void ledger_dto_collection_query_parameters_free(ledger_dto_collection_query_parameters_t *ledger_dto_collection_query_parameters) {
    if(NULL == ledger_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (ledger_dto_collection_query_parameters->filter) {
        free(ledger_dto_collection_query_parameters->filter);
        ledger_dto_collection_query_parameters->filter = NULL;
    }
    if (ledger_dto_collection_query_parameters->order_by) {
        free(ledger_dto_collection_query_parameters->order_by);
        ledger_dto_collection_query_parameters->order_by = NULL;
    }
    if (ledger_dto_collection_query_parameters->search) {
        free(ledger_dto_collection_query_parameters->search);
        ledger_dto_collection_query_parameters->search = NULL;
    }
    if (ledger_dto_collection_query_parameters->select) {
        free(ledger_dto_collection_query_parameters->select);
        ledger_dto_collection_query_parameters->select = NULL;
    }
    if (ledger_dto_collection_query_parameters->expand) {
        free(ledger_dto_collection_query_parameters->expand);
        ledger_dto_collection_query_parameters->expand = NULL;
    }
    free(ledger_dto_collection_query_parameters);
}

cJSON *ledger_dto_collection_query_parameters_convertToJSON(ledger_dto_collection_query_parameters_t *ledger_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // ledger_dto_collection_query_parameters->top
    if(ledger_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", ledger_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // ledger_dto_collection_query_parameters->skip
    if(ledger_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", ledger_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // ledger_dto_collection_query_parameters->count
    if(ledger_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", ledger_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // ledger_dto_collection_query_parameters->filter
    if(ledger_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", ledger_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto_collection_query_parameters->order_by
    if(ledger_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", ledger_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto_collection_query_parameters->search
    if(ledger_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", ledger_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto_collection_query_parameters->select
    if(ledger_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", ledger_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto_collection_query_parameters->expand
    if(ledger_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", ledger_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto_collection_query_parameters->is_empty
    if(ledger_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", ledger_dto_collection_query_parameters->is_empty) == NULL) {
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

ledger_dto_collection_query_parameters_t *ledger_dto_collection_query_parameters_parseFromJSON(cJSON *ledger_dto_collection_query_parametersJSON){

    ledger_dto_collection_query_parameters_t *ledger_dto_collection_query_parameters_local_var = NULL;

    // ledger_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // ledger_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // ledger_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // ledger_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // ledger_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // ledger_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // ledger_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // ledger_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // ledger_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(ledger_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    ledger_dto_collection_query_parameters_local_var = ledger_dto_collection_query_parameters_create (
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

    return ledger_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
