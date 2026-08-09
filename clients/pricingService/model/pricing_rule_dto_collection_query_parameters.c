#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pricing_rule_dto_collection_query_parameters.h"



pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters_create(
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
    pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters_local_var = malloc(sizeof(pricing_rule_dto_collection_query_parameters_t));
    if (!pricing_rule_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    pricing_rule_dto_collection_query_parameters_local_var->top = top;
    pricing_rule_dto_collection_query_parameters_local_var->skip = skip;
    pricing_rule_dto_collection_query_parameters_local_var->count = count;
    pricing_rule_dto_collection_query_parameters_local_var->filter = filter;
    pricing_rule_dto_collection_query_parameters_local_var->order_by = order_by;
    pricing_rule_dto_collection_query_parameters_local_var->search = search;
    pricing_rule_dto_collection_query_parameters_local_var->select = select;
    pricing_rule_dto_collection_query_parameters_local_var->expand = expand;
    pricing_rule_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return pricing_rule_dto_collection_query_parameters_local_var;
}


void pricing_rule_dto_collection_query_parameters_free(pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters) {
    if(NULL == pricing_rule_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (pricing_rule_dto_collection_query_parameters->filter) {
        free(pricing_rule_dto_collection_query_parameters->filter);
        pricing_rule_dto_collection_query_parameters->filter = NULL;
    }
    if (pricing_rule_dto_collection_query_parameters->order_by) {
        free(pricing_rule_dto_collection_query_parameters->order_by);
        pricing_rule_dto_collection_query_parameters->order_by = NULL;
    }
    if (pricing_rule_dto_collection_query_parameters->search) {
        free(pricing_rule_dto_collection_query_parameters->search);
        pricing_rule_dto_collection_query_parameters->search = NULL;
    }
    if (pricing_rule_dto_collection_query_parameters->select) {
        free(pricing_rule_dto_collection_query_parameters->select);
        pricing_rule_dto_collection_query_parameters->select = NULL;
    }
    if (pricing_rule_dto_collection_query_parameters->expand) {
        free(pricing_rule_dto_collection_query_parameters->expand);
        pricing_rule_dto_collection_query_parameters->expand = NULL;
    }
    free(pricing_rule_dto_collection_query_parameters);
}

cJSON *pricing_rule_dto_collection_query_parameters_convertToJSON(pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // pricing_rule_dto_collection_query_parameters->top
    if(pricing_rule_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", pricing_rule_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_dto_collection_query_parameters->skip
    if(pricing_rule_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", pricing_rule_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_dto_collection_query_parameters->count
    if(pricing_rule_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", pricing_rule_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // pricing_rule_dto_collection_query_parameters->filter
    if(pricing_rule_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", pricing_rule_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_dto_collection_query_parameters->order_by
    if(pricing_rule_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", pricing_rule_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_dto_collection_query_parameters->search
    if(pricing_rule_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", pricing_rule_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_dto_collection_query_parameters->select
    if(pricing_rule_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", pricing_rule_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_dto_collection_query_parameters->expand
    if(pricing_rule_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", pricing_rule_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_dto_collection_query_parameters->is_empty
    if(pricing_rule_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", pricing_rule_dto_collection_query_parameters->is_empty) == NULL) {
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

pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters_parseFromJSON(cJSON *pricing_rule_dto_collection_query_parametersJSON){

    pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters_local_var = NULL;

    // pricing_rule_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // pricing_rule_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // pricing_rule_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // pricing_rule_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // pricing_rule_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // pricing_rule_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // pricing_rule_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(pricing_rule_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    pricing_rule_dto_collection_query_parameters_local_var = pricing_rule_dto_collection_query_parameters_create (
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

    return pricing_rule_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
