#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_signing_provider_descriptor_dto_collection_query_parameters.h"



trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters_create(
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
    trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters_local_var = malloc(sizeof(trust_signing_provider_descriptor_dto_collection_query_parameters_t));
    if (!trust_signing_provider_descriptor_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->top = top;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->skip = skip;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->count = count;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->filter = filter;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->order_by = order_by;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->search = search;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->select = select;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->expand = expand;
    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return trust_signing_provider_descriptor_dto_collection_query_parameters_local_var;
}


void trust_signing_provider_descriptor_dto_collection_query_parameters_free(trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters) {
    if(NULL == trust_signing_provider_descriptor_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_signing_provider_descriptor_dto_collection_query_parameters->filter) {
        free(trust_signing_provider_descriptor_dto_collection_query_parameters->filter);
        trust_signing_provider_descriptor_dto_collection_query_parameters->filter = NULL;
    }
    if (trust_signing_provider_descriptor_dto_collection_query_parameters->order_by) {
        free(trust_signing_provider_descriptor_dto_collection_query_parameters->order_by);
        trust_signing_provider_descriptor_dto_collection_query_parameters->order_by = NULL;
    }
    if (trust_signing_provider_descriptor_dto_collection_query_parameters->search) {
        free(trust_signing_provider_descriptor_dto_collection_query_parameters->search);
        trust_signing_provider_descriptor_dto_collection_query_parameters->search = NULL;
    }
    if (trust_signing_provider_descriptor_dto_collection_query_parameters->select) {
        free(trust_signing_provider_descriptor_dto_collection_query_parameters->select);
        trust_signing_provider_descriptor_dto_collection_query_parameters->select = NULL;
    }
    if (trust_signing_provider_descriptor_dto_collection_query_parameters->expand) {
        free(trust_signing_provider_descriptor_dto_collection_query_parameters->expand);
        trust_signing_provider_descriptor_dto_collection_query_parameters->expand = NULL;
    }
    free(trust_signing_provider_descriptor_dto_collection_query_parameters);
}

cJSON *trust_signing_provider_descriptor_dto_collection_query_parameters_convertToJSON(trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // trust_signing_provider_descriptor_dto_collection_query_parameters->top
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", trust_signing_provider_descriptor_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->skip
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", trust_signing_provider_descriptor_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->count
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", trust_signing_provider_descriptor_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->filter
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", trust_signing_provider_descriptor_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->order_by
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", trust_signing_provider_descriptor_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->search
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", trust_signing_provider_descriptor_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->select
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", trust_signing_provider_descriptor_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->expand
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", trust_signing_provider_descriptor_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto_collection_query_parameters->is_empty
    if(trust_signing_provider_descriptor_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", trust_signing_provider_descriptor_dto_collection_query_parameters->is_empty) == NULL) {
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

trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters_parseFromJSON(cJSON *trust_signing_provider_descriptor_dto_collection_query_parametersJSON){

    trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters_local_var = NULL;

    // trust_signing_provider_descriptor_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    trust_signing_provider_descriptor_dto_collection_query_parameters_local_var = trust_signing_provider_descriptor_dto_collection_query_parameters_create (
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

    return trust_signing_provider_descriptor_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
