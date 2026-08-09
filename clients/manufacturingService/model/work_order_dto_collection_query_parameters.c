#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "work_order_dto_collection_query_parameters.h"



work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters_create(
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
    work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters_local_var = malloc(sizeof(work_order_dto_collection_query_parameters_t));
    if (!work_order_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    work_order_dto_collection_query_parameters_local_var->top = top;
    work_order_dto_collection_query_parameters_local_var->skip = skip;
    work_order_dto_collection_query_parameters_local_var->count = count;
    work_order_dto_collection_query_parameters_local_var->filter = filter;
    work_order_dto_collection_query_parameters_local_var->order_by = order_by;
    work_order_dto_collection_query_parameters_local_var->search = search;
    work_order_dto_collection_query_parameters_local_var->select = select;
    work_order_dto_collection_query_parameters_local_var->expand = expand;
    work_order_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return work_order_dto_collection_query_parameters_local_var;
}


void work_order_dto_collection_query_parameters_free(work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters) {
    if(NULL == work_order_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (work_order_dto_collection_query_parameters->filter) {
        free(work_order_dto_collection_query_parameters->filter);
        work_order_dto_collection_query_parameters->filter = NULL;
    }
    if (work_order_dto_collection_query_parameters->order_by) {
        free(work_order_dto_collection_query_parameters->order_by);
        work_order_dto_collection_query_parameters->order_by = NULL;
    }
    if (work_order_dto_collection_query_parameters->search) {
        free(work_order_dto_collection_query_parameters->search);
        work_order_dto_collection_query_parameters->search = NULL;
    }
    if (work_order_dto_collection_query_parameters->select) {
        free(work_order_dto_collection_query_parameters->select);
        work_order_dto_collection_query_parameters->select = NULL;
    }
    if (work_order_dto_collection_query_parameters->expand) {
        free(work_order_dto_collection_query_parameters->expand);
        work_order_dto_collection_query_parameters->expand = NULL;
    }
    free(work_order_dto_collection_query_parameters);
}

cJSON *work_order_dto_collection_query_parameters_convertToJSON(work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // work_order_dto_collection_query_parameters->top
    if(work_order_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", work_order_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // work_order_dto_collection_query_parameters->skip
    if(work_order_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", work_order_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // work_order_dto_collection_query_parameters->count
    if(work_order_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", work_order_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // work_order_dto_collection_query_parameters->filter
    if(work_order_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", work_order_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // work_order_dto_collection_query_parameters->order_by
    if(work_order_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", work_order_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // work_order_dto_collection_query_parameters->search
    if(work_order_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", work_order_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // work_order_dto_collection_query_parameters->select
    if(work_order_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", work_order_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // work_order_dto_collection_query_parameters->expand
    if(work_order_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", work_order_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // work_order_dto_collection_query_parameters->is_empty
    if(work_order_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", work_order_dto_collection_query_parameters->is_empty) == NULL) {
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

work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters_parseFromJSON(cJSON *work_order_dto_collection_query_parametersJSON){

    work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters_local_var = NULL;

    // work_order_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // work_order_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // work_order_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // work_order_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // work_order_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // work_order_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // work_order_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // work_order_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // work_order_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(work_order_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    work_order_dto_collection_query_parameters_local_var = work_order_dto_collection_query_parameters_create (
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

    return work_order_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
