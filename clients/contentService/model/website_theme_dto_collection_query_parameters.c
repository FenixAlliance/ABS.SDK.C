#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_theme_dto_collection_query_parameters.h"



website_theme_dto_collection_query_parameters_t *website_theme_dto_collection_query_parameters_create(
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
    website_theme_dto_collection_query_parameters_t *website_theme_dto_collection_query_parameters_local_var = malloc(sizeof(website_theme_dto_collection_query_parameters_t));
    if (!website_theme_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    website_theme_dto_collection_query_parameters_local_var->top = top;
    website_theme_dto_collection_query_parameters_local_var->skip = skip;
    website_theme_dto_collection_query_parameters_local_var->count = count;
    website_theme_dto_collection_query_parameters_local_var->filter = filter;
    website_theme_dto_collection_query_parameters_local_var->order_by = order_by;
    website_theme_dto_collection_query_parameters_local_var->search = search;
    website_theme_dto_collection_query_parameters_local_var->select = select;
    website_theme_dto_collection_query_parameters_local_var->expand = expand;
    website_theme_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return website_theme_dto_collection_query_parameters_local_var;
}


void website_theme_dto_collection_query_parameters_free(website_theme_dto_collection_query_parameters_t *website_theme_dto_collection_query_parameters) {
    if(NULL == website_theme_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (website_theme_dto_collection_query_parameters->filter) {
        free(website_theme_dto_collection_query_parameters->filter);
        website_theme_dto_collection_query_parameters->filter = NULL;
    }
    if (website_theme_dto_collection_query_parameters->order_by) {
        free(website_theme_dto_collection_query_parameters->order_by);
        website_theme_dto_collection_query_parameters->order_by = NULL;
    }
    if (website_theme_dto_collection_query_parameters->search) {
        free(website_theme_dto_collection_query_parameters->search);
        website_theme_dto_collection_query_parameters->search = NULL;
    }
    if (website_theme_dto_collection_query_parameters->select) {
        free(website_theme_dto_collection_query_parameters->select);
        website_theme_dto_collection_query_parameters->select = NULL;
    }
    if (website_theme_dto_collection_query_parameters->expand) {
        free(website_theme_dto_collection_query_parameters->expand);
        website_theme_dto_collection_query_parameters->expand = NULL;
    }
    free(website_theme_dto_collection_query_parameters);
}

cJSON *website_theme_dto_collection_query_parameters_convertToJSON(website_theme_dto_collection_query_parameters_t *website_theme_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // website_theme_dto_collection_query_parameters->top
    if(website_theme_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", website_theme_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // website_theme_dto_collection_query_parameters->skip
    if(website_theme_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", website_theme_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // website_theme_dto_collection_query_parameters->count
    if(website_theme_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", website_theme_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // website_theme_dto_collection_query_parameters->filter
    if(website_theme_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", website_theme_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_collection_query_parameters->order_by
    if(website_theme_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", website_theme_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_collection_query_parameters->search
    if(website_theme_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", website_theme_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_collection_query_parameters->select
    if(website_theme_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", website_theme_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_collection_query_parameters->expand
    if(website_theme_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", website_theme_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_collection_query_parameters->is_empty
    if(website_theme_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", website_theme_dto_collection_query_parameters->is_empty) == NULL) {
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

website_theme_dto_collection_query_parameters_t *website_theme_dto_collection_query_parameters_parseFromJSON(cJSON *website_theme_dto_collection_query_parametersJSON){

    website_theme_dto_collection_query_parameters_t *website_theme_dto_collection_query_parameters_local_var = NULL;

    // website_theme_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // website_theme_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // website_theme_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // website_theme_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // website_theme_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // website_theme_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // website_theme_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // website_theme_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // website_theme_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(website_theme_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    website_theme_dto_collection_query_parameters_local_var = website_theme_dto_collection_query_parameters_create (
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

    return website_theme_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
