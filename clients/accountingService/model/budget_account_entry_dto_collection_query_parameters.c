#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_account_entry_dto_collection_query_parameters.h"



budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters_create(
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
    budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters_local_var = malloc(sizeof(budget_account_entry_dto_collection_query_parameters_t));
    if (!budget_account_entry_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    budget_account_entry_dto_collection_query_parameters_local_var->top = top;
    budget_account_entry_dto_collection_query_parameters_local_var->skip = skip;
    budget_account_entry_dto_collection_query_parameters_local_var->count = count;
    budget_account_entry_dto_collection_query_parameters_local_var->filter = filter;
    budget_account_entry_dto_collection_query_parameters_local_var->order_by = order_by;
    budget_account_entry_dto_collection_query_parameters_local_var->search = search;
    budget_account_entry_dto_collection_query_parameters_local_var->select = select;
    budget_account_entry_dto_collection_query_parameters_local_var->expand = expand;
    budget_account_entry_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return budget_account_entry_dto_collection_query_parameters_local_var;
}


void budget_account_entry_dto_collection_query_parameters_free(budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters) {
    if(NULL == budget_account_entry_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_account_entry_dto_collection_query_parameters->filter) {
        free(budget_account_entry_dto_collection_query_parameters->filter);
        budget_account_entry_dto_collection_query_parameters->filter = NULL;
    }
    if (budget_account_entry_dto_collection_query_parameters->order_by) {
        free(budget_account_entry_dto_collection_query_parameters->order_by);
        budget_account_entry_dto_collection_query_parameters->order_by = NULL;
    }
    if (budget_account_entry_dto_collection_query_parameters->search) {
        free(budget_account_entry_dto_collection_query_parameters->search);
        budget_account_entry_dto_collection_query_parameters->search = NULL;
    }
    if (budget_account_entry_dto_collection_query_parameters->select) {
        free(budget_account_entry_dto_collection_query_parameters->select);
        budget_account_entry_dto_collection_query_parameters->select = NULL;
    }
    if (budget_account_entry_dto_collection_query_parameters->expand) {
        free(budget_account_entry_dto_collection_query_parameters->expand);
        budget_account_entry_dto_collection_query_parameters->expand = NULL;
    }
    free(budget_account_entry_dto_collection_query_parameters);
}

cJSON *budget_account_entry_dto_collection_query_parameters_convertToJSON(budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // budget_account_entry_dto_collection_query_parameters->top
    if(budget_account_entry_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", budget_account_entry_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // budget_account_entry_dto_collection_query_parameters->skip
    if(budget_account_entry_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", budget_account_entry_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // budget_account_entry_dto_collection_query_parameters->count
    if(budget_account_entry_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", budget_account_entry_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // budget_account_entry_dto_collection_query_parameters->filter
    if(budget_account_entry_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", budget_account_entry_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto_collection_query_parameters->order_by
    if(budget_account_entry_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", budget_account_entry_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto_collection_query_parameters->search
    if(budget_account_entry_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", budget_account_entry_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto_collection_query_parameters->select
    if(budget_account_entry_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", budget_account_entry_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto_collection_query_parameters->expand
    if(budget_account_entry_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", budget_account_entry_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto_collection_query_parameters->is_empty
    if(budget_account_entry_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", budget_account_entry_dto_collection_query_parameters->is_empty) == NULL) {
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

budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters_parseFromJSON(cJSON *budget_account_entry_dto_collection_query_parametersJSON){

    budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters_local_var = NULL;

    // budget_account_entry_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // budget_account_entry_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // budget_account_entry_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // budget_account_entry_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    budget_account_entry_dto_collection_query_parameters_local_var = budget_account_entry_dto_collection_query_parameters_create (
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

    return budget_account_entry_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
