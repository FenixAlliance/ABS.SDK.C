#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_lookup_dto_collection_query_parameters.h"



ip_lookup_dto_collection_query_parameters_t *ip_lookup_dto_collection_query_parameters_create(
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
    ip_lookup_dto_collection_query_parameters_t *ip_lookup_dto_collection_query_parameters_local_var = malloc(sizeof(ip_lookup_dto_collection_query_parameters_t));
    if (!ip_lookup_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    ip_lookup_dto_collection_query_parameters_local_var->top = top;
    ip_lookup_dto_collection_query_parameters_local_var->skip = skip;
    ip_lookup_dto_collection_query_parameters_local_var->count = count;
    ip_lookup_dto_collection_query_parameters_local_var->filter = filter;
    ip_lookup_dto_collection_query_parameters_local_var->order_by = order_by;
    ip_lookup_dto_collection_query_parameters_local_var->search = search;
    ip_lookup_dto_collection_query_parameters_local_var->select = select;
    ip_lookup_dto_collection_query_parameters_local_var->expand = expand;
    ip_lookup_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return ip_lookup_dto_collection_query_parameters_local_var;
}


void ip_lookup_dto_collection_query_parameters_free(ip_lookup_dto_collection_query_parameters_t *ip_lookup_dto_collection_query_parameters) {
    if(NULL == ip_lookup_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (ip_lookup_dto_collection_query_parameters->filter) {
        free(ip_lookup_dto_collection_query_parameters->filter);
        ip_lookup_dto_collection_query_parameters->filter = NULL;
    }
    if (ip_lookup_dto_collection_query_parameters->order_by) {
        free(ip_lookup_dto_collection_query_parameters->order_by);
        ip_lookup_dto_collection_query_parameters->order_by = NULL;
    }
    if (ip_lookup_dto_collection_query_parameters->search) {
        free(ip_lookup_dto_collection_query_parameters->search);
        ip_lookup_dto_collection_query_parameters->search = NULL;
    }
    if (ip_lookup_dto_collection_query_parameters->select) {
        free(ip_lookup_dto_collection_query_parameters->select);
        ip_lookup_dto_collection_query_parameters->select = NULL;
    }
    if (ip_lookup_dto_collection_query_parameters->expand) {
        free(ip_lookup_dto_collection_query_parameters->expand);
        ip_lookup_dto_collection_query_parameters->expand = NULL;
    }
    free(ip_lookup_dto_collection_query_parameters);
}

cJSON *ip_lookup_dto_collection_query_parameters_convertToJSON(ip_lookup_dto_collection_query_parameters_t *ip_lookup_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // ip_lookup_dto_collection_query_parameters->top
    if(ip_lookup_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", ip_lookup_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // ip_lookup_dto_collection_query_parameters->skip
    if(ip_lookup_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", ip_lookup_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // ip_lookup_dto_collection_query_parameters->count
    if(ip_lookup_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", ip_lookup_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_lookup_dto_collection_query_parameters->filter
    if(ip_lookup_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", ip_lookup_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_collection_query_parameters->order_by
    if(ip_lookup_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", ip_lookup_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_collection_query_parameters->search
    if(ip_lookup_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", ip_lookup_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_collection_query_parameters->select
    if(ip_lookup_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", ip_lookup_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_collection_query_parameters->expand
    if(ip_lookup_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", ip_lookup_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_collection_query_parameters->is_empty
    if(ip_lookup_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", ip_lookup_dto_collection_query_parameters->is_empty) == NULL) {
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

ip_lookup_dto_collection_query_parameters_t *ip_lookup_dto_collection_query_parameters_parseFromJSON(cJSON *ip_lookup_dto_collection_query_parametersJSON){

    ip_lookup_dto_collection_query_parameters_t *ip_lookup_dto_collection_query_parameters_local_var = NULL;

    // ip_lookup_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // ip_lookup_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // ip_lookup_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // ip_lookup_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    ip_lookup_dto_collection_query_parameters_local_var = ip_lookup_dto_collection_query_parameters_create (
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

    return ip_lookup_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
