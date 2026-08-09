#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_queue_dto_collection_query_parameters.h"



service_queue_dto_collection_query_parameters_t *service_queue_dto_collection_query_parameters_create(
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
    service_queue_dto_collection_query_parameters_t *service_queue_dto_collection_query_parameters_local_var = malloc(sizeof(service_queue_dto_collection_query_parameters_t));
    if (!service_queue_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    service_queue_dto_collection_query_parameters_local_var->top = top;
    service_queue_dto_collection_query_parameters_local_var->skip = skip;
    service_queue_dto_collection_query_parameters_local_var->count = count;
    service_queue_dto_collection_query_parameters_local_var->filter = filter;
    service_queue_dto_collection_query_parameters_local_var->order_by = order_by;
    service_queue_dto_collection_query_parameters_local_var->search = search;
    service_queue_dto_collection_query_parameters_local_var->select = select;
    service_queue_dto_collection_query_parameters_local_var->expand = expand;
    service_queue_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return service_queue_dto_collection_query_parameters_local_var;
}


void service_queue_dto_collection_query_parameters_free(service_queue_dto_collection_query_parameters_t *service_queue_dto_collection_query_parameters) {
    if(NULL == service_queue_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (service_queue_dto_collection_query_parameters->filter) {
        free(service_queue_dto_collection_query_parameters->filter);
        service_queue_dto_collection_query_parameters->filter = NULL;
    }
    if (service_queue_dto_collection_query_parameters->order_by) {
        free(service_queue_dto_collection_query_parameters->order_by);
        service_queue_dto_collection_query_parameters->order_by = NULL;
    }
    if (service_queue_dto_collection_query_parameters->search) {
        free(service_queue_dto_collection_query_parameters->search);
        service_queue_dto_collection_query_parameters->search = NULL;
    }
    if (service_queue_dto_collection_query_parameters->select) {
        free(service_queue_dto_collection_query_parameters->select);
        service_queue_dto_collection_query_parameters->select = NULL;
    }
    if (service_queue_dto_collection_query_parameters->expand) {
        free(service_queue_dto_collection_query_parameters->expand);
        service_queue_dto_collection_query_parameters->expand = NULL;
    }
    free(service_queue_dto_collection_query_parameters);
}

cJSON *service_queue_dto_collection_query_parameters_convertToJSON(service_queue_dto_collection_query_parameters_t *service_queue_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // service_queue_dto_collection_query_parameters->top
    if(service_queue_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", service_queue_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // service_queue_dto_collection_query_parameters->skip
    if(service_queue_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", service_queue_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // service_queue_dto_collection_query_parameters->count
    if(service_queue_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", service_queue_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // service_queue_dto_collection_query_parameters->filter
    if(service_queue_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", service_queue_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // service_queue_dto_collection_query_parameters->order_by
    if(service_queue_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", service_queue_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // service_queue_dto_collection_query_parameters->search
    if(service_queue_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", service_queue_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // service_queue_dto_collection_query_parameters->select
    if(service_queue_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", service_queue_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // service_queue_dto_collection_query_parameters->expand
    if(service_queue_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", service_queue_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // service_queue_dto_collection_query_parameters->is_empty
    if(service_queue_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", service_queue_dto_collection_query_parameters->is_empty) == NULL) {
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

service_queue_dto_collection_query_parameters_t *service_queue_dto_collection_query_parameters_parseFromJSON(cJSON *service_queue_dto_collection_query_parametersJSON){

    service_queue_dto_collection_query_parameters_t *service_queue_dto_collection_query_parameters_local_var = NULL;

    // service_queue_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // service_queue_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // service_queue_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // service_queue_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // service_queue_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // service_queue_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // service_queue_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // service_queue_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // service_queue_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(service_queue_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    service_queue_dto_collection_query_parameters_local_var = service_queue_dto_collection_query_parameters_create (
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

    return service_queue_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
