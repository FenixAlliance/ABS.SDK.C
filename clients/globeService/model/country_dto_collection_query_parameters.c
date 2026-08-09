#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_dto_collection_query_parameters.h"



country_dto_collection_query_parameters_t *country_dto_collection_query_parameters_create(
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
    country_dto_collection_query_parameters_t *country_dto_collection_query_parameters_local_var = malloc(sizeof(country_dto_collection_query_parameters_t));
    if (!country_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    country_dto_collection_query_parameters_local_var->top = top;
    country_dto_collection_query_parameters_local_var->skip = skip;
    country_dto_collection_query_parameters_local_var->count = count;
    country_dto_collection_query_parameters_local_var->filter = filter;
    country_dto_collection_query_parameters_local_var->order_by = order_by;
    country_dto_collection_query_parameters_local_var->search = search;
    country_dto_collection_query_parameters_local_var->select = select;
    country_dto_collection_query_parameters_local_var->expand = expand;
    country_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return country_dto_collection_query_parameters_local_var;
}


void country_dto_collection_query_parameters_free(country_dto_collection_query_parameters_t *country_dto_collection_query_parameters) {
    if(NULL == country_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (country_dto_collection_query_parameters->filter) {
        free(country_dto_collection_query_parameters->filter);
        country_dto_collection_query_parameters->filter = NULL;
    }
    if (country_dto_collection_query_parameters->order_by) {
        free(country_dto_collection_query_parameters->order_by);
        country_dto_collection_query_parameters->order_by = NULL;
    }
    if (country_dto_collection_query_parameters->search) {
        free(country_dto_collection_query_parameters->search);
        country_dto_collection_query_parameters->search = NULL;
    }
    if (country_dto_collection_query_parameters->select) {
        free(country_dto_collection_query_parameters->select);
        country_dto_collection_query_parameters->select = NULL;
    }
    if (country_dto_collection_query_parameters->expand) {
        free(country_dto_collection_query_parameters->expand);
        country_dto_collection_query_parameters->expand = NULL;
    }
    free(country_dto_collection_query_parameters);
}

cJSON *country_dto_collection_query_parameters_convertToJSON(country_dto_collection_query_parameters_t *country_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // country_dto_collection_query_parameters->top
    if(country_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", country_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // country_dto_collection_query_parameters->skip
    if(country_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", country_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // country_dto_collection_query_parameters->count
    if(country_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", country_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // country_dto_collection_query_parameters->filter
    if(country_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", country_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_collection_query_parameters->order_by
    if(country_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", country_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_collection_query_parameters->search
    if(country_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", country_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_collection_query_parameters->select
    if(country_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", country_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_collection_query_parameters->expand
    if(country_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", country_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_collection_query_parameters->is_empty
    if(country_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", country_dto_collection_query_parameters->is_empty) == NULL) {
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

country_dto_collection_query_parameters_t *country_dto_collection_query_parameters_parseFromJSON(cJSON *country_dto_collection_query_parametersJSON){

    country_dto_collection_query_parameters_t *country_dto_collection_query_parameters_local_var = NULL;

    // country_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // country_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // country_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // country_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // country_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // country_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // country_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // country_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // country_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(country_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    country_dto_collection_query_parameters_local_var = country_dto_collection_query_parameters_create (
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

    return country_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
