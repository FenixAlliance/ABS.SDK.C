#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "refund_request_dto_collection_query_parameters.h"



refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters_create(
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
    refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters_local_var = malloc(sizeof(refund_request_dto_collection_query_parameters_t));
    if (!refund_request_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    refund_request_dto_collection_query_parameters_local_var->top = top;
    refund_request_dto_collection_query_parameters_local_var->skip = skip;
    refund_request_dto_collection_query_parameters_local_var->count = count;
    refund_request_dto_collection_query_parameters_local_var->filter = filter;
    refund_request_dto_collection_query_parameters_local_var->order_by = order_by;
    refund_request_dto_collection_query_parameters_local_var->search = search;
    refund_request_dto_collection_query_parameters_local_var->select = select;
    refund_request_dto_collection_query_parameters_local_var->expand = expand;
    refund_request_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return refund_request_dto_collection_query_parameters_local_var;
}


void refund_request_dto_collection_query_parameters_free(refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters) {
    if(NULL == refund_request_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (refund_request_dto_collection_query_parameters->filter) {
        free(refund_request_dto_collection_query_parameters->filter);
        refund_request_dto_collection_query_parameters->filter = NULL;
    }
    if (refund_request_dto_collection_query_parameters->order_by) {
        free(refund_request_dto_collection_query_parameters->order_by);
        refund_request_dto_collection_query_parameters->order_by = NULL;
    }
    if (refund_request_dto_collection_query_parameters->search) {
        free(refund_request_dto_collection_query_parameters->search);
        refund_request_dto_collection_query_parameters->search = NULL;
    }
    if (refund_request_dto_collection_query_parameters->select) {
        free(refund_request_dto_collection_query_parameters->select);
        refund_request_dto_collection_query_parameters->select = NULL;
    }
    if (refund_request_dto_collection_query_parameters->expand) {
        free(refund_request_dto_collection_query_parameters->expand);
        refund_request_dto_collection_query_parameters->expand = NULL;
    }
    free(refund_request_dto_collection_query_parameters);
}

cJSON *refund_request_dto_collection_query_parameters_convertToJSON(refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // refund_request_dto_collection_query_parameters->top
    if(refund_request_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", refund_request_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // refund_request_dto_collection_query_parameters->skip
    if(refund_request_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", refund_request_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // refund_request_dto_collection_query_parameters->count
    if(refund_request_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", refund_request_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // refund_request_dto_collection_query_parameters->filter
    if(refund_request_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", refund_request_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_collection_query_parameters->order_by
    if(refund_request_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", refund_request_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_collection_query_parameters->search
    if(refund_request_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", refund_request_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_collection_query_parameters->select
    if(refund_request_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", refund_request_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_collection_query_parameters->expand
    if(refund_request_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", refund_request_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_collection_query_parameters->is_empty
    if(refund_request_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", refund_request_dto_collection_query_parameters->is_empty) == NULL) {
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

refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters_parseFromJSON(cJSON *refund_request_dto_collection_query_parametersJSON){

    refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters_local_var = NULL;

    // refund_request_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // refund_request_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // refund_request_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // refund_request_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // refund_request_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // refund_request_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // refund_request_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // refund_request_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // refund_request_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(refund_request_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    refund_request_dto_collection_query_parameters_local_var = refund_request_dto_collection_query_parameters_create (
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

    return refund_request_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
