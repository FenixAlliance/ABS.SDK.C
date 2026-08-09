#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_post_dto_collection_query_parameters.h"



blog_post_dto_collection_query_parameters_t *blog_post_dto_collection_query_parameters_create(
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
    blog_post_dto_collection_query_parameters_t *blog_post_dto_collection_query_parameters_local_var = malloc(sizeof(blog_post_dto_collection_query_parameters_t));
    if (!blog_post_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    blog_post_dto_collection_query_parameters_local_var->top = top;
    blog_post_dto_collection_query_parameters_local_var->skip = skip;
    blog_post_dto_collection_query_parameters_local_var->count = count;
    blog_post_dto_collection_query_parameters_local_var->filter = filter;
    blog_post_dto_collection_query_parameters_local_var->order_by = order_by;
    blog_post_dto_collection_query_parameters_local_var->search = search;
    blog_post_dto_collection_query_parameters_local_var->select = select;
    blog_post_dto_collection_query_parameters_local_var->expand = expand;
    blog_post_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return blog_post_dto_collection_query_parameters_local_var;
}


void blog_post_dto_collection_query_parameters_free(blog_post_dto_collection_query_parameters_t *blog_post_dto_collection_query_parameters) {
    if(NULL == blog_post_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_post_dto_collection_query_parameters->filter) {
        free(blog_post_dto_collection_query_parameters->filter);
        blog_post_dto_collection_query_parameters->filter = NULL;
    }
    if (blog_post_dto_collection_query_parameters->order_by) {
        free(blog_post_dto_collection_query_parameters->order_by);
        blog_post_dto_collection_query_parameters->order_by = NULL;
    }
    if (blog_post_dto_collection_query_parameters->search) {
        free(blog_post_dto_collection_query_parameters->search);
        blog_post_dto_collection_query_parameters->search = NULL;
    }
    if (blog_post_dto_collection_query_parameters->select) {
        free(blog_post_dto_collection_query_parameters->select);
        blog_post_dto_collection_query_parameters->select = NULL;
    }
    if (blog_post_dto_collection_query_parameters->expand) {
        free(blog_post_dto_collection_query_parameters->expand);
        blog_post_dto_collection_query_parameters->expand = NULL;
    }
    free(blog_post_dto_collection_query_parameters);
}

cJSON *blog_post_dto_collection_query_parameters_convertToJSON(blog_post_dto_collection_query_parameters_t *blog_post_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // blog_post_dto_collection_query_parameters->top
    if(blog_post_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", blog_post_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_dto_collection_query_parameters->skip
    if(blog_post_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", blog_post_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_dto_collection_query_parameters->count
    if(blog_post_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", blog_post_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_dto_collection_query_parameters->filter
    if(blog_post_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", blog_post_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_dto_collection_query_parameters->order_by
    if(blog_post_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", blog_post_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_dto_collection_query_parameters->search
    if(blog_post_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", blog_post_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_dto_collection_query_parameters->select
    if(blog_post_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", blog_post_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_dto_collection_query_parameters->expand
    if(blog_post_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", blog_post_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_dto_collection_query_parameters->is_empty
    if(blog_post_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", blog_post_dto_collection_query_parameters->is_empty) == NULL) {
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

blog_post_dto_collection_query_parameters_t *blog_post_dto_collection_query_parameters_parseFromJSON(cJSON *blog_post_dto_collection_query_parametersJSON){

    blog_post_dto_collection_query_parameters_t *blog_post_dto_collection_query_parameters_local_var = NULL;

    // blog_post_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // blog_post_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // blog_post_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // blog_post_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // blog_post_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // blog_post_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // blog_post_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // blog_post_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // blog_post_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(blog_post_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    blog_post_dto_collection_query_parameters_local_var = blog_post_dto_collection_query_parameters_create (
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

    return blog_post_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
