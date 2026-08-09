#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_invoice_dto_collection_query_parameters.h"



extended_invoice_dto_collection_query_parameters_t *extended_invoice_dto_collection_query_parameters_create(
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
    extended_invoice_dto_collection_query_parameters_t *extended_invoice_dto_collection_query_parameters_local_var = malloc(sizeof(extended_invoice_dto_collection_query_parameters_t));
    if (!extended_invoice_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    extended_invoice_dto_collection_query_parameters_local_var->top = top;
    extended_invoice_dto_collection_query_parameters_local_var->skip = skip;
    extended_invoice_dto_collection_query_parameters_local_var->count = count;
    extended_invoice_dto_collection_query_parameters_local_var->filter = filter;
    extended_invoice_dto_collection_query_parameters_local_var->order_by = order_by;
    extended_invoice_dto_collection_query_parameters_local_var->search = search;
    extended_invoice_dto_collection_query_parameters_local_var->select = select;
    extended_invoice_dto_collection_query_parameters_local_var->expand = expand;
    extended_invoice_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return extended_invoice_dto_collection_query_parameters_local_var;
}


void extended_invoice_dto_collection_query_parameters_free(extended_invoice_dto_collection_query_parameters_t *extended_invoice_dto_collection_query_parameters) {
    if(NULL == extended_invoice_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_invoice_dto_collection_query_parameters->filter) {
        free(extended_invoice_dto_collection_query_parameters->filter);
        extended_invoice_dto_collection_query_parameters->filter = NULL;
    }
    if (extended_invoice_dto_collection_query_parameters->order_by) {
        free(extended_invoice_dto_collection_query_parameters->order_by);
        extended_invoice_dto_collection_query_parameters->order_by = NULL;
    }
    if (extended_invoice_dto_collection_query_parameters->search) {
        free(extended_invoice_dto_collection_query_parameters->search);
        extended_invoice_dto_collection_query_parameters->search = NULL;
    }
    if (extended_invoice_dto_collection_query_parameters->select) {
        free(extended_invoice_dto_collection_query_parameters->select);
        extended_invoice_dto_collection_query_parameters->select = NULL;
    }
    if (extended_invoice_dto_collection_query_parameters->expand) {
        free(extended_invoice_dto_collection_query_parameters->expand);
        extended_invoice_dto_collection_query_parameters->expand = NULL;
    }
    free(extended_invoice_dto_collection_query_parameters);
}

cJSON *extended_invoice_dto_collection_query_parameters_convertToJSON(extended_invoice_dto_collection_query_parameters_t *extended_invoice_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // extended_invoice_dto_collection_query_parameters->top
    if(extended_invoice_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", extended_invoice_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto_collection_query_parameters->skip
    if(extended_invoice_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", extended_invoice_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto_collection_query_parameters->count
    if(extended_invoice_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", extended_invoice_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_invoice_dto_collection_query_parameters->filter
    if(extended_invoice_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", extended_invoice_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto_collection_query_parameters->order_by
    if(extended_invoice_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", extended_invoice_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto_collection_query_parameters->search
    if(extended_invoice_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", extended_invoice_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto_collection_query_parameters->select
    if(extended_invoice_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", extended_invoice_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto_collection_query_parameters->expand
    if(extended_invoice_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", extended_invoice_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto_collection_query_parameters->is_empty
    if(extended_invoice_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", extended_invoice_dto_collection_query_parameters->is_empty) == NULL) {
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

extended_invoice_dto_collection_query_parameters_t *extended_invoice_dto_collection_query_parameters_parseFromJSON(cJSON *extended_invoice_dto_collection_query_parametersJSON){

    extended_invoice_dto_collection_query_parameters_t *extended_invoice_dto_collection_query_parameters_local_var = NULL;

    // extended_invoice_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // extended_invoice_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(extended_invoice_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    extended_invoice_dto_collection_query_parameters_local_var = extended_invoice_dto_collection_query_parameters_create (
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

    return extended_invoice_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
