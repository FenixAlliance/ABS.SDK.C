#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_category_dto_collection_query_parameters.h"



course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters_create(
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
    course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters_local_var = malloc(sizeof(course_category_dto_collection_query_parameters_t));
    if (!course_category_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    course_category_dto_collection_query_parameters_local_var->top = top;
    course_category_dto_collection_query_parameters_local_var->skip = skip;
    course_category_dto_collection_query_parameters_local_var->count = count;
    course_category_dto_collection_query_parameters_local_var->filter = filter;
    course_category_dto_collection_query_parameters_local_var->order_by = order_by;
    course_category_dto_collection_query_parameters_local_var->search = search;
    course_category_dto_collection_query_parameters_local_var->select = select;
    course_category_dto_collection_query_parameters_local_var->expand = expand;
    course_category_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return course_category_dto_collection_query_parameters_local_var;
}


void course_category_dto_collection_query_parameters_free(course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters) {
    if(NULL == course_category_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (course_category_dto_collection_query_parameters->filter) {
        free(course_category_dto_collection_query_parameters->filter);
        course_category_dto_collection_query_parameters->filter = NULL;
    }
    if (course_category_dto_collection_query_parameters->order_by) {
        free(course_category_dto_collection_query_parameters->order_by);
        course_category_dto_collection_query_parameters->order_by = NULL;
    }
    if (course_category_dto_collection_query_parameters->search) {
        free(course_category_dto_collection_query_parameters->search);
        course_category_dto_collection_query_parameters->search = NULL;
    }
    if (course_category_dto_collection_query_parameters->select) {
        free(course_category_dto_collection_query_parameters->select);
        course_category_dto_collection_query_parameters->select = NULL;
    }
    if (course_category_dto_collection_query_parameters->expand) {
        free(course_category_dto_collection_query_parameters->expand);
        course_category_dto_collection_query_parameters->expand = NULL;
    }
    free(course_category_dto_collection_query_parameters);
}

cJSON *course_category_dto_collection_query_parameters_convertToJSON(course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // course_category_dto_collection_query_parameters->top
    if(course_category_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", course_category_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_category_dto_collection_query_parameters->skip
    if(course_category_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", course_category_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_category_dto_collection_query_parameters->count
    if(course_category_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", course_category_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // course_category_dto_collection_query_parameters->filter
    if(course_category_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", course_category_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // course_category_dto_collection_query_parameters->order_by
    if(course_category_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", course_category_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // course_category_dto_collection_query_parameters->search
    if(course_category_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", course_category_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // course_category_dto_collection_query_parameters->select
    if(course_category_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", course_category_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // course_category_dto_collection_query_parameters->expand
    if(course_category_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", course_category_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // course_category_dto_collection_query_parameters->is_empty
    if(course_category_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", course_category_dto_collection_query_parameters->is_empty) == NULL) {
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

course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters_parseFromJSON(cJSON *course_category_dto_collection_query_parametersJSON){

    course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters_local_var = NULL;

    // course_category_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // course_category_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // course_category_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // course_category_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // course_category_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // course_category_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // course_category_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // course_category_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // course_category_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(course_category_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    course_category_dto_collection_query_parameters_local_var = course_category_dto_collection_query_parameters_create (
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

    return course_category_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
