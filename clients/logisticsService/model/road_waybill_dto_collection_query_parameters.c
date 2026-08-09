#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "road_waybill_dto_collection_query_parameters.h"



road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters_create(
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
    road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters_local_var = malloc(sizeof(road_waybill_dto_collection_query_parameters_t));
    if (!road_waybill_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    road_waybill_dto_collection_query_parameters_local_var->top = top;
    road_waybill_dto_collection_query_parameters_local_var->skip = skip;
    road_waybill_dto_collection_query_parameters_local_var->count = count;
    road_waybill_dto_collection_query_parameters_local_var->filter = filter;
    road_waybill_dto_collection_query_parameters_local_var->order_by = order_by;
    road_waybill_dto_collection_query_parameters_local_var->search = search;
    road_waybill_dto_collection_query_parameters_local_var->select = select;
    road_waybill_dto_collection_query_parameters_local_var->expand = expand;
    road_waybill_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return road_waybill_dto_collection_query_parameters_local_var;
}


void road_waybill_dto_collection_query_parameters_free(road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters) {
    if(NULL == road_waybill_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (road_waybill_dto_collection_query_parameters->filter) {
        free(road_waybill_dto_collection_query_parameters->filter);
        road_waybill_dto_collection_query_parameters->filter = NULL;
    }
    if (road_waybill_dto_collection_query_parameters->order_by) {
        free(road_waybill_dto_collection_query_parameters->order_by);
        road_waybill_dto_collection_query_parameters->order_by = NULL;
    }
    if (road_waybill_dto_collection_query_parameters->search) {
        free(road_waybill_dto_collection_query_parameters->search);
        road_waybill_dto_collection_query_parameters->search = NULL;
    }
    if (road_waybill_dto_collection_query_parameters->select) {
        free(road_waybill_dto_collection_query_parameters->select);
        road_waybill_dto_collection_query_parameters->select = NULL;
    }
    if (road_waybill_dto_collection_query_parameters->expand) {
        free(road_waybill_dto_collection_query_parameters->expand);
        road_waybill_dto_collection_query_parameters->expand = NULL;
    }
    free(road_waybill_dto_collection_query_parameters);
}

cJSON *road_waybill_dto_collection_query_parameters_convertToJSON(road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // road_waybill_dto_collection_query_parameters->top
    if(road_waybill_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", road_waybill_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // road_waybill_dto_collection_query_parameters->skip
    if(road_waybill_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", road_waybill_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // road_waybill_dto_collection_query_parameters->count
    if(road_waybill_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", road_waybill_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // road_waybill_dto_collection_query_parameters->filter
    if(road_waybill_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", road_waybill_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_collection_query_parameters->order_by
    if(road_waybill_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", road_waybill_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_collection_query_parameters->search
    if(road_waybill_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", road_waybill_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_collection_query_parameters->select
    if(road_waybill_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", road_waybill_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_collection_query_parameters->expand
    if(road_waybill_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", road_waybill_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_collection_query_parameters->is_empty
    if(road_waybill_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", road_waybill_dto_collection_query_parameters->is_empty) == NULL) {
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

road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters_parseFromJSON(cJSON *road_waybill_dto_collection_query_parametersJSON){

    road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters_local_var = NULL;

    // road_waybill_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // road_waybill_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // road_waybill_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // road_waybill_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    road_waybill_dto_collection_query_parameters_local_var = road_waybill_dto_collection_query_parameters_create (
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

    return road_waybill_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
