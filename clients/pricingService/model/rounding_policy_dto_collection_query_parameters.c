#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rounding_policy_dto_collection_query_parameters.h"



rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters_create(
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
    rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters_local_var = malloc(sizeof(rounding_policy_dto_collection_query_parameters_t));
    if (!rounding_policy_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    rounding_policy_dto_collection_query_parameters_local_var->top = top;
    rounding_policy_dto_collection_query_parameters_local_var->skip = skip;
    rounding_policy_dto_collection_query_parameters_local_var->count = count;
    rounding_policy_dto_collection_query_parameters_local_var->filter = filter;
    rounding_policy_dto_collection_query_parameters_local_var->order_by = order_by;
    rounding_policy_dto_collection_query_parameters_local_var->search = search;
    rounding_policy_dto_collection_query_parameters_local_var->select = select;
    rounding_policy_dto_collection_query_parameters_local_var->expand = expand;
    rounding_policy_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return rounding_policy_dto_collection_query_parameters_local_var;
}


void rounding_policy_dto_collection_query_parameters_free(rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters) {
    if(NULL == rounding_policy_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (rounding_policy_dto_collection_query_parameters->filter) {
        free(rounding_policy_dto_collection_query_parameters->filter);
        rounding_policy_dto_collection_query_parameters->filter = NULL;
    }
    if (rounding_policy_dto_collection_query_parameters->order_by) {
        free(rounding_policy_dto_collection_query_parameters->order_by);
        rounding_policy_dto_collection_query_parameters->order_by = NULL;
    }
    if (rounding_policy_dto_collection_query_parameters->search) {
        free(rounding_policy_dto_collection_query_parameters->search);
        rounding_policy_dto_collection_query_parameters->search = NULL;
    }
    if (rounding_policy_dto_collection_query_parameters->select) {
        free(rounding_policy_dto_collection_query_parameters->select);
        rounding_policy_dto_collection_query_parameters->select = NULL;
    }
    if (rounding_policy_dto_collection_query_parameters->expand) {
        free(rounding_policy_dto_collection_query_parameters->expand);
        rounding_policy_dto_collection_query_parameters->expand = NULL;
    }
    free(rounding_policy_dto_collection_query_parameters);
}

cJSON *rounding_policy_dto_collection_query_parameters_convertToJSON(rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // rounding_policy_dto_collection_query_parameters->top
    if(rounding_policy_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", rounding_policy_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_dto_collection_query_parameters->skip
    if(rounding_policy_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", rounding_policy_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_dto_collection_query_parameters->count
    if(rounding_policy_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", rounding_policy_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // rounding_policy_dto_collection_query_parameters->filter
    if(rounding_policy_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", rounding_policy_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_dto_collection_query_parameters->order_by
    if(rounding_policy_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", rounding_policy_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_dto_collection_query_parameters->search
    if(rounding_policy_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", rounding_policy_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_dto_collection_query_parameters->select
    if(rounding_policy_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", rounding_policy_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_dto_collection_query_parameters->expand
    if(rounding_policy_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", rounding_policy_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_dto_collection_query_parameters->is_empty
    if(rounding_policy_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", rounding_policy_dto_collection_query_parameters->is_empty) == NULL) {
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

rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters_parseFromJSON(cJSON *rounding_policy_dto_collection_query_parametersJSON){

    rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters_local_var = NULL;

    // rounding_policy_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // rounding_policy_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // rounding_policy_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // rounding_policy_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // rounding_policy_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // rounding_policy_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // rounding_policy_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(rounding_policy_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    rounding_policy_dto_collection_query_parameters_local_var = rounding_policy_dto_collection_query_parameters_create (
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

    return rounding_policy_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
