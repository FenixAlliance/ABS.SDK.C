#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vessel_dto_collection_query_parameters.h"



vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters_create(
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
    vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters_local_var = malloc(sizeof(vessel_dto_collection_query_parameters_t));
    if (!vessel_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    vessel_dto_collection_query_parameters_local_var->top = top;
    vessel_dto_collection_query_parameters_local_var->skip = skip;
    vessel_dto_collection_query_parameters_local_var->count = count;
    vessel_dto_collection_query_parameters_local_var->filter = filter;
    vessel_dto_collection_query_parameters_local_var->order_by = order_by;
    vessel_dto_collection_query_parameters_local_var->search = search;
    vessel_dto_collection_query_parameters_local_var->select = select;
    vessel_dto_collection_query_parameters_local_var->expand = expand;
    vessel_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return vessel_dto_collection_query_parameters_local_var;
}


void vessel_dto_collection_query_parameters_free(vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters) {
    if(NULL == vessel_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (vessel_dto_collection_query_parameters->filter) {
        free(vessel_dto_collection_query_parameters->filter);
        vessel_dto_collection_query_parameters->filter = NULL;
    }
    if (vessel_dto_collection_query_parameters->order_by) {
        free(vessel_dto_collection_query_parameters->order_by);
        vessel_dto_collection_query_parameters->order_by = NULL;
    }
    if (vessel_dto_collection_query_parameters->search) {
        free(vessel_dto_collection_query_parameters->search);
        vessel_dto_collection_query_parameters->search = NULL;
    }
    if (vessel_dto_collection_query_parameters->select) {
        free(vessel_dto_collection_query_parameters->select);
        vessel_dto_collection_query_parameters->select = NULL;
    }
    if (vessel_dto_collection_query_parameters->expand) {
        free(vessel_dto_collection_query_parameters->expand);
        vessel_dto_collection_query_parameters->expand = NULL;
    }
    free(vessel_dto_collection_query_parameters);
}

cJSON *vessel_dto_collection_query_parameters_convertToJSON(vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // vessel_dto_collection_query_parameters->top
    if(vessel_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", vessel_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto_collection_query_parameters->skip
    if(vessel_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", vessel_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto_collection_query_parameters->count
    if(vessel_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", vessel_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // vessel_dto_collection_query_parameters->filter
    if(vessel_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", vessel_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_collection_query_parameters->order_by
    if(vessel_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", vessel_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_collection_query_parameters->search
    if(vessel_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", vessel_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_collection_query_parameters->select
    if(vessel_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", vessel_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_collection_query_parameters->expand
    if(vessel_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", vessel_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_collection_query_parameters->is_empty
    if(vessel_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", vessel_dto_collection_query_parameters->is_empty) == NULL) {
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

vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters_parseFromJSON(cJSON *vessel_dto_collection_query_parametersJSON){

    vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters_local_var = NULL;

    // vessel_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // vessel_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // vessel_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // vessel_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // vessel_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // vessel_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // vessel_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(vessel_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    vessel_dto_collection_query_parameters_local_var = vessel_dto_collection_query_parameters_create (
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

    return vessel_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
