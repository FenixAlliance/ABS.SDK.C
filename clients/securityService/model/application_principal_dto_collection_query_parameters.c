#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "application_principal_dto_collection_query_parameters.h"



application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters_create(
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
    application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters_local_var = malloc(sizeof(application_principal_dto_collection_query_parameters_t));
    if (!application_principal_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    application_principal_dto_collection_query_parameters_local_var->top = top;
    application_principal_dto_collection_query_parameters_local_var->skip = skip;
    application_principal_dto_collection_query_parameters_local_var->count = count;
    application_principal_dto_collection_query_parameters_local_var->filter = filter;
    application_principal_dto_collection_query_parameters_local_var->order_by = order_by;
    application_principal_dto_collection_query_parameters_local_var->search = search;
    application_principal_dto_collection_query_parameters_local_var->select = select;
    application_principal_dto_collection_query_parameters_local_var->expand = expand;
    application_principal_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return application_principal_dto_collection_query_parameters_local_var;
}


void application_principal_dto_collection_query_parameters_free(application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters) {
    if(NULL == application_principal_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (application_principal_dto_collection_query_parameters->filter) {
        free(application_principal_dto_collection_query_parameters->filter);
        application_principal_dto_collection_query_parameters->filter = NULL;
    }
    if (application_principal_dto_collection_query_parameters->order_by) {
        free(application_principal_dto_collection_query_parameters->order_by);
        application_principal_dto_collection_query_parameters->order_by = NULL;
    }
    if (application_principal_dto_collection_query_parameters->search) {
        free(application_principal_dto_collection_query_parameters->search);
        application_principal_dto_collection_query_parameters->search = NULL;
    }
    if (application_principal_dto_collection_query_parameters->select) {
        free(application_principal_dto_collection_query_parameters->select);
        application_principal_dto_collection_query_parameters->select = NULL;
    }
    if (application_principal_dto_collection_query_parameters->expand) {
        free(application_principal_dto_collection_query_parameters->expand);
        application_principal_dto_collection_query_parameters->expand = NULL;
    }
    free(application_principal_dto_collection_query_parameters);
}

cJSON *application_principal_dto_collection_query_parameters_convertToJSON(application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // application_principal_dto_collection_query_parameters->top
    if(application_principal_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", application_principal_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // application_principal_dto_collection_query_parameters->skip
    if(application_principal_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", application_principal_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // application_principal_dto_collection_query_parameters->count
    if(application_principal_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", application_principal_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // application_principal_dto_collection_query_parameters->filter
    if(application_principal_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", application_principal_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto_collection_query_parameters->order_by
    if(application_principal_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", application_principal_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto_collection_query_parameters->search
    if(application_principal_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", application_principal_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto_collection_query_parameters->select
    if(application_principal_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", application_principal_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto_collection_query_parameters->expand
    if(application_principal_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", application_principal_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto_collection_query_parameters->is_empty
    if(application_principal_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", application_principal_dto_collection_query_parameters->is_empty) == NULL) {
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

application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters_parseFromJSON(cJSON *application_principal_dto_collection_query_parametersJSON){

    application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters_local_var = NULL;

    // application_principal_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // application_principal_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // application_principal_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // application_principal_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // application_principal_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // application_principal_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // application_principal_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // application_principal_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // application_principal_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(application_principal_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    application_principal_dto_collection_query_parameters_local_var = application_principal_dto_collection_query_parameters_create (
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

    return application_principal_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
