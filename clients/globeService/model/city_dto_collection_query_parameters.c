#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "city_dto_collection_query_parameters.h"



city_dto_collection_query_parameters_t *city_dto_collection_query_parameters_create(
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
    city_dto_collection_query_parameters_t *city_dto_collection_query_parameters_local_var = malloc(sizeof(city_dto_collection_query_parameters_t));
    if (!city_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    city_dto_collection_query_parameters_local_var->top = top;
    city_dto_collection_query_parameters_local_var->skip = skip;
    city_dto_collection_query_parameters_local_var->count = count;
    city_dto_collection_query_parameters_local_var->filter = filter;
    city_dto_collection_query_parameters_local_var->order_by = order_by;
    city_dto_collection_query_parameters_local_var->search = search;
    city_dto_collection_query_parameters_local_var->select = select;
    city_dto_collection_query_parameters_local_var->expand = expand;
    city_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return city_dto_collection_query_parameters_local_var;
}


void city_dto_collection_query_parameters_free(city_dto_collection_query_parameters_t *city_dto_collection_query_parameters) {
    if(NULL == city_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (city_dto_collection_query_parameters->filter) {
        free(city_dto_collection_query_parameters->filter);
        city_dto_collection_query_parameters->filter = NULL;
    }
    if (city_dto_collection_query_parameters->order_by) {
        free(city_dto_collection_query_parameters->order_by);
        city_dto_collection_query_parameters->order_by = NULL;
    }
    if (city_dto_collection_query_parameters->search) {
        free(city_dto_collection_query_parameters->search);
        city_dto_collection_query_parameters->search = NULL;
    }
    if (city_dto_collection_query_parameters->select) {
        free(city_dto_collection_query_parameters->select);
        city_dto_collection_query_parameters->select = NULL;
    }
    if (city_dto_collection_query_parameters->expand) {
        free(city_dto_collection_query_parameters->expand);
        city_dto_collection_query_parameters->expand = NULL;
    }
    free(city_dto_collection_query_parameters);
}

cJSON *city_dto_collection_query_parameters_convertToJSON(city_dto_collection_query_parameters_t *city_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // city_dto_collection_query_parameters->top
    if(city_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", city_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // city_dto_collection_query_parameters->skip
    if(city_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", city_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // city_dto_collection_query_parameters->count
    if(city_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", city_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // city_dto_collection_query_parameters->filter
    if(city_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", city_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_collection_query_parameters->order_by
    if(city_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", city_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_collection_query_parameters->search
    if(city_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", city_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_collection_query_parameters->select
    if(city_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", city_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_collection_query_parameters->expand
    if(city_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", city_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_collection_query_parameters->is_empty
    if(city_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", city_dto_collection_query_parameters->is_empty) == NULL) {
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

city_dto_collection_query_parameters_t *city_dto_collection_query_parameters_parseFromJSON(cJSON *city_dto_collection_query_parametersJSON){

    city_dto_collection_query_parameters_t *city_dto_collection_query_parameters_local_var = NULL;

    // city_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // city_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // city_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // city_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // city_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // city_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // city_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // city_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // city_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(city_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    city_dto_collection_query_parameters_local_var = city_dto_collection_query_parameters_create (
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

    return city_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
