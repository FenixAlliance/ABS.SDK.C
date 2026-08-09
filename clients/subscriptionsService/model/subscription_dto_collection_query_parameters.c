#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscription_dto_collection_query_parameters.h"



subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters_create(
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
    subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters_local_var = malloc(sizeof(subscription_dto_collection_query_parameters_t));
    if (!subscription_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    subscription_dto_collection_query_parameters_local_var->top = top;
    subscription_dto_collection_query_parameters_local_var->skip = skip;
    subscription_dto_collection_query_parameters_local_var->count = count;
    subscription_dto_collection_query_parameters_local_var->filter = filter;
    subscription_dto_collection_query_parameters_local_var->order_by = order_by;
    subscription_dto_collection_query_parameters_local_var->search = search;
    subscription_dto_collection_query_parameters_local_var->select = select;
    subscription_dto_collection_query_parameters_local_var->expand = expand;
    subscription_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return subscription_dto_collection_query_parameters_local_var;
}


void subscription_dto_collection_query_parameters_free(subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters) {
    if(NULL == subscription_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (subscription_dto_collection_query_parameters->filter) {
        free(subscription_dto_collection_query_parameters->filter);
        subscription_dto_collection_query_parameters->filter = NULL;
    }
    if (subscription_dto_collection_query_parameters->order_by) {
        free(subscription_dto_collection_query_parameters->order_by);
        subscription_dto_collection_query_parameters->order_by = NULL;
    }
    if (subscription_dto_collection_query_parameters->search) {
        free(subscription_dto_collection_query_parameters->search);
        subscription_dto_collection_query_parameters->search = NULL;
    }
    if (subscription_dto_collection_query_parameters->select) {
        free(subscription_dto_collection_query_parameters->select);
        subscription_dto_collection_query_parameters->select = NULL;
    }
    if (subscription_dto_collection_query_parameters->expand) {
        free(subscription_dto_collection_query_parameters->expand);
        subscription_dto_collection_query_parameters->expand = NULL;
    }
    free(subscription_dto_collection_query_parameters);
}

cJSON *subscription_dto_collection_query_parameters_convertToJSON(subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // subscription_dto_collection_query_parameters->top
    if(subscription_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", subscription_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_dto_collection_query_parameters->skip
    if(subscription_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", subscription_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_dto_collection_query_parameters->count
    if(subscription_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", subscription_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_dto_collection_query_parameters->filter
    if(subscription_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", subscription_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_collection_query_parameters->order_by
    if(subscription_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", subscription_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_collection_query_parameters->search
    if(subscription_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", subscription_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_collection_query_parameters->select
    if(subscription_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", subscription_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_collection_query_parameters->expand
    if(subscription_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", subscription_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_collection_query_parameters->is_empty
    if(subscription_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", subscription_dto_collection_query_parameters->is_empty) == NULL) {
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

subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters_parseFromJSON(cJSON *subscription_dto_collection_query_parametersJSON){

    subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters_local_var = NULL;

    // subscription_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // subscription_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // subscription_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // subscription_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // subscription_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // subscription_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // subscription_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // subscription_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // subscription_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(subscription_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    subscription_dto_collection_query_parameters_local_var = subscription_dto_collection_query_parameters_create (
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

    return subscription_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
