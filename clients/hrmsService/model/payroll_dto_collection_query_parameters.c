#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_dto_collection_query_parameters.h"



payroll_dto_collection_query_parameters_t *payroll_dto_collection_query_parameters_create(
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
    payroll_dto_collection_query_parameters_t *payroll_dto_collection_query_parameters_local_var = malloc(sizeof(payroll_dto_collection_query_parameters_t));
    if (!payroll_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    payroll_dto_collection_query_parameters_local_var->top = top;
    payroll_dto_collection_query_parameters_local_var->skip = skip;
    payroll_dto_collection_query_parameters_local_var->count = count;
    payroll_dto_collection_query_parameters_local_var->filter = filter;
    payroll_dto_collection_query_parameters_local_var->order_by = order_by;
    payroll_dto_collection_query_parameters_local_var->search = search;
    payroll_dto_collection_query_parameters_local_var->select = select;
    payroll_dto_collection_query_parameters_local_var->expand = expand;
    payroll_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return payroll_dto_collection_query_parameters_local_var;
}


void payroll_dto_collection_query_parameters_free(payroll_dto_collection_query_parameters_t *payroll_dto_collection_query_parameters) {
    if(NULL == payroll_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_dto_collection_query_parameters->filter) {
        free(payroll_dto_collection_query_parameters->filter);
        payroll_dto_collection_query_parameters->filter = NULL;
    }
    if (payroll_dto_collection_query_parameters->order_by) {
        free(payroll_dto_collection_query_parameters->order_by);
        payroll_dto_collection_query_parameters->order_by = NULL;
    }
    if (payroll_dto_collection_query_parameters->search) {
        free(payroll_dto_collection_query_parameters->search);
        payroll_dto_collection_query_parameters->search = NULL;
    }
    if (payroll_dto_collection_query_parameters->select) {
        free(payroll_dto_collection_query_parameters->select);
        payroll_dto_collection_query_parameters->select = NULL;
    }
    if (payroll_dto_collection_query_parameters->expand) {
        free(payroll_dto_collection_query_parameters->expand);
        payroll_dto_collection_query_parameters->expand = NULL;
    }
    free(payroll_dto_collection_query_parameters);
}

cJSON *payroll_dto_collection_query_parameters_convertToJSON(payroll_dto_collection_query_parameters_t *payroll_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // payroll_dto_collection_query_parameters->top
    if(payroll_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", payroll_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // payroll_dto_collection_query_parameters->skip
    if(payroll_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", payroll_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // payroll_dto_collection_query_parameters->count
    if(payroll_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", payroll_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // payroll_dto_collection_query_parameters->filter
    if(payroll_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", payroll_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_collection_query_parameters->order_by
    if(payroll_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", payroll_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_collection_query_parameters->search
    if(payroll_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", payroll_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_collection_query_parameters->select
    if(payroll_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", payroll_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_collection_query_parameters->expand
    if(payroll_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", payroll_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_collection_query_parameters->is_empty
    if(payroll_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", payroll_dto_collection_query_parameters->is_empty) == NULL) {
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

payroll_dto_collection_query_parameters_t *payroll_dto_collection_query_parameters_parseFromJSON(cJSON *payroll_dto_collection_query_parametersJSON){

    payroll_dto_collection_query_parameters_t *payroll_dto_collection_query_parameters_local_var = NULL;

    // payroll_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // payroll_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // payroll_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // payroll_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // payroll_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // payroll_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // payroll_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // payroll_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // payroll_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(payroll_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    payroll_dto_collection_query_parameters_local_var = payroll_dto_collection_query_parameters_create (
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

    return payroll_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
