#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_dto_collection_query_parameters.h"



salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters_create(
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
    salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters_local_var = malloc(sizeof(salary_dto_collection_query_parameters_t));
    if (!salary_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    salary_dto_collection_query_parameters_local_var->top = top;
    salary_dto_collection_query_parameters_local_var->skip = skip;
    salary_dto_collection_query_parameters_local_var->count = count;
    salary_dto_collection_query_parameters_local_var->filter = filter;
    salary_dto_collection_query_parameters_local_var->order_by = order_by;
    salary_dto_collection_query_parameters_local_var->search = search;
    salary_dto_collection_query_parameters_local_var->select = select;
    salary_dto_collection_query_parameters_local_var->expand = expand;
    salary_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return salary_dto_collection_query_parameters_local_var;
}


void salary_dto_collection_query_parameters_free(salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters) {
    if(NULL == salary_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (salary_dto_collection_query_parameters->filter) {
        free(salary_dto_collection_query_parameters->filter);
        salary_dto_collection_query_parameters->filter = NULL;
    }
    if (salary_dto_collection_query_parameters->order_by) {
        free(salary_dto_collection_query_parameters->order_by);
        salary_dto_collection_query_parameters->order_by = NULL;
    }
    if (salary_dto_collection_query_parameters->search) {
        free(salary_dto_collection_query_parameters->search);
        salary_dto_collection_query_parameters->search = NULL;
    }
    if (salary_dto_collection_query_parameters->select) {
        free(salary_dto_collection_query_parameters->select);
        salary_dto_collection_query_parameters->select = NULL;
    }
    if (salary_dto_collection_query_parameters->expand) {
        free(salary_dto_collection_query_parameters->expand);
        salary_dto_collection_query_parameters->expand = NULL;
    }
    free(salary_dto_collection_query_parameters);
}

cJSON *salary_dto_collection_query_parameters_convertToJSON(salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // salary_dto_collection_query_parameters->top
    if(salary_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", salary_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // salary_dto_collection_query_parameters->skip
    if(salary_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", salary_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // salary_dto_collection_query_parameters->count
    if(salary_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", salary_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // salary_dto_collection_query_parameters->filter
    if(salary_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", salary_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_collection_query_parameters->order_by
    if(salary_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", salary_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_collection_query_parameters->search
    if(salary_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", salary_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_collection_query_parameters->select
    if(salary_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", salary_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_collection_query_parameters->expand
    if(salary_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", salary_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_collection_query_parameters->is_empty
    if(salary_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", salary_dto_collection_query_parameters->is_empty) == NULL) {
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

salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters_parseFromJSON(cJSON *salary_dto_collection_query_parametersJSON){

    salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters_local_var = NULL;

    // salary_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // salary_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // salary_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // salary_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // salary_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // salary_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // salary_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // salary_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // salary_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(salary_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    salary_dto_collection_query_parameters_local_var = salary_dto_collection_query_parameters_create (
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

    return salary_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
