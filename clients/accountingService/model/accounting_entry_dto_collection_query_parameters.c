#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_entry_dto_collection_query_parameters.h"



accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters_create(
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
    accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters_local_var = malloc(sizeof(accounting_entry_dto_collection_query_parameters_t));
    if (!accounting_entry_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    accounting_entry_dto_collection_query_parameters_local_var->top = top;
    accounting_entry_dto_collection_query_parameters_local_var->skip = skip;
    accounting_entry_dto_collection_query_parameters_local_var->count = count;
    accounting_entry_dto_collection_query_parameters_local_var->filter = filter;
    accounting_entry_dto_collection_query_parameters_local_var->order_by = order_by;
    accounting_entry_dto_collection_query_parameters_local_var->search = search;
    accounting_entry_dto_collection_query_parameters_local_var->select = select;
    accounting_entry_dto_collection_query_parameters_local_var->expand = expand;
    accounting_entry_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return accounting_entry_dto_collection_query_parameters_local_var;
}


void accounting_entry_dto_collection_query_parameters_free(accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters) {
    if(NULL == accounting_entry_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_entry_dto_collection_query_parameters->filter) {
        free(accounting_entry_dto_collection_query_parameters->filter);
        accounting_entry_dto_collection_query_parameters->filter = NULL;
    }
    if (accounting_entry_dto_collection_query_parameters->order_by) {
        free(accounting_entry_dto_collection_query_parameters->order_by);
        accounting_entry_dto_collection_query_parameters->order_by = NULL;
    }
    if (accounting_entry_dto_collection_query_parameters->search) {
        free(accounting_entry_dto_collection_query_parameters->search);
        accounting_entry_dto_collection_query_parameters->search = NULL;
    }
    if (accounting_entry_dto_collection_query_parameters->select) {
        free(accounting_entry_dto_collection_query_parameters->select);
        accounting_entry_dto_collection_query_parameters->select = NULL;
    }
    if (accounting_entry_dto_collection_query_parameters->expand) {
        free(accounting_entry_dto_collection_query_parameters->expand);
        accounting_entry_dto_collection_query_parameters->expand = NULL;
    }
    free(accounting_entry_dto_collection_query_parameters);
}

cJSON *accounting_entry_dto_collection_query_parameters_convertToJSON(accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // accounting_entry_dto_collection_query_parameters->top
    if(accounting_entry_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", accounting_entry_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto_collection_query_parameters->skip
    if(accounting_entry_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", accounting_entry_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto_collection_query_parameters->count
    if(accounting_entry_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", accounting_entry_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // accounting_entry_dto_collection_query_parameters->filter
    if(accounting_entry_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", accounting_entry_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto_collection_query_parameters->order_by
    if(accounting_entry_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", accounting_entry_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto_collection_query_parameters->search
    if(accounting_entry_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", accounting_entry_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto_collection_query_parameters->select
    if(accounting_entry_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", accounting_entry_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto_collection_query_parameters->expand
    if(accounting_entry_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", accounting_entry_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto_collection_query_parameters->is_empty
    if(accounting_entry_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", accounting_entry_dto_collection_query_parameters->is_empty) == NULL) {
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

accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters_parseFromJSON(cJSON *accounting_entry_dto_collection_query_parametersJSON){

    accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters_local_var = NULL;

    // accounting_entry_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // accounting_entry_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(accounting_entry_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    accounting_entry_dto_collection_query_parameters_local_var = accounting_entry_dto_collection_query_parameters_create (
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

    return accounting_entry_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
