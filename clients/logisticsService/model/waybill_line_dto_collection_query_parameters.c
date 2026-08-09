#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "waybill_line_dto_collection_query_parameters.h"



waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters_create(
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
    waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters_local_var = malloc(sizeof(waybill_line_dto_collection_query_parameters_t));
    if (!waybill_line_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    waybill_line_dto_collection_query_parameters_local_var->top = top;
    waybill_line_dto_collection_query_parameters_local_var->skip = skip;
    waybill_line_dto_collection_query_parameters_local_var->count = count;
    waybill_line_dto_collection_query_parameters_local_var->filter = filter;
    waybill_line_dto_collection_query_parameters_local_var->order_by = order_by;
    waybill_line_dto_collection_query_parameters_local_var->search = search;
    waybill_line_dto_collection_query_parameters_local_var->select = select;
    waybill_line_dto_collection_query_parameters_local_var->expand = expand;
    waybill_line_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return waybill_line_dto_collection_query_parameters_local_var;
}


void waybill_line_dto_collection_query_parameters_free(waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters) {
    if(NULL == waybill_line_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (waybill_line_dto_collection_query_parameters->filter) {
        free(waybill_line_dto_collection_query_parameters->filter);
        waybill_line_dto_collection_query_parameters->filter = NULL;
    }
    if (waybill_line_dto_collection_query_parameters->order_by) {
        free(waybill_line_dto_collection_query_parameters->order_by);
        waybill_line_dto_collection_query_parameters->order_by = NULL;
    }
    if (waybill_line_dto_collection_query_parameters->search) {
        free(waybill_line_dto_collection_query_parameters->search);
        waybill_line_dto_collection_query_parameters->search = NULL;
    }
    if (waybill_line_dto_collection_query_parameters->select) {
        free(waybill_line_dto_collection_query_parameters->select);
        waybill_line_dto_collection_query_parameters->select = NULL;
    }
    if (waybill_line_dto_collection_query_parameters->expand) {
        free(waybill_line_dto_collection_query_parameters->expand);
        waybill_line_dto_collection_query_parameters->expand = NULL;
    }
    free(waybill_line_dto_collection_query_parameters);
}

cJSON *waybill_line_dto_collection_query_parameters_convertToJSON(waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // waybill_line_dto_collection_query_parameters->top
    if(waybill_line_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", waybill_line_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_dto_collection_query_parameters->skip
    if(waybill_line_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", waybill_line_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_dto_collection_query_parameters->count
    if(waybill_line_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", waybill_line_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // waybill_line_dto_collection_query_parameters->filter
    if(waybill_line_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", waybill_line_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_dto_collection_query_parameters->order_by
    if(waybill_line_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", waybill_line_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_dto_collection_query_parameters->search
    if(waybill_line_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", waybill_line_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_dto_collection_query_parameters->select
    if(waybill_line_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", waybill_line_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_dto_collection_query_parameters->expand
    if(waybill_line_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", waybill_line_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_dto_collection_query_parameters->is_empty
    if(waybill_line_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", waybill_line_dto_collection_query_parameters->is_empty) == NULL) {
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

waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters_parseFromJSON(cJSON *waybill_line_dto_collection_query_parametersJSON){

    waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters_local_var = NULL;

    // waybill_line_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // waybill_line_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // waybill_line_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // waybill_line_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // waybill_line_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // waybill_line_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // waybill_line_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(waybill_line_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    waybill_line_dto_collection_query_parameters_local_var = waybill_line_dto_collection_query_parameters_create (
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

    return waybill_line_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
