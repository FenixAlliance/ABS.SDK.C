#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_subscription_dto_collection_query_parameters.h"



newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters_create(
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
    newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters_local_var = malloc(sizeof(newsletter_subscription_dto_collection_query_parameters_t));
    if (!newsletter_subscription_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    newsletter_subscription_dto_collection_query_parameters_local_var->top = top;
    newsletter_subscription_dto_collection_query_parameters_local_var->skip = skip;
    newsletter_subscription_dto_collection_query_parameters_local_var->count = count;
    newsletter_subscription_dto_collection_query_parameters_local_var->filter = filter;
    newsletter_subscription_dto_collection_query_parameters_local_var->order_by = order_by;
    newsletter_subscription_dto_collection_query_parameters_local_var->search = search;
    newsletter_subscription_dto_collection_query_parameters_local_var->select = select;
    newsletter_subscription_dto_collection_query_parameters_local_var->expand = expand;
    newsletter_subscription_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return newsletter_subscription_dto_collection_query_parameters_local_var;
}


void newsletter_subscription_dto_collection_query_parameters_free(newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters) {
    if(NULL == newsletter_subscription_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_subscription_dto_collection_query_parameters->filter) {
        free(newsletter_subscription_dto_collection_query_parameters->filter);
        newsletter_subscription_dto_collection_query_parameters->filter = NULL;
    }
    if (newsletter_subscription_dto_collection_query_parameters->order_by) {
        free(newsletter_subscription_dto_collection_query_parameters->order_by);
        newsletter_subscription_dto_collection_query_parameters->order_by = NULL;
    }
    if (newsletter_subscription_dto_collection_query_parameters->search) {
        free(newsletter_subscription_dto_collection_query_parameters->search);
        newsletter_subscription_dto_collection_query_parameters->search = NULL;
    }
    if (newsletter_subscription_dto_collection_query_parameters->select) {
        free(newsletter_subscription_dto_collection_query_parameters->select);
        newsletter_subscription_dto_collection_query_parameters->select = NULL;
    }
    if (newsletter_subscription_dto_collection_query_parameters->expand) {
        free(newsletter_subscription_dto_collection_query_parameters->expand);
        newsletter_subscription_dto_collection_query_parameters->expand = NULL;
    }
    free(newsletter_subscription_dto_collection_query_parameters);
}

cJSON *newsletter_subscription_dto_collection_query_parameters_convertToJSON(newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_subscription_dto_collection_query_parameters->top
    if(newsletter_subscription_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", newsletter_subscription_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->skip
    if(newsletter_subscription_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", newsletter_subscription_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->count
    if(newsletter_subscription_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", newsletter_subscription_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->filter
    if(newsletter_subscription_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", newsletter_subscription_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->order_by
    if(newsletter_subscription_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", newsletter_subscription_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->search
    if(newsletter_subscription_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", newsletter_subscription_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->select
    if(newsletter_subscription_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", newsletter_subscription_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->expand
    if(newsletter_subscription_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", newsletter_subscription_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto_collection_query_parameters->is_empty
    if(newsletter_subscription_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", newsletter_subscription_dto_collection_query_parameters->is_empty) == NULL) {
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

newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters_parseFromJSON(cJSON *newsletter_subscription_dto_collection_query_parametersJSON){

    newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters_local_var = NULL;

    // newsletter_subscription_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    newsletter_subscription_dto_collection_query_parameters_local_var = newsletter_subscription_dto_collection_query_parameters_create (
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

    return newsletter_subscription_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
