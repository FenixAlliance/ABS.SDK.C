#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inquiry_request_dto_collection_query_parameters.h"



inquiry_request_dto_collection_query_parameters_t *inquiry_request_dto_collection_query_parameters_create(
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
    inquiry_request_dto_collection_query_parameters_t *inquiry_request_dto_collection_query_parameters_local_var = malloc(sizeof(inquiry_request_dto_collection_query_parameters_t));
    if (!inquiry_request_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    inquiry_request_dto_collection_query_parameters_local_var->top = top;
    inquiry_request_dto_collection_query_parameters_local_var->skip = skip;
    inquiry_request_dto_collection_query_parameters_local_var->count = count;
    inquiry_request_dto_collection_query_parameters_local_var->filter = filter;
    inquiry_request_dto_collection_query_parameters_local_var->order_by = order_by;
    inquiry_request_dto_collection_query_parameters_local_var->search = search;
    inquiry_request_dto_collection_query_parameters_local_var->select = select;
    inquiry_request_dto_collection_query_parameters_local_var->expand = expand;
    inquiry_request_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return inquiry_request_dto_collection_query_parameters_local_var;
}


void inquiry_request_dto_collection_query_parameters_free(inquiry_request_dto_collection_query_parameters_t *inquiry_request_dto_collection_query_parameters) {
    if(NULL == inquiry_request_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (inquiry_request_dto_collection_query_parameters->filter) {
        free(inquiry_request_dto_collection_query_parameters->filter);
        inquiry_request_dto_collection_query_parameters->filter = NULL;
    }
    if (inquiry_request_dto_collection_query_parameters->order_by) {
        free(inquiry_request_dto_collection_query_parameters->order_by);
        inquiry_request_dto_collection_query_parameters->order_by = NULL;
    }
    if (inquiry_request_dto_collection_query_parameters->search) {
        free(inquiry_request_dto_collection_query_parameters->search);
        inquiry_request_dto_collection_query_parameters->search = NULL;
    }
    if (inquiry_request_dto_collection_query_parameters->select) {
        free(inquiry_request_dto_collection_query_parameters->select);
        inquiry_request_dto_collection_query_parameters->select = NULL;
    }
    if (inquiry_request_dto_collection_query_parameters->expand) {
        free(inquiry_request_dto_collection_query_parameters->expand);
        inquiry_request_dto_collection_query_parameters->expand = NULL;
    }
    free(inquiry_request_dto_collection_query_parameters);
}

cJSON *inquiry_request_dto_collection_query_parameters_convertToJSON(inquiry_request_dto_collection_query_parameters_t *inquiry_request_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // inquiry_request_dto_collection_query_parameters->top
    if(inquiry_request_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", inquiry_request_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // inquiry_request_dto_collection_query_parameters->skip
    if(inquiry_request_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", inquiry_request_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // inquiry_request_dto_collection_query_parameters->count
    if(inquiry_request_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", inquiry_request_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // inquiry_request_dto_collection_query_parameters->filter
    if(inquiry_request_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", inquiry_request_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_collection_query_parameters->order_by
    if(inquiry_request_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", inquiry_request_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_collection_query_parameters->search
    if(inquiry_request_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", inquiry_request_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_collection_query_parameters->select
    if(inquiry_request_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", inquiry_request_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_collection_query_parameters->expand
    if(inquiry_request_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", inquiry_request_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_collection_query_parameters->is_empty
    if(inquiry_request_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", inquiry_request_dto_collection_query_parameters->is_empty) == NULL) {
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

inquiry_request_dto_collection_query_parameters_t *inquiry_request_dto_collection_query_parameters_parseFromJSON(cJSON *inquiry_request_dto_collection_query_parametersJSON){

    inquiry_request_dto_collection_query_parameters_t *inquiry_request_dto_collection_query_parameters_local_var = NULL;

    // inquiry_request_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // inquiry_request_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // inquiry_request_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // inquiry_request_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    inquiry_request_dto_collection_query_parameters_local_var = inquiry_request_dto_collection_query_parameters_create (
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

    return inquiry_request_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
