#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "financial_book_dto_collection_query_parameters.h"



financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters_create(
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
    financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters_local_var = malloc(sizeof(financial_book_dto_collection_query_parameters_t));
    if (!financial_book_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    financial_book_dto_collection_query_parameters_local_var->top = top;
    financial_book_dto_collection_query_parameters_local_var->skip = skip;
    financial_book_dto_collection_query_parameters_local_var->count = count;
    financial_book_dto_collection_query_parameters_local_var->filter = filter;
    financial_book_dto_collection_query_parameters_local_var->order_by = order_by;
    financial_book_dto_collection_query_parameters_local_var->search = search;
    financial_book_dto_collection_query_parameters_local_var->select = select;
    financial_book_dto_collection_query_parameters_local_var->expand = expand;
    financial_book_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return financial_book_dto_collection_query_parameters_local_var;
}


void financial_book_dto_collection_query_parameters_free(financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters) {
    if(NULL == financial_book_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (financial_book_dto_collection_query_parameters->filter) {
        free(financial_book_dto_collection_query_parameters->filter);
        financial_book_dto_collection_query_parameters->filter = NULL;
    }
    if (financial_book_dto_collection_query_parameters->order_by) {
        free(financial_book_dto_collection_query_parameters->order_by);
        financial_book_dto_collection_query_parameters->order_by = NULL;
    }
    if (financial_book_dto_collection_query_parameters->search) {
        free(financial_book_dto_collection_query_parameters->search);
        financial_book_dto_collection_query_parameters->search = NULL;
    }
    if (financial_book_dto_collection_query_parameters->select) {
        free(financial_book_dto_collection_query_parameters->select);
        financial_book_dto_collection_query_parameters->select = NULL;
    }
    if (financial_book_dto_collection_query_parameters->expand) {
        free(financial_book_dto_collection_query_parameters->expand);
        financial_book_dto_collection_query_parameters->expand = NULL;
    }
    free(financial_book_dto_collection_query_parameters);
}

cJSON *financial_book_dto_collection_query_parameters_convertToJSON(financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // financial_book_dto_collection_query_parameters->top
    if(financial_book_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", financial_book_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // financial_book_dto_collection_query_parameters->skip
    if(financial_book_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", financial_book_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // financial_book_dto_collection_query_parameters->count
    if(financial_book_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", financial_book_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // financial_book_dto_collection_query_parameters->filter
    if(financial_book_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", financial_book_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_collection_query_parameters->order_by
    if(financial_book_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", financial_book_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_collection_query_parameters->search
    if(financial_book_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", financial_book_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_collection_query_parameters->select
    if(financial_book_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", financial_book_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_collection_query_parameters->expand
    if(financial_book_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", financial_book_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_collection_query_parameters->is_empty
    if(financial_book_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", financial_book_dto_collection_query_parameters->is_empty) == NULL) {
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

financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters_parseFromJSON(cJSON *financial_book_dto_collection_query_parametersJSON){

    financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters_local_var = NULL;

    // financial_book_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // financial_book_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // financial_book_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // financial_book_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // financial_book_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // financial_book_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // financial_book_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // financial_book_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // financial_book_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(financial_book_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    financial_book_dto_collection_query_parameters_local_var = financial_book_dto_collection_query_parameters_create (
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

    return financial_book_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
