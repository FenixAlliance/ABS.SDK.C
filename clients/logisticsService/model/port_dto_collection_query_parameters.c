#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "port_dto_collection_query_parameters.h"



port_dto_collection_query_parameters_t *port_dto_collection_query_parameters_create(
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
    port_dto_collection_query_parameters_t *port_dto_collection_query_parameters_local_var = malloc(sizeof(port_dto_collection_query_parameters_t));
    if (!port_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    port_dto_collection_query_parameters_local_var->top = top;
    port_dto_collection_query_parameters_local_var->skip = skip;
    port_dto_collection_query_parameters_local_var->count = count;
    port_dto_collection_query_parameters_local_var->filter = filter;
    port_dto_collection_query_parameters_local_var->order_by = order_by;
    port_dto_collection_query_parameters_local_var->search = search;
    port_dto_collection_query_parameters_local_var->select = select;
    port_dto_collection_query_parameters_local_var->expand = expand;
    port_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return port_dto_collection_query_parameters_local_var;
}


void port_dto_collection_query_parameters_free(port_dto_collection_query_parameters_t *port_dto_collection_query_parameters) {
    if(NULL == port_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (port_dto_collection_query_parameters->filter) {
        free(port_dto_collection_query_parameters->filter);
        port_dto_collection_query_parameters->filter = NULL;
    }
    if (port_dto_collection_query_parameters->order_by) {
        free(port_dto_collection_query_parameters->order_by);
        port_dto_collection_query_parameters->order_by = NULL;
    }
    if (port_dto_collection_query_parameters->search) {
        free(port_dto_collection_query_parameters->search);
        port_dto_collection_query_parameters->search = NULL;
    }
    if (port_dto_collection_query_parameters->select) {
        free(port_dto_collection_query_parameters->select);
        port_dto_collection_query_parameters->select = NULL;
    }
    if (port_dto_collection_query_parameters->expand) {
        free(port_dto_collection_query_parameters->expand);
        port_dto_collection_query_parameters->expand = NULL;
    }
    free(port_dto_collection_query_parameters);
}

cJSON *port_dto_collection_query_parameters_convertToJSON(port_dto_collection_query_parameters_t *port_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // port_dto_collection_query_parameters->top
    if(port_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", port_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // port_dto_collection_query_parameters->skip
    if(port_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", port_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // port_dto_collection_query_parameters->count
    if(port_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", port_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // port_dto_collection_query_parameters->filter
    if(port_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", port_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_collection_query_parameters->order_by
    if(port_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", port_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_collection_query_parameters->search
    if(port_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", port_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_collection_query_parameters->select
    if(port_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", port_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_collection_query_parameters->expand
    if(port_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", port_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_collection_query_parameters->is_empty
    if(port_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", port_dto_collection_query_parameters->is_empty) == NULL) {
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

port_dto_collection_query_parameters_t *port_dto_collection_query_parameters_parseFromJSON(cJSON *port_dto_collection_query_parametersJSON){

    port_dto_collection_query_parameters_t *port_dto_collection_query_parameters_local_var = NULL;

    // port_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // port_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // port_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // port_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // port_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // port_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // port_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // port_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // port_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(port_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    port_dto_collection_query_parameters_local_var = port_dto_collection_query_parameters_create (
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

    return port_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
