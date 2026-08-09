#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_issuance_dto_collection_query_parameters.h"



share_issuance_dto_collection_query_parameters_t *share_issuance_dto_collection_query_parameters_create(
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
    share_issuance_dto_collection_query_parameters_t *share_issuance_dto_collection_query_parameters_local_var = malloc(sizeof(share_issuance_dto_collection_query_parameters_t));
    if (!share_issuance_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    share_issuance_dto_collection_query_parameters_local_var->top = top;
    share_issuance_dto_collection_query_parameters_local_var->skip = skip;
    share_issuance_dto_collection_query_parameters_local_var->count = count;
    share_issuance_dto_collection_query_parameters_local_var->filter = filter;
    share_issuance_dto_collection_query_parameters_local_var->order_by = order_by;
    share_issuance_dto_collection_query_parameters_local_var->search = search;
    share_issuance_dto_collection_query_parameters_local_var->select = select;
    share_issuance_dto_collection_query_parameters_local_var->expand = expand;
    share_issuance_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return share_issuance_dto_collection_query_parameters_local_var;
}


void share_issuance_dto_collection_query_parameters_free(share_issuance_dto_collection_query_parameters_t *share_issuance_dto_collection_query_parameters) {
    if(NULL == share_issuance_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (share_issuance_dto_collection_query_parameters->filter) {
        free(share_issuance_dto_collection_query_parameters->filter);
        share_issuance_dto_collection_query_parameters->filter = NULL;
    }
    if (share_issuance_dto_collection_query_parameters->order_by) {
        free(share_issuance_dto_collection_query_parameters->order_by);
        share_issuance_dto_collection_query_parameters->order_by = NULL;
    }
    if (share_issuance_dto_collection_query_parameters->search) {
        free(share_issuance_dto_collection_query_parameters->search);
        share_issuance_dto_collection_query_parameters->search = NULL;
    }
    if (share_issuance_dto_collection_query_parameters->select) {
        free(share_issuance_dto_collection_query_parameters->select);
        share_issuance_dto_collection_query_parameters->select = NULL;
    }
    if (share_issuance_dto_collection_query_parameters->expand) {
        free(share_issuance_dto_collection_query_parameters->expand);
        share_issuance_dto_collection_query_parameters->expand = NULL;
    }
    free(share_issuance_dto_collection_query_parameters);
}

cJSON *share_issuance_dto_collection_query_parameters_convertToJSON(share_issuance_dto_collection_query_parameters_t *share_issuance_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // share_issuance_dto_collection_query_parameters->top
    if(share_issuance_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", share_issuance_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // share_issuance_dto_collection_query_parameters->skip
    if(share_issuance_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", share_issuance_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // share_issuance_dto_collection_query_parameters->count
    if(share_issuance_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", share_issuance_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // share_issuance_dto_collection_query_parameters->filter
    if(share_issuance_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", share_issuance_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_collection_query_parameters->order_by
    if(share_issuance_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", share_issuance_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_collection_query_parameters->search
    if(share_issuance_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", share_issuance_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_collection_query_parameters->select
    if(share_issuance_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", share_issuance_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_collection_query_parameters->expand
    if(share_issuance_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", share_issuance_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_collection_query_parameters->is_empty
    if(share_issuance_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", share_issuance_dto_collection_query_parameters->is_empty) == NULL) {
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

share_issuance_dto_collection_query_parameters_t *share_issuance_dto_collection_query_parameters_parseFromJSON(cJSON *share_issuance_dto_collection_query_parametersJSON){

    share_issuance_dto_collection_query_parameters_t *share_issuance_dto_collection_query_parameters_local_var = NULL;

    // share_issuance_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // share_issuance_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // share_issuance_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // share_issuance_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    share_issuance_dto_collection_query_parameters_local_var = share_issuance_dto_collection_query_parameters_create (
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

    return share_issuance_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
