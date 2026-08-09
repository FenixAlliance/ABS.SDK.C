#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "warehouse_dto_collection_query_parameters.h"



warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters_create(
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
    warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters_local_var = malloc(sizeof(warehouse_dto_collection_query_parameters_t));
    if (!warehouse_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    warehouse_dto_collection_query_parameters_local_var->top = top;
    warehouse_dto_collection_query_parameters_local_var->skip = skip;
    warehouse_dto_collection_query_parameters_local_var->count = count;
    warehouse_dto_collection_query_parameters_local_var->filter = filter;
    warehouse_dto_collection_query_parameters_local_var->order_by = order_by;
    warehouse_dto_collection_query_parameters_local_var->search = search;
    warehouse_dto_collection_query_parameters_local_var->select = select;
    warehouse_dto_collection_query_parameters_local_var->expand = expand;
    warehouse_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return warehouse_dto_collection_query_parameters_local_var;
}


void warehouse_dto_collection_query_parameters_free(warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters) {
    if(NULL == warehouse_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (warehouse_dto_collection_query_parameters->filter) {
        free(warehouse_dto_collection_query_parameters->filter);
        warehouse_dto_collection_query_parameters->filter = NULL;
    }
    if (warehouse_dto_collection_query_parameters->order_by) {
        free(warehouse_dto_collection_query_parameters->order_by);
        warehouse_dto_collection_query_parameters->order_by = NULL;
    }
    if (warehouse_dto_collection_query_parameters->search) {
        free(warehouse_dto_collection_query_parameters->search);
        warehouse_dto_collection_query_parameters->search = NULL;
    }
    if (warehouse_dto_collection_query_parameters->select) {
        free(warehouse_dto_collection_query_parameters->select);
        warehouse_dto_collection_query_parameters->select = NULL;
    }
    if (warehouse_dto_collection_query_parameters->expand) {
        free(warehouse_dto_collection_query_parameters->expand);
        warehouse_dto_collection_query_parameters->expand = NULL;
    }
    free(warehouse_dto_collection_query_parameters);
}

cJSON *warehouse_dto_collection_query_parameters_convertToJSON(warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // warehouse_dto_collection_query_parameters->top
    if(warehouse_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", warehouse_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // warehouse_dto_collection_query_parameters->skip
    if(warehouse_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", warehouse_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // warehouse_dto_collection_query_parameters->count
    if(warehouse_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", warehouse_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // warehouse_dto_collection_query_parameters->filter
    if(warehouse_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", warehouse_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_collection_query_parameters->order_by
    if(warehouse_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", warehouse_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_collection_query_parameters->search
    if(warehouse_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", warehouse_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_collection_query_parameters->select
    if(warehouse_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", warehouse_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_collection_query_parameters->expand
    if(warehouse_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", warehouse_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_collection_query_parameters->is_empty
    if(warehouse_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", warehouse_dto_collection_query_parameters->is_empty) == NULL) {
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

warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters_parseFromJSON(cJSON *warehouse_dto_collection_query_parametersJSON){

    warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters_local_var = NULL;

    // warehouse_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // warehouse_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // warehouse_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // warehouse_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // warehouse_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // warehouse_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // warehouse_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // warehouse_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // warehouse_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(warehouse_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    warehouse_dto_collection_query_parameters_local_var = warehouse_dto_collection_query_parameters_create (
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

    return warehouse_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
