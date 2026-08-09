#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_type_dto_collection_query_parameters.h"



expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters_create(
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
    expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters_local_var = malloc(sizeof(expense_type_dto_collection_query_parameters_t));
    if (!expense_type_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    expense_type_dto_collection_query_parameters_local_var->top = top;
    expense_type_dto_collection_query_parameters_local_var->skip = skip;
    expense_type_dto_collection_query_parameters_local_var->count = count;
    expense_type_dto_collection_query_parameters_local_var->filter = filter;
    expense_type_dto_collection_query_parameters_local_var->order_by = order_by;
    expense_type_dto_collection_query_parameters_local_var->search = search;
    expense_type_dto_collection_query_parameters_local_var->select = select;
    expense_type_dto_collection_query_parameters_local_var->expand = expand;
    expense_type_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return expense_type_dto_collection_query_parameters_local_var;
}


void expense_type_dto_collection_query_parameters_free(expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters) {
    if(NULL == expense_type_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_type_dto_collection_query_parameters->filter) {
        free(expense_type_dto_collection_query_parameters->filter);
        expense_type_dto_collection_query_parameters->filter = NULL;
    }
    if (expense_type_dto_collection_query_parameters->order_by) {
        free(expense_type_dto_collection_query_parameters->order_by);
        expense_type_dto_collection_query_parameters->order_by = NULL;
    }
    if (expense_type_dto_collection_query_parameters->search) {
        free(expense_type_dto_collection_query_parameters->search);
        expense_type_dto_collection_query_parameters->search = NULL;
    }
    if (expense_type_dto_collection_query_parameters->select) {
        free(expense_type_dto_collection_query_parameters->select);
        expense_type_dto_collection_query_parameters->select = NULL;
    }
    if (expense_type_dto_collection_query_parameters->expand) {
        free(expense_type_dto_collection_query_parameters->expand);
        expense_type_dto_collection_query_parameters->expand = NULL;
    }
    free(expense_type_dto_collection_query_parameters);
}

cJSON *expense_type_dto_collection_query_parameters_convertToJSON(expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // expense_type_dto_collection_query_parameters->top
    if(expense_type_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", expense_type_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // expense_type_dto_collection_query_parameters->skip
    if(expense_type_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", expense_type_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // expense_type_dto_collection_query_parameters->count
    if(expense_type_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", expense_type_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // expense_type_dto_collection_query_parameters->filter
    if(expense_type_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", expense_type_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto_collection_query_parameters->order_by
    if(expense_type_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", expense_type_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto_collection_query_parameters->search
    if(expense_type_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", expense_type_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto_collection_query_parameters->select
    if(expense_type_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", expense_type_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto_collection_query_parameters->expand
    if(expense_type_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", expense_type_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto_collection_query_parameters->is_empty
    if(expense_type_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", expense_type_dto_collection_query_parameters->is_empty) == NULL) {
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

expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters_parseFromJSON(cJSON *expense_type_dto_collection_query_parametersJSON){

    expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters_local_var = NULL;

    // expense_type_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // expense_type_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // expense_type_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // expense_type_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // expense_type_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // expense_type_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // expense_type_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // expense_type_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // expense_type_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(expense_type_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    expense_type_dto_collection_query_parameters_local_var = expense_type_dto_collection_query_parameters_create (
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

    return expense_type_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
