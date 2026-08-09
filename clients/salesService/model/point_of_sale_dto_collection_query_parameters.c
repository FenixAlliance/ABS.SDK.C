#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "point_of_sale_dto_collection_query_parameters.h"



point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters_create(
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
    point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters_local_var = malloc(sizeof(point_of_sale_dto_collection_query_parameters_t));
    if (!point_of_sale_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    point_of_sale_dto_collection_query_parameters_local_var->top = top;
    point_of_sale_dto_collection_query_parameters_local_var->skip = skip;
    point_of_sale_dto_collection_query_parameters_local_var->count = count;
    point_of_sale_dto_collection_query_parameters_local_var->filter = filter;
    point_of_sale_dto_collection_query_parameters_local_var->order_by = order_by;
    point_of_sale_dto_collection_query_parameters_local_var->search = search;
    point_of_sale_dto_collection_query_parameters_local_var->select = select;
    point_of_sale_dto_collection_query_parameters_local_var->expand = expand;
    point_of_sale_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return point_of_sale_dto_collection_query_parameters_local_var;
}


void point_of_sale_dto_collection_query_parameters_free(point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters) {
    if(NULL == point_of_sale_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (point_of_sale_dto_collection_query_parameters->filter) {
        free(point_of_sale_dto_collection_query_parameters->filter);
        point_of_sale_dto_collection_query_parameters->filter = NULL;
    }
    if (point_of_sale_dto_collection_query_parameters->order_by) {
        free(point_of_sale_dto_collection_query_parameters->order_by);
        point_of_sale_dto_collection_query_parameters->order_by = NULL;
    }
    if (point_of_sale_dto_collection_query_parameters->search) {
        free(point_of_sale_dto_collection_query_parameters->search);
        point_of_sale_dto_collection_query_parameters->search = NULL;
    }
    if (point_of_sale_dto_collection_query_parameters->select) {
        free(point_of_sale_dto_collection_query_parameters->select);
        point_of_sale_dto_collection_query_parameters->select = NULL;
    }
    if (point_of_sale_dto_collection_query_parameters->expand) {
        free(point_of_sale_dto_collection_query_parameters->expand);
        point_of_sale_dto_collection_query_parameters->expand = NULL;
    }
    free(point_of_sale_dto_collection_query_parameters);
}

cJSON *point_of_sale_dto_collection_query_parameters_convertToJSON(point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // point_of_sale_dto_collection_query_parameters->top
    if(point_of_sale_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", point_of_sale_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // point_of_sale_dto_collection_query_parameters->skip
    if(point_of_sale_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", point_of_sale_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // point_of_sale_dto_collection_query_parameters->count
    if(point_of_sale_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", point_of_sale_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // point_of_sale_dto_collection_query_parameters->filter
    if(point_of_sale_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", point_of_sale_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_collection_query_parameters->order_by
    if(point_of_sale_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", point_of_sale_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_collection_query_parameters->search
    if(point_of_sale_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", point_of_sale_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_collection_query_parameters->select
    if(point_of_sale_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", point_of_sale_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_collection_query_parameters->expand
    if(point_of_sale_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", point_of_sale_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_collection_query_parameters->is_empty
    if(point_of_sale_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", point_of_sale_dto_collection_query_parameters->is_empty) == NULL) {
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

point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters_parseFromJSON(cJSON *point_of_sale_dto_collection_query_parametersJSON){

    point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters_local_var = NULL;

    // point_of_sale_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // point_of_sale_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // point_of_sale_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // point_of_sale_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    point_of_sale_dto_collection_query_parameters_local_var = point_of_sale_dto_collection_query_parameters_create (
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

    return point_of_sale_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
