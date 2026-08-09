#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "localization_string_dto_collection_query_parameters.h"



localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters_create(
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
    localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters_local_var = malloc(sizeof(localization_string_dto_collection_query_parameters_t));
    if (!localization_string_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    localization_string_dto_collection_query_parameters_local_var->top = top;
    localization_string_dto_collection_query_parameters_local_var->skip = skip;
    localization_string_dto_collection_query_parameters_local_var->count = count;
    localization_string_dto_collection_query_parameters_local_var->filter = filter;
    localization_string_dto_collection_query_parameters_local_var->order_by = order_by;
    localization_string_dto_collection_query_parameters_local_var->search = search;
    localization_string_dto_collection_query_parameters_local_var->select = select;
    localization_string_dto_collection_query_parameters_local_var->expand = expand;
    localization_string_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return localization_string_dto_collection_query_parameters_local_var;
}


void localization_string_dto_collection_query_parameters_free(localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters) {
    if(NULL == localization_string_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (localization_string_dto_collection_query_parameters->filter) {
        free(localization_string_dto_collection_query_parameters->filter);
        localization_string_dto_collection_query_parameters->filter = NULL;
    }
    if (localization_string_dto_collection_query_parameters->order_by) {
        free(localization_string_dto_collection_query_parameters->order_by);
        localization_string_dto_collection_query_parameters->order_by = NULL;
    }
    if (localization_string_dto_collection_query_parameters->search) {
        free(localization_string_dto_collection_query_parameters->search);
        localization_string_dto_collection_query_parameters->search = NULL;
    }
    if (localization_string_dto_collection_query_parameters->select) {
        free(localization_string_dto_collection_query_parameters->select);
        localization_string_dto_collection_query_parameters->select = NULL;
    }
    if (localization_string_dto_collection_query_parameters->expand) {
        free(localization_string_dto_collection_query_parameters->expand);
        localization_string_dto_collection_query_parameters->expand = NULL;
    }
    free(localization_string_dto_collection_query_parameters);
}

cJSON *localization_string_dto_collection_query_parameters_convertToJSON(localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // localization_string_dto_collection_query_parameters->top
    if(localization_string_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", localization_string_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // localization_string_dto_collection_query_parameters->skip
    if(localization_string_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", localization_string_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // localization_string_dto_collection_query_parameters->count
    if(localization_string_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", localization_string_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // localization_string_dto_collection_query_parameters->filter
    if(localization_string_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", localization_string_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_collection_query_parameters->order_by
    if(localization_string_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", localization_string_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_collection_query_parameters->search
    if(localization_string_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", localization_string_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_collection_query_parameters->select
    if(localization_string_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", localization_string_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_collection_query_parameters->expand
    if(localization_string_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", localization_string_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_collection_query_parameters->is_empty
    if(localization_string_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", localization_string_dto_collection_query_parameters->is_empty) == NULL) {
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

localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters_parseFromJSON(cJSON *localization_string_dto_collection_query_parametersJSON){

    localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters_local_var = NULL;

    // localization_string_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // localization_string_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // localization_string_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // localization_string_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // localization_string_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // localization_string_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // localization_string_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // localization_string_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // localization_string_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(localization_string_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    localization_string_dto_collection_query_parameters_local_var = localization_string_dto_collection_query_parameters_create (
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

    return localization_string_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
