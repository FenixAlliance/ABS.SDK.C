#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_refund_policy_dto_collection_query_parameters.h"



item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters_create(
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
    item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters_local_var = malloc(sizeof(item_refund_policy_dto_collection_query_parameters_t));
    if (!item_refund_policy_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    item_refund_policy_dto_collection_query_parameters_local_var->top = top;
    item_refund_policy_dto_collection_query_parameters_local_var->skip = skip;
    item_refund_policy_dto_collection_query_parameters_local_var->count = count;
    item_refund_policy_dto_collection_query_parameters_local_var->filter = filter;
    item_refund_policy_dto_collection_query_parameters_local_var->order_by = order_by;
    item_refund_policy_dto_collection_query_parameters_local_var->search = search;
    item_refund_policy_dto_collection_query_parameters_local_var->select = select;
    item_refund_policy_dto_collection_query_parameters_local_var->expand = expand;
    item_refund_policy_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return item_refund_policy_dto_collection_query_parameters_local_var;
}


void item_refund_policy_dto_collection_query_parameters_free(item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters) {
    if(NULL == item_refund_policy_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (item_refund_policy_dto_collection_query_parameters->filter) {
        free(item_refund_policy_dto_collection_query_parameters->filter);
        item_refund_policy_dto_collection_query_parameters->filter = NULL;
    }
    if (item_refund_policy_dto_collection_query_parameters->order_by) {
        free(item_refund_policy_dto_collection_query_parameters->order_by);
        item_refund_policy_dto_collection_query_parameters->order_by = NULL;
    }
    if (item_refund_policy_dto_collection_query_parameters->search) {
        free(item_refund_policy_dto_collection_query_parameters->search);
        item_refund_policy_dto_collection_query_parameters->search = NULL;
    }
    if (item_refund_policy_dto_collection_query_parameters->select) {
        free(item_refund_policy_dto_collection_query_parameters->select);
        item_refund_policy_dto_collection_query_parameters->select = NULL;
    }
    if (item_refund_policy_dto_collection_query_parameters->expand) {
        free(item_refund_policy_dto_collection_query_parameters->expand);
        item_refund_policy_dto_collection_query_parameters->expand = NULL;
    }
    free(item_refund_policy_dto_collection_query_parameters);
}

cJSON *item_refund_policy_dto_collection_query_parameters_convertToJSON(item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // item_refund_policy_dto_collection_query_parameters->top
    if(item_refund_policy_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", item_refund_policy_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_refund_policy_dto_collection_query_parameters->skip
    if(item_refund_policy_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", item_refund_policy_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_refund_policy_dto_collection_query_parameters->count
    if(item_refund_policy_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", item_refund_policy_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // item_refund_policy_dto_collection_query_parameters->filter
    if(item_refund_policy_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", item_refund_policy_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // item_refund_policy_dto_collection_query_parameters->order_by
    if(item_refund_policy_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", item_refund_policy_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // item_refund_policy_dto_collection_query_parameters->search
    if(item_refund_policy_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", item_refund_policy_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // item_refund_policy_dto_collection_query_parameters->select
    if(item_refund_policy_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", item_refund_policy_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // item_refund_policy_dto_collection_query_parameters->expand
    if(item_refund_policy_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", item_refund_policy_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // item_refund_policy_dto_collection_query_parameters->is_empty
    if(item_refund_policy_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", item_refund_policy_dto_collection_query_parameters->is_empty) == NULL) {
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

item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters_parseFromJSON(cJSON *item_refund_policy_dto_collection_query_parametersJSON){

    item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters_local_var = NULL;

    // item_refund_policy_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // item_refund_policy_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // item_refund_policy_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // item_refund_policy_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // item_refund_policy_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // item_refund_policy_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // item_refund_policy_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // item_refund_policy_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // item_refund_policy_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(item_refund_policy_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    item_refund_policy_dto_collection_query_parameters_local_var = item_refund_policy_dto_collection_query_parameters_create (
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

    return item_refund_policy_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
