#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_profile_dto_collection_query_parameters.h"



billing_profile_dto_collection_query_parameters_t *billing_profile_dto_collection_query_parameters_create(
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
    billing_profile_dto_collection_query_parameters_t *billing_profile_dto_collection_query_parameters_local_var = malloc(sizeof(billing_profile_dto_collection_query_parameters_t));
    if (!billing_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    billing_profile_dto_collection_query_parameters_local_var->top = top;
    billing_profile_dto_collection_query_parameters_local_var->skip = skip;
    billing_profile_dto_collection_query_parameters_local_var->count = count;
    billing_profile_dto_collection_query_parameters_local_var->filter = filter;
    billing_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    billing_profile_dto_collection_query_parameters_local_var->search = search;
    billing_profile_dto_collection_query_parameters_local_var->select = select;
    billing_profile_dto_collection_query_parameters_local_var->expand = expand;
    billing_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return billing_profile_dto_collection_query_parameters_local_var;
}


void billing_profile_dto_collection_query_parameters_free(billing_profile_dto_collection_query_parameters_t *billing_profile_dto_collection_query_parameters) {
    if(NULL == billing_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (billing_profile_dto_collection_query_parameters->filter) {
        free(billing_profile_dto_collection_query_parameters->filter);
        billing_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (billing_profile_dto_collection_query_parameters->order_by) {
        free(billing_profile_dto_collection_query_parameters->order_by);
        billing_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (billing_profile_dto_collection_query_parameters->search) {
        free(billing_profile_dto_collection_query_parameters->search);
        billing_profile_dto_collection_query_parameters->search = NULL;
    }
    if (billing_profile_dto_collection_query_parameters->select) {
        free(billing_profile_dto_collection_query_parameters->select);
        billing_profile_dto_collection_query_parameters->select = NULL;
    }
    if (billing_profile_dto_collection_query_parameters->expand) {
        free(billing_profile_dto_collection_query_parameters->expand);
        billing_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(billing_profile_dto_collection_query_parameters);
}

cJSON *billing_profile_dto_collection_query_parameters_convertToJSON(billing_profile_dto_collection_query_parameters_t *billing_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // billing_profile_dto_collection_query_parameters->top
    if(billing_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", billing_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // billing_profile_dto_collection_query_parameters->skip
    if(billing_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", billing_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // billing_profile_dto_collection_query_parameters->count
    if(billing_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", billing_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_dto_collection_query_parameters->filter
    if(billing_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", billing_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_collection_query_parameters->order_by
    if(billing_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", billing_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_collection_query_parameters->search
    if(billing_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", billing_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_collection_query_parameters->select
    if(billing_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", billing_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_collection_query_parameters->expand
    if(billing_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", billing_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_collection_query_parameters->is_empty
    if(billing_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", billing_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

billing_profile_dto_collection_query_parameters_t *billing_profile_dto_collection_query_parameters_parseFromJSON(cJSON *billing_profile_dto_collection_query_parametersJSON){

    billing_profile_dto_collection_query_parameters_t *billing_profile_dto_collection_query_parameters_local_var = NULL;

    // billing_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // billing_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // billing_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // billing_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    billing_profile_dto_collection_query_parameters_local_var = billing_profile_dto_collection_query_parameters_create (
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

    return billing_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
