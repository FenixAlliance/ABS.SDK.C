#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "voyage_port_call_dto_collection_query_parameters.h"



voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters_create(
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
    voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters_local_var = malloc(sizeof(voyage_port_call_dto_collection_query_parameters_t));
    if (!voyage_port_call_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    voyage_port_call_dto_collection_query_parameters_local_var->top = top;
    voyage_port_call_dto_collection_query_parameters_local_var->skip = skip;
    voyage_port_call_dto_collection_query_parameters_local_var->count = count;
    voyage_port_call_dto_collection_query_parameters_local_var->filter = filter;
    voyage_port_call_dto_collection_query_parameters_local_var->order_by = order_by;
    voyage_port_call_dto_collection_query_parameters_local_var->search = search;
    voyage_port_call_dto_collection_query_parameters_local_var->select = select;
    voyage_port_call_dto_collection_query_parameters_local_var->expand = expand;
    voyage_port_call_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return voyage_port_call_dto_collection_query_parameters_local_var;
}


void voyage_port_call_dto_collection_query_parameters_free(voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters) {
    if(NULL == voyage_port_call_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (voyage_port_call_dto_collection_query_parameters->filter) {
        free(voyage_port_call_dto_collection_query_parameters->filter);
        voyage_port_call_dto_collection_query_parameters->filter = NULL;
    }
    if (voyage_port_call_dto_collection_query_parameters->order_by) {
        free(voyage_port_call_dto_collection_query_parameters->order_by);
        voyage_port_call_dto_collection_query_parameters->order_by = NULL;
    }
    if (voyage_port_call_dto_collection_query_parameters->search) {
        free(voyage_port_call_dto_collection_query_parameters->search);
        voyage_port_call_dto_collection_query_parameters->search = NULL;
    }
    if (voyage_port_call_dto_collection_query_parameters->select) {
        free(voyage_port_call_dto_collection_query_parameters->select);
        voyage_port_call_dto_collection_query_parameters->select = NULL;
    }
    if (voyage_port_call_dto_collection_query_parameters->expand) {
        free(voyage_port_call_dto_collection_query_parameters->expand);
        voyage_port_call_dto_collection_query_parameters->expand = NULL;
    }
    free(voyage_port_call_dto_collection_query_parameters);
}

cJSON *voyage_port_call_dto_collection_query_parameters_convertToJSON(voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // voyage_port_call_dto_collection_query_parameters->top
    if(voyage_port_call_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", voyage_port_call_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // voyage_port_call_dto_collection_query_parameters->skip
    if(voyage_port_call_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", voyage_port_call_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // voyage_port_call_dto_collection_query_parameters->count
    if(voyage_port_call_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", voyage_port_call_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // voyage_port_call_dto_collection_query_parameters->filter
    if(voyage_port_call_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", voyage_port_call_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto_collection_query_parameters->order_by
    if(voyage_port_call_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", voyage_port_call_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto_collection_query_parameters->search
    if(voyage_port_call_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", voyage_port_call_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto_collection_query_parameters->select
    if(voyage_port_call_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", voyage_port_call_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto_collection_query_parameters->expand
    if(voyage_port_call_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", voyage_port_call_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto_collection_query_parameters->is_empty
    if(voyage_port_call_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", voyage_port_call_dto_collection_query_parameters->is_empty) == NULL) {
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

voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters_parseFromJSON(cJSON *voyage_port_call_dto_collection_query_parametersJSON){

    voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters_local_var = NULL;

    // voyage_port_call_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // voyage_port_call_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // voyage_port_call_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // voyage_port_call_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    voyage_port_call_dto_collection_query_parameters_local_var = voyage_port_call_dto_collection_query_parameters_create (
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

    return voyage_port_call_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
