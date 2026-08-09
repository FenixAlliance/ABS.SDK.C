#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notification_dto_collection_query_parameters.h"



notification_dto_collection_query_parameters_t *notification_dto_collection_query_parameters_create(
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
    notification_dto_collection_query_parameters_t *notification_dto_collection_query_parameters_local_var = malloc(sizeof(notification_dto_collection_query_parameters_t));
    if (!notification_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    notification_dto_collection_query_parameters_local_var->top = top;
    notification_dto_collection_query_parameters_local_var->skip = skip;
    notification_dto_collection_query_parameters_local_var->count = count;
    notification_dto_collection_query_parameters_local_var->filter = filter;
    notification_dto_collection_query_parameters_local_var->order_by = order_by;
    notification_dto_collection_query_parameters_local_var->search = search;
    notification_dto_collection_query_parameters_local_var->select = select;
    notification_dto_collection_query_parameters_local_var->expand = expand;
    notification_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return notification_dto_collection_query_parameters_local_var;
}


void notification_dto_collection_query_parameters_free(notification_dto_collection_query_parameters_t *notification_dto_collection_query_parameters) {
    if(NULL == notification_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (notification_dto_collection_query_parameters->filter) {
        free(notification_dto_collection_query_parameters->filter);
        notification_dto_collection_query_parameters->filter = NULL;
    }
    if (notification_dto_collection_query_parameters->order_by) {
        free(notification_dto_collection_query_parameters->order_by);
        notification_dto_collection_query_parameters->order_by = NULL;
    }
    if (notification_dto_collection_query_parameters->search) {
        free(notification_dto_collection_query_parameters->search);
        notification_dto_collection_query_parameters->search = NULL;
    }
    if (notification_dto_collection_query_parameters->select) {
        free(notification_dto_collection_query_parameters->select);
        notification_dto_collection_query_parameters->select = NULL;
    }
    if (notification_dto_collection_query_parameters->expand) {
        free(notification_dto_collection_query_parameters->expand);
        notification_dto_collection_query_parameters->expand = NULL;
    }
    free(notification_dto_collection_query_parameters);
}

cJSON *notification_dto_collection_query_parameters_convertToJSON(notification_dto_collection_query_parameters_t *notification_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // notification_dto_collection_query_parameters->top
    if(notification_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", notification_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // notification_dto_collection_query_parameters->skip
    if(notification_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", notification_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // notification_dto_collection_query_parameters->count
    if(notification_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", notification_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // notification_dto_collection_query_parameters->filter
    if(notification_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", notification_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_collection_query_parameters->order_by
    if(notification_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", notification_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_collection_query_parameters->search
    if(notification_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", notification_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_collection_query_parameters->select
    if(notification_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", notification_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_collection_query_parameters->expand
    if(notification_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", notification_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_collection_query_parameters->is_empty
    if(notification_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", notification_dto_collection_query_parameters->is_empty) == NULL) {
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

notification_dto_collection_query_parameters_t *notification_dto_collection_query_parameters_parseFromJSON(cJSON *notification_dto_collection_query_parametersJSON){

    notification_dto_collection_query_parameters_t *notification_dto_collection_query_parameters_local_var = NULL;

    // notification_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // notification_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // notification_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // notification_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // notification_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // notification_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // notification_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // notification_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // notification_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(notification_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    notification_dto_collection_query_parameters_local_var = notification_dto_collection_query_parameters_create (
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

    return notification_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
