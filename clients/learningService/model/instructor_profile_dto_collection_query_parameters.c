#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instructor_profile_dto_collection_query_parameters.h"



instructor_profile_dto_collection_query_parameters_t *instructor_profile_dto_collection_query_parameters_create(
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
    instructor_profile_dto_collection_query_parameters_t *instructor_profile_dto_collection_query_parameters_local_var = malloc(sizeof(instructor_profile_dto_collection_query_parameters_t));
    if (!instructor_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    instructor_profile_dto_collection_query_parameters_local_var->top = top;
    instructor_profile_dto_collection_query_parameters_local_var->skip = skip;
    instructor_profile_dto_collection_query_parameters_local_var->count = count;
    instructor_profile_dto_collection_query_parameters_local_var->filter = filter;
    instructor_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    instructor_profile_dto_collection_query_parameters_local_var->search = search;
    instructor_profile_dto_collection_query_parameters_local_var->select = select;
    instructor_profile_dto_collection_query_parameters_local_var->expand = expand;
    instructor_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return instructor_profile_dto_collection_query_parameters_local_var;
}


void instructor_profile_dto_collection_query_parameters_free(instructor_profile_dto_collection_query_parameters_t *instructor_profile_dto_collection_query_parameters) {
    if(NULL == instructor_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (instructor_profile_dto_collection_query_parameters->filter) {
        free(instructor_profile_dto_collection_query_parameters->filter);
        instructor_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (instructor_profile_dto_collection_query_parameters->order_by) {
        free(instructor_profile_dto_collection_query_parameters->order_by);
        instructor_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (instructor_profile_dto_collection_query_parameters->search) {
        free(instructor_profile_dto_collection_query_parameters->search);
        instructor_profile_dto_collection_query_parameters->search = NULL;
    }
    if (instructor_profile_dto_collection_query_parameters->select) {
        free(instructor_profile_dto_collection_query_parameters->select);
        instructor_profile_dto_collection_query_parameters->select = NULL;
    }
    if (instructor_profile_dto_collection_query_parameters->expand) {
        free(instructor_profile_dto_collection_query_parameters->expand);
        instructor_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(instructor_profile_dto_collection_query_parameters);
}

cJSON *instructor_profile_dto_collection_query_parameters_convertToJSON(instructor_profile_dto_collection_query_parameters_t *instructor_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // instructor_profile_dto_collection_query_parameters->top
    if(instructor_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", instructor_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // instructor_profile_dto_collection_query_parameters->skip
    if(instructor_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", instructor_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // instructor_profile_dto_collection_query_parameters->count
    if(instructor_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", instructor_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // instructor_profile_dto_collection_query_parameters->filter
    if(instructor_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", instructor_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_collection_query_parameters->order_by
    if(instructor_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", instructor_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_collection_query_parameters->search
    if(instructor_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", instructor_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_collection_query_parameters->select
    if(instructor_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", instructor_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_collection_query_parameters->expand
    if(instructor_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", instructor_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_collection_query_parameters->is_empty
    if(instructor_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", instructor_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

instructor_profile_dto_collection_query_parameters_t *instructor_profile_dto_collection_query_parameters_parseFromJSON(cJSON *instructor_profile_dto_collection_query_parametersJSON){

    instructor_profile_dto_collection_query_parameters_t *instructor_profile_dto_collection_query_parameters_local_var = NULL;

    // instructor_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // instructor_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // instructor_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // instructor_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    instructor_profile_dto_collection_query_parameters_local_var = instructor_profile_dto_collection_query_parameters_create (
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

    return instructor_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
