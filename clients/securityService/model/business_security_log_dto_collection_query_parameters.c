#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_security_log_dto_collection_query_parameters.h"



business_security_log_dto_collection_query_parameters_t *business_security_log_dto_collection_query_parameters_create(
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
    business_security_log_dto_collection_query_parameters_t *business_security_log_dto_collection_query_parameters_local_var = malloc(sizeof(business_security_log_dto_collection_query_parameters_t));
    if (!business_security_log_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    business_security_log_dto_collection_query_parameters_local_var->top = top;
    business_security_log_dto_collection_query_parameters_local_var->skip = skip;
    business_security_log_dto_collection_query_parameters_local_var->count = count;
    business_security_log_dto_collection_query_parameters_local_var->filter = filter;
    business_security_log_dto_collection_query_parameters_local_var->order_by = order_by;
    business_security_log_dto_collection_query_parameters_local_var->search = search;
    business_security_log_dto_collection_query_parameters_local_var->select = select;
    business_security_log_dto_collection_query_parameters_local_var->expand = expand;
    business_security_log_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return business_security_log_dto_collection_query_parameters_local_var;
}


void business_security_log_dto_collection_query_parameters_free(business_security_log_dto_collection_query_parameters_t *business_security_log_dto_collection_query_parameters) {
    if(NULL == business_security_log_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (business_security_log_dto_collection_query_parameters->filter) {
        free(business_security_log_dto_collection_query_parameters->filter);
        business_security_log_dto_collection_query_parameters->filter = NULL;
    }
    if (business_security_log_dto_collection_query_parameters->order_by) {
        free(business_security_log_dto_collection_query_parameters->order_by);
        business_security_log_dto_collection_query_parameters->order_by = NULL;
    }
    if (business_security_log_dto_collection_query_parameters->search) {
        free(business_security_log_dto_collection_query_parameters->search);
        business_security_log_dto_collection_query_parameters->search = NULL;
    }
    if (business_security_log_dto_collection_query_parameters->select) {
        free(business_security_log_dto_collection_query_parameters->select);
        business_security_log_dto_collection_query_parameters->select = NULL;
    }
    if (business_security_log_dto_collection_query_parameters->expand) {
        free(business_security_log_dto_collection_query_parameters->expand);
        business_security_log_dto_collection_query_parameters->expand = NULL;
    }
    free(business_security_log_dto_collection_query_parameters);
}

cJSON *business_security_log_dto_collection_query_parameters_convertToJSON(business_security_log_dto_collection_query_parameters_t *business_security_log_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // business_security_log_dto_collection_query_parameters->top
    if(business_security_log_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", business_security_log_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // business_security_log_dto_collection_query_parameters->skip
    if(business_security_log_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", business_security_log_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // business_security_log_dto_collection_query_parameters->count
    if(business_security_log_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", business_security_log_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // business_security_log_dto_collection_query_parameters->filter
    if(business_security_log_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", business_security_log_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_collection_query_parameters->order_by
    if(business_security_log_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", business_security_log_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_collection_query_parameters->search
    if(business_security_log_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", business_security_log_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_collection_query_parameters->select
    if(business_security_log_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", business_security_log_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_collection_query_parameters->expand
    if(business_security_log_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", business_security_log_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_collection_query_parameters->is_empty
    if(business_security_log_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", business_security_log_dto_collection_query_parameters->is_empty) == NULL) {
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

business_security_log_dto_collection_query_parameters_t *business_security_log_dto_collection_query_parameters_parseFromJSON(cJSON *business_security_log_dto_collection_query_parametersJSON){

    business_security_log_dto_collection_query_parameters_t *business_security_log_dto_collection_query_parameters_local_var = NULL;

    // business_security_log_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // business_security_log_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // business_security_log_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // business_security_log_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    business_security_log_dto_collection_query_parameters_local_var = business_security_log_dto_collection_query_parameters_create (
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

    return business_security_log_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
