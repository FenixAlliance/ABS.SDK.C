#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "outbox_message_dto_collection_query_parameters.h"



outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters_create(
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
    outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters_local_var = malloc(sizeof(outbox_message_dto_collection_query_parameters_t));
    if (!outbox_message_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    outbox_message_dto_collection_query_parameters_local_var->top = top;
    outbox_message_dto_collection_query_parameters_local_var->skip = skip;
    outbox_message_dto_collection_query_parameters_local_var->count = count;
    outbox_message_dto_collection_query_parameters_local_var->filter = filter;
    outbox_message_dto_collection_query_parameters_local_var->order_by = order_by;
    outbox_message_dto_collection_query_parameters_local_var->search = search;
    outbox_message_dto_collection_query_parameters_local_var->select = select;
    outbox_message_dto_collection_query_parameters_local_var->expand = expand;
    outbox_message_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return outbox_message_dto_collection_query_parameters_local_var;
}


void outbox_message_dto_collection_query_parameters_free(outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters) {
    if(NULL == outbox_message_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (outbox_message_dto_collection_query_parameters->filter) {
        free(outbox_message_dto_collection_query_parameters->filter);
        outbox_message_dto_collection_query_parameters->filter = NULL;
    }
    if (outbox_message_dto_collection_query_parameters->order_by) {
        free(outbox_message_dto_collection_query_parameters->order_by);
        outbox_message_dto_collection_query_parameters->order_by = NULL;
    }
    if (outbox_message_dto_collection_query_parameters->search) {
        free(outbox_message_dto_collection_query_parameters->search);
        outbox_message_dto_collection_query_parameters->search = NULL;
    }
    if (outbox_message_dto_collection_query_parameters->select) {
        free(outbox_message_dto_collection_query_parameters->select);
        outbox_message_dto_collection_query_parameters->select = NULL;
    }
    if (outbox_message_dto_collection_query_parameters->expand) {
        free(outbox_message_dto_collection_query_parameters->expand);
        outbox_message_dto_collection_query_parameters->expand = NULL;
    }
    free(outbox_message_dto_collection_query_parameters);
}

cJSON *outbox_message_dto_collection_query_parameters_convertToJSON(outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // outbox_message_dto_collection_query_parameters->top
    if(outbox_message_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", outbox_message_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_message_dto_collection_query_parameters->skip
    if(outbox_message_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", outbox_message_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_message_dto_collection_query_parameters->count
    if(outbox_message_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", outbox_message_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // outbox_message_dto_collection_query_parameters->filter
    if(outbox_message_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", outbox_message_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto_collection_query_parameters->order_by
    if(outbox_message_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", outbox_message_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto_collection_query_parameters->search
    if(outbox_message_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", outbox_message_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto_collection_query_parameters->select
    if(outbox_message_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", outbox_message_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto_collection_query_parameters->expand
    if(outbox_message_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", outbox_message_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto_collection_query_parameters->is_empty
    if(outbox_message_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", outbox_message_dto_collection_query_parameters->is_empty) == NULL) {
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

outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters_parseFromJSON(cJSON *outbox_message_dto_collection_query_parametersJSON){

    outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters_local_var = NULL;

    // outbox_message_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // outbox_message_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // outbox_message_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // outbox_message_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // outbox_message_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // outbox_message_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // outbox_message_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // outbox_message_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // outbox_message_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(outbox_message_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    outbox_message_dto_collection_query_parameters_local_var = outbox_message_dto_collection_query_parameters_create (
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

    return outbox_message_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
