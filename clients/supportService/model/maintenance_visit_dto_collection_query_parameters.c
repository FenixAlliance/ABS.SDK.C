#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "maintenance_visit_dto_collection_query_parameters.h"



maintenance_visit_dto_collection_query_parameters_t *maintenance_visit_dto_collection_query_parameters_create(
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
    maintenance_visit_dto_collection_query_parameters_t *maintenance_visit_dto_collection_query_parameters_local_var = malloc(sizeof(maintenance_visit_dto_collection_query_parameters_t));
    if (!maintenance_visit_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    maintenance_visit_dto_collection_query_parameters_local_var->top = top;
    maintenance_visit_dto_collection_query_parameters_local_var->skip = skip;
    maintenance_visit_dto_collection_query_parameters_local_var->count = count;
    maintenance_visit_dto_collection_query_parameters_local_var->filter = filter;
    maintenance_visit_dto_collection_query_parameters_local_var->order_by = order_by;
    maintenance_visit_dto_collection_query_parameters_local_var->search = search;
    maintenance_visit_dto_collection_query_parameters_local_var->select = select;
    maintenance_visit_dto_collection_query_parameters_local_var->expand = expand;
    maintenance_visit_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return maintenance_visit_dto_collection_query_parameters_local_var;
}


void maintenance_visit_dto_collection_query_parameters_free(maintenance_visit_dto_collection_query_parameters_t *maintenance_visit_dto_collection_query_parameters) {
    if(NULL == maintenance_visit_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (maintenance_visit_dto_collection_query_parameters->filter) {
        free(maintenance_visit_dto_collection_query_parameters->filter);
        maintenance_visit_dto_collection_query_parameters->filter = NULL;
    }
    if (maintenance_visit_dto_collection_query_parameters->order_by) {
        free(maintenance_visit_dto_collection_query_parameters->order_by);
        maintenance_visit_dto_collection_query_parameters->order_by = NULL;
    }
    if (maintenance_visit_dto_collection_query_parameters->search) {
        free(maintenance_visit_dto_collection_query_parameters->search);
        maintenance_visit_dto_collection_query_parameters->search = NULL;
    }
    if (maintenance_visit_dto_collection_query_parameters->select) {
        free(maintenance_visit_dto_collection_query_parameters->select);
        maintenance_visit_dto_collection_query_parameters->select = NULL;
    }
    if (maintenance_visit_dto_collection_query_parameters->expand) {
        free(maintenance_visit_dto_collection_query_parameters->expand);
        maintenance_visit_dto_collection_query_parameters->expand = NULL;
    }
    free(maintenance_visit_dto_collection_query_parameters);
}

cJSON *maintenance_visit_dto_collection_query_parameters_convertToJSON(maintenance_visit_dto_collection_query_parameters_t *maintenance_visit_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // maintenance_visit_dto_collection_query_parameters->top
    if(maintenance_visit_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", maintenance_visit_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // maintenance_visit_dto_collection_query_parameters->skip
    if(maintenance_visit_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", maintenance_visit_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // maintenance_visit_dto_collection_query_parameters->count
    if(maintenance_visit_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", maintenance_visit_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // maintenance_visit_dto_collection_query_parameters->filter
    if(maintenance_visit_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", maintenance_visit_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_collection_query_parameters->order_by
    if(maintenance_visit_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", maintenance_visit_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_collection_query_parameters->search
    if(maintenance_visit_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", maintenance_visit_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_collection_query_parameters->select
    if(maintenance_visit_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", maintenance_visit_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_collection_query_parameters->expand
    if(maintenance_visit_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", maintenance_visit_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_collection_query_parameters->is_empty
    if(maintenance_visit_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", maintenance_visit_dto_collection_query_parameters->is_empty) == NULL) {
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

maintenance_visit_dto_collection_query_parameters_t *maintenance_visit_dto_collection_query_parameters_parseFromJSON(cJSON *maintenance_visit_dto_collection_query_parametersJSON){

    maintenance_visit_dto_collection_query_parameters_t *maintenance_visit_dto_collection_query_parameters_local_var = NULL;

    // maintenance_visit_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // maintenance_visit_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // maintenance_visit_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // maintenance_visit_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    maintenance_visit_dto_collection_query_parameters_local_var = maintenance_visit_dto_collection_query_parameters_create (
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

    return maintenance_visit_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
