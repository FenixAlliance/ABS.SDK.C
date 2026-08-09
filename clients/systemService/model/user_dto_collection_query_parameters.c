#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_dto_collection_query_parameters.h"



user_dto_collection_query_parameters_t *user_dto_collection_query_parameters_create(
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
    user_dto_collection_query_parameters_t *user_dto_collection_query_parameters_local_var = malloc(sizeof(user_dto_collection_query_parameters_t));
    if (!user_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    user_dto_collection_query_parameters_local_var->top = top;
    user_dto_collection_query_parameters_local_var->skip = skip;
    user_dto_collection_query_parameters_local_var->count = count;
    user_dto_collection_query_parameters_local_var->filter = filter;
    user_dto_collection_query_parameters_local_var->order_by = order_by;
    user_dto_collection_query_parameters_local_var->search = search;
    user_dto_collection_query_parameters_local_var->select = select;
    user_dto_collection_query_parameters_local_var->expand = expand;
    user_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return user_dto_collection_query_parameters_local_var;
}


void user_dto_collection_query_parameters_free(user_dto_collection_query_parameters_t *user_dto_collection_query_parameters) {
    if(NULL == user_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (user_dto_collection_query_parameters->filter) {
        free(user_dto_collection_query_parameters->filter);
        user_dto_collection_query_parameters->filter = NULL;
    }
    if (user_dto_collection_query_parameters->order_by) {
        free(user_dto_collection_query_parameters->order_by);
        user_dto_collection_query_parameters->order_by = NULL;
    }
    if (user_dto_collection_query_parameters->search) {
        free(user_dto_collection_query_parameters->search);
        user_dto_collection_query_parameters->search = NULL;
    }
    if (user_dto_collection_query_parameters->select) {
        free(user_dto_collection_query_parameters->select);
        user_dto_collection_query_parameters->select = NULL;
    }
    if (user_dto_collection_query_parameters->expand) {
        free(user_dto_collection_query_parameters->expand);
        user_dto_collection_query_parameters->expand = NULL;
    }
    free(user_dto_collection_query_parameters);
}

cJSON *user_dto_collection_query_parameters_convertToJSON(user_dto_collection_query_parameters_t *user_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // user_dto_collection_query_parameters->top
    if(user_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", user_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_dto_collection_query_parameters->skip
    if(user_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", user_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_dto_collection_query_parameters->count
    if(user_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", user_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // user_dto_collection_query_parameters->filter
    if(user_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", user_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_collection_query_parameters->order_by
    if(user_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", user_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_collection_query_parameters->search
    if(user_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", user_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_collection_query_parameters->select
    if(user_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", user_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_collection_query_parameters->expand
    if(user_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", user_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_collection_query_parameters->is_empty
    if(user_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", user_dto_collection_query_parameters->is_empty) == NULL) {
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

user_dto_collection_query_parameters_t *user_dto_collection_query_parameters_parseFromJSON(cJSON *user_dto_collection_query_parametersJSON){

    user_dto_collection_query_parameters_t *user_dto_collection_query_parameters_local_var = NULL;

    // user_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // user_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // user_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // user_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // user_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // user_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // user_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // user_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // user_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(user_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    user_dto_collection_query_parameters_local_var = user_dto_collection_query_parameters_create (
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

    return user_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
