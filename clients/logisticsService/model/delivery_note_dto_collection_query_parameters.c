#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delivery_note_dto_collection_query_parameters.h"



delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters_create(
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
    delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters_local_var = malloc(sizeof(delivery_note_dto_collection_query_parameters_t));
    if (!delivery_note_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    delivery_note_dto_collection_query_parameters_local_var->top = top;
    delivery_note_dto_collection_query_parameters_local_var->skip = skip;
    delivery_note_dto_collection_query_parameters_local_var->count = count;
    delivery_note_dto_collection_query_parameters_local_var->filter = filter;
    delivery_note_dto_collection_query_parameters_local_var->order_by = order_by;
    delivery_note_dto_collection_query_parameters_local_var->search = search;
    delivery_note_dto_collection_query_parameters_local_var->select = select;
    delivery_note_dto_collection_query_parameters_local_var->expand = expand;
    delivery_note_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return delivery_note_dto_collection_query_parameters_local_var;
}


void delivery_note_dto_collection_query_parameters_free(delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters) {
    if(NULL == delivery_note_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (delivery_note_dto_collection_query_parameters->filter) {
        free(delivery_note_dto_collection_query_parameters->filter);
        delivery_note_dto_collection_query_parameters->filter = NULL;
    }
    if (delivery_note_dto_collection_query_parameters->order_by) {
        free(delivery_note_dto_collection_query_parameters->order_by);
        delivery_note_dto_collection_query_parameters->order_by = NULL;
    }
    if (delivery_note_dto_collection_query_parameters->search) {
        free(delivery_note_dto_collection_query_parameters->search);
        delivery_note_dto_collection_query_parameters->search = NULL;
    }
    if (delivery_note_dto_collection_query_parameters->select) {
        free(delivery_note_dto_collection_query_parameters->select);
        delivery_note_dto_collection_query_parameters->select = NULL;
    }
    if (delivery_note_dto_collection_query_parameters->expand) {
        free(delivery_note_dto_collection_query_parameters->expand);
        delivery_note_dto_collection_query_parameters->expand = NULL;
    }
    free(delivery_note_dto_collection_query_parameters);
}

cJSON *delivery_note_dto_collection_query_parameters_convertToJSON(delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // delivery_note_dto_collection_query_parameters->top
    if(delivery_note_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", delivery_note_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // delivery_note_dto_collection_query_parameters->skip
    if(delivery_note_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", delivery_note_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // delivery_note_dto_collection_query_parameters->count
    if(delivery_note_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", delivery_note_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // delivery_note_dto_collection_query_parameters->filter
    if(delivery_note_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", delivery_note_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_collection_query_parameters->order_by
    if(delivery_note_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", delivery_note_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_collection_query_parameters->search
    if(delivery_note_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", delivery_note_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_collection_query_parameters->select
    if(delivery_note_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", delivery_note_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_collection_query_parameters->expand
    if(delivery_note_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", delivery_note_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_collection_query_parameters->is_empty
    if(delivery_note_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", delivery_note_dto_collection_query_parameters->is_empty) == NULL) {
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

delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters_parseFromJSON(cJSON *delivery_note_dto_collection_query_parametersJSON){

    delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters_local_var = NULL;

    // delivery_note_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // delivery_note_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // delivery_note_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // delivery_note_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    delivery_note_dto_collection_query_parameters_local_var = delivery_note_dto_collection_query_parameters_create (
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

    return delivery_note_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
