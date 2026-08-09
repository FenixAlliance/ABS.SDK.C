#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_flow_stage_dto_collection_query_parameters.h"



deal_unit_flow_stage_dto_collection_query_parameters_t *deal_unit_flow_stage_dto_collection_query_parameters_create(
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
    deal_unit_flow_stage_dto_collection_query_parameters_t *deal_unit_flow_stage_dto_collection_query_parameters_local_var = malloc(sizeof(deal_unit_flow_stage_dto_collection_query_parameters_t));
    if (!deal_unit_flow_stage_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->top = top;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->skip = skip;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->count = count;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->filter = filter;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->order_by = order_by;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->search = search;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->select = select;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->expand = expand;
    deal_unit_flow_stage_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return deal_unit_flow_stage_dto_collection_query_parameters_local_var;
}


void deal_unit_flow_stage_dto_collection_query_parameters_free(deal_unit_flow_stage_dto_collection_query_parameters_t *deal_unit_flow_stage_dto_collection_query_parameters) {
    if(NULL == deal_unit_flow_stage_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_flow_stage_dto_collection_query_parameters->filter) {
        free(deal_unit_flow_stage_dto_collection_query_parameters->filter);
        deal_unit_flow_stage_dto_collection_query_parameters->filter = NULL;
    }
    if (deal_unit_flow_stage_dto_collection_query_parameters->order_by) {
        free(deal_unit_flow_stage_dto_collection_query_parameters->order_by);
        deal_unit_flow_stage_dto_collection_query_parameters->order_by = NULL;
    }
    if (deal_unit_flow_stage_dto_collection_query_parameters->search) {
        free(deal_unit_flow_stage_dto_collection_query_parameters->search);
        deal_unit_flow_stage_dto_collection_query_parameters->search = NULL;
    }
    if (deal_unit_flow_stage_dto_collection_query_parameters->select) {
        free(deal_unit_flow_stage_dto_collection_query_parameters->select);
        deal_unit_flow_stage_dto_collection_query_parameters->select = NULL;
    }
    if (deal_unit_flow_stage_dto_collection_query_parameters->expand) {
        free(deal_unit_flow_stage_dto_collection_query_parameters->expand);
        deal_unit_flow_stage_dto_collection_query_parameters->expand = NULL;
    }
    free(deal_unit_flow_stage_dto_collection_query_parameters);
}

cJSON *deal_unit_flow_stage_dto_collection_query_parameters_convertToJSON(deal_unit_flow_stage_dto_collection_query_parameters_t *deal_unit_flow_stage_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_flow_stage_dto_collection_query_parameters->top
    if(deal_unit_flow_stage_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", deal_unit_flow_stage_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->skip
    if(deal_unit_flow_stage_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", deal_unit_flow_stage_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->count
    if(deal_unit_flow_stage_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", deal_unit_flow_stage_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->filter
    if(deal_unit_flow_stage_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", deal_unit_flow_stage_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->order_by
    if(deal_unit_flow_stage_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", deal_unit_flow_stage_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->search
    if(deal_unit_flow_stage_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", deal_unit_flow_stage_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->select
    if(deal_unit_flow_stage_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", deal_unit_flow_stage_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->expand
    if(deal_unit_flow_stage_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", deal_unit_flow_stage_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_collection_query_parameters->is_empty
    if(deal_unit_flow_stage_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", deal_unit_flow_stage_dto_collection_query_parameters->is_empty) == NULL) {
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

deal_unit_flow_stage_dto_collection_query_parameters_t *deal_unit_flow_stage_dto_collection_query_parameters_parseFromJSON(cJSON *deal_unit_flow_stage_dto_collection_query_parametersJSON){

    deal_unit_flow_stage_dto_collection_query_parameters_t *deal_unit_flow_stage_dto_collection_query_parameters_local_var = NULL;

    // deal_unit_flow_stage_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    deal_unit_flow_stage_dto_collection_query_parameters_local_var = deal_unit_flow_stage_dto_collection_query_parameters_create (
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

    return deal_unit_flow_stage_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
