#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_dto_collection_query_parameters.h"



shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters_create(
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
    shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters_local_var = malloc(sizeof(shipment_dto_collection_query_parameters_t));
    if (!shipment_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    shipment_dto_collection_query_parameters_local_var->top = top;
    shipment_dto_collection_query_parameters_local_var->skip = skip;
    shipment_dto_collection_query_parameters_local_var->count = count;
    shipment_dto_collection_query_parameters_local_var->filter = filter;
    shipment_dto_collection_query_parameters_local_var->order_by = order_by;
    shipment_dto_collection_query_parameters_local_var->search = search;
    shipment_dto_collection_query_parameters_local_var->select = select;
    shipment_dto_collection_query_parameters_local_var->expand = expand;
    shipment_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return shipment_dto_collection_query_parameters_local_var;
}


void shipment_dto_collection_query_parameters_free(shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters) {
    if(NULL == shipment_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (shipment_dto_collection_query_parameters->filter) {
        free(shipment_dto_collection_query_parameters->filter);
        shipment_dto_collection_query_parameters->filter = NULL;
    }
    if (shipment_dto_collection_query_parameters->order_by) {
        free(shipment_dto_collection_query_parameters->order_by);
        shipment_dto_collection_query_parameters->order_by = NULL;
    }
    if (shipment_dto_collection_query_parameters->search) {
        free(shipment_dto_collection_query_parameters->search);
        shipment_dto_collection_query_parameters->search = NULL;
    }
    if (shipment_dto_collection_query_parameters->select) {
        free(shipment_dto_collection_query_parameters->select);
        shipment_dto_collection_query_parameters->select = NULL;
    }
    if (shipment_dto_collection_query_parameters->expand) {
        free(shipment_dto_collection_query_parameters->expand);
        shipment_dto_collection_query_parameters->expand = NULL;
    }
    free(shipment_dto_collection_query_parameters);
}

cJSON *shipment_dto_collection_query_parameters_convertToJSON(shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // shipment_dto_collection_query_parameters->top
    if(shipment_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", shipment_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipment_dto_collection_query_parameters->skip
    if(shipment_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", shipment_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipment_dto_collection_query_parameters->count
    if(shipment_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", shipment_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_dto_collection_query_parameters->filter
    if(shipment_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", shipment_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_collection_query_parameters->order_by
    if(shipment_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", shipment_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_collection_query_parameters->search
    if(shipment_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", shipment_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_collection_query_parameters->select
    if(shipment_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", shipment_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_collection_query_parameters->expand
    if(shipment_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", shipment_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_collection_query_parameters->is_empty
    if(shipment_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", shipment_dto_collection_query_parameters->is_empty) == NULL) {
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

shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters_parseFromJSON(cJSON *shipment_dto_collection_query_parametersJSON){

    shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters_local_var = NULL;

    // shipment_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // shipment_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // shipment_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // shipment_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // shipment_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // shipment_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // shipment_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // shipment_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // shipment_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(shipment_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    shipment_dto_collection_query_parameters_local_var = shipment_dto_collection_query_parameters_create (
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

    return shipment_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
