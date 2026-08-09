#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "seaway_bill_dto_collection_query_parameters.h"



seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters_create(
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
    seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters_local_var = malloc(sizeof(seaway_bill_dto_collection_query_parameters_t));
    if (!seaway_bill_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    seaway_bill_dto_collection_query_parameters_local_var->top = top;
    seaway_bill_dto_collection_query_parameters_local_var->skip = skip;
    seaway_bill_dto_collection_query_parameters_local_var->count = count;
    seaway_bill_dto_collection_query_parameters_local_var->filter = filter;
    seaway_bill_dto_collection_query_parameters_local_var->order_by = order_by;
    seaway_bill_dto_collection_query_parameters_local_var->search = search;
    seaway_bill_dto_collection_query_parameters_local_var->select = select;
    seaway_bill_dto_collection_query_parameters_local_var->expand = expand;
    seaway_bill_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return seaway_bill_dto_collection_query_parameters_local_var;
}


void seaway_bill_dto_collection_query_parameters_free(seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters) {
    if(NULL == seaway_bill_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (seaway_bill_dto_collection_query_parameters->filter) {
        free(seaway_bill_dto_collection_query_parameters->filter);
        seaway_bill_dto_collection_query_parameters->filter = NULL;
    }
    if (seaway_bill_dto_collection_query_parameters->order_by) {
        free(seaway_bill_dto_collection_query_parameters->order_by);
        seaway_bill_dto_collection_query_parameters->order_by = NULL;
    }
    if (seaway_bill_dto_collection_query_parameters->search) {
        free(seaway_bill_dto_collection_query_parameters->search);
        seaway_bill_dto_collection_query_parameters->search = NULL;
    }
    if (seaway_bill_dto_collection_query_parameters->select) {
        free(seaway_bill_dto_collection_query_parameters->select);
        seaway_bill_dto_collection_query_parameters->select = NULL;
    }
    if (seaway_bill_dto_collection_query_parameters->expand) {
        free(seaway_bill_dto_collection_query_parameters->expand);
        seaway_bill_dto_collection_query_parameters->expand = NULL;
    }
    free(seaway_bill_dto_collection_query_parameters);
}

cJSON *seaway_bill_dto_collection_query_parameters_convertToJSON(seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // seaway_bill_dto_collection_query_parameters->top
    if(seaway_bill_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", seaway_bill_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // seaway_bill_dto_collection_query_parameters->skip
    if(seaway_bill_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", seaway_bill_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // seaway_bill_dto_collection_query_parameters->count
    if(seaway_bill_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", seaway_bill_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // seaway_bill_dto_collection_query_parameters->filter
    if(seaway_bill_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", seaway_bill_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto_collection_query_parameters->order_by
    if(seaway_bill_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", seaway_bill_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto_collection_query_parameters->search
    if(seaway_bill_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", seaway_bill_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto_collection_query_parameters->select
    if(seaway_bill_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", seaway_bill_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto_collection_query_parameters->expand
    if(seaway_bill_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", seaway_bill_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto_collection_query_parameters->is_empty
    if(seaway_bill_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", seaway_bill_dto_collection_query_parameters->is_empty) == NULL) {
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

seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters_parseFromJSON(cJSON *seaway_bill_dto_collection_query_parametersJSON){

    seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters_local_var = NULL;

    // seaway_bill_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // seaway_bill_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // seaway_bill_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // seaway_bill_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(seaway_bill_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    seaway_bill_dto_collection_query_parameters_local_var = seaway_bill_dto_collection_query_parameters_create (
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

    return seaway_bill_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
