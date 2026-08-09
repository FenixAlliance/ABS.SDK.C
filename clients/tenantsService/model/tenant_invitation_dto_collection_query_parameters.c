#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_invitation_dto_collection_query_parameters.h"



tenant_invitation_dto_collection_query_parameters_t *tenant_invitation_dto_collection_query_parameters_create(
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
    tenant_invitation_dto_collection_query_parameters_t *tenant_invitation_dto_collection_query_parameters_local_var = malloc(sizeof(tenant_invitation_dto_collection_query_parameters_t));
    if (!tenant_invitation_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    tenant_invitation_dto_collection_query_parameters_local_var->top = top;
    tenant_invitation_dto_collection_query_parameters_local_var->skip = skip;
    tenant_invitation_dto_collection_query_parameters_local_var->count = count;
    tenant_invitation_dto_collection_query_parameters_local_var->filter = filter;
    tenant_invitation_dto_collection_query_parameters_local_var->order_by = order_by;
    tenant_invitation_dto_collection_query_parameters_local_var->search = search;
    tenant_invitation_dto_collection_query_parameters_local_var->select = select;
    tenant_invitation_dto_collection_query_parameters_local_var->expand = expand;
    tenant_invitation_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return tenant_invitation_dto_collection_query_parameters_local_var;
}


void tenant_invitation_dto_collection_query_parameters_free(tenant_invitation_dto_collection_query_parameters_t *tenant_invitation_dto_collection_query_parameters) {
    if(NULL == tenant_invitation_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_invitation_dto_collection_query_parameters->filter) {
        free(tenant_invitation_dto_collection_query_parameters->filter);
        tenant_invitation_dto_collection_query_parameters->filter = NULL;
    }
    if (tenant_invitation_dto_collection_query_parameters->order_by) {
        free(tenant_invitation_dto_collection_query_parameters->order_by);
        tenant_invitation_dto_collection_query_parameters->order_by = NULL;
    }
    if (tenant_invitation_dto_collection_query_parameters->search) {
        free(tenant_invitation_dto_collection_query_parameters->search);
        tenant_invitation_dto_collection_query_parameters->search = NULL;
    }
    if (tenant_invitation_dto_collection_query_parameters->select) {
        free(tenant_invitation_dto_collection_query_parameters->select);
        tenant_invitation_dto_collection_query_parameters->select = NULL;
    }
    if (tenant_invitation_dto_collection_query_parameters->expand) {
        free(tenant_invitation_dto_collection_query_parameters->expand);
        tenant_invitation_dto_collection_query_parameters->expand = NULL;
    }
    free(tenant_invitation_dto_collection_query_parameters);
}

cJSON *tenant_invitation_dto_collection_query_parameters_convertToJSON(tenant_invitation_dto_collection_query_parameters_t *tenant_invitation_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // tenant_invitation_dto_collection_query_parameters->top
    if(tenant_invitation_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", tenant_invitation_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // tenant_invitation_dto_collection_query_parameters->skip
    if(tenant_invitation_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", tenant_invitation_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // tenant_invitation_dto_collection_query_parameters->count
    if(tenant_invitation_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", tenant_invitation_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_invitation_dto_collection_query_parameters->filter
    if(tenant_invitation_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", tenant_invitation_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto_collection_query_parameters->order_by
    if(tenant_invitation_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", tenant_invitation_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto_collection_query_parameters->search
    if(tenant_invitation_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", tenant_invitation_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto_collection_query_parameters->select
    if(tenant_invitation_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", tenant_invitation_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto_collection_query_parameters->expand
    if(tenant_invitation_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", tenant_invitation_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto_collection_query_parameters->is_empty
    if(tenant_invitation_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", tenant_invitation_dto_collection_query_parameters->is_empty) == NULL) {
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

tenant_invitation_dto_collection_query_parameters_t *tenant_invitation_dto_collection_query_parameters_parseFromJSON(cJSON *tenant_invitation_dto_collection_query_parametersJSON){

    tenant_invitation_dto_collection_query_parameters_t *tenant_invitation_dto_collection_query_parameters_local_var = NULL;

    // tenant_invitation_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // tenant_invitation_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // tenant_invitation_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // tenant_invitation_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    tenant_invitation_dto_collection_query_parameters_local_var = tenant_invitation_dto_collection_query_parameters_create (
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

    return tenant_invitation_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
