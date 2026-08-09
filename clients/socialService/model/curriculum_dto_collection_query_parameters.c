#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "curriculum_dto_collection_query_parameters.h"



curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters_create(
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
    curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters_local_var = malloc(sizeof(curriculum_dto_collection_query_parameters_t));
    if (!curriculum_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    curriculum_dto_collection_query_parameters_local_var->top = top;
    curriculum_dto_collection_query_parameters_local_var->skip = skip;
    curriculum_dto_collection_query_parameters_local_var->count = count;
    curriculum_dto_collection_query_parameters_local_var->filter = filter;
    curriculum_dto_collection_query_parameters_local_var->order_by = order_by;
    curriculum_dto_collection_query_parameters_local_var->search = search;
    curriculum_dto_collection_query_parameters_local_var->select = select;
    curriculum_dto_collection_query_parameters_local_var->expand = expand;
    curriculum_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return curriculum_dto_collection_query_parameters_local_var;
}


void curriculum_dto_collection_query_parameters_free(curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters) {
    if(NULL == curriculum_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (curriculum_dto_collection_query_parameters->filter) {
        free(curriculum_dto_collection_query_parameters->filter);
        curriculum_dto_collection_query_parameters->filter = NULL;
    }
    if (curriculum_dto_collection_query_parameters->order_by) {
        free(curriculum_dto_collection_query_parameters->order_by);
        curriculum_dto_collection_query_parameters->order_by = NULL;
    }
    if (curriculum_dto_collection_query_parameters->search) {
        free(curriculum_dto_collection_query_parameters->search);
        curriculum_dto_collection_query_parameters->search = NULL;
    }
    if (curriculum_dto_collection_query_parameters->select) {
        free(curriculum_dto_collection_query_parameters->select);
        curriculum_dto_collection_query_parameters->select = NULL;
    }
    if (curriculum_dto_collection_query_parameters->expand) {
        free(curriculum_dto_collection_query_parameters->expand);
        curriculum_dto_collection_query_parameters->expand = NULL;
    }
    free(curriculum_dto_collection_query_parameters);
}

cJSON *curriculum_dto_collection_query_parameters_convertToJSON(curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // curriculum_dto_collection_query_parameters->top
    if(curriculum_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", curriculum_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // curriculum_dto_collection_query_parameters->skip
    if(curriculum_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", curriculum_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // curriculum_dto_collection_query_parameters->count
    if(curriculum_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", curriculum_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_dto_collection_query_parameters->filter
    if(curriculum_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", curriculum_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_collection_query_parameters->order_by
    if(curriculum_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", curriculum_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_collection_query_parameters->search
    if(curriculum_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", curriculum_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_collection_query_parameters->select
    if(curriculum_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", curriculum_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_collection_query_parameters->expand
    if(curriculum_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", curriculum_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_collection_query_parameters->is_empty
    if(curriculum_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", curriculum_dto_collection_query_parameters->is_empty) == NULL) {
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

curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters_parseFromJSON(cJSON *curriculum_dto_collection_query_parametersJSON){

    curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters_local_var = NULL;

    // curriculum_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // curriculum_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // curriculum_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // curriculum_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // curriculum_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // curriculum_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // curriculum_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // curriculum_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // curriculum_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(curriculum_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    curriculum_dto_collection_query_parameters_local_var = curriculum_dto_collection_query_parameters_create (
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

    return curriculum_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
