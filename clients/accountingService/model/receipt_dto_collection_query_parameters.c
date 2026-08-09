#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receipt_dto_collection_query_parameters.h"



receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters_create(
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
    receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters_local_var = malloc(sizeof(receipt_dto_collection_query_parameters_t));
    if (!receipt_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    receipt_dto_collection_query_parameters_local_var->top = top;
    receipt_dto_collection_query_parameters_local_var->skip = skip;
    receipt_dto_collection_query_parameters_local_var->count = count;
    receipt_dto_collection_query_parameters_local_var->filter = filter;
    receipt_dto_collection_query_parameters_local_var->order_by = order_by;
    receipt_dto_collection_query_parameters_local_var->search = search;
    receipt_dto_collection_query_parameters_local_var->select = select;
    receipt_dto_collection_query_parameters_local_var->expand = expand;
    receipt_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return receipt_dto_collection_query_parameters_local_var;
}


void receipt_dto_collection_query_parameters_free(receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters) {
    if(NULL == receipt_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (receipt_dto_collection_query_parameters->filter) {
        free(receipt_dto_collection_query_parameters->filter);
        receipt_dto_collection_query_parameters->filter = NULL;
    }
    if (receipt_dto_collection_query_parameters->order_by) {
        free(receipt_dto_collection_query_parameters->order_by);
        receipt_dto_collection_query_parameters->order_by = NULL;
    }
    if (receipt_dto_collection_query_parameters->search) {
        free(receipt_dto_collection_query_parameters->search);
        receipt_dto_collection_query_parameters->search = NULL;
    }
    if (receipt_dto_collection_query_parameters->select) {
        free(receipt_dto_collection_query_parameters->select);
        receipt_dto_collection_query_parameters->select = NULL;
    }
    if (receipt_dto_collection_query_parameters->expand) {
        free(receipt_dto_collection_query_parameters->expand);
        receipt_dto_collection_query_parameters->expand = NULL;
    }
    free(receipt_dto_collection_query_parameters);
}

cJSON *receipt_dto_collection_query_parameters_convertToJSON(receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // receipt_dto_collection_query_parameters->top
    if(receipt_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", receipt_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_dto_collection_query_parameters->skip
    if(receipt_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", receipt_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_dto_collection_query_parameters->count
    if(receipt_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", receipt_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // receipt_dto_collection_query_parameters->filter
    if(receipt_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", receipt_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_collection_query_parameters->order_by
    if(receipt_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", receipt_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_collection_query_parameters->search
    if(receipt_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", receipt_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_collection_query_parameters->select
    if(receipt_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", receipt_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_collection_query_parameters->expand
    if(receipt_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", receipt_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_collection_query_parameters->is_empty
    if(receipt_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", receipt_dto_collection_query_parameters->is_empty) == NULL) {
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

receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters_parseFromJSON(cJSON *receipt_dto_collection_query_parametersJSON){

    receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters_local_var = NULL;

    // receipt_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // receipt_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // receipt_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // receipt_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // receipt_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // receipt_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // receipt_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // receipt_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // receipt_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(receipt_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    receipt_dto_collection_query_parameters_local_var = receipt_dto_collection_query_parameters_create (
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

    return receipt_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
