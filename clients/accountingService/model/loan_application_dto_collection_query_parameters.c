#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_application_dto_collection_query_parameters.h"



loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters_create(
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
    loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters_local_var = malloc(sizeof(loan_application_dto_collection_query_parameters_t));
    if (!loan_application_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    loan_application_dto_collection_query_parameters_local_var->top = top;
    loan_application_dto_collection_query_parameters_local_var->skip = skip;
    loan_application_dto_collection_query_parameters_local_var->count = count;
    loan_application_dto_collection_query_parameters_local_var->filter = filter;
    loan_application_dto_collection_query_parameters_local_var->order_by = order_by;
    loan_application_dto_collection_query_parameters_local_var->search = search;
    loan_application_dto_collection_query_parameters_local_var->select = select;
    loan_application_dto_collection_query_parameters_local_var->expand = expand;
    loan_application_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return loan_application_dto_collection_query_parameters_local_var;
}


void loan_application_dto_collection_query_parameters_free(loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters) {
    if(NULL == loan_application_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_application_dto_collection_query_parameters->filter) {
        free(loan_application_dto_collection_query_parameters->filter);
        loan_application_dto_collection_query_parameters->filter = NULL;
    }
    if (loan_application_dto_collection_query_parameters->order_by) {
        free(loan_application_dto_collection_query_parameters->order_by);
        loan_application_dto_collection_query_parameters->order_by = NULL;
    }
    if (loan_application_dto_collection_query_parameters->search) {
        free(loan_application_dto_collection_query_parameters->search);
        loan_application_dto_collection_query_parameters->search = NULL;
    }
    if (loan_application_dto_collection_query_parameters->select) {
        free(loan_application_dto_collection_query_parameters->select);
        loan_application_dto_collection_query_parameters->select = NULL;
    }
    if (loan_application_dto_collection_query_parameters->expand) {
        free(loan_application_dto_collection_query_parameters->expand);
        loan_application_dto_collection_query_parameters->expand = NULL;
    }
    free(loan_application_dto_collection_query_parameters);
}

cJSON *loan_application_dto_collection_query_parameters_convertToJSON(loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // loan_application_dto_collection_query_parameters->top
    if(loan_application_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", loan_application_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // loan_application_dto_collection_query_parameters->skip
    if(loan_application_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", loan_application_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // loan_application_dto_collection_query_parameters->count
    if(loan_application_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", loan_application_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // loan_application_dto_collection_query_parameters->filter
    if(loan_application_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", loan_application_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_dto_collection_query_parameters->order_by
    if(loan_application_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", loan_application_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_dto_collection_query_parameters->search
    if(loan_application_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", loan_application_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_dto_collection_query_parameters->select
    if(loan_application_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", loan_application_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_dto_collection_query_parameters->expand
    if(loan_application_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", loan_application_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_dto_collection_query_parameters->is_empty
    if(loan_application_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", loan_application_dto_collection_query_parameters->is_empty) == NULL) {
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

loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters_parseFromJSON(cJSON *loan_application_dto_collection_query_parametersJSON){

    loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters_local_var = NULL;

    // loan_application_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // loan_application_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // loan_application_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // loan_application_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // loan_application_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // loan_application_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // loan_application_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // loan_application_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // loan_application_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(loan_application_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    loan_application_dto_collection_query_parameters_local_var = loan_application_dto_collection_query_parameters_create (
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

    return loan_application_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
