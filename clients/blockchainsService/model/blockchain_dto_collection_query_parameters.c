#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_dto_collection_query_parameters.h"



blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters_create(
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
    blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters_local_var = malloc(sizeof(blockchain_dto_collection_query_parameters_t));
    if (!blockchain_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    blockchain_dto_collection_query_parameters_local_var->top = top;
    blockchain_dto_collection_query_parameters_local_var->skip = skip;
    blockchain_dto_collection_query_parameters_local_var->count = count;
    blockchain_dto_collection_query_parameters_local_var->filter = filter;
    blockchain_dto_collection_query_parameters_local_var->order_by = order_by;
    blockchain_dto_collection_query_parameters_local_var->search = search;
    blockchain_dto_collection_query_parameters_local_var->select = select;
    blockchain_dto_collection_query_parameters_local_var->expand = expand;
    blockchain_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return blockchain_dto_collection_query_parameters_local_var;
}


void blockchain_dto_collection_query_parameters_free(blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters) {
    if(NULL == blockchain_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_dto_collection_query_parameters->filter) {
        free(blockchain_dto_collection_query_parameters->filter);
        blockchain_dto_collection_query_parameters->filter = NULL;
    }
    if (blockchain_dto_collection_query_parameters->order_by) {
        free(blockchain_dto_collection_query_parameters->order_by);
        blockchain_dto_collection_query_parameters->order_by = NULL;
    }
    if (blockchain_dto_collection_query_parameters->search) {
        free(blockchain_dto_collection_query_parameters->search);
        blockchain_dto_collection_query_parameters->search = NULL;
    }
    if (blockchain_dto_collection_query_parameters->select) {
        free(blockchain_dto_collection_query_parameters->select);
        blockchain_dto_collection_query_parameters->select = NULL;
    }
    if (blockchain_dto_collection_query_parameters->expand) {
        free(blockchain_dto_collection_query_parameters->expand);
        blockchain_dto_collection_query_parameters->expand = NULL;
    }
    free(blockchain_dto_collection_query_parameters);
}

cJSON *blockchain_dto_collection_query_parameters_convertToJSON(blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_dto_collection_query_parameters->top
    if(blockchain_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", blockchain_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // blockchain_dto_collection_query_parameters->skip
    if(blockchain_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", blockchain_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // blockchain_dto_collection_query_parameters->count
    if(blockchain_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", blockchain_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // blockchain_dto_collection_query_parameters->filter
    if(blockchain_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", blockchain_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto_collection_query_parameters->order_by
    if(blockchain_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", blockchain_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto_collection_query_parameters->search
    if(blockchain_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", blockchain_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto_collection_query_parameters->select
    if(blockchain_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", blockchain_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto_collection_query_parameters->expand
    if(blockchain_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", blockchain_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto_collection_query_parameters->is_empty
    if(blockchain_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", blockchain_dto_collection_query_parameters->is_empty) == NULL) {
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

blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters_parseFromJSON(cJSON *blockchain_dto_collection_query_parametersJSON){

    blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters_local_var = NULL;

    // blockchain_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // blockchain_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // blockchain_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // blockchain_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // blockchain_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // blockchain_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // blockchain_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // blockchain_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // blockchain_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(blockchain_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    blockchain_dto_collection_query_parameters_local_var = blockchain_dto_collection_query_parameters_create (
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

    return blockchain_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
