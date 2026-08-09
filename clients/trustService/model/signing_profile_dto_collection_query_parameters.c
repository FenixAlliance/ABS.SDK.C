#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_profile_dto_collection_query_parameters.h"



signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters_create(
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
    signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters_local_var = malloc(sizeof(signing_profile_dto_collection_query_parameters_t));
    if (!signing_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    signing_profile_dto_collection_query_parameters_local_var->top = top;
    signing_profile_dto_collection_query_parameters_local_var->skip = skip;
    signing_profile_dto_collection_query_parameters_local_var->count = count;
    signing_profile_dto_collection_query_parameters_local_var->filter = filter;
    signing_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    signing_profile_dto_collection_query_parameters_local_var->search = search;
    signing_profile_dto_collection_query_parameters_local_var->select = select;
    signing_profile_dto_collection_query_parameters_local_var->expand = expand;
    signing_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return signing_profile_dto_collection_query_parameters_local_var;
}


void signing_profile_dto_collection_query_parameters_free(signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters) {
    if(NULL == signing_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_profile_dto_collection_query_parameters->filter) {
        free(signing_profile_dto_collection_query_parameters->filter);
        signing_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (signing_profile_dto_collection_query_parameters->order_by) {
        free(signing_profile_dto_collection_query_parameters->order_by);
        signing_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (signing_profile_dto_collection_query_parameters->search) {
        free(signing_profile_dto_collection_query_parameters->search);
        signing_profile_dto_collection_query_parameters->search = NULL;
    }
    if (signing_profile_dto_collection_query_parameters->select) {
        free(signing_profile_dto_collection_query_parameters->select);
        signing_profile_dto_collection_query_parameters->select = NULL;
    }
    if (signing_profile_dto_collection_query_parameters->expand) {
        free(signing_profile_dto_collection_query_parameters->expand);
        signing_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(signing_profile_dto_collection_query_parameters);
}

cJSON *signing_profile_dto_collection_query_parameters_convertToJSON(signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // signing_profile_dto_collection_query_parameters->top
    if(signing_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", signing_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // signing_profile_dto_collection_query_parameters->skip
    if(signing_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", signing_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // signing_profile_dto_collection_query_parameters->count
    if(signing_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", signing_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_dto_collection_query_parameters->filter
    if(signing_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", signing_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_collection_query_parameters->order_by
    if(signing_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", signing_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_collection_query_parameters->search
    if(signing_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", signing_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_collection_query_parameters->select
    if(signing_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", signing_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_collection_query_parameters->expand
    if(signing_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", signing_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_collection_query_parameters->is_empty
    if(signing_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", signing_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters_parseFromJSON(cJSON *signing_profile_dto_collection_query_parametersJSON){

    signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters_local_var = NULL;

    // signing_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // signing_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // signing_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // signing_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    signing_profile_dto_collection_query_parameters_local_var = signing_profile_dto_collection_query_parameters_create (
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

    return signing_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
