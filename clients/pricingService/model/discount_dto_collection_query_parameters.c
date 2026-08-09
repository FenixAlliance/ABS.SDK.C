#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_dto_collection_query_parameters.h"



discount_dto_collection_query_parameters_t *discount_dto_collection_query_parameters_create(
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
    discount_dto_collection_query_parameters_t *discount_dto_collection_query_parameters_local_var = malloc(sizeof(discount_dto_collection_query_parameters_t));
    if (!discount_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    discount_dto_collection_query_parameters_local_var->top = top;
    discount_dto_collection_query_parameters_local_var->skip = skip;
    discount_dto_collection_query_parameters_local_var->count = count;
    discount_dto_collection_query_parameters_local_var->filter = filter;
    discount_dto_collection_query_parameters_local_var->order_by = order_by;
    discount_dto_collection_query_parameters_local_var->search = search;
    discount_dto_collection_query_parameters_local_var->select = select;
    discount_dto_collection_query_parameters_local_var->expand = expand;
    discount_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return discount_dto_collection_query_parameters_local_var;
}


void discount_dto_collection_query_parameters_free(discount_dto_collection_query_parameters_t *discount_dto_collection_query_parameters) {
    if(NULL == discount_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_dto_collection_query_parameters->filter) {
        free(discount_dto_collection_query_parameters->filter);
        discount_dto_collection_query_parameters->filter = NULL;
    }
    if (discount_dto_collection_query_parameters->order_by) {
        free(discount_dto_collection_query_parameters->order_by);
        discount_dto_collection_query_parameters->order_by = NULL;
    }
    if (discount_dto_collection_query_parameters->search) {
        free(discount_dto_collection_query_parameters->search);
        discount_dto_collection_query_parameters->search = NULL;
    }
    if (discount_dto_collection_query_parameters->select) {
        free(discount_dto_collection_query_parameters->select);
        discount_dto_collection_query_parameters->select = NULL;
    }
    if (discount_dto_collection_query_parameters->expand) {
        free(discount_dto_collection_query_parameters->expand);
        discount_dto_collection_query_parameters->expand = NULL;
    }
    free(discount_dto_collection_query_parameters);
}

cJSON *discount_dto_collection_query_parameters_convertToJSON(discount_dto_collection_query_parameters_t *discount_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // discount_dto_collection_query_parameters->top
    if(discount_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", discount_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_dto_collection_query_parameters->skip
    if(discount_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", discount_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_dto_collection_query_parameters->count
    if(discount_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", discount_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // discount_dto_collection_query_parameters->filter
    if(discount_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", discount_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_collection_query_parameters->order_by
    if(discount_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", discount_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_collection_query_parameters->search
    if(discount_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", discount_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_collection_query_parameters->select
    if(discount_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", discount_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_collection_query_parameters->expand
    if(discount_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", discount_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_collection_query_parameters->is_empty
    if(discount_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", discount_dto_collection_query_parameters->is_empty) == NULL) {
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

discount_dto_collection_query_parameters_t *discount_dto_collection_query_parameters_parseFromJSON(cJSON *discount_dto_collection_query_parametersJSON){

    discount_dto_collection_query_parameters_t *discount_dto_collection_query_parameters_local_var = NULL;

    // discount_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // discount_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // discount_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // discount_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // discount_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // discount_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // discount_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // discount_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // discount_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(discount_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    discount_dto_collection_query_parameters_local_var = discount_dto_collection_query_parameters_create (
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

    return discount_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
