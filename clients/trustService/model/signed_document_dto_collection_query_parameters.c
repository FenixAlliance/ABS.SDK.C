#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_dto_collection_query_parameters.h"



signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters_create(
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
    signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters_local_var = malloc(sizeof(signed_document_dto_collection_query_parameters_t));
    if (!signed_document_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    signed_document_dto_collection_query_parameters_local_var->top = top;
    signed_document_dto_collection_query_parameters_local_var->skip = skip;
    signed_document_dto_collection_query_parameters_local_var->count = count;
    signed_document_dto_collection_query_parameters_local_var->filter = filter;
    signed_document_dto_collection_query_parameters_local_var->order_by = order_by;
    signed_document_dto_collection_query_parameters_local_var->search = search;
    signed_document_dto_collection_query_parameters_local_var->select = select;
    signed_document_dto_collection_query_parameters_local_var->expand = expand;
    signed_document_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return signed_document_dto_collection_query_parameters_local_var;
}


void signed_document_dto_collection_query_parameters_free(signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters) {
    if(NULL == signed_document_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_dto_collection_query_parameters->filter) {
        free(signed_document_dto_collection_query_parameters->filter);
        signed_document_dto_collection_query_parameters->filter = NULL;
    }
    if (signed_document_dto_collection_query_parameters->order_by) {
        free(signed_document_dto_collection_query_parameters->order_by);
        signed_document_dto_collection_query_parameters->order_by = NULL;
    }
    if (signed_document_dto_collection_query_parameters->search) {
        free(signed_document_dto_collection_query_parameters->search);
        signed_document_dto_collection_query_parameters->search = NULL;
    }
    if (signed_document_dto_collection_query_parameters->select) {
        free(signed_document_dto_collection_query_parameters->select);
        signed_document_dto_collection_query_parameters->select = NULL;
    }
    if (signed_document_dto_collection_query_parameters->expand) {
        free(signed_document_dto_collection_query_parameters->expand);
        signed_document_dto_collection_query_parameters->expand = NULL;
    }
    free(signed_document_dto_collection_query_parameters);
}

cJSON *signed_document_dto_collection_query_parameters_convertToJSON(signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_dto_collection_query_parameters->top
    if(signed_document_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", signed_document_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // signed_document_dto_collection_query_parameters->skip
    if(signed_document_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", signed_document_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // signed_document_dto_collection_query_parameters->count
    if(signed_document_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", signed_document_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // signed_document_dto_collection_query_parameters->filter
    if(signed_document_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", signed_document_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_collection_query_parameters->order_by
    if(signed_document_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", signed_document_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_collection_query_parameters->search
    if(signed_document_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", signed_document_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_collection_query_parameters->select
    if(signed_document_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", signed_document_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_collection_query_parameters->expand
    if(signed_document_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", signed_document_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_collection_query_parameters->is_empty
    if(signed_document_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", signed_document_dto_collection_query_parameters->is_empty) == NULL) {
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

signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters_parseFromJSON(cJSON *signed_document_dto_collection_query_parametersJSON){

    signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters_local_var = NULL;

    // signed_document_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // signed_document_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // signed_document_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // signed_document_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // signed_document_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // signed_document_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // signed_document_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // signed_document_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // signed_document_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(signed_document_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    signed_document_dto_collection_query_parameters_local_var = signed_document_dto_collection_query_parameters_create (
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

    return signed_document_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
