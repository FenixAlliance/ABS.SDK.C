#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cost_centre_dto_collection_query_parameters.h"



cost_centre_dto_collection_query_parameters_t *cost_centre_dto_collection_query_parameters_create(
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
    cost_centre_dto_collection_query_parameters_t *cost_centre_dto_collection_query_parameters_local_var = malloc(sizeof(cost_centre_dto_collection_query_parameters_t));
    if (!cost_centre_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    cost_centre_dto_collection_query_parameters_local_var->top = top;
    cost_centre_dto_collection_query_parameters_local_var->skip = skip;
    cost_centre_dto_collection_query_parameters_local_var->count = count;
    cost_centre_dto_collection_query_parameters_local_var->filter = filter;
    cost_centre_dto_collection_query_parameters_local_var->order_by = order_by;
    cost_centre_dto_collection_query_parameters_local_var->search = search;
    cost_centre_dto_collection_query_parameters_local_var->select = select;
    cost_centre_dto_collection_query_parameters_local_var->expand = expand;
    cost_centre_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return cost_centre_dto_collection_query_parameters_local_var;
}


void cost_centre_dto_collection_query_parameters_free(cost_centre_dto_collection_query_parameters_t *cost_centre_dto_collection_query_parameters) {
    if(NULL == cost_centre_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (cost_centre_dto_collection_query_parameters->filter) {
        free(cost_centre_dto_collection_query_parameters->filter);
        cost_centre_dto_collection_query_parameters->filter = NULL;
    }
    if (cost_centre_dto_collection_query_parameters->order_by) {
        free(cost_centre_dto_collection_query_parameters->order_by);
        cost_centre_dto_collection_query_parameters->order_by = NULL;
    }
    if (cost_centre_dto_collection_query_parameters->search) {
        free(cost_centre_dto_collection_query_parameters->search);
        cost_centre_dto_collection_query_parameters->search = NULL;
    }
    if (cost_centre_dto_collection_query_parameters->select) {
        free(cost_centre_dto_collection_query_parameters->select);
        cost_centre_dto_collection_query_parameters->select = NULL;
    }
    if (cost_centre_dto_collection_query_parameters->expand) {
        free(cost_centre_dto_collection_query_parameters->expand);
        cost_centre_dto_collection_query_parameters->expand = NULL;
    }
    free(cost_centre_dto_collection_query_parameters);
}

cJSON *cost_centre_dto_collection_query_parameters_convertToJSON(cost_centre_dto_collection_query_parameters_t *cost_centre_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // cost_centre_dto_collection_query_parameters->top
    if(cost_centre_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", cost_centre_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // cost_centre_dto_collection_query_parameters->skip
    if(cost_centre_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", cost_centre_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // cost_centre_dto_collection_query_parameters->count
    if(cost_centre_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", cost_centre_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // cost_centre_dto_collection_query_parameters->filter
    if(cost_centre_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", cost_centre_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_dto_collection_query_parameters->order_by
    if(cost_centre_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", cost_centre_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_dto_collection_query_parameters->search
    if(cost_centre_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", cost_centre_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_dto_collection_query_parameters->select
    if(cost_centre_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", cost_centre_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_dto_collection_query_parameters->expand
    if(cost_centre_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", cost_centre_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_dto_collection_query_parameters->is_empty
    if(cost_centre_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", cost_centre_dto_collection_query_parameters->is_empty) == NULL) {
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

cost_centre_dto_collection_query_parameters_t *cost_centre_dto_collection_query_parameters_parseFromJSON(cJSON *cost_centre_dto_collection_query_parametersJSON){

    cost_centre_dto_collection_query_parameters_t *cost_centre_dto_collection_query_parameters_local_var = NULL;

    // cost_centre_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // cost_centre_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // cost_centre_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // cost_centre_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // cost_centre_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // cost_centre_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // cost_centre_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // cost_centre_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // cost_centre_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(cost_centre_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    cost_centre_dto_collection_query_parameters_local_var = cost_centre_dto_collection_query_parameters_create (
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

    return cost_centre_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
