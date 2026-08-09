#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_depreciation_record_dto_collection_query_parameters.h"



asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters_create(
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
    asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters_local_var = malloc(sizeof(asset_depreciation_record_dto_collection_query_parameters_t));
    if (!asset_depreciation_record_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    asset_depreciation_record_dto_collection_query_parameters_local_var->top = top;
    asset_depreciation_record_dto_collection_query_parameters_local_var->skip = skip;
    asset_depreciation_record_dto_collection_query_parameters_local_var->count = count;
    asset_depreciation_record_dto_collection_query_parameters_local_var->filter = filter;
    asset_depreciation_record_dto_collection_query_parameters_local_var->order_by = order_by;
    asset_depreciation_record_dto_collection_query_parameters_local_var->search = search;
    asset_depreciation_record_dto_collection_query_parameters_local_var->select = select;
    asset_depreciation_record_dto_collection_query_parameters_local_var->expand = expand;
    asset_depreciation_record_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return asset_depreciation_record_dto_collection_query_parameters_local_var;
}


void asset_depreciation_record_dto_collection_query_parameters_free(asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters) {
    if(NULL == asset_depreciation_record_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_depreciation_record_dto_collection_query_parameters->filter) {
        free(asset_depreciation_record_dto_collection_query_parameters->filter);
        asset_depreciation_record_dto_collection_query_parameters->filter = NULL;
    }
    if (asset_depreciation_record_dto_collection_query_parameters->order_by) {
        free(asset_depreciation_record_dto_collection_query_parameters->order_by);
        asset_depreciation_record_dto_collection_query_parameters->order_by = NULL;
    }
    if (asset_depreciation_record_dto_collection_query_parameters->search) {
        free(asset_depreciation_record_dto_collection_query_parameters->search);
        asset_depreciation_record_dto_collection_query_parameters->search = NULL;
    }
    if (asset_depreciation_record_dto_collection_query_parameters->select) {
        free(asset_depreciation_record_dto_collection_query_parameters->select);
        asset_depreciation_record_dto_collection_query_parameters->select = NULL;
    }
    if (asset_depreciation_record_dto_collection_query_parameters->expand) {
        free(asset_depreciation_record_dto_collection_query_parameters->expand);
        asset_depreciation_record_dto_collection_query_parameters->expand = NULL;
    }
    free(asset_depreciation_record_dto_collection_query_parameters);
}

cJSON *asset_depreciation_record_dto_collection_query_parameters_convertToJSON(asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // asset_depreciation_record_dto_collection_query_parameters->top
    if(asset_depreciation_record_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", asset_depreciation_record_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->skip
    if(asset_depreciation_record_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", asset_depreciation_record_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->count
    if(asset_depreciation_record_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", asset_depreciation_record_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->filter
    if(asset_depreciation_record_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", asset_depreciation_record_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->order_by
    if(asset_depreciation_record_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", asset_depreciation_record_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->search
    if(asset_depreciation_record_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", asset_depreciation_record_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->select
    if(asset_depreciation_record_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", asset_depreciation_record_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->expand
    if(asset_depreciation_record_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", asset_depreciation_record_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto_collection_query_parameters->is_empty
    if(asset_depreciation_record_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", asset_depreciation_record_dto_collection_query_parameters->is_empty) == NULL) {
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

asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters_parseFromJSON(cJSON *asset_depreciation_record_dto_collection_query_parametersJSON){

    asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters_local_var = NULL;

    // asset_depreciation_record_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    asset_depreciation_record_dto_collection_query_parameters_local_var = asset_depreciation_record_dto_collection_query_parameters_create (
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

    return asset_depreciation_record_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
