#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_dto_collection_query_parameters.h"



timezone_dto_collection_query_parameters_t *timezone_dto_collection_query_parameters_create(
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
    timezone_dto_collection_query_parameters_t *timezone_dto_collection_query_parameters_local_var = malloc(sizeof(timezone_dto_collection_query_parameters_t));
    if (!timezone_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    timezone_dto_collection_query_parameters_local_var->top = top;
    timezone_dto_collection_query_parameters_local_var->skip = skip;
    timezone_dto_collection_query_parameters_local_var->count = count;
    timezone_dto_collection_query_parameters_local_var->filter = filter;
    timezone_dto_collection_query_parameters_local_var->order_by = order_by;
    timezone_dto_collection_query_parameters_local_var->search = search;
    timezone_dto_collection_query_parameters_local_var->select = select;
    timezone_dto_collection_query_parameters_local_var->expand = expand;
    timezone_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return timezone_dto_collection_query_parameters_local_var;
}


void timezone_dto_collection_query_parameters_free(timezone_dto_collection_query_parameters_t *timezone_dto_collection_query_parameters) {
    if(NULL == timezone_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_dto_collection_query_parameters->filter) {
        free(timezone_dto_collection_query_parameters->filter);
        timezone_dto_collection_query_parameters->filter = NULL;
    }
    if (timezone_dto_collection_query_parameters->order_by) {
        free(timezone_dto_collection_query_parameters->order_by);
        timezone_dto_collection_query_parameters->order_by = NULL;
    }
    if (timezone_dto_collection_query_parameters->search) {
        free(timezone_dto_collection_query_parameters->search);
        timezone_dto_collection_query_parameters->search = NULL;
    }
    if (timezone_dto_collection_query_parameters->select) {
        free(timezone_dto_collection_query_parameters->select);
        timezone_dto_collection_query_parameters->select = NULL;
    }
    if (timezone_dto_collection_query_parameters->expand) {
        free(timezone_dto_collection_query_parameters->expand);
        timezone_dto_collection_query_parameters->expand = NULL;
    }
    free(timezone_dto_collection_query_parameters);
}

cJSON *timezone_dto_collection_query_parameters_convertToJSON(timezone_dto_collection_query_parameters_t *timezone_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // timezone_dto_collection_query_parameters->top
    if(timezone_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", timezone_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // timezone_dto_collection_query_parameters->skip
    if(timezone_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", timezone_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // timezone_dto_collection_query_parameters->count
    if(timezone_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", timezone_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // timezone_dto_collection_query_parameters->filter
    if(timezone_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", timezone_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto_collection_query_parameters->order_by
    if(timezone_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", timezone_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto_collection_query_parameters->search
    if(timezone_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", timezone_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto_collection_query_parameters->select
    if(timezone_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", timezone_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto_collection_query_parameters->expand
    if(timezone_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", timezone_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto_collection_query_parameters->is_empty
    if(timezone_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", timezone_dto_collection_query_parameters->is_empty) == NULL) {
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

timezone_dto_collection_query_parameters_t *timezone_dto_collection_query_parameters_parseFromJSON(cJSON *timezone_dto_collection_query_parametersJSON){

    timezone_dto_collection_query_parameters_t *timezone_dto_collection_query_parameters_local_var = NULL;

    // timezone_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // timezone_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // timezone_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // timezone_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // timezone_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // timezone_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // timezone_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // timezone_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // timezone_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(timezone_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    timezone_dto_collection_query_parameters_local_var = timezone_dto_collection_query_parameters_create (
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

    return timezone_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
