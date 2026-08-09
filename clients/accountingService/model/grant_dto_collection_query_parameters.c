#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "grant_dto_collection_query_parameters.h"



grant_dto_collection_query_parameters_t *grant_dto_collection_query_parameters_create(
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
    grant_dto_collection_query_parameters_t *grant_dto_collection_query_parameters_local_var = malloc(sizeof(grant_dto_collection_query_parameters_t));
    if (!grant_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    grant_dto_collection_query_parameters_local_var->top = top;
    grant_dto_collection_query_parameters_local_var->skip = skip;
    grant_dto_collection_query_parameters_local_var->count = count;
    grant_dto_collection_query_parameters_local_var->filter = filter;
    grant_dto_collection_query_parameters_local_var->order_by = order_by;
    grant_dto_collection_query_parameters_local_var->search = search;
    grant_dto_collection_query_parameters_local_var->select = select;
    grant_dto_collection_query_parameters_local_var->expand = expand;
    grant_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return grant_dto_collection_query_parameters_local_var;
}


void grant_dto_collection_query_parameters_free(grant_dto_collection_query_parameters_t *grant_dto_collection_query_parameters) {
    if(NULL == grant_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (grant_dto_collection_query_parameters->filter) {
        free(grant_dto_collection_query_parameters->filter);
        grant_dto_collection_query_parameters->filter = NULL;
    }
    if (grant_dto_collection_query_parameters->order_by) {
        free(grant_dto_collection_query_parameters->order_by);
        grant_dto_collection_query_parameters->order_by = NULL;
    }
    if (grant_dto_collection_query_parameters->search) {
        free(grant_dto_collection_query_parameters->search);
        grant_dto_collection_query_parameters->search = NULL;
    }
    if (grant_dto_collection_query_parameters->select) {
        free(grant_dto_collection_query_parameters->select);
        grant_dto_collection_query_parameters->select = NULL;
    }
    if (grant_dto_collection_query_parameters->expand) {
        free(grant_dto_collection_query_parameters->expand);
        grant_dto_collection_query_parameters->expand = NULL;
    }
    free(grant_dto_collection_query_parameters);
}

cJSON *grant_dto_collection_query_parameters_convertToJSON(grant_dto_collection_query_parameters_t *grant_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // grant_dto_collection_query_parameters->top
    if(grant_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", grant_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // grant_dto_collection_query_parameters->skip
    if(grant_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", grant_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // grant_dto_collection_query_parameters->count
    if(grant_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", grant_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // grant_dto_collection_query_parameters->filter
    if(grant_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", grant_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_collection_query_parameters->order_by
    if(grant_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", grant_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_collection_query_parameters->search
    if(grant_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", grant_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_collection_query_parameters->select
    if(grant_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", grant_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_collection_query_parameters->expand
    if(grant_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", grant_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_collection_query_parameters->is_empty
    if(grant_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", grant_dto_collection_query_parameters->is_empty) == NULL) {
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

grant_dto_collection_query_parameters_t *grant_dto_collection_query_parameters_parseFromJSON(cJSON *grant_dto_collection_query_parametersJSON){

    grant_dto_collection_query_parameters_t *grant_dto_collection_query_parameters_local_var = NULL;

    // grant_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // grant_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // grant_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // grant_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // grant_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // grant_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // grant_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // grant_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // grant_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(grant_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    grant_dto_collection_query_parameters_local_var = grant_dto_collection_query_parameters_create (
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

    return grant_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
