#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_feature_dto_collection_query_parameters.h"



license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters_create(
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
    license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters_local_var = malloc(sizeof(license_feature_dto_collection_query_parameters_t));
    if (!license_feature_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    license_feature_dto_collection_query_parameters_local_var->top = top;
    license_feature_dto_collection_query_parameters_local_var->skip = skip;
    license_feature_dto_collection_query_parameters_local_var->count = count;
    license_feature_dto_collection_query_parameters_local_var->filter = filter;
    license_feature_dto_collection_query_parameters_local_var->order_by = order_by;
    license_feature_dto_collection_query_parameters_local_var->search = search;
    license_feature_dto_collection_query_parameters_local_var->select = select;
    license_feature_dto_collection_query_parameters_local_var->expand = expand;
    license_feature_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return license_feature_dto_collection_query_parameters_local_var;
}


void license_feature_dto_collection_query_parameters_free(license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters) {
    if(NULL == license_feature_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (license_feature_dto_collection_query_parameters->filter) {
        free(license_feature_dto_collection_query_parameters->filter);
        license_feature_dto_collection_query_parameters->filter = NULL;
    }
    if (license_feature_dto_collection_query_parameters->order_by) {
        free(license_feature_dto_collection_query_parameters->order_by);
        license_feature_dto_collection_query_parameters->order_by = NULL;
    }
    if (license_feature_dto_collection_query_parameters->search) {
        free(license_feature_dto_collection_query_parameters->search);
        license_feature_dto_collection_query_parameters->search = NULL;
    }
    if (license_feature_dto_collection_query_parameters->select) {
        free(license_feature_dto_collection_query_parameters->select);
        license_feature_dto_collection_query_parameters->select = NULL;
    }
    if (license_feature_dto_collection_query_parameters->expand) {
        free(license_feature_dto_collection_query_parameters->expand);
        license_feature_dto_collection_query_parameters->expand = NULL;
    }
    free(license_feature_dto_collection_query_parameters);
}

cJSON *license_feature_dto_collection_query_parameters_convertToJSON(license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // license_feature_dto_collection_query_parameters->top
    if(license_feature_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", license_feature_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // license_feature_dto_collection_query_parameters->skip
    if(license_feature_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", license_feature_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // license_feature_dto_collection_query_parameters->count
    if(license_feature_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", license_feature_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // license_feature_dto_collection_query_parameters->filter
    if(license_feature_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", license_feature_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto_collection_query_parameters->order_by
    if(license_feature_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", license_feature_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto_collection_query_parameters->search
    if(license_feature_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", license_feature_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto_collection_query_parameters->select
    if(license_feature_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", license_feature_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto_collection_query_parameters->expand
    if(license_feature_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", license_feature_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto_collection_query_parameters->is_empty
    if(license_feature_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", license_feature_dto_collection_query_parameters->is_empty) == NULL) {
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

license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters_parseFromJSON(cJSON *license_feature_dto_collection_query_parametersJSON){

    license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters_local_var = NULL;

    // license_feature_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // license_feature_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // license_feature_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // license_feature_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // license_feature_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // license_feature_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // license_feature_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // license_feature_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // license_feature_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(license_feature_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    license_feature_dto_collection_query_parameters_local_var = license_feature_dto_collection_query_parameters_create (
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

    return license_feature_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
