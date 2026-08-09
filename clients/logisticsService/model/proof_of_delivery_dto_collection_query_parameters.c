#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "proof_of_delivery_dto_collection_query_parameters.h"



proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters_create(
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
    proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters_local_var = malloc(sizeof(proof_of_delivery_dto_collection_query_parameters_t));
    if (!proof_of_delivery_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    proof_of_delivery_dto_collection_query_parameters_local_var->top = top;
    proof_of_delivery_dto_collection_query_parameters_local_var->skip = skip;
    proof_of_delivery_dto_collection_query_parameters_local_var->count = count;
    proof_of_delivery_dto_collection_query_parameters_local_var->filter = filter;
    proof_of_delivery_dto_collection_query_parameters_local_var->order_by = order_by;
    proof_of_delivery_dto_collection_query_parameters_local_var->search = search;
    proof_of_delivery_dto_collection_query_parameters_local_var->select = select;
    proof_of_delivery_dto_collection_query_parameters_local_var->expand = expand;
    proof_of_delivery_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return proof_of_delivery_dto_collection_query_parameters_local_var;
}


void proof_of_delivery_dto_collection_query_parameters_free(proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters) {
    if(NULL == proof_of_delivery_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (proof_of_delivery_dto_collection_query_parameters->filter) {
        free(proof_of_delivery_dto_collection_query_parameters->filter);
        proof_of_delivery_dto_collection_query_parameters->filter = NULL;
    }
    if (proof_of_delivery_dto_collection_query_parameters->order_by) {
        free(proof_of_delivery_dto_collection_query_parameters->order_by);
        proof_of_delivery_dto_collection_query_parameters->order_by = NULL;
    }
    if (proof_of_delivery_dto_collection_query_parameters->search) {
        free(proof_of_delivery_dto_collection_query_parameters->search);
        proof_of_delivery_dto_collection_query_parameters->search = NULL;
    }
    if (proof_of_delivery_dto_collection_query_parameters->select) {
        free(proof_of_delivery_dto_collection_query_parameters->select);
        proof_of_delivery_dto_collection_query_parameters->select = NULL;
    }
    if (proof_of_delivery_dto_collection_query_parameters->expand) {
        free(proof_of_delivery_dto_collection_query_parameters->expand);
        proof_of_delivery_dto_collection_query_parameters->expand = NULL;
    }
    free(proof_of_delivery_dto_collection_query_parameters);
}

cJSON *proof_of_delivery_dto_collection_query_parameters_convertToJSON(proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // proof_of_delivery_dto_collection_query_parameters->top
    if(proof_of_delivery_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", proof_of_delivery_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->skip
    if(proof_of_delivery_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", proof_of_delivery_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->count
    if(proof_of_delivery_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", proof_of_delivery_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->filter
    if(proof_of_delivery_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", proof_of_delivery_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->order_by
    if(proof_of_delivery_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", proof_of_delivery_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->search
    if(proof_of_delivery_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", proof_of_delivery_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->select
    if(proof_of_delivery_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", proof_of_delivery_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->expand
    if(proof_of_delivery_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", proof_of_delivery_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_collection_query_parameters->is_empty
    if(proof_of_delivery_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", proof_of_delivery_dto_collection_query_parameters->is_empty) == NULL) {
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

proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters_parseFromJSON(cJSON *proof_of_delivery_dto_collection_query_parametersJSON){

    proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters_local_var = NULL;

    // proof_of_delivery_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    proof_of_delivery_dto_collection_query_parameters_local_var = proof_of_delivery_dto_collection_query_parameters_create (
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

    return proof_of_delivery_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
