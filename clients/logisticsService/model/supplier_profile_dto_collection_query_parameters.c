#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_profile_dto_collection_query_parameters.h"



supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters_create(
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
    supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters_local_var = malloc(sizeof(supplier_profile_dto_collection_query_parameters_t));
    if (!supplier_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    supplier_profile_dto_collection_query_parameters_local_var->top = top;
    supplier_profile_dto_collection_query_parameters_local_var->skip = skip;
    supplier_profile_dto_collection_query_parameters_local_var->count = count;
    supplier_profile_dto_collection_query_parameters_local_var->filter = filter;
    supplier_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    supplier_profile_dto_collection_query_parameters_local_var->search = search;
    supplier_profile_dto_collection_query_parameters_local_var->select = select;
    supplier_profile_dto_collection_query_parameters_local_var->expand = expand;
    supplier_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return supplier_profile_dto_collection_query_parameters_local_var;
}


void supplier_profile_dto_collection_query_parameters_free(supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters) {
    if(NULL == supplier_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_profile_dto_collection_query_parameters->filter) {
        free(supplier_profile_dto_collection_query_parameters->filter);
        supplier_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (supplier_profile_dto_collection_query_parameters->order_by) {
        free(supplier_profile_dto_collection_query_parameters->order_by);
        supplier_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (supplier_profile_dto_collection_query_parameters->search) {
        free(supplier_profile_dto_collection_query_parameters->search);
        supplier_profile_dto_collection_query_parameters->search = NULL;
    }
    if (supplier_profile_dto_collection_query_parameters->select) {
        free(supplier_profile_dto_collection_query_parameters->select);
        supplier_profile_dto_collection_query_parameters->select = NULL;
    }
    if (supplier_profile_dto_collection_query_parameters->expand) {
        free(supplier_profile_dto_collection_query_parameters->expand);
        supplier_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(supplier_profile_dto_collection_query_parameters);
}

cJSON *supplier_profile_dto_collection_query_parameters_convertToJSON(supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // supplier_profile_dto_collection_query_parameters->top
    if(supplier_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", supplier_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // supplier_profile_dto_collection_query_parameters->skip
    if(supplier_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", supplier_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // supplier_profile_dto_collection_query_parameters->count
    if(supplier_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", supplier_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // supplier_profile_dto_collection_query_parameters->filter
    if(supplier_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", supplier_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_collection_query_parameters->order_by
    if(supplier_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", supplier_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_collection_query_parameters->search
    if(supplier_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", supplier_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_collection_query_parameters->select
    if(supplier_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", supplier_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_collection_query_parameters->expand
    if(supplier_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", supplier_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_collection_query_parameters->is_empty
    if(supplier_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", supplier_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters_parseFromJSON(cJSON *supplier_profile_dto_collection_query_parametersJSON){

    supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters_local_var = NULL;

    // supplier_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // supplier_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // supplier_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // supplier_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    supplier_profile_dto_collection_query_parameters_local_var = supplier_profile_dto_collection_query_parameters_create (
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

    return supplier_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
