#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_request_dto_collection_query_parameters.h"



support_request_dto_collection_query_parameters_t *support_request_dto_collection_query_parameters_create(
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
    support_request_dto_collection_query_parameters_t *support_request_dto_collection_query_parameters_local_var = malloc(sizeof(support_request_dto_collection_query_parameters_t));
    if (!support_request_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    support_request_dto_collection_query_parameters_local_var->top = top;
    support_request_dto_collection_query_parameters_local_var->skip = skip;
    support_request_dto_collection_query_parameters_local_var->count = count;
    support_request_dto_collection_query_parameters_local_var->filter = filter;
    support_request_dto_collection_query_parameters_local_var->order_by = order_by;
    support_request_dto_collection_query_parameters_local_var->search = search;
    support_request_dto_collection_query_parameters_local_var->select = select;
    support_request_dto_collection_query_parameters_local_var->expand = expand;
    support_request_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return support_request_dto_collection_query_parameters_local_var;
}


void support_request_dto_collection_query_parameters_free(support_request_dto_collection_query_parameters_t *support_request_dto_collection_query_parameters) {
    if(NULL == support_request_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (support_request_dto_collection_query_parameters->filter) {
        free(support_request_dto_collection_query_parameters->filter);
        support_request_dto_collection_query_parameters->filter = NULL;
    }
    if (support_request_dto_collection_query_parameters->order_by) {
        free(support_request_dto_collection_query_parameters->order_by);
        support_request_dto_collection_query_parameters->order_by = NULL;
    }
    if (support_request_dto_collection_query_parameters->search) {
        free(support_request_dto_collection_query_parameters->search);
        support_request_dto_collection_query_parameters->search = NULL;
    }
    if (support_request_dto_collection_query_parameters->select) {
        free(support_request_dto_collection_query_parameters->select);
        support_request_dto_collection_query_parameters->select = NULL;
    }
    if (support_request_dto_collection_query_parameters->expand) {
        free(support_request_dto_collection_query_parameters->expand);
        support_request_dto_collection_query_parameters->expand = NULL;
    }
    free(support_request_dto_collection_query_parameters);
}

cJSON *support_request_dto_collection_query_parameters_convertToJSON(support_request_dto_collection_query_parameters_t *support_request_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // support_request_dto_collection_query_parameters->top
    if(support_request_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", support_request_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_request_dto_collection_query_parameters->skip
    if(support_request_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", support_request_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_request_dto_collection_query_parameters->count
    if(support_request_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", support_request_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_dto_collection_query_parameters->filter
    if(support_request_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", support_request_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto_collection_query_parameters->order_by
    if(support_request_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", support_request_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto_collection_query_parameters->search
    if(support_request_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", support_request_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto_collection_query_parameters->select
    if(support_request_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", support_request_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto_collection_query_parameters->expand
    if(support_request_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", support_request_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto_collection_query_parameters->is_empty
    if(support_request_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", support_request_dto_collection_query_parameters->is_empty) == NULL) {
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

support_request_dto_collection_query_parameters_t *support_request_dto_collection_query_parameters_parseFromJSON(cJSON *support_request_dto_collection_query_parametersJSON){

    support_request_dto_collection_query_parameters_t *support_request_dto_collection_query_parameters_local_var = NULL;

    // support_request_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // support_request_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // support_request_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // support_request_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // support_request_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // support_request_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // support_request_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // support_request_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // support_request_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(support_request_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    support_request_dto_collection_query_parameters_local_var = support_request_dto_collection_query_parameters_create (
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

    return support_request_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
