#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "required_skill_record_dto_collection_query_parameters.h"



required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters_create(
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
    required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters_local_var = malloc(sizeof(required_skill_record_dto_collection_query_parameters_t));
    if (!required_skill_record_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    required_skill_record_dto_collection_query_parameters_local_var->top = top;
    required_skill_record_dto_collection_query_parameters_local_var->skip = skip;
    required_skill_record_dto_collection_query_parameters_local_var->count = count;
    required_skill_record_dto_collection_query_parameters_local_var->filter = filter;
    required_skill_record_dto_collection_query_parameters_local_var->order_by = order_by;
    required_skill_record_dto_collection_query_parameters_local_var->search = search;
    required_skill_record_dto_collection_query_parameters_local_var->select = select;
    required_skill_record_dto_collection_query_parameters_local_var->expand = expand;
    required_skill_record_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return required_skill_record_dto_collection_query_parameters_local_var;
}


void required_skill_record_dto_collection_query_parameters_free(required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters) {
    if(NULL == required_skill_record_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (required_skill_record_dto_collection_query_parameters->filter) {
        free(required_skill_record_dto_collection_query_parameters->filter);
        required_skill_record_dto_collection_query_parameters->filter = NULL;
    }
    if (required_skill_record_dto_collection_query_parameters->order_by) {
        free(required_skill_record_dto_collection_query_parameters->order_by);
        required_skill_record_dto_collection_query_parameters->order_by = NULL;
    }
    if (required_skill_record_dto_collection_query_parameters->search) {
        free(required_skill_record_dto_collection_query_parameters->search);
        required_skill_record_dto_collection_query_parameters->search = NULL;
    }
    if (required_skill_record_dto_collection_query_parameters->select) {
        free(required_skill_record_dto_collection_query_parameters->select);
        required_skill_record_dto_collection_query_parameters->select = NULL;
    }
    if (required_skill_record_dto_collection_query_parameters->expand) {
        free(required_skill_record_dto_collection_query_parameters->expand);
        required_skill_record_dto_collection_query_parameters->expand = NULL;
    }
    free(required_skill_record_dto_collection_query_parameters);
}

cJSON *required_skill_record_dto_collection_query_parameters_convertToJSON(required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // required_skill_record_dto_collection_query_parameters->top
    if(required_skill_record_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", required_skill_record_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // required_skill_record_dto_collection_query_parameters->skip
    if(required_skill_record_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", required_skill_record_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // required_skill_record_dto_collection_query_parameters->count
    if(required_skill_record_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", required_skill_record_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // required_skill_record_dto_collection_query_parameters->filter
    if(required_skill_record_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", required_skill_record_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_collection_query_parameters->order_by
    if(required_skill_record_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", required_skill_record_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_collection_query_parameters->search
    if(required_skill_record_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", required_skill_record_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_collection_query_parameters->select
    if(required_skill_record_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", required_skill_record_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_collection_query_parameters->expand
    if(required_skill_record_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", required_skill_record_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_collection_query_parameters->is_empty
    if(required_skill_record_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", required_skill_record_dto_collection_query_parameters->is_empty) == NULL) {
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

required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters_parseFromJSON(cJSON *required_skill_record_dto_collection_query_parametersJSON){

    required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters_local_var = NULL;

    // required_skill_record_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // required_skill_record_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // required_skill_record_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // required_skill_record_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    required_skill_record_dto_collection_query_parameters_local_var = required_skill_record_dto_collection_query_parameters_create (
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

    return required_skill_record_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
