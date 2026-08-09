#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_policy_dto_collection_query_parameters.h"



tax_policy_dto_collection_query_parameters_t *tax_policy_dto_collection_query_parameters_create(
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
    tax_policy_dto_collection_query_parameters_t *tax_policy_dto_collection_query_parameters_local_var = malloc(sizeof(tax_policy_dto_collection_query_parameters_t));
    if (!tax_policy_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    tax_policy_dto_collection_query_parameters_local_var->top = top;
    tax_policy_dto_collection_query_parameters_local_var->skip = skip;
    tax_policy_dto_collection_query_parameters_local_var->count = count;
    tax_policy_dto_collection_query_parameters_local_var->filter = filter;
    tax_policy_dto_collection_query_parameters_local_var->order_by = order_by;
    tax_policy_dto_collection_query_parameters_local_var->search = search;
    tax_policy_dto_collection_query_parameters_local_var->select = select;
    tax_policy_dto_collection_query_parameters_local_var->expand = expand;
    tax_policy_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return tax_policy_dto_collection_query_parameters_local_var;
}


void tax_policy_dto_collection_query_parameters_free(tax_policy_dto_collection_query_parameters_t *tax_policy_dto_collection_query_parameters) {
    if(NULL == tax_policy_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_policy_dto_collection_query_parameters->filter) {
        free(tax_policy_dto_collection_query_parameters->filter);
        tax_policy_dto_collection_query_parameters->filter = NULL;
    }
    if (tax_policy_dto_collection_query_parameters->order_by) {
        free(tax_policy_dto_collection_query_parameters->order_by);
        tax_policy_dto_collection_query_parameters->order_by = NULL;
    }
    if (tax_policy_dto_collection_query_parameters->search) {
        free(tax_policy_dto_collection_query_parameters->search);
        tax_policy_dto_collection_query_parameters->search = NULL;
    }
    if (tax_policy_dto_collection_query_parameters->select) {
        free(tax_policy_dto_collection_query_parameters->select);
        tax_policy_dto_collection_query_parameters->select = NULL;
    }
    if (tax_policy_dto_collection_query_parameters->expand) {
        free(tax_policy_dto_collection_query_parameters->expand);
        tax_policy_dto_collection_query_parameters->expand = NULL;
    }
    free(tax_policy_dto_collection_query_parameters);
}

cJSON *tax_policy_dto_collection_query_parameters_convertToJSON(tax_policy_dto_collection_query_parameters_t *tax_policy_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // tax_policy_dto_collection_query_parameters->top
    if(tax_policy_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", tax_policy_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto_collection_query_parameters->skip
    if(tax_policy_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", tax_policy_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto_collection_query_parameters->count
    if(tax_policy_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", tax_policy_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto_collection_query_parameters->filter
    if(tax_policy_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", tax_policy_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_collection_query_parameters->order_by
    if(tax_policy_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", tax_policy_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_collection_query_parameters->search
    if(tax_policy_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", tax_policy_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_collection_query_parameters->select
    if(tax_policy_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", tax_policy_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_collection_query_parameters->expand
    if(tax_policy_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", tax_policy_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_collection_query_parameters->is_empty
    if(tax_policy_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", tax_policy_dto_collection_query_parameters->is_empty) == NULL) {
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

tax_policy_dto_collection_query_parameters_t *tax_policy_dto_collection_query_parameters_parseFromJSON(cJSON *tax_policy_dto_collection_query_parametersJSON){

    tax_policy_dto_collection_query_parameters_t *tax_policy_dto_collection_query_parameters_local_var = NULL;

    // tax_policy_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    tax_policy_dto_collection_query_parameters_local_var = tax_policy_dto_collection_query_parameters_create (
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

    return tax_policy_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
