#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rail_waybill_dto_collection_query_parameters.h"



rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters_create(
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
    rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters_local_var = malloc(sizeof(rail_waybill_dto_collection_query_parameters_t));
    if (!rail_waybill_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    rail_waybill_dto_collection_query_parameters_local_var->top = top;
    rail_waybill_dto_collection_query_parameters_local_var->skip = skip;
    rail_waybill_dto_collection_query_parameters_local_var->count = count;
    rail_waybill_dto_collection_query_parameters_local_var->filter = filter;
    rail_waybill_dto_collection_query_parameters_local_var->order_by = order_by;
    rail_waybill_dto_collection_query_parameters_local_var->search = search;
    rail_waybill_dto_collection_query_parameters_local_var->select = select;
    rail_waybill_dto_collection_query_parameters_local_var->expand = expand;
    rail_waybill_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return rail_waybill_dto_collection_query_parameters_local_var;
}


void rail_waybill_dto_collection_query_parameters_free(rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters) {
    if(NULL == rail_waybill_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (rail_waybill_dto_collection_query_parameters->filter) {
        free(rail_waybill_dto_collection_query_parameters->filter);
        rail_waybill_dto_collection_query_parameters->filter = NULL;
    }
    if (rail_waybill_dto_collection_query_parameters->order_by) {
        free(rail_waybill_dto_collection_query_parameters->order_by);
        rail_waybill_dto_collection_query_parameters->order_by = NULL;
    }
    if (rail_waybill_dto_collection_query_parameters->search) {
        free(rail_waybill_dto_collection_query_parameters->search);
        rail_waybill_dto_collection_query_parameters->search = NULL;
    }
    if (rail_waybill_dto_collection_query_parameters->select) {
        free(rail_waybill_dto_collection_query_parameters->select);
        rail_waybill_dto_collection_query_parameters->select = NULL;
    }
    if (rail_waybill_dto_collection_query_parameters->expand) {
        free(rail_waybill_dto_collection_query_parameters->expand);
        rail_waybill_dto_collection_query_parameters->expand = NULL;
    }
    free(rail_waybill_dto_collection_query_parameters);
}

cJSON *rail_waybill_dto_collection_query_parameters_convertToJSON(rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // rail_waybill_dto_collection_query_parameters->top
    if(rail_waybill_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", rail_waybill_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // rail_waybill_dto_collection_query_parameters->skip
    if(rail_waybill_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", rail_waybill_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // rail_waybill_dto_collection_query_parameters->count
    if(rail_waybill_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", rail_waybill_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // rail_waybill_dto_collection_query_parameters->filter
    if(rail_waybill_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", rail_waybill_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto_collection_query_parameters->order_by
    if(rail_waybill_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", rail_waybill_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto_collection_query_parameters->search
    if(rail_waybill_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", rail_waybill_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto_collection_query_parameters->select
    if(rail_waybill_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", rail_waybill_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto_collection_query_parameters->expand
    if(rail_waybill_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", rail_waybill_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto_collection_query_parameters->is_empty
    if(rail_waybill_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", rail_waybill_dto_collection_query_parameters->is_empty) == NULL) {
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

rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters_parseFromJSON(cJSON *rail_waybill_dto_collection_query_parametersJSON){

    rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters_local_var = NULL;

    // rail_waybill_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // rail_waybill_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // rail_waybill_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // rail_waybill_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(rail_waybill_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    rail_waybill_dto_collection_query_parameters_local_var = rail_waybill_dto_collection_query_parameters_create (
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

    return rail_waybill_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
