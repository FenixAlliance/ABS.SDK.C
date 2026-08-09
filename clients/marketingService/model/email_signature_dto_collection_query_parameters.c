#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_signature_dto_collection_query_parameters.h"



email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters_create(
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
    email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters_local_var = malloc(sizeof(email_signature_dto_collection_query_parameters_t));
    if (!email_signature_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    email_signature_dto_collection_query_parameters_local_var->top = top;
    email_signature_dto_collection_query_parameters_local_var->skip = skip;
    email_signature_dto_collection_query_parameters_local_var->count = count;
    email_signature_dto_collection_query_parameters_local_var->filter = filter;
    email_signature_dto_collection_query_parameters_local_var->order_by = order_by;
    email_signature_dto_collection_query_parameters_local_var->search = search;
    email_signature_dto_collection_query_parameters_local_var->select = select;
    email_signature_dto_collection_query_parameters_local_var->expand = expand;
    email_signature_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return email_signature_dto_collection_query_parameters_local_var;
}


void email_signature_dto_collection_query_parameters_free(email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters) {
    if(NULL == email_signature_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (email_signature_dto_collection_query_parameters->filter) {
        free(email_signature_dto_collection_query_parameters->filter);
        email_signature_dto_collection_query_parameters->filter = NULL;
    }
    if (email_signature_dto_collection_query_parameters->order_by) {
        free(email_signature_dto_collection_query_parameters->order_by);
        email_signature_dto_collection_query_parameters->order_by = NULL;
    }
    if (email_signature_dto_collection_query_parameters->search) {
        free(email_signature_dto_collection_query_parameters->search);
        email_signature_dto_collection_query_parameters->search = NULL;
    }
    if (email_signature_dto_collection_query_parameters->select) {
        free(email_signature_dto_collection_query_parameters->select);
        email_signature_dto_collection_query_parameters->select = NULL;
    }
    if (email_signature_dto_collection_query_parameters->expand) {
        free(email_signature_dto_collection_query_parameters->expand);
        email_signature_dto_collection_query_parameters->expand = NULL;
    }
    free(email_signature_dto_collection_query_parameters);
}

cJSON *email_signature_dto_collection_query_parameters_convertToJSON(email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // email_signature_dto_collection_query_parameters->top
    if(email_signature_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", email_signature_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // email_signature_dto_collection_query_parameters->skip
    if(email_signature_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", email_signature_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // email_signature_dto_collection_query_parameters->count
    if(email_signature_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", email_signature_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto_collection_query_parameters->filter
    if(email_signature_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", email_signature_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto_collection_query_parameters->order_by
    if(email_signature_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", email_signature_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto_collection_query_parameters->search
    if(email_signature_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", email_signature_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto_collection_query_parameters->select
    if(email_signature_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", email_signature_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto_collection_query_parameters->expand
    if(email_signature_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", email_signature_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto_collection_query_parameters->is_empty
    if(email_signature_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", email_signature_dto_collection_query_parameters->is_empty) == NULL) {
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

email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters_parseFromJSON(cJSON *email_signature_dto_collection_query_parametersJSON){

    email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters_local_var = NULL;

    // email_signature_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // email_signature_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // email_signature_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // email_signature_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // email_signature_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // email_signature_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // email_signature_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // email_signature_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(email_signature_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    email_signature_dto_collection_query_parameters_local_var = email_signature_dto_collection_query_parameters_create (
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

    return email_signature_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
