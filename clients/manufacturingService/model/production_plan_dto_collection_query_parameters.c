#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "production_plan_dto_collection_query_parameters.h"



production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters_create(
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
    production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters_local_var = malloc(sizeof(production_plan_dto_collection_query_parameters_t));
    if (!production_plan_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    production_plan_dto_collection_query_parameters_local_var->top = top;
    production_plan_dto_collection_query_parameters_local_var->skip = skip;
    production_plan_dto_collection_query_parameters_local_var->count = count;
    production_plan_dto_collection_query_parameters_local_var->filter = filter;
    production_plan_dto_collection_query_parameters_local_var->order_by = order_by;
    production_plan_dto_collection_query_parameters_local_var->search = search;
    production_plan_dto_collection_query_parameters_local_var->select = select;
    production_plan_dto_collection_query_parameters_local_var->expand = expand;
    production_plan_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return production_plan_dto_collection_query_parameters_local_var;
}


void production_plan_dto_collection_query_parameters_free(production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters) {
    if(NULL == production_plan_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (production_plan_dto_collection_query_parameters->filter) {
        free(production_plan_dto_collection_query_parameters->filter);
        production_plan_dto_collection_query_parameters->filter = NULL;
    }
    if (production_plan_dto_collection_query_parameters->order_by) {
        free(production_plan_dto_collection_query_parameters->order_by);
        production_plan_dto_collection_query_parameters->order_by = NULL;
    }
    if (production_plan_dto_collection_query_parameters->search) {
        free(production_plan_dto_collection_query_parameters->search);
        production_plan_dto_collection_query_parameters->search = NULL;
    }
    if (production_plan_dto_collection_query_parameters->select) {
        free(production_plan_dto_collection_query_parameters->select);
        production_plan_dto_collection_query_parameters->select = NULL;
    }
    if (production_plan_dto_collection_query_parameters->expand) {
        free(production_plan_dto_collection_query_parameters->expand);
        production_plan_dto_collection_query_parameters->expand = NULL;
    }
    free(production_plan_dto_collection_query_parameters);
}

cJSON *production_plan_dto_collection_query_parameters_convertToJSON(production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // production_plan_dto_collection_query_parameters->top
    if(production_plan_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", production_plan_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // production_plan_dto_collection_query_parameters->skip
    if(production_plan_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", production_plan_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // production_plan_dto_collection_query_parameters->count
    if(production_plan_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", production_plan_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // production_plan_dto_collection_query_parameters->filter
    if(production_plan_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", production_plan_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto_collection_query_parameters->order_by
    if(production_plan_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", production_plan_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto_collection_query_parameters->search
    if(production_plan_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", production_plan_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto_collection_query_parameters->select
    if(production_plan_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", production_plan_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto_collection_query_parameters->expand
    if(production_plan_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", production_plan_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto_collection_query_parameters->is_empty
    if(production_plan_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", production_plan_dto_collection_query_parameters->is_empty) == NULL) {
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

production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters_parseFromJSON(cJSON *production_plan_dto_collection_query_parametersJSON){

    production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters_local_var = NULL;

    // production_plan_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // production_plan_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // production_plan_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // production_plan_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // production_plan_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // production_plan_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // production_plan_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // production_plan_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // production_plan_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(production_plan_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    production_plan_dto_collection_query_parameters_local_var = production_plan_dto_collection_query_parameters_create (
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

    return production_plan_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
