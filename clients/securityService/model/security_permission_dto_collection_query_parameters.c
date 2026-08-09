#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_permission_dto_collection_query_parameters.h"



security_permission_dto_collection_query_parameters_t *security_permission_dto_collection_query_parameters_create(
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
    security_permission_dto_collection_query_parameters_t *security_permission_dto_collection_query_parameters_local_var = malloc(sizeof(security_permission_dto_collection_query_parameters_t));
    if (!security_permission_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    security_permission_dto_collection_query_parameters_local_var->top = top;
    security_permission_dto_collection_query_parameters_local_var->skip = skip;
    security_permission_dto_collection_query_parameters_local_var->count = count;
    security_permission_dto_collection_query_parameters_local_var->filter = filter;
    security_permission_dto_collection_query_parameters_local_var->order_by = order_by;
    security_permission_dto_collection_query_parameters_local_var->search = search;
    security_permission_dto_collection_query_parameters_local_var->select = select;
    security_permission_dto_collection_query_parameters_local_var->expand = expand;
    security_permission_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return security_permission_dto_collection_query_parameters_local_var;
}


void security_permission_dto_collection_query_parameters_free(security_permission_dto_collection_query_parameters_t *security_permission_dto_collection_query_parameters) {
    if(NULL == security_permission_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (security_permission_dto_collection_query_parameters->filter) {
        free(security_permission_dto_collection_query_parameters->filter);
        security_permission_dto_collection_query_parameters->filter = NULL;
    }
    if (security_permission_dto_collection_query_parameters->order_by) {
        free(security_permission_dto_collection_query_parameters->order_by);
        security_permission_dto_collection_query_parameters->order_by = NULL;
    }
    if (security_permission_dto_collection_query_parameters->search) {
        free(security_permission_dto_collection_query_parameters->search);
        security_permission_dto_collection_query_parameters->search = NULL;
    }
    if (security_permission_dto_collection_query_parameters->select) {
        free(security_permission_dto_collection_query_parameters->select);
        security_permission_dto_collection_query_parameters->select = NULL;
    }
    if (security_permission_dto_collection_query_parameters->expand) {
        free(security_permission_dto_collection_query_parameters->expand);
        security_permission_dto_collection_query_parameters->expand = NULL;
    }
    free(security_permission_dto_collection_query_parameters);
}

cJSON *security_permission_dto_collection_query_parameters_convertToJSON(security_permission_dto_collection_query_parameters_t *security_permission_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // security_permission_dto_collection_query_parameters->top
    if(security_permission_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", security_permission_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // security_permission_dto_collection_query_parameters->skip
    if(security_permission_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", security_permission_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // security_permission_dto_collection_query_parameters->count
    if(security_permission_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", security_permission_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // security_permission_dto_collection_query_parameters->filter
    if(security_permission_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", security_permission_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_collection_query_parameters->order_by
    if(security_permission_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", security_permission_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_collection_query_parameters->search
    if(security_permission_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", security_permission_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_collection_query_parameters->select
    if(security_permission_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", security_permission_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_collection_query_parameters->expand
    if(security_permission_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", security_permission_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_collection_query_parameters->is_empty
    if(security_permission_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", security_permission_dto_collection_query_parameters->is_empty) == NULL) {
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

security_permission_dto_collection_query_parameters_t *security_permission_dto_collection_query_parameters_parseFromJSON(cJSON *security_permission_dto_collection_query_parametersJSON){

    security_permission_dto_collection_query_parameters_t *security_permission_dto_collection_query_parameters_local_var = NULL;

    // security_permission_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // security_permission_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // security_permission_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // security_permission_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // security_permission_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // security_permission_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // security_permission_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // security_permission_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // security_permission_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(security_permission_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    security_permission_dto_collection_query_parameters_local_var = security_permission_dto_collection_query_parameters_create (
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

    return security_permission_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
