#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_source_dto_collection_query_parameters.h"



contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters_create(
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
    contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters_local_var = malloc(sizeof(contact_source_dto_collection_query_parameters_t));
    if (!contact_source_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    contact_source_dto_collection_query_parameters_local_var->top = top;
    contact_source_dto_collection_query_parameters_local_var->skip = skip;
    contact_source_dto_collection_query_parameters_local_var->count = count;
    contact_source_dto_collection_query_parameters_local_var->filter = filter;
    contact_source_dto_collection_query_parameters_local_var->order_by = order_by;
    contact_source_dto_collection_query_parameters_local_var->search = search;
    contact_source_dto_collection_query_parameters_local_var->select = select;
    contact_source_dto_collection_query_parameters_local_var->expand = expand;
    contact_source_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return contact_source_dto_collection_query_parameters_local_var;
}


void contact_source_dto_collection_query_parameters_free(contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters) {
    if(NULL == contact_source_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_source_dto_collection_query_parameters->filter) {
        free(contact_source_dto_collection_query_parameters->filter);
        contact_source_dto_collection_query_parameters->filter = NULL;
    }
    if (contact_source_dto_collection_query_parameters->order_by) {
        free(contact_source_dto_collection_query_parameters->order_by);
        contact_source_dto_collection_query_parameters->order_by = NULL;
    }
    if (contact_source_dto_collection_query_parameters->search) {
        free(contact_source_dto_collection_query_parameters->search);
        contact_source_dto_collection_query_parameters->search = NULL;
    }
    if (contact_source_dto_collection_query_parameters->select) {
        free(contact_source_dto_collection_query_parameters->select);
        contact_source_dto_collection_query_parameters->select = NULL;
    }
    if (contact_source_dto_collection_query_parameters->expand) {
        free(contact_source_dto_collection_query_parameters->expand);
        contact_source_dto_collection_query_parameters->expand = NULL;
    }
    free(contact_source_dto_collection_query_parameters);
}

cJSON *contact_source_dto_collection_query_parameters_convertToJSON(contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // contact_source_dto_collection_query_parameters->top
    if(contact_source_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", contact_source_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // contact_source_dto_collection_query_parameters->skip
    if(contact_source_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", contact_source_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // contact_source_dto_collection_query_parameters->count
    if(contact_source_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", contact_source_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // contact_source_dto_collection_query_parameters->filter
    if(contact_source_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", contact_source_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto_collection_query_parameters->order_by
    if(contact_source_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", contact_source_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto_collection_query_parameters->search
    if(contact_source_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", contact_source_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto_collection_query_parameters->select
    if(contact_source_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", contact_source_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto_collection_query_parameters->expand
    if(contact_source_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", contact_source_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto_collection_query_parameters->is_empty
    if(contact_source_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", contact_source_dto_collection_query_parameters->is_empty) == NULL) {
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

contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters_parseFromJSON(cJSON *contact_source_dto_collection_query_parametersJSON){

    contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters_local_var = NULL;

    // contact_source_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // contact_source_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // contact_source_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // contact_source_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // contact_source_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // contact_source_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // contact_source_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // contact_source_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // contact_source_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(contact_source_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    contact_source_dto_collection_query_parameters_local_var = contact_source_dto_collection_query_parameters_create (
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

    return contact_source_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
