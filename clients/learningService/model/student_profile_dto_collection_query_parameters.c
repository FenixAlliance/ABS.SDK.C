#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "student_profile_dto_collection_query_parameters.h"



student_profile_dto_collection_query_parameters_t *student_profile_dto_collection_query_parameters_create(
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
    student_profile_dto_collection_query_parameters_t *student_profile_dto_collection_query_parameters_local_var = malloc(sizeof(student_profile_dto_collection_query_parameters_t));
    if (!student_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    student_profile_dto_collection_query_parameters_local_var->top = top;
    student_profile_dto_collection_query_parameters_local_var->skip = skip;
    student_profile_dto_collection_query_parameters_local_var->count = count;
    student_profile_dto_collection_query_parameters_local_var->filter = filter;
    student_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    student_profile_dto_collection_query_parameters_local_var->search = search;
    student_profile_dto_collection_query_parameters_local_var->select = select;
    student_profile_dto_collection_query_parameters_local_var->expand = expand;
    student_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return student_profile_dto_collection_query_parameters_local_var;
}


void student_profile_dto_collection_query_parameters_free(student_profile_dto_collection_query_parameters_t *student_profile_dto_collection_query_parameters) {
    if(NULL == student_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (student_profile_dto_collection_query_parameters->filter) {
        free(student_profile_dto_collection_query_parameters->filter);
        student_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (student_profile_dto_collection_query_parameters->order_by) {
        free(student_profile_dto_collection_query_parameters->order_by);
        student_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (student_profile_dto_collection_query_parameters->search) {
        free(student_profile_dto_collection_query_parameters->search);
        student_profile_dto_collection_query_parameters->search = NULL;
    }
    if (student_profile_dto_collection_query_parameters->select) {
        free(student_profile_dto_collection_query_parameters->select);
        student_profile_dto_collection_query_parameters->select = NULL;
    }
    if (student_profile_dto_collection_query_parameters->expand) {
        free(student_profile_dto_collection_query_parameters->expand);
        student_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(student_profile_dto_collection_query_parameters);
}

cJSON *student_profile_dto_collection_query_parameters_convertToJSON(student_profile_dto_collection_query_parameters_t *student_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // student_profile_dto_collection_query_parameters->top
    if(student_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", student_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // student_profile_dto_collection_query_parameters->skip
    if(student_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", student_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // student_profile_dto_collection_query_parameters->count
    if(student_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", student_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // student_profile_dto_collection_query_parameters->filter
    if(student_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", student_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_collection_query_parameters->order_by
    if(student_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", student_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_collection_query_parameters->search
    if(student_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", student_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_collection_query_parameters->select
    if(student_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", student_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_collection_query_parameters->expand
    if(student_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", student_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_collection_query_parameters->is_empty
    if(student_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", student_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

student_profile_dto_collection_query_parameters_t *student_profile_dto_collection_query_parameters_parseFromJSON(cJSON *student_profile_dto_collection_query_parametersJSON){

    student_profile_dto_collection_query_parameters_t *student_profile_dto_collection_query_parameters_local_var = NULL;

    // student_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // student_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // student_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // student_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // student_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // student_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // student_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // student_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // student_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(student_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    student_profile_dto_collection_query_parameters_local_var = student_profile_dto_collection_query_parameters_create (
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

    return student_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
