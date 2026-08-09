#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts_group_dto_collection_query_parameters.h"



contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters_create(
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
    contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters_local_var = malloc(sizeof(contacts_group_dto_collection_query_parameters_t));
    if (!contacts_group_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    contacts_group_dto_collection_query_parameters_local_var->top = top;
    contacts_group_dto_collection_query_parameters_local_var->skip = skip;
    contacts_group_dto_collection_query_parameters_local_var->count = count;
    contacts_group_dto_collection_query_parameters_local_var->filter = filter;
    contacts_group_dto_collection_query_parameters_local_var->order_by = order_by;
    contacts_group_dto_collection_query_parameters_local_var->search = search;
    contacts_group_dto_collection_query_parameters_local_var->select = select;
    contacts_group_dto_collection_query_parameters_local_var->expand = expand;
    contacts_group_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return contacts_group_dto_collection_query_parameters_local_var;
}


void contacts_group_dto_collection_query_parameters_free(contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters) {
    if(NULL == contacts_group_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts_group_dto_collection_query_parameters->filter) {
        free(contacts_group_dto_collection_query_parameters->filter);
        contacts_group_dto_collection_query_parameters->filter = NULL;
    }
    if (contacts_group_dto_collection_query_parameters->order_by) {
        free(contacts_group_dto_collection_query_parameters->order_by);
        contacts_group_dto_collection_query_parameters->order_by = NULL;
    }
    if (contacts_group_dto_collection_query_parameters->search) {
        free(contacts_group_dto_collection_query_parameters->search);
        contacts_group_dto_collection_query_parameters->search = NULL;
    }
    if (contacts_group_dto_collection_query_parameters->select) {
        free(contacts_group_dto_collection_query_parameters->select);
        contacts_group_dto_collection_query_parameters->select = NULL;
    }
    if (contacts_group_dto_collection_query_parameters->expand) {
        free(contacts_group_dto_collection_query_parameters->expand);
        contacts_group_dto_collection_query_parameters->expand = NULL;
    }
    free(contacts_group_dto_collection_query_parameters);
}

cJSON *contacts_group_dto_collection_query_parameters_convertToJSON(contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // contacts_group_dto_collection_query_parameters->top
    if(contacts_group_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", contacts_group_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // contacts_group_dto_collection_query_parameters->skip
    if(contacts_group_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", contacts_group_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // contacts_group_dto_collection_query_parameters->count
    if(contacts_group_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", contacts_group_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // contacts_group_dto_collection_query_parameters->filter
    if(contacts_group_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", contacts_group_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto_collection_query_parameters->order_by
    if(contacts_group_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", contacts_group_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto_collection_query_parameters->search
    if(contacts_group_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", contacts_group_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto_collection_query_parameters->select
    if(contacts_group_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", contacts_group_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto_collection_query_parameters->expand
    if(contacts_group_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", contacts_group_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto_collection_query_parameters->is_empty
    if(contacts_group_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", contacts_group_dto_collection_query_parameters->is_empty) == NULL) {
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

contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters_parseFromJSON(cJSON *contacts_group_dto_collection_query_parametersJSON){

    contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters_local_var = NULL;

    // contacts_group_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // contacts_group_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // contacts_group_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // contacts_group_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // contacts_group_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // contacts_group_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // contacts_group_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // contacts_group_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // contacts_group_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(contacts_group_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    contacts_group_dto_collection_query_parameters_local_var = contacts_group_dto_collection_query_parameters_create (
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

    return contacts_group_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
