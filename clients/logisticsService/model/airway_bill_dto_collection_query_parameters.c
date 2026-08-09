#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "airway_bill_dto_collection_query_parameters.h"



airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters_create(
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
    airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters_local_var = malloc(sizeof(airway_bill_dto_collection_query_parameters_t));
    if (!airway_bill_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    airway_bill_dto_collection_query_parameters_local_var->top = top;
    airway_bill_dto_collection_query_parameters_local_var->skip = skip;
    airway_bill_dto_collection_query_parameters_local_var->count = count;
    airway_bill_dto_collection_query_parameters_local_var->filter = filter;
    airway_bill_dto_collection_query_parameters_local_var->order_by = order_by;
    airway_bill_dto_collection_query_parameters_local_var->search = search;
    airway_bill_dto_collection_query_parameters_local_var->select = select;
    airway_bill_dto_collection_query_parameters_local_var->expand = expand;
    airway_bill_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return airway_bill_dto_collection_query_parameters_local_var;
}


void airway_bill_dto_collection_query_parameters_free(airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters) {
    if(NULL == airway_bill_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (airway_bill_dto_collection_query_parameters->filter) {
        free(airway_bill_dto_collection_query_parameters->filter);
        airway_bill_dto_collection_query_parameters->filter = NULL;
    }
    if (airway_bill_dto_collection_query_parameters->order_by) {
        free(airway_bill_dto_collection_query_parameters->order_by);
        airway_bill_dto_collection_query_parameters->order_by = NULL;
    }
    if (airway_bill_dto_collection_query_parameters->search) {
        free(airway_bill_dto_collection_query_parameters->search);
        airway_bill_dto_collection_query_parameters->search = NULL;
    }
    if (airway_bill_dto_collection_query_parameters->select) {
        free(airway_bill_dto_collection_query_parameters->select);
        airway_bill_dto_collection_query_parameters->select = NULL;
    }
    if (airway_bill_dto_collection_query_parameters->expand) {
        free(airway_bill_dto_collection_query_parameters->expand);
        airway_bill_dto_collection_query_parameters->expand = NULL;
    }
    free(airway_bill_dto_collection_query_parameters);
}

cJSON *airway_bill_dto_collection_query_parameters_convertToJSON(airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // airway_bill_dto_collection_query_parameters->top
    if(airway_bill_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", airway_bill_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_dto_collection_query_parameters->skip
    if(airway_bill_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", airway_bill_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_dto_collection_query_parameters->count
    if(airway_bill_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", airway_bill_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // airway_bill_dto_collection_query_parameters->filter
    if(airway_bill_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", airway_bill_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_collection_query_parameters->order_by
    if(airway_bill_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", airway_bill_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_collection_query_parameters->search
    if(airway_bill_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", airway_bill_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_collection_query_parameters->select
    if(airway_bill_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", airway_bill_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_collection_query_parameters->expand
    if(airway_bill_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", airway_bill_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_collection_query_parameters->is_empty
    if(airway_bill_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", airway_bill_dto_collection_query_parameters->is_empty) == NULL) {
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

airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters_parseFromJSON(cJSON *airway_bill_dto_collection_query_parametersJSON){

    airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters_local_var = NULL;

    // airway_bill_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // airway_bill_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    airway_bill_dto_collection_query_parameters_local_var = airway_bill_dto_collection_query_parameters_create (
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

    return airway_bill_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
