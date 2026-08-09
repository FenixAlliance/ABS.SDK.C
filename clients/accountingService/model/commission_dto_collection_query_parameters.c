#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commission_dto_collection_query_parameters.h"



commission_dto_collection_query_parameters_t *commission_dto_collection_query_parameters_create(
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
    commission_dto_collection_query_parameters_t *commission_dto_collection_query_parameters_local_var = malloc(sizeof(commission_dto_collection_query_parameters_t));
    if (!commission_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    commission_dto_collection_query_parameters_local_var->top = top;
    commission_dto_collection_query_parameters_local_var->skip = skip;
    commission_dto_collection_query_parameters_local_var->count = count;
    commission_dto_collection_query_parameters_local_var->filter = filter;
    commission_dto_collection_query_parameters_local_var->order_by = order_by;
    commission_dto_collection_query_parameters_local_var->search = search;
    commission_dto_collection_query_parameters_local_var->select = select;
    commission_dto_collection_query_parameters_local_var->expand = expand;
    commission_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return commission_dto_collection_query_parameters_local_var;
}


void commission_dto_collection_query_parameters_free(commission_dto_collection_query_parameters_t *commission_dto_collection_query_parameters) {
    if(NULL == commission_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (commission_dto_collection_query_parameters->filter) {
        free(commission_dto_collection_query_parameters->filter);
        commission_dto_collection_query_parameters->filter = NULL;
    }
    if (commission_dto_collection_query_parameters->order_by) {
        free(commission_dto_collection_query_parameters->order_by);
        commission_dto_collection_query_parameters->order_by = NULL;
    }
    if (commission_dto_collection_query_parameters->search) {
        free(commission_dto_collection_query_parameters->search);
        commission_dto_collection_query_parameters->search = NULL;
    }
    if (commission_dto_collection_query_parameters->select) {
        free(commission_dto_collection_query_parameters->select);
        commission_dto_collection_query_parameters->select = NULL;
    }
    if (commission_dto_collection_query_parameters->expand) {
        free(commission_dto_collection_query_parameters->expand);
        commission_dto_collection_query_parameters->expand = NULL;
    }
    free(commission_dto_collection_query_parameters);
}

cJSON *commission_dto_collection_query_parameters_convertToJSON(commission_dto_collection_query_parameters_t *commission_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // commission_dto_collection_query_parameters->top
    if(commission_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", commission_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // commission_dto_collection_query_parameters->skip
    if(commission_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", commission_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // commission_dto_collection_query_parameters->count
    if(commission_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", commission_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // commission_dto_collection_query_parameters->filter
    if(commission_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", commission_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // commission_dto_collection_query_parameters->order_by
    if(commission_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", commission_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // commission_dto_collection_query_parameters->search
    if(commission_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", commission_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // commission_dto_collection_query_parameters->select
    if(commission_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", commission_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // commission_dto_collection_query_parameters->expand
    if(commission_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", commission_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // commission_dto_collection_query_parameters->is_empty
    if(commission_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", commission_dto_collection_query_parameters->is_empty) == NULL) {
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

commission_dto_collection_query_parameters_t *commission_dto_collection_query_parameters_parseFromJSON(cJSON *commission_dto_collection_query_parametersJSON){

    commission_dto_collection_query_parameters_t *commission_dto_collection_query_parameters_local_var = NULL;

    // commission_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // commission_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // commission_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // commission_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // commission_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // commission_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // commission_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // commission_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // commission_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(commission_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    commission_dto_collection_query_parameters_local_var = commission_dto_collection_query_parameters_create (
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

    return commission_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
