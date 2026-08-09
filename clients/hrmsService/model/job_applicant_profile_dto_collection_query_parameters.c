#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_applicant_profile_dto_collection_query_parameters.h"



job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters_create(
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
    job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters_local_var = malloc(sizeof(job_applicant_profile_dto_collection_query_parameters_t));
    if (!job_applicant_profile_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    job_applicant_profile_dto_collection_query_parameters_local_var->top = top;
    job_applicant_profile_dto_collection_query_parameters_local_var->skip = skip;
    job_applicant_profile_dto_collection_query_parameters_local_var->count = count;
    job_applicant_profile_dto_collection_query_parameters_local_var->filter = filter;
    job_applicant_profile_dto_collection_query_parameters_local_var->order_by = order_by;
    job_applicant_profile_dto_collection_query_parameters_local_var->search = search;
    job_applicant_profile_dto_collection_query_parameters_local_var->select = select;
    job_applicant_profile_dto_collection_query_parameters_local_var->expand = expand;
    job_applicant_profile_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return job_applicant_profile_dto_collection_query_parameters_local_var;
}


void job_applicant_profile_dto_collection_query_parameters_free(job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters) {
    if(NULL == job_applicant_profile_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (job_applicant_profile_dto_collection_query_parameters->filter) {
        free(job_applicant_profile_dto_collection_query_parameters->filter);
        job_applicant_profile_dto_collection_query_parameters->filter = NULL;
    }
    if (job_applicant_profile_dto_collection_query_parameters->order_by) {
        free(job_applicant_profile_dto_collection_query_parameters->order_by);
        job_applicant_profile_dto_collection_query_parameters->order_by = NULL;
    }
    if (job_applicant_profile_dto_collection_query_parameters->search) {
        free(job_applicant_profile_dto_collection_query_parameters->search);
        job_applicant_profile_dto_collection_query_parameters->search = NULL;
    }
    if (job_applicant_profile_dto_collection_query_parameters->select) {
        free(job_applicant_profile_dto_collection_query_parameters->select);
        job_applicant_profile_dto_collection_query_parameters->select = NULL;
    }
    if (job_applicant_profile_dto_collection_query_parameters->expand) {
        free(job_applicant_profile_dto_collection_query_parameters->expand);
        job_applicant_profile_dto_collection_query_parameters->expand = NULL;
    }
    free(job_applicant_profile_dto_collection_query_parameters);
}

cJSON *job_applicant_profile_dto_collection_query_parameters_convertToJSON(job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // job_applicant_profile_dto_collection_query_parameters->top
    if(job_applicant_profile_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", job_applicant_profile_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->skip
    if(job_applicant_profile_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", job_applicant_profile_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->count
    if(job_applicant_profile_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", job_applicant_profile_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->filter
    if(job_applicant_profile_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", job_applicant_profile_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->order_by
    if(job_applicant_profile_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", job_applicant_profile_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->search
    if(job_applicant_profile_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", job_applicant_profile_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->select
    if(job_applicant_profile_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", job_applicant_profile_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->expand
    if(job_applicant_profile_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", job_applicant_profile_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_collection_query_parameters->is_empty
    if(job_applicant_profile_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", job_applicant_profile_dto_collection_query_parameters->is_empty) == NULL) {
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

job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters_parseFromJSON(cJSON *job_applicant_profile_dto_collection_query_parametersJSON){

    job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters_local_var = NULL;

    // job_applicant_profile_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    job_applicant_profile_dto_collection_query_parameters_local_var = job_applicant_profile_dto_collection_query_parameters_create (
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

    return job_applicant_profile_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
