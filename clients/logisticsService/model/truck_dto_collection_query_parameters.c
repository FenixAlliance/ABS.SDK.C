#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "truck_dto_collection_query_parameters.h"



truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters_create(
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
    truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters_local_var = malloc(sizeof(truck_dto_collection_query_parameters_t));
    if (!truck_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    truck_dto_collection_query_parameters_local_var->top = top;
    truck_dto_collection_query_parameters_local_var->skip = skip;
    truck_dto_collection_query_parameters_local_var->count = count;
    truck_dto_collection_query_parameters_local_var->filter = filter;
    truck_dto_collection_query_parameters_local_var->order_by = order_by;
    truck_dto_collection_query_parameters_local_var->search = search;
    truck_dto_collection_query_parameters_local_var->select = select;
    truck_dto_collection_query_parameters_local_var->expand = expand;
    truck_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return truck_dto_collection_query_parameters_local_var;
}


void truck_dto_collection_query_parameters_free(truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters) {
    if(NULL == truck_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (truck_dto_collection_query_parameters->filter) {
        free(truck_dto_collection_query_parameters->filter);
        truck_dto_collection_query_parameters->filter = NULL;
    }
    if (truck_dto_collection_query_parameters->order_by) {
        free(truck_dto_collection_query_parameters->order_by);
        truck_dto_collection_query_parameters->order_by = NULL;
    }
    if (truck_dto_collection_query_parameters->search) {
        free(truck_dto_collection_query_parameters->search);
        truck_dto_collection_query_parameters->search = NULL;
    }
    if (truck_dto_collection_query_parameters->select) {
        free(truck_dto_collection_query_parameters->select);
        truck_dto_collection_query_parameters->select = NULL;
    }
    if (truck_dto_collection_query_parameters->expand) {
        free(truck_dto_collection_query_parameters->expand);
        truck_dto_collection_query_parameters->expand = NULL;
    }
    free(truck_dto_collection_query_parameters);
}

cJSON *truck_dto_collection_query_parameters_convertToJSON(truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // truck_dto_collection_query_parameters->top
    if(truck_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", truck_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // truck_dto_collection_query_parameters->skip
    if(truck_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", truck_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // truck_dto_collection_query_parameters->count
    if(truck_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", truck_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // truck_dto_collection_query_parameters->filter
    if(truck_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", truck_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto_collection_query_parameters->order_by
    if(truck_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", truck_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto_collection_query_parameters->search
    if(truck_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", truck_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto_collection_query_parameters->select
    if(truck_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", truck_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto_collection_query_parameters->expand
    if(truck_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", truck_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto_collection_query_parameters->is_empty
    if(truck_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", truck_dto_collection_query_parameters->is_empty) == NULL) {
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

truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters_parseFromJSON(cJSON *truck_dto_collection_query_parametersJSON){

    truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters_local_var = NULL;

    // truck_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // truck_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // truck_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // truck_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // truck_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // truck_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // truck_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // truck_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // truck_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(truck_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    truck_dto_collection_query_parameters_local_var = truck_dto_collection_query_parameters_create (
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

    return truck_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
