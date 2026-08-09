#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_dto_collection_query_parameters.h"



signature_dto_collection_query_parameters_t *signature_dto_collection_query_parameters_create(
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
    signature_dto_collection_query_parameters_t *signature_dto_collection_query_parameters_local_var = malloc(sizeof(signature_dto_collection_query_parameters_t));
    if (!signature_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    signature_dto_collection_query_parameters_local_var->top = top;
    signature_dto_collection_query_parameters_local_var->skip = skip;
    signature_dto_collection_query_parameters_local_var->count = count;
    signature_dto_collection_query_parameters_local_var->filter = filter;
    signature_dto_collection_query_parameters_local_var->order_by = order_by;
    signature_dto_collection_query_parameters_local_var->search = search;
    signature_dto_collection_query_parameters_local_var->select = select;
    signature_dto_collection_query_parameters_local_var->expand = expand;
    signature_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return signature_dto_collection_query_parameters_local_var;
}


void signature_dto_collection_query_parameters_free(signature_dto_collection_query_parameters_t *signature_dto_collection_query_parameters) {
    if(NULL == signature_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_dto_collection_query_parameters->filter) {
        free(signature_dto_collection_query_parameters->filter);
        signature_dto_collection_query_parameters->filter = NULL;
    }
    if (signature_dto_collection_query_parameters->order_by) {
        free(signature_dto_collection_query_parameters->order_by);
        signature_dto_collection_query_parameters->order_by = NULL;
    }
    if (signature_dto_collection_query_parameters->search) {
        free(signature_dto_collection_query_parameters->search);
        signature_dto_collection_query_parameters->search = NULL;
    }
    if (signature_dto_collection_query_parameters->select) {
        free(signature_dto_collection_query_parameters->select);
        signature_dto_collection_query_parameters->select = NULL;
    }
    if (signature_dto_collection_query_parameters->expand) {
        free(signature_dto_collection_query_parameters->expand);
        signature_dto_collection_query_parameters->expand = NULL;
    }
    free(signature_dto_collection_query_parameters);
}

cJSON *signature_dto_collection_query_parameters_convertToJSON(signature_dto_collection_query_parameters_t *signature_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // signature_dto_collection_query_parameters->top
    if(signature_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", signature_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // signature_dto_collection_query_parameters->skip
    if(signature_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", signature_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // signature_dto_collection_query_parameters->count
    if(signature_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", signature_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // signature_dto_collection_query_parameters->filter
    if(signature_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", signature_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_collection_query_parameters->order_by
    if(signature_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", signature_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_collection_query_parameters->search
    if(signature_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", signature_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_collection_query_parameters->select
    if(signature_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", signature_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_collection_query_parameters->expand
    if(signature_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", signature_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_collection_query_parameters->is_empty
    if(signature_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", signature_dto_collection_query_parameters->is_empty) == NULL) {
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

signature_dto_collection_query_parameters_t *signature_dto_collection_query_parameters_parseFromJSON(cJSON *signature_dto_collection_query_parametersJSON){

    signature_dto_collection_query_parameters_t *signature_dto_collection_query_parameters_local_var = NULL;

    // signature_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // signature_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // signature_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // signature_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // signature_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // signature_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // signature_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // signature_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // signature_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(signature_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    signature_dto_collection_query_parameters_local_var = signature_dto_collection_query_parameters_create (
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

    return signature_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
