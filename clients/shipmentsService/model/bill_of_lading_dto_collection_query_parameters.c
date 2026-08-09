#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bill_of_lading_dto_collection_query_parameters.h"



bill_of_lading_dto_collection_query_parameters_t *bill_of_lading_dto_collection_query_parameters_create(
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
    bill_of_lading_dto_collection_query_parameters_t *bill_of_lading_dto_collection_query_parameters_local_var = malloc(sizeof(bill_of_lading_dto_collection_query_parameters_t));
    if (!bill_of_lading_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    bill_of_lading_dto_collection_query_parameters_local_var->top = top;
    bill_of_lading_dto_collection_query_parameters_local_var->skip = skip;
    bill_of_lading_dto_collection_query_parameters_local_var->count = count;
    bill_of_lading_dto_collection_query_parameters_local_var->filter = filter;
    bill_of_lading_dto_collection_query_parameters_local_var->order_by = order_by;
    bill_of_lading_dto_collection_query_parameters_local_var->search = search;
    bill_of_lading_dto_collection_query_parameters_local_var->select = select;
    bill_of_lading_dto_collection_query_parameters_local_var->expand = expand;
    bill_of_lading_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return bill_of_lading_dto_collection_query_parameters_local_var;
}


void bill_of_lading_dto_collection_query_parameters_free(bill_of_lading_dto_collection_query_parameters_t *bill_of_lading_dto_collection_query_parameters) {
    if(NULL == bill_of_lading_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (bill_of_lading_dto_collection_query_parameters->filter) {
        free(bill_of_lading_dto_collection_query_parameters->filter);
        bill_of_lading_dto_collection_query_parameters->filter = NULL;
    }
    if (bill_of_lading_dto_collection_query_parameters->order_by) {
        free(bill_of_lading_dto_collection_query_parameters->order_by);
        bill_of_lading_dto_collection_query_parameters->order_by = NULL;
    }
    if (bill_of_lading_dto_collection_query_parameters->search) {
        free(bill_of_lading_dto_collection_query_parameters->search);
        bill_of_lading_dto_collection_query_parameters->search = NULL;
    }
    if (bill_of_lading_dto_collection_query_parameters->select) {
        free(bill_of_lading_dto_collection_query_parameters->select);
        bill_of_lading_dto_collection_query_parameters->select = NULL;
    }
    if (bill_of_lading_dto_collection_query_parameters->expand) {
        free(bill_of_lading_dto_collection_query_parameters->expand);
        bill_of_lading_dto_collection_query_parameters->expand = NULL;
    }
    free(bill_of_lading_dto_collection_query_parameters);
}

cJSON *bill_of_lading_dto_collection_query_parameters_convertToJSON(bill_of_lading_dto_collection_query_parameters_t *bill_of_lading_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // bill_of_lading_dto_collection_query_parameters->top
    if(bill_of_lading_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", bill_of_lading_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto_collection_query_parameters->skip
    if(bill_of_lading_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", bill_of_lading_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto_collection_query_parameters->count
    if(bill_of_lading_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", bill_of_lading_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // bill_of_lading_dto_collection_query_parameters->filter
    if(bill_of_lading_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", bill_of_lading_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_collection_query_parameters->order_by
    if(bill_of_lading_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", bill_of_lading_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_collection_query_parameters->search
    if(bill_of_lading_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", bill_of_lading_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_collection_query_parameters->select
    if(bill_of_lading_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", bill_of_lading_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_collection_query_parameters->expand
    if(bill_of_lading_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", bill_of_lading_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_collection_query_parameters->is_empty
    if(bill_of_lading_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", bill_of_lading_dto_collection_query_parameters->is_empty) == NULL) {
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

bill_of_lading_dto_collection_query_parameters_t *bill_of_lading_dto_collection_query_parameters_parseFromJSON(cJSON *bill_of_lading_dto_collection_query_parametersJSON){

    bill_of_lading_dto_collection_query_parameters_t *bill_of_lading_dto_collection_query_parameters_local_var = NULL;

    // bill_of_lading_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // bill_of_lading_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    bill_of_lading_dto_collection_query_parameters_local_var = bill_of_lading_dto_collection_query_parameters_create (
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

    return bill_of_lading_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
