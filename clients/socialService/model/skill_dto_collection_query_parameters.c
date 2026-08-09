#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "skill_dto_collection_query_parameters.h"



skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters_create(
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
    skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters_local_var = malloc(sizeof(skill_dto_collection_query_parameters_t));
    if (!skill_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    skill_dto_collection_query_parameters_local_var->top = top;
    skill_dto_collection_query_parameters_local_var->skip = skip;
    skill_dto_collection_query_parameters_local_var->count = count;
    skill_dto_collection_query_parameters_local_var->filter = filter;
    skill_dto_collection_query_parameters_local_var->order_by = order_by;
    skill_dto_collection_query_parameters_local_var->search = search;
    skill_dto_collection_query_parameters_local_var->select = select;
    skill_dto_collection_query_parameters_local_var->expand = expand;
    skill_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return skill_dto_collection_query_parameters_local_var;
}


void skill_dto_collection_query_parameters_free(skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters) {
    if(NULL == skill_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (skill_dto_collection_query_parameters->filter) {
        free(skill_dto_collection_query_parameters->filter);
        skill_dto_collection_query_parameters->filter = NULL;
    }
    if (skill_dto_collection_query_parameters->order_by) {
        free(skill_dto_collection_query_parameters->order_by);
        skill_dto_collection_query_parameters->order_by = NULL;
    }
    if (skill_dto_collection_query_parameters->search) {
        free(skill_dto_collection_query_parameters->search);
        skill_dto_collection_query_parameters->search = NULL;
    }
    if (skill_dto_collection_query_parameters->select) {
        free(skill_dto_collection_query_parameters->select);
        skill_dto_collection_query_parameters->select = NULL;
    }
    if (skill_dto_collection_query_parameters->expand) {
        free(skill_dto_collection_query_parameters->expand);
        skill_dto_collection_query_parameters->expand = NULL;
    }
    free(skill_dto_collection_query_parameters);
}

cJSON *skill_dto_collection_query_parameters_convertToJSON(skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // skill_dto_collection_query_parameters->top
    if(skill_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", skill_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // skill_dto_collection_query_parameters->skip
    if(skill_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", skill_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // skill_dto_collection_query_parameters->count
    if(skill_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", skill_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // skill_dto_collection_query_parameters->filter
    if(skill_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", skill_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_collection_query_parameters->order_by
    if(skill_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", skill_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_collection_query_parameters->search
    if(skill_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", skill_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_collection_query_parameters->select
    if(skill_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", skill_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_collection_query_parameters->expand
    if(skill_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", skill_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_collection_query_parameters->is_empty
    if(skill_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", skill_dto_collection_query_parameters->is_empty) == NULL) {
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

skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters_parseFromJSON(cJSON *skill_dto_collection_query_parametersJSON){

    skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters_local_var = NULL;

    // skill_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // skill_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // skill_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // skill_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // skill_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // skill_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // skill_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // skill_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // skill_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(skill_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    skill_dto_collection_query_parameters_local_var = skill_dto_collection_query_parameters_create (
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

    return skill_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
