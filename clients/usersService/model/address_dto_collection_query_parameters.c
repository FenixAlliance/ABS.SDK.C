#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_dto_collection_query_parameters.h"



address_dto_collection_query_parameters_t *address_dto_collection_query_parameters_create(
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
    address_dto_collection_query_parameters_t *address_dto_collection_query_parameters_local_var = malloc(sizeof(address_dto_collection_query_parameters_t));
    if (!address_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    address_dto_collection_query_parameters_local_var->top = top;
    address_dto_collection_query_parameters_local_var->skip = skip;
    address_dto_collection_query_parameters_local_var->count = count;
    address_dto_collection_query_parameters_local_var->filter = filter;
    address_dto_collection_query_parameters_local_var->order_by = order_by;
    address_dto_collection_query_parameters_local_var->search = search;
    address_dto_collection_query_parameters_local_var->select = select;
    address_dto_collection_query_parameters_local_var->expand = expand;
    address_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return address_dto_collection_query_parameters_local_var;
}


void address_dto_collection_query_parameters_free(address_dto_collection_query_parameters_t *address_dto_collection_query_parameters) {
    if(NULL == address_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (address_dto_collection_query_parameters->filter) {
        free(address_dto_collection_query_parameters->filter);
        address_dto_collection_query_parameters->filter = NULL;
    }
    if (address_dto_collection_query_parameters->order_by) {
        free(address_dto_collection_query_parameters->order_by);
        address_dto_collection_query_parameters->order_by = NULL;
    }
    if (address_dto_collection_query_parameters->search) {
        free(address_dto_collection_query_parameters->search);
        address_dto_collection_query_parameters->search = NULL;
    }
    if (address_dto_collection_query_parameters->select) {
        free(address_dto_collection_query_parameters->select);
        address_dto_collection_query_parameters->select = NULL;
    }
    if (address_dto_collection_query_parameters->expand) {
        free(address_dto_collection_query_parameters->expand);
        address_dto_collection_query_parameters->expand = NULL;
    }
    free(address_dto_collection_query_parameters);
}

cJSON *address_dto_collection_query_parameters_convertToJSON(address_dto_collection_query_parameters_t *address_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // address_dto_collection_query_parameters->top
    if(address_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", address_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // address_dto_collection_query_parameters->skip
    if(address_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", address_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // address_dto_collection_query_parameters->count
    if(address_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", address_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto_collection_query_parameters->filter
    if(address_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", address_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // address_dto_collection_query_parameters->order_by
    if(address_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", address_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // address_dto_collection_query_parameters->search
    if(address_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", address_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // address_dto_collection_query_parameters->select
    if(address_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", address_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // address_dto_collection_query_parameters->expand
    if(address_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", address_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // address_dto_collection_query_parameters->is_empty
    if(address_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", address_dto_collection_query_parameters->is_empty) == NULL) {
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

address_dto_collection_query_parameters_t *address_dto_collection_query_parameters_parseFromJSON(cJSON *address_dto_collection_query_parametersJSON){

    address_dto_collection_query_parameters_t *address_dto_collection_query_parameters_local_var = NULL;

    // address_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // address_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // address_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // address_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // address_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // address_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // address_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // address_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // address_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(address_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    address_dto_collection_query_parameters_local_var = address_dto_collection_query_parameters_create (
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

    return address_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
