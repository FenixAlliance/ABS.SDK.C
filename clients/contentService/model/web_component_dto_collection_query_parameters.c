#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_component_dto_collection_query_parameters.h"



web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters_create(
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
    web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters_local_var = malloc(sizeof(web_component_dto_collection_query_parameters_t));
    if (!web_component_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    web_component_dto_collection_query_parameters_local_var->top = top;
    web_component_dto_collection_query_parameters_local_var->skip = skip;
    web_component_dto_collection_query_parameters_local_var->count = count;
    web_component_dto_collection_query_parameters_local_var->filter = filter;
    web_component_dto_collection_query_parameters_local_var->order_by = order_by;
    web_component_dto_collection_query_parameters_local_var->search = search;
    web_component_dto_collection_query_parameters_local_var->select = select;
    web_component_dto_collection_query_parameters_local_var->expand = expand;
    web_component_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return web_component_dto_collection_query_parameters_local_var;
}


void web_component_dto_collection_query_parameters_free(web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters) {
    if(NULL == web_component_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (web_component_dto_collection_query_parameters->filter) {
        free(web_component_dto_collection_query_parameters->filter);
        web_component_dto_collection_query_parameters->filter = NULL;
    }
    if (web_component_dto_collection_query_parameters->order_by) {
        free(web_component_dto_collection_query_parameters->order_by);
        web_component_dto_collection_query_parameters->order_by = NULL;
    }
    if (web_component_dto_collection_query_parameters->search) {
        free(web_component_dto_collection_query_parameters->search);
        web_component_dto_collection_query_parameters->search = NULL;
    }
    if (web_component_dto_collection_query_parameters->select) {
        free(web_component_dto_collection_query_parameters->select);
        web_component_dto_collection_query_parameters->select = NULL;
    }
    if (web_component_dto_collection_query_parameters->expand) {
        free(web_component_dto_collection_query_parameters->expand);
        web_component_dto_collection_query_parameters->expand = NULL;
    }
    free(web_component_dto_collection_query_parameters);
}

cJSON *web_component_dto_collection_query_parameters_convertToJSON(web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // web_component_dto_collection_query_parameters->top
    if(web_component_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", web_component_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_component_dto_collection_query_parameters->skip
    if(web_component_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", web_component_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_component_dto_collection_query_parameters->count
    if(web_component_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", web_component_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // web_component_dto_collection_query_parameters->filter
    if(web_component_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", web_component_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto_collection_query_parameters->order_by
    if(web_component_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", web_component_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto_collection_query_parameters->search
    if(web_component_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", web_component_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto_collection_query_parameters->select
    if(web_component_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", web_component_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto_collection_query_parameters->expand
    if(web_component_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", web_component_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto_collection_query_parameters->is_empty
    if(web_component_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", web_component_dto_collection_query_parameters->is_empty) == NULL) {
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

web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters_parseFromJSON(cJSON *web_component_dto_collection_query_parametersJSON){

    web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters_local_var = NULL;

    // web_component_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // web_component_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // web_component_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // web_component_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // web_component_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // web_component_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // web_component_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // web_component_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // web_component_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(web_component_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    web_component_dto_collection_query_parameters_local_var = web_component_dto_collection_query_parameters_create (
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

    return web_component_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
