#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_appraisal_session_dto_collection_query_parameters.h"



employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters_create(
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
    employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters_local_var = malloc(sizeof(employee_appraisal_session_dto_collection_query_parameters_t));
    if (!employee_appraisal_session_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    employee_appraisal_session_dto_collection_query_parameters_local_var->top = top;
    employee_appraisal_session_dto_collection_query_parameters_local_var->skip = skip;
    employee_appraisal_session_dto_collection_query_parameters_local_var->count = count;
    employee_appraisal_session_dto_collection_query_parameters_local_var->filter = filter;
    employee_appraisal_session_dto_collection_query_parameters_local_var->order_by = order_by;
    employee_appraisal_session_dto_collection_query_parameters_local_var->search = search;
    employee_appraisal_session_dto_collection_query_parameters_local_var->select = select;
    employee_appraisal_session_dto_collection_query_parameters_local_var->expand = expand;
    employee_appraisal_session_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return employee_appraisal_session_dto_collection_query_parameters_local_var;
}


void employee_appraisal_session_dto_collection_query_parameters_free(employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters) {
    if(NULL == employee_appraisal_session_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_appraisal_session_dto_collection_query_parameters->filter) {
        free(employee_appraisal_session_dto_collection_query_parameters->filter);
        employee_appraisal_session_dto_collection_query_parameters->filter = NULL;
    }
    if (employee_appraisal_session_dto_collection_query_parameters->order_by) {
        free(employee_appraisal_session_dto_collection_query_parameters->order_by);
        employee_appraisal_session_dto_collection_query_parameters->order_by = NULL;
    }
    if (employee_appraisal_session_dto_collection_query_parameters->search) {
        free(employee_appraisal_session_dto_collection_query_parameters->search);
        employee_appraisal_session_dto_collection_query_parameters->search = NULL;
    }
    if (employee_appraisal_session_dto_collection_query_parameters->select) {
        free(employee_appraisal_session_dto_collection_query_parameters->select);
        employee_appraisal_session_dto_collection_query_parameters->select = NULL;
    }
    if (employee_appraisal_session_dto_collection_query_parameters->expand) {
        free(employee_appraisal_session_dto_collection_query_parameters->expand);
        employee_appraisal_session_dto_collection_query_parameters->expand = NULL;
    }
    free(employee_appraisal_session_dto_collection_query_parameters);
}

cJSON *employee_appraisal_session_dto_collection_query_parameters_convertToJSON(employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // employee_appraisal_session_dto_collection_query_parameters->top
    if(employee_appraisal_session_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", employee_appraisal_session_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->skip
    if(employee_appraisal_session_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", employee_appraisal_session_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->count
    if(employee_appraisal_session_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", employee_appraisal_session_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->filter
    if(employee_appraisal_session_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", employee_appraisal_session_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->order_by
    if(employee_appraisal_session_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", employee_appraisal_session_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->search
    if(employee_appraisal_session_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", employee_appraisal_session_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->select
    if(employee_appraisal_session_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", employee_appraisal_session_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->expand
    if(employee_appraisal_session_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", employee_appraisal_session_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto_collection_query_parameters->is_empty
    if(employee_appraisal_session_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", employee_appraisal_session_dto_collection_query_parameters->is_empty) == NULL) {
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

employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters_parseFromJSON(cJSON *employee_appraisal_session_dto_collection_query_parametersJSON){

    employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters_local_var = NULL;

    // employee_appraisal_session_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    employee_appraisal_session_dto_collection_query_parameters_local_var = employee_appraisal_session_dto_collection_query_parameters_create (
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

    return employee_appraisal_session_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
