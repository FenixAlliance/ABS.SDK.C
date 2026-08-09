#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_request_dto_collection_query_parameters.h"



return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters_create(
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
    return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters_local_var = malloc(sizeof(return_request_dto_collection_query_parameters_t));
    if (!return_request_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    return_request_dto_collection_query_parameters_local_var->top = top;
    return_request_dto_collection_query_parameters_local_var->skip = skip;
    return_request_dto_collection_query_parameters_local_var->count = count;
    return_request_dto_collection_query_parameters_local_var->filter = filter;
    return_request_dto_collection_query_parameters_local_var->order_by = order_by;
    return_request_dto_collection_query_parameters_local_var->search = search;
    return_request_dto_collection_query_parameters_local_var->select = select;
    return_request_dto_collection_query_parameters_local_var->expand = expand;
    return_request_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return return_request_dto_collection_query_parameters_local_var;
}


void return_request_dto_collection_query_parameters_free(return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters) {
    if(NULL == return_request_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (return_request_dto_collection_query_parameters->filter) {
        free(return_request_dto_collection_query_parameters->filter);
        return_request_dto_collection_query_parameters->filter = NULL;
    }
    if (return_request_dto_collection_query_parameters->order_by) {
        free(return_request_dto_collection_query_parameters->order_by);
        return_request_dto_collection_query_parameters->order_by = NULL;
    }
    if (return_request_dto_collection_query_parameters->search) {
        free(return_request_dto_collection_query_parameters->search);
        return_request_dto_collection_query_parameters->search = NULL;
    }
    if (return_request_dto_collection_query_parameters->select) {
        free(return_request_dto_collection_query_parameters->select);
        return_request_dto_collection_query_parameters->select = NULL;
    }
    if (return_request_dto_collection_query_parameters->expand) {
        free(return_request_dto_collection_query_parameters->expand);
        return_request_dto_collection_query_parameters->expand = NULL;
    }
    free(return_request_dto_collection_query_parameters);
}

cJSON *return_request_dto_collection_query_parameters_convertToJSON(return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // return_request_dto_collection_query_parameters->top
    if(return_request_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", return_request_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // return_request_dto_collection_query_parameters->skip
    if(return_request_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", return_request_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // return_request_dto_collection_query_parameters->count
    if(return_request_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", return_request_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // return_request_dto_collection_query_parameters->filter
    if(return_request_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", return_request_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_collection_query_parameters->order_by
    if(return_request_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", return_request_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_collection_query_parameters->search
    if(return_request_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", return_request_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_collection_query_parameters->select
    if(return_request_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", return_request_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_collection_query_parameters->expand
    if(return_request_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", return_request_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_collection_query_parameters->is_empty
    if(return_request_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", return_request_dto_collection_query_parameters->is_empty) == NULL) {
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

return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters_parseFromJSON(cJSON *return_request_dto_collection_query_parametersJSON){

    return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters_local_var = NULL;

    // return_request_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // return_request_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // return_request_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // return_request_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // return_request_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // return_request_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // return_request_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // return_request_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // return_request_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(return_request_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    return_request_dto_collection_query_parameters_local_var = return_request_dto_collection_query_parameters_create (
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

    return return_request_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
