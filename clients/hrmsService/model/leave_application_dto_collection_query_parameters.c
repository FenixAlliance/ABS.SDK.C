#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_application_dto_collection_query_parameters.h"



leave_application_dto_collection_query_parameters_t *leave_application_dto_collection_query_parameters_create(
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
    leave_application_dto_collection_query_parameters_t *leave_application_dto_collection_query_parameters_local_var = malloc(sizeof(leave_application_dto_collection_query_parameters_t));
    if (!leave_application_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    leave_application_dto_collection_query_parameters_local_var->top = top;
    leave_application_dto_collection_query_parameters_local_var->skip = skip;
    leave_application_dto_collection_query_parameters_local_var->count = count;
    leave_application_dto_collection_query_parameters_local_var->filter = filter;
    leave_application_dto_collection_query_parameters_local_var->order_by = order_by;
    leave_application_dto_collection_query_parameters_local_var->search = search;
    leave_application_dto_collection_query_parameters_local_var->select = select;
    leave_application_dto_collection_query_parameters_local_var->expand = expand;
    leave_application_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return leave_application_dto_collection_query_parameters_local_var;
}


void leave_application_dto_collection_query_parameters_free(leave_application_dto_collection_query_parameters_t *leave_application_dto_collection_query_parameters) {
    if(NULL == leave_application_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_application_dto_collection_query_parameters->filter) {
        free(leave_application_dto_collection_query_parameters->filter);
        leave_application_dto_collection_query_parameters->filter = NULL;
    }
    if (leave_application_dto_collection_query_parameters->order_by) {
        free(leave_application_dto_collection_query_parameters->order_by);
        leave_application_dto_collection_query_parameters->order_by = NULL;
    }
    if (leave_application_dto_collection_query_parameters->search) {
        free(leave_application_dto_collection_query_parameters->search);
        leave_application_dto_collection_query_parameters->search = NULL;
    }
    if (leave_application_dto_collection_query_parameters->select) {
        free(leave_application_dto_collection_query_parameters->select);
        leave_application_dto_collection_query_parameters->select = NULL;
    }
    if (leave_application_dto_collection_query_parameters->expand) {
        free(leave_application_dto_collection_query_parameters->expand);
        leave_application_dto_collection_query_parameters->expand = NULL;
    }
    free(leave_application_dto_collection_query_parameters);
}

cJSON *leave_application_dto_collection_query_parameters_convertToJSON(leave_application_dto_collection_query_parameters_t *leave_application_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // leave_application_dto_collection_query_parameters->top
    if(leave_application_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", leave_application_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // leave_application_dto_collection_query_parameters->skip
    if(leave_application_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", leave_application_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // leave_application_dto_collection_query_parameters->count
    if(leave_application_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", leave_application_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_dto_collection_query_parameters->filter
    if(leave_application_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", leave_application_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_collection_query_parameters->order_by
    if(leave_application_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", leave_application_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_collection_query_parameters->search
    if(leave_application_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", leave_application_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_collection_query_parameters->select
    if(leave_application_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", leave_application_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_collection_query_parameters->expand
    if(leave_application_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", leave_application_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_collection_query_parameters->is_empty
    if(leave_application_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", leave_application_dto_collection_query_parameters->is_empty) == NULL) {
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

leave_application_dto_collection_query_parameters_t *leave_application_dto_collection_query_parameters_parseFromJSON(cJSON *leave_application_dto_collection_query_parametersJSON){

    leave_application_dto_collection_query_parameters_t *leave_application_dto_collection_query_parameters_local_var = NULL;

    // leave_application_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // leave_application_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // leave_application_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // leave_application_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // leave_application_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // leave_application_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // leave_application_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // leave_application_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // leave_application_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(leave_application_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    leave_application_dto_collection_query_parameters_local_var = leave_application_dto_collection_query_parameters_create (
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

    return leave_application_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
