#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employer_profile_dto_collection_query_parameters.h"



employer_profile_dto_collection_query_parameters_t *employer_profile_dto_collection_query_parameters_create(
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
    employer_profile_dto_collection_query_parameters_t *employer_profile_dto_collection_query_parameters_local_var = malloc(sizeof(employer_profile_dto_collection_query_parameters_t));
    if (!employer_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    employer_profile_dto_collection_query_parameters_local_var->top = top;
    employer_profile_dto_collection_query_parameters_local_var->skip = skip;
    employer_profile_dto_collection_query_parameters_local_var->count = count;
    employer_profile_dto_collection_query_parameters_local_var->filter = filter;
    employer_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    employer_profile_dto_collection_query_parameters_local_var->search = search;
    employer_profile_dto_collection_query_parameters_local_var->select = select;
    employer_profile_dto_collection_query_parameters_local_var->expand = expand;
    employer_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return employer_profile_dto_collection_query_parameters_local_var;
}


void employer_profile_dto_collection_query_parameters_free(employer_profile_dto_collection_query_parameters_t *employer_profile_dto_collection_query_parameters) {
    if(NULL == employer_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (employer_profile_dto_collection_query_parameters->filter) {
        free(employer_profile_dto_collection_query_parameters->filter);
        employer_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (employer_profile_dto_collection_query_parameters->order_by) {
        free(employer_profile_dto_collection_query_parameters->order_by);
        employer_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (employer_profile_dto_collection_query_parameters->search) {
        free(employer_profile_dto_collection_query_parameters->search);
        employer_profile_dto_collection_query_parameters->search = NULL;
    }
    if (employer_profile_dto_collection_query_parameters->select) {
        free(employer_profile_dto_collection_query_parameters->select);
        employer_profile_dto_collection_query_parameters->select = NULL;
    }
    if (employer_profile_dto_collection_query_parameters->expand) {
        free(employer_profile_dto_collection_query_parameters->expand);
        employer_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(employer_profile_dto_collection_query_parameters);
}

cJSON *employer_profile_dto_collection_query_parameters_convertToJSON(employer_profile_dto_collection_query_parameters_t *employer_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // employer_profile_dto_collection_query_parameters->top
    if(employer_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", employer_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // employer_profile_dto_collection_query_parameters->skip
    if(employer_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", employer_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // employer_profile_dto_collection_query_parameters->count
    if(employer_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", employer_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // employer_profile_dto_collection_query_parameters->filter
    if(employer_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", employer_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // employer_profile_dto_collection_query_parameters->order_by
    if(employer_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", employer_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // employer_profile_dto_collection_query_parameters->search
    if(employer_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", employer_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // employer_profile_dto_collection_query_parameters->select
    if(employer_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", employer_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // employer_profile_dto_collection_query_parameters->expand
    if(employer_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", employer_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // employer_profile_dto_collection_query_parameters->is_empty
    if(employer_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", employer_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

employer_profile_dto_collection_query_parameters_t *employer_profile_dto_collection_query_parameters_parseFromJSON(cJSON *employer_profile_dto_collection_query_parametersJSON){

    employer_profile_dto_collection_query_parameters_t *employer_profile_dto_collection_query_parameters_local_var = NULL;

    // employer_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // employer_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // employer_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // employer_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // employer_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // employer_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // employer_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // employer_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // employer_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(employer_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    employer_profile_dto_collection_query_parameters_local_var = employer_profile_dto_collection_query_parameters_create (
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

    return employer_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
