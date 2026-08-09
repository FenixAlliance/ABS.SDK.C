#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "warranty_request_dto_collection_query_parameters.h"



warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters_create(
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
    warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters_local_var = malloc(sizeof(warranty_request_dto_collection_query_parameters_t));
    if (!warranty_request_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    warranty_request_dto_collection_query_parameters_local_var->top = top;
    warranty_request_dto_collection_query_parameters_local_var->skip = skip;
    warranty_request_dto_collection_query_parameters_local_var->count = count;
    warranty_request_dto_collection_query_parameters_local_var->filter = filter;
    warranty_request_dto_collection_query_parameters_local_var->order_by = order_by;
    warranty_request_dto_collection_query_parameters_local_var->search = search;
    warranty_request_dto_collection_query_parameters_local_var->select = select;
    warranty_request_dto_collection_query_parameters_local_var->expand = expand;
    warranty_request_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return warranty_request_dto_collection_query_parameters_local_var;
}


void warranty_request_dto_collection_query_parameters_free(warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters) {
    if(NULL == warranty_request_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (warranty_request_dto_collection_query_parameters->filter) {
        free(warranty_request_dto_collection_query_parameters->filter);
        warranty_request_dto_collection_query_parameters->filter = NULL;
    }
    if (warranty_request_dto_collection_query_parameters->order_by) {
        free(warranty_request_dto_collection_query_parameters->order_by);
        warranty_request_dto_collection_query_parameters->order_by = NULL;
    }
    if (warranty_request_dto_collection_query_parameters->search) {
        free(warranty_request_dto_collection_query_parameters->search);
        warranty_request_dto_collection_query_parameters->search = NULL;
    }
    if (warranty_request_dto_collection_query_parameters->select) {
        free(warranty_request_dto_collection_query_parameters->select);
        warranty_request_dto_collection_query_parameters->select = NULL;
    }
    if (warranty_request_dto_collection_query_parameters->expand) {
        free(warranty_request_dto_collection_query_parameters->expand);
        warranty_request_dto_collection_query_parameters->expand = NULL;
    }
    free(warranty_request_dto_collection_query_parameters);
}

cJSON *warranty_request_dto_collection_query_parameters_convertToJSON(warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // warranty_request_dto_collection_query_parameters->top
    if(warranty_request_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", warranty_request_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // warranty_request_dto_collection_query_parameters->skip
    if(warranty_request_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", warranty_request_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // warranty_request_dto_collection_query_parameters->count
    if(warranty_request_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", warranty_request_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // warranty_request_dto_collection_query_parameters->filter
    if(warranty_request_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", warranty_request_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_collection_query_parameters->order_by
    if(warranty_request_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", warranty_request_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_collection_query_parameters->search
    if(warranty_request_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", warranty_request_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_collection_query_parameters->select
    if(warranty_request_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", warranty_request_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_collection_query_parameters->expand
    if(warranty_request_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", warranty_request_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_collection_query_parameters->is_empty
    if(warranty_request_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", warranty_request_dto_collection_query_parameters->is_empty) == NULL) {
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

warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters_parseFromJSON(cJSON *warranty_request_dto_collection_query_parametersJSON){

    warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters_local_var = NULL;

    // warranty_request_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // warranty_request_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // warranty_request_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // warranty_request_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    warranty_request_dto_collection_query_parameters_local_var = warranty_request_dto_collection_query_parameters_create (
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

    return warranty_request_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
