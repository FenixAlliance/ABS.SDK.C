#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalog_item_dto_collection_query_parameters.h"



catalog_item_dto_collection_query_parameters_t *catalog_item_dto_collection_query_parameters_create(
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
    catalog_item_dto_collection_query_parameters_t *catalog_item_dto_collection_query_parameters_local_var = malloc(sizeof(catalog_item_dto_collection_query_parameters_t));
    if (!catalog_item_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    catalog_item_dto_collection_query_parameters_local_var->top = top;
    catalog_item_dto_collection_query_parameters_local_var->skip = skip;
    catalog_item_dto_collection_query_parameters_local_var->count = count;
    catalog_item_dto_collection_query_parameters_local_var->filter = filter;
    catalog_item_dto_collection_query_parameters_local_var->order_by = order_by;
    catalog_item_dto_collection_query_parameters_local_var->search = search;
    catalog_item_dto_collection_query_parameters_local_var->select = select;
    catalog_item_dto_collection_query_parameters_local_var->expand = expand;
    catalog_item_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return catalog_item_dto_collection_query_parameters_local_var;
}


void catalog_item_dto_collection_query_parameters_free(catalog_item_dto_collection_query_parameters_t *catalog_item_dto_collection_query_parameters) {
    if(NULL == catalog_item_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (catalog_item_dto_collection_query_parameters->filter) {
        free(catalog_item_dto_collection_query_parameters->filter);
        catalog_item_dto_collection_query_parameters->filter = NULL;
    }
    if (catalog_item_dto_collection_query_parameters->order_by) {
        free(catalog_item_dto_collection_query_parameters->order_by);
        catalog_item_dto_collection_query_parameters->order_by = NULL;
    }
    if (catalog_item_dto_collection_query_parameters->search) {
        free(catalog_item_dto_collection_query_parameters->search);
        catalog_item_dto_collection_query_parameters->search = NULL;
    }
    if (catalog_item_dto_collection_query_parameters->select) {
        free(catalog_item_dto_collection_query_parameters->select);
        catalog_item_dto_collection_query_parameters->select = NULL;
    }
    if (catalog_item_dto_collection_query_parameters->expand) {
        free(catalog_item_dto_collection_query_parameters->expand);
        catalog_item_dto_collection_query_parameters->expand = NULL;
    }
    free(catalog_item_dto_collection_query_parameters);
}

cJSON *catalog_item_dto_collection_query_parameters_convertToJSON(catalog_item_dto_collection_query_parameters_t *catalog_item_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // catalog_item_dto_collection_query_parameters->top
    if(catalog_item_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", catalog_item_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_dto_collection_query_parameters->skip
    if(catalog_item_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", catalog_item_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_dto_collection_query_parameters->count
    if(catalog_item_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", catalog_item_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_dto_collection_query_parameters->filter
    if(catalog_item_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", catalog_item_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_collection_query_parameters->order_by
    if(catalog_item_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", catalog_item_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_collection_query_parameters->search
    if(catalog_item_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", catalog_item_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_collection_query_parameters->select
    if(catalog_item_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", catalog_item_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_collection_query_parameters->expand
    if(catalog_item_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", catalog_item_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_collection_query_parameters->is_empty
    if(catalog_item_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", catalog_item_dto_collection_query_parameters->is_empty) == NULL) {
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

catalog_item_dto_collection_query_parameters_t *catalog_item_dto_collection_query_parameters_parseFromJSON(cJSON *catalog_item_dto_collection_query_parametersJSON){

    catalog_item_dto_collection_query_parameters_t *catalog_item_dto_collection_query_parameters_local_var = NULL;

    // catalog_item_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // catalog_item_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    catalog_item_dto_collection_query_parameters_local_var = catalog_item_dto_collection_query_parameters_create (
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

    return catalog_item_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
