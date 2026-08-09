#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "posting_execution_dto_collection_query_parameters.h"



posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters_create(
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
    posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters_local_var = malloc(sizeof(posting_execution_dto_collection_query_parameters_t));
    if (!posting_execution_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    posting_execution_dto_collection_query_parameters_local_var->top = top;
    posting_execution_dto_collection_query_parameters_local_var->skip = skip;
    posting_execution_dto_collection_query_parameters_local_var->count = count;
    posting_execution_dto_collection_query_parameters_local_var->filter = filter;
    posting_execution_dto_collection_query_parameters_local_var->order_by = order_by;
    posting_execution_dto_collection_query_parameters_local_var->search = search;
    posting_execution_dto_collection_query_parameters_local_var->select = select;
    posting_execution_dto_collection_query_parameters_local_var->expand = expand;
    posting_execution_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return posting_execution_dto_collection_query_parameters_local_var;
}


void posting_execution_dto_collection_query_parameters_free(posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters) {
    if(NULL == posting_execution_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (posting_execution_dto_collection_query_parameters->filter) {
        free(posting_execution_dto_collection_query_parameters->filter);
        posting_execution_dto_collection_query_parameters->filter = NULL;
    }
    if (posting_execution_dto_collection_query_parameters->order_by) {
        free(posting_execution_dto_collection_query_parameters->order_by);
        posting_execution_dto_collection_query_parameters->order_by = NULL;
    }
    if (posting_execution_dto_collection_query_parameters->search) {
        free(posting_execution_dto_collection_query_parameters->search);
        posting_execution_dto_collection_query_parameters->search = NULL;
    }
    if (posting_execution_dto_collection_query_parameters->select) {
        free(posting_execution_dto_collection_query_parameters->select);
        posting_execution_dto_collection_query_parameters->select = NULL;
    }
    if (posting_execution_dto_collection_query_parameters->expand) {
        free(posting_execution_dto_collection_query_parameters->expand);
        posting_execution_dto_collection_query_parameters->expand = NULL;
    }
    free(posting_execution_dto_collection_query_parameters);
}

cJSON *posting_execution_dto_collection_query_parameters_convertToJSON(posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // posting_execution_dto_collection_query_parameters->top
    if(posting_execution_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", posting_execution_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // posting_execution_dto_collection_query_parameters->skip
    if(posting_execution_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", posting_execution_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // posting_execution_dto_collection_query_parameters->count
    if(posting_execution_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", posting_execution_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // posting_execution_dto_collection_query_parameters->filter
    if(posting_execution_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", posting_execution_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto_collection_query_parameters->order_by
    if(posting_execution_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", posting_execution_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto_collection_query_parameters->search
    if(posting_execution_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", posting_execution_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto_collection_query_parameters->select
    if(posting_execution_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", posting_execution_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto_collection_query_parameters->expand
    if(posting_execution_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", posting_execution_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto_collection_query_parameters->is_empty
    if(posting_execution_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", posting_execution_dto_collection_query_parameters->is_empty) == NULL) {
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

posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters_parseFromJSON(cJSON *posting_execution_dto_collection_query_parametersJSON){

    posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters_local_var = NULL;

    // posting_execution_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // posting_execution_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // posting_execution_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // posting_execution_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // posting_execution_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // posting_execution_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // posting_execution_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // posting_execution_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // posting_execution_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(posting_execution_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    posting_execution_dto_collection_query_parameters_local_var = posting_execution_dto_collection_query_parameters_create (
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

    return posting_execution_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
