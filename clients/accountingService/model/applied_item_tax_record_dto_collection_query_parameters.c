#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "applied_item_tax_record_dto_collection_query_parameters.h"



applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters_create(
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
    applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters_local_var = malloc(sizeof(applied_item_tax_record_dto_collection_query_parameters_t));
    if (!applied_item_tax_record_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    applied_item_tax_record_dto_collection_query_parameters_local_var->top = top;
    applied_item_tax_record_dto_collection_query_parameters_local_var->skip = skip;
    applied_item_tax_record_dto_collection_query_parameters_local_var->count = count;
    applied_item_tax_record_dto_collection_query_parameters_local_var->filter = filter;
    applied_item_tax_record_dto_collection_query_parameters_local_var->order_by = order_by;
    applied_item_tax_record_dto_collection_query_parameters_local_var->search = search;
    applied_item_tax_record_dto_collection_query_parameters_local_var->select = select;
    applied_item_tax_record_dto_collection_query_parameters_local_var->expand = expand;
    applied_item_tax_record_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return applied_item_tax_record_dto_collection_query_parameters_local_var;
}


void applied_item_tax_record_dto_collection_query_parameters_free(applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters) {
    if(NULL == applied_item_tax_record_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (applied_item_tax_record_dto_collection_query_parameters->filter) {
        free(applied_item_tax_record_dto_collection_query_parameters->filter);
        applied_item_tax_record_dto_collection_query_parameters->filter = NULL;
    }
    if (applied_item_tax_record_dto_collection_query_parameters->order_by) {
        free(applied_item_tax_record_dto_collection_query_parameters->order_by);
        applied_item_tax_record_dto_collection_query_parameters->order_by = NULL;
    }
    if (applied_item_tax_record_dto_collection_query_parameters->search) {
        free(applied_item_tax_record_dto_collection_query_parameters->search);
        applied_item_tax_record_dto_collection_query_parameters->search = NULL;
    }
    if (applied_item_tax_record_dto_collection_query_parameters->select) {
        free(applied_item_tax_record_dto_collection_query_parameters->select);
        applied_item_tax_record_dto_collection_query_parameters->select = NULL;
    }
    if (applied_item_tax_record_dto_collection_query_parameters->expand) {
        free(applied_item_tax_record_dto_collection_query_parameters->expand);
        applied_item_tax_record_dto_collection_query_parameters->expand = NULL;
    }
    free(applied_item_tax_record_dto_collection_query_parameters);
}

cJSON *applied_item_tax_record_dto_collection_query_parameters_convertToJSON(applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // applied_item_tax_record_dto_collection_query_parameters->top
    if(applied_item_tax_record_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", applied_item_tax_record_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->skip
    if(applied_item_tax_record_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", applied_item_tax_record_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->count
    if(applied_item_tax_record_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", applied_item_tax_record_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->filter
    if(applied_item_tax_record_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", applied_item_tax_record_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->order_by
    if(applied_item_tax_record_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", applied_item_tax_record_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->search
    if(applied_item_tax_record_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", applied_item_tax_record_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->select
    if(applied_item_tax_record_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", applied_item_tax_record_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->expand
    if(applied_item_tax_record_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", applied_item_tax_record_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // applied_item_tax_record_dto_collection_query_parameters->is_empty
    if(applied_item_tax_record_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", applied_item_tax_record_dto_collection_query_parameters->is_empty) == NULL) {
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

applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters_parseFromJSON(cJSON *applied_item_tax_record_dto_collection_query_parametersJSON){

    applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters_local_var = NULL;

    // applied_item_tax_record_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // applied_item_tax_record_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(applied_item_tax_record_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    applied_item_tax_record_dto_collection_query_parameters_local_var = applied_item_tax_record_dto_collection_query_parameters_create (
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

    return applied_item_tax_record_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
