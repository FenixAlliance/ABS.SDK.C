#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "location_dto_collection_query_parameters.h"



location_dto_collection_query_parameters_t *location_dto_collection_query_parameters_create(
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
    location_dto_collection_query_parameters_t *location_dto_collection_query_parameters_local_var = malloc(sizeof(location_dto_collection_query_parameters_t));
    if (!location_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    location_dto_collection_query_parameters_local_var->top = top;
    location_dto_collection_query_parameters_local_var->skip = skip;
    location_dto_collection_query_parameters_local_var->count = count;
    location_dto_collection_query_parameters_local_var->filter = filter;
    location_dto_collection_query_parameters_local_var->order_by = order_by;
    location_dto_collection_query_parameters_local_var->search = search;
    location_dto_collection_query_parameters_local_var->select = select;
    location_dto_collection_query_parameters_local_var->expand = expand;
    location_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return location_dto_collection_query_parameters_local_var;
}


void location_dto_collection_query_parameters_free(location_dto_collection_query_parameters_t *location_dto_collection_query_parameters) {
    if(NULL == location_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (location_dto_collection_query_parameters->filter) {
        free(location_dto_collection_query_parameters->filter);
        location_dto_collection_query_parameters->filter = NULL;
    }
    if (location_dto_collection_query_parameters->order_by) {
        free(location_dto_collection_query_parameters->order_by);
        location_dto_collection_query_parameters->order_by = NULL;
    }
    if (location_dto_collection_query_parameters->search) {
        free(location_dto_collection_query_parameters->search);
        location_dto_collection_query_parameters->search = NULL;
    }
    if (location_dto_collection_query_parameters->select) {
        free(location_dto_collection_query_parameters->select);
        location_dto_collection_query_parameters->select = NULL;
    }
    if (location_dto_collection_query_parameters->expand) {
        free(location_dto_collection_query_parameters->expand);
        location_dto_collection_query_parameters->expand = NULL;
    }
    free(location_dto_collection_query_parameters);
}

cJSON *location_dto_collection_query_parameters_convertToJSON(location_dto_collection_query_parameters_t *location_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // location_dto_collection_query_parameters->top
    if(location_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", location_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // location_dto_collection_query_parameters->skip
    if(location_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", location_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // location_dto_collection_query_parameters->count
    if(location_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", location_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // location_dto_collection_query_parameters->filter
    if(location_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", location_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // location_dto_collection_query_parameters->order_by
    if(location_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", location_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // location_dto_collection_query_parameters->search
    if(location_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", location_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // location_dto_collection_query_parameters->select
    if(location_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", location_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // location_dto_collection_query_parameters->expand
    if(location_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", location_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // location_dto_collection_query_parameters->is_empty
    if(location_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", location_dto_collection_query_parameters->is_empty) == NULL) {
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

location_dto_collection_query_parameters_t *location_dto_collection_query_parameters_parseFromJSON(cJSON *location_dto_collection_query_parametersJSON){

    location_dto_collection_query_parameters_t *location_dto_collection_query_parameters_local_var = NULL;

    // location_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // location_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // location_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // location_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // location_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // location_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // location_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // location_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // location_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(location_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    location_dto_collection_query_parameters_local_var = location_dto_collection_query_parameters_create (
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

    return location_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
