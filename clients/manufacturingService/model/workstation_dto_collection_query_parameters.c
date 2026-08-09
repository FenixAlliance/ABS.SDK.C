#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "workstation_dto_collection_query_parameters.h"



workstation_dto_collection_query_parameters_t *workstation_dto_collection_query_parameters_create(
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
    workstation_dto_collection_query_parameters_t *workstation_dto_collection_query_parameters_local_var = malloc(sizeof(workstation_dto_collection_query_parameters_t));
    if (!workstation_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    workstation_dto_collection_query_parameters_local_var->top = top;
    workstation_dto_collection_query_parameters_local_var->skip = skip;
    workstation_dto_collection_query_parameters_local_var->count = count;
    workstation_dto_collection_query_parameters_local_var->filter = filter;
    workstation_dto_collection_query_parameters_local_var->order_by = order_by;
    workstation_dto_collection_query_parameters_local_var->search = search;
    workstation_dto_collection_query_parameters_local_var->select = select;
    workstation_dto_collection_query_parameters_local_var->expand = expand;
    workstation_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return workstation_dto_collection_query_parameters_local_var;
}


void workstation_dto_collection_query_parameters_free(workstation_dto_collection_query_parameters_t *workstation_dto_collection_query_parameters) {
    if(NULL == workstation_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (workstation_dto_collection_query_parameters->filter) {
        free(workstation_dto_collection_query_parameters->filter);
        workstation_dto_collection_query_parameters->filter = NULL;
    }
    if (workstation_dto_collection_query_parameters->order_by) {
        free(workstation_dto_collection_query_parameters->order_by);
        workstation_dto_collection_query_parameters->order_by = NULL;
    }
    if (workstation_dto_collection_query_parameters->search) {
        free(workstation_dto_collection_query_parameters->search);
        workstation_dto_collection_query_parameters->search = NULL;
    }
    if (workstation_dto_collection_query_parameters->select) {
        free(workstation_dto_collection_query_parameters->select);
        workstation_dto_collection_query_parameters->select = NULL;
    }
    if (workstation_dto_collection_query_parameters->expand) {
        free(workstation_dto_collection_query_parameters->expand);
        workstation_dto_collection_query_parameters->expand = NULL;
    }
    free(workstation_dto_collection_query_parameters);
}

cJSON *workstation_dto_collection_query_parameters_convertToJSON(workstation_dto_collection_query_parameters_t *workstation_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // workstation_dto_collection_query_parameters->top
    if(workstation_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", workstation_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // workstation_dto_collection_query_parameters->skip
    if(workstation_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", workstation_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // workstation_dto_collection_query_parameters->count
    if(workstation_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", workstation_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // workstation_dto_collection_query_parameters->filter
    if(workstation_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", workstation_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto_collection_query_parameters->order_by
    if(workstation_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", workstation_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto_collection_query_parameters->search
    if(workstation_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", workstation_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto_collection_query_parameters->select
    if(workstation_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", workstation_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto_collection_query_parameters->expand
    if(workstation_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", workstation_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto_collection_query_parameters->is_empty
    if(workstation_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", workstation_dto_collection_query_parameters->is_empty) == NULL) {
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

workstation_dto_collection_query_parameters_t *workstation_dto_collection_query_parameters_parseFromJSON(cJSON *workstation_dto_collection_query_parametersJSON){

    workstation_dto_collection_query_parameters_t *workstation_dto_collection_query_parameters_local_var = NULL;

    // workstation_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // workstation_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // workstation_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // workstation_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // workstation_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // workstation_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // workstation_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // workstation_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // workstation_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(workstation_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    workstation_dto_collection_query_parameters_local_var = workstation_dto_collection_query_parameters_create (
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

    return workstation_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
