#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "private_message_dto_collection_query_parameters.h"



private_message_dto_collection_query_parameters_t *private_message_dto_collection_query_parameters_create(
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
    private_message_dto_collection_query_parameters_t *private_message_dto_collection_query_parameters_local_var = malloc(sizeof(private_message_dto_collection_query_parameters_t));
    if (!private_message_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    private_message_dto_collection_query_parameters_local_var->top = top;
    private_message_dto_collection_query_parameters_local_var->skip = skip;
    private_message_dto_collection_query_parameters_local_var->count = count;
    private_message_dto_collection_query_parameters_local_var->filter = filter;
    private_message_dto_collection_query_parameters_local_var->order_by = order_by;
    private_message_dto_collection_query_parameters_local_var->search = search;
    private_message_dto_collection_query_parameters_local_var->select = select;
    private_message_dto_collection_query_parameters_local_var->expand = expand;
    private_message_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return private_message_dto_collection_query_parameters_local_var;
}


void private_message_dto_collection_query_parameters_free(private_message_dto_collection_query_parameters_t *private_message_dto_collection_query_parameters) {
    if(NULL == private_message_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (private_message_dto_collection_query_parameters->filter) {
        free(private_message_dto_collection_query_parameters->filter);
        private_message_dto_collection_query_parameters->filter = NULL;
    }
    if (private_message_dto_collection_query_parameters->order_by) {
        free(private_message_dto_collection_query_parameters->order_by);
        private_message_dto_collection_query_parameters->order_by = NULL;
    }
    if (private_message_dto_collection_query_parameters->search) {
        free(private_message_dto_collection_query_parameters->search);
        private_message_dto_collection_query_parameters->search = NULL;
    }
    if (private_message_dto_collection_query_parameters->select) {
        free(private_message_dto_collection_query_parameters->select);
        private_message_dto_collection_query_parameters->select = NULL;
    }
    if (private_message_dto_collection_query_parameters->expand) {
        free(private_message_dto_collection_query_parameters->expand);
        private_message_dto_collection_query_parameters->expand = NULL;
    }
    free(private_message_dto_collection_query_parameters);
}

cJSON *private_message_dto_collection_query_parameters_convertToJSON(private_message_dto_collection_query_parameters_t *private_message_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // private_message_dto_collection_query_parameters->top
    if(private_message_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", private_message_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // private_message_dto_collection_query_parameters->skip
    if(private_message_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", private_message_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // private_message_dto_collection_query_parameters->count
    if(private_message_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", private_message_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // private_message_dto_collection_query_parameters->filter
    if(private_message_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", private_message_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_collection_query_parameters->order_by
    if(private_message_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", private_message_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_collection_query_parameters->search
    if(private_message_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", private_message_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_collection_query_parameters->select
    if(private_message_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", private_message_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_collection_query_parameters->expand
    if(private_message_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", private_message_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_collection_query_parameters->is_empty
    if(private_message_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", private_message_dto_collection_query_parameters->is_empty) == NULL) {
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

private_message_dto_collection_query_parameters_t *private_message_dto_collection_query_parameters_parseFromJSON(cJSON *private_message_dto_collection_query_parametersJSON){

    private_message_dto_collection_query_parameters_t *private_message_dto_collection_query_parameters_local_var = NULL;

    // private_message_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // private_message_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // private_message_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // private_message_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // private_message_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // private_message_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // private_message_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // private_message_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // private_message_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(private_message_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    private_message_dto_collection_query_parameters_local_var = private_message_dto_collection_query_parameters_create (
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

    return private_message_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
