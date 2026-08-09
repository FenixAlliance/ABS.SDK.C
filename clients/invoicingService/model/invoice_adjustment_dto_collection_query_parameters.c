#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_adjustment_dto_collection_query_parameters.h"



invoice_adjustment_dto_collection_query_parameters_t *invoice_adjustment_dto_collection_query_parameters_create(
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
    invoice_adjustment_dto_collection_query_parameters_t *invoice_adjustment_dto_collection_query_parameters_local_var = malloc(sizeof(invoice_adjustment_dto_collection_query_parameters_t));
    if (!invoice_adjustment_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    invoice_adjustment_dto_collection_query_parameters_local_var->top = top;
    invoice_adjustment_dto_collection_query_parameters_local_var->skip = skip;
    invoice_adjustment_dto_collection_query_parameters_local_var->count = count;
    invoice_adjustment_dto_collection_query_parameters_local_var->filter = filter;
    invoice_adjustment_dto_collection_query_parameters_local_var->order_by = order_by;
    invoice_adjustment_dto_collection_query_parameters_local_var->search = search;
    invoice_adjustment_dto_collection_query_parameters_local_var->select = select;
    invoice_adjustment_dto_collection_query_parameters_local_var->expand = expand;
    invoice_adjustment_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return invoice_adjustment_dto_collection_query_parameters_local_var;
}


void invoice_adjustment_dto_collection_query_parameters_free(invoice_adjustment_dto_collection_query_parameters_t *invoice_adjustment_dto_collection_query_parameters) {
    if(NULL == invoice_adjustment_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_adjustment_dto_collection_query_parameters->filter) {
        free(invoice_adjustment_dto_collection_query_parameters->filter);
        invoice_adjustment_dto_collection_query_parameters->filter = NULL;
    }
    if (invoice_adjustment_dto_collection_query_parameters->order_by) {
        free(invoice_adjustment_dto_collection_query_parameters->order_by);
        invoice_adjustment_dto_collection_query_parameters->order_by = NULL;
    }
    if (invoice_adjustment_dto_collection_query_parameters->search) {
        free(invoice_adjustment_dto_collection_query_parameters->search);
        invoice_adjustment_dto_collection_query_parameters->search = NULL;
    }
    if (invoice_adjustment_dto_collection_query_parameters->select) {
        free(invoice_adjustment_dto_collection_query_parameters->select);
        invoice_adjustment_dto_collection_query_parameters->select = NULL;
    }
    if (invoice_adjustment_dto_collection_query_parameters->expand) {
        free(invoice_adjustment_dto_collection_query_parameters->expand);
        invoice_adjustment_dto_collection_query_parameters->expand = NULL;
    }
    free(invoice_adjustment_dto_collection_query_parameters);
}

cJSON *invoice_adjustment_dto_collection_query_parameters_convertToJSON(invoice_adjustment_dto_collection_query_parameters_t *invoice_adjustment_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // invoice_adjustment_dto_collection_query_parameters->top
    if(invoice_adjustment_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", invoice_adjustment_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->skip
    if(invoice_adjustment_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", invoice_adjustment_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->count
    if(invoice_adjustment_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", invoice_adjustment_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->filter
    if(invoice_adjustment_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", invoice_adjustment_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->order_by
    if(invoice_adjustment_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", invoice_adjustment_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->search
    if(invoice_adjustment_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", invoice_adjustment_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->select
    if(invoice_adjustment_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", invoice_adjustment_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->expand
    if(invoice_adjustment_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", invoice_adjustment_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // invoice_adjustment_dto_collection_query_parameters->is_empty
    if(invoice_adjustment_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", invoice_adjustment_dto_collection_query_parameters->is_empty) == NULL) {
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

invoice_adjustment_dto_collection_query_parameters_t *invoice_adjustment_dto_collection_query_parameters_parseFromJSON(cJSON *invoice_adjustment_dto_collection_query_parametersJSON){

    invoice_adjustment_dto_collection_query_parameters_t *invoice_adjustment_dto_collection_query_parameters_local_var = NULL;

    // invoice_adjustment_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // invoice_adjustment_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(invoice_adjustment_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    invoice_adjustment_dto_collection_query_parameters_local_var = invoice_adjustment_dto_collection_query_parameters_create (
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

    return invoice_adjustment_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
