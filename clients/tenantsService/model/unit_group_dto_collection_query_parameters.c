#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_group_dto_collection_query_parameters.h"



unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters_create(
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
    unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters_local_var = malloc(sizeof(unit_group_dto_collection_query_parameters_t));
    if (!unit_group_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    unit_group_dto_collection_query_parameters_local_var->top = top;
    unit_group_dto_collection_query_parameters_local_var->skip = skip;
    unit_group_dto_collection_query_parameters_local_var->count = count;
    unit_group_dto_collection_query_parameters_local_var->filter = filter;
    unit_group_dto_collection_query_parameters_local_var->order_by = order_by;
    unit_group_dto_collection_query_parameters_local_var->search = search;
    unit_group_dto_collection_query_parameters_local_var->select = select;
    unit_group_dto_collection_query_parameters_local_var->expand = expand;
    unit_group_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return unit_group_dto_collection_query_parameters_local_var;
}


void unit_group_dto_collection_query_parameters_free(unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters) {
    if(NULL == unit_group_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_group_dto_collection_query_parameters->filter) {
        free(unit_group_dto_collection_query_parameters->filter);
        unit_group_dto_collection_query_parameters->filter = NULL;
    }
    if (unit_group_dto_collection_query_parameters->order_by) {
        free(unit_group_dto_collection_query_parameters->order_by);
        unit_group_dto_collection_query_parameters->order_by = NULL;
    }
    if (unit_group_dto_collection_query_parameters->search) {
        free(unit_group_dto_collection_query_parameters->search);
        unit_group_dto_collection_query_parameters->search = NULL;
    }
    if (unit_group_dto_collection_query_parameters->select) {
        free(unit_group_dto_collection_query_parameters->select);
        unit_group_dto_collection_query_parameters->select = NULL;
    }
    if (unit_group_dto_collection_query_parameters->expand) {
        free(unit_group_dto_collection_query_parameters->expand);
        unit_group_dto_collection_query_parameters->expand = NULL;
    }
    free(unit_group_dto_collection_query_parameters);
}

cJSON *unit_group_dto_collection_query_parameters_convertToJSON(unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // unit_group_dto_collection_query_parameters->top
    if(unit_group_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", unit_group_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // unit_group_dto_collection_query_parameters->skip
    if(unit_group_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", unit_group_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // unit_group_dto_collection_query_parameters->count
    if(unit_group_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", unit_group_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // unit_group_dto_collection_query_parameters->filter
    if(unit_group_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", unit_group_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_collection_query_parameters->order_by
    if(unit_group_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", unit_group_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_collection_query_parameters->search
    if(unit_group_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", unit_group_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_collection_query_parameters->select
    if(unit_group_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", unit_group_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_collection_query_parameters->expand
    if(unit_group_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", unit_group_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_collection_query_parameters->is_empty
    if(unit_group_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", unit_group_dto_collection_query_parameters->is_empty) == NULL) {
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

unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters_parseFromJSON(cJSON *unit_group_dto_collection_query_parametersJSON){

    unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters_local_var = NULL;

    // unit_group_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // unit_group_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // unit_group_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // unit_group_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // unit_group_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // unit_group_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // unit_group_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // unit_group_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // unit_group_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(unit_group_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    unit_group_dto_collection_query_parameters_local_var = unit_group_dto_collection_query_parameters_create (
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

    return unit_group_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
