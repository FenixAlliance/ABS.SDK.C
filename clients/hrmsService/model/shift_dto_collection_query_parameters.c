#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shift_dto_collection_query_parameters.h"



shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters_create(
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
    shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters_local_var = malloc(sizeof(shift_dto_collection_query_parameters_t));
    if (!shift_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    shift_dto_collection_query_parameters_local_var->top = top;
    shift_dto_collection_query_parameters_local_var->skip = skip;
    shift_dto_collection_query_parameters_local_var->count = count;
    shift_dto_collection_query_parameters_local_var->filter = filter;
    shift_dto_collection_query_parameters_local_var->order_by = order_by;
    shift_dto_collection_query_parameters_local_var->search = search;
    shift_dto_collection_query_parameters_local_var->select = select;
    shift_dto_collection_query_parameters_local_var->expand = expand;
    shift_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return shift_dto_collection_query_parameters_local_var;
}


void shift_dto_collection_query_parameters_free(shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters) {
    if(NULL == shift_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (shift_dto_collection_query_parameters->filter) {
        free(shift_dto_collection_query_parameters->filter);
        shift_dto_collection_query_parameters->filter = NULL;
    }
    if (shift_dto_collection_query_parameters->order_by) {
        free(shift_dto_collection_query_parameters->order_by);
        shift_dto_collection_query_parameters->order_by = NULL;
    }
    if (shift_dto_collection_query_parameters->search) {
        free(shift_dto_collection_query_parameters->search);
        shift_dto_collection_query_parameters->search = NULL;
    }
    if (shift_dto_collection_query_parameters->select) {
        free(shift_dto_collection_query_parameters->select);
        shift_dto_collection_query_parameters->select = NULL;
    }
    if (shift_dto_collection_query_parameters->expand) {
        free(shift_dto_collection_query_parameters->expand);
        shift_dto_collection_query_parameters->expand = NULL;
    }
    free(shift_dto_collection_query_parameters);
}

cJSON *shift_dto_collection_query_parameters_convertToJSON(shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // shift_dto_collection_query_parameters->top
    if(shift_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", shift_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // shift_dto_collection_query_parameters->skip
    if(shift_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", shift_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // shift_dto_collection_query_parameters->count
    if(shift_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", shift_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto_collection_query_parameters->filter
    if(shift_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", shift_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_collection_query_parameters->order_by
    if(shift_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", shift_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_collection_query_parameters->search
    if(shift_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", shift_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_collection_query_parameters->select
    if(shift_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", shift_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_collection_query_parameters->expand
    if(shift_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", shift_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_collection_query_parameters->is_empty
    if(shift_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", shift_dto_collection_query_parameters->is_empty) == NULL) {
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

shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters_parseFromJSON(cJSON *shift_dto_collection_query_parametersJSON){

    shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters_local_var = NULL;

    // shift_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // shift_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // shift_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // shift_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // shift_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // shift_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // shift_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // shift_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // shift_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(shift_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    shift_dto_collection_query_parameters_local_var = shift_dto_collection_query_parameters_create (
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

    return shift_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
