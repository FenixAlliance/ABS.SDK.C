#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_reaction_dto_collection_query_parameters.h"



social_post_reaction_dto_collection_query_parameters_t *social_post_reaction_dto_collection_query_parameters_create(
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
    social_post_reaction_dto_collection_query_parameters_t *social_post_reaction_dto_collection_query_parameters_local_var = malloc(sizeof(social_post_reaction_dto_collection_query_parameters_t));
    if (!social_post_reaction_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    social_post_reaction_dto_collection_query_parameters_local_var->top = top;
    social_post_reaction_dto_collection_query_parameters_local_var->skip = skip;
    social_post_reaction_dto_collection_query_parameters_local_var->count = count;
    social_post_reaction_dto_collection_query_parameters_local_var->filter = filter;
    social_post_reaction_dto_collection_query_parameters_local_var->order_by = order_by;
    social_post_reaction_dto_collection_query_parameters_local_var->search = search;
    social_post_reaction_dto_collection_query_parameters_local_var->select = select;
    social_post_reaction_dto_collection_query_parameters_local_var->expand = expand;
    social_post_reaction_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return social_post_reaction_dto_collection_query_parameters_local_var;
}


void social_post_reaction_dto_collection_query_parameters_free(social_post_reaction_dto_collection_query_parameters_t *social_post_reaction_dto_collection_query_parameters) {
    if(NULL == social_post_reaction_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_reaction_dto_collection_query_parameters->filter) {
        free(social_post_reaction_dto_collection_query_parameters->filter);
        social_post_reaction_dto_collection_query_parameters->filter = NULL;
    }
    if (social_post_reaction_dto_collection_query_parameters->order_by) {
        free(social_post_reaction_dto_collection_query_parameters->order_by);
        social_post_reaction_dto_collection_query_parameters->order_by = NULL;
    }
    if (social_post_reaction_dto_collection_query_parameters->search) {
        free(social_post_reaction_dto_collection_query_parameters->search);
        social_post_reaction_dto_collection_query_parameters->search = NULL;
    }
    if (social_post_reaction_dto_collection_query_parameters->select) {
        free(social_post_reaction_dto_collection_query_parameters->select);
        social_post_reaction_dto_collection_query_parameters->select = NULL;
    }
    if (social_post_reaction_dto_collection_query_parameters->expand) {
        free(social_post_reaction_dto_collection_query_parameters->expand);
        social_post_reaction_dto_collection_query_parameters->expand = NULL;
    }
    free(social_post_reaction_dto_collection_query_parameters);
}

cJSON *social_post_reaction_dto_collection_query_parameters_convertToJSON(social_post_reaction_dto_collection_query_parameters_t *social_post_reaction_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // social_post_reaction_dto_collection_query_parameters->top
    if(social_post_reaction_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", social_post_reaction_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_reaction_dto_collection_query_parameters->skip
    if(social_post_reaction_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", social_post_reaction_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_reaction_dto_collection_query_parameters->count
    if(social_post_reaction_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", social_post_reaction_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_reaction_dto_collection_query_parameters->filter
    if(social_post_reaction_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", social_post_reaction_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto_collection_query_parameters->order_by
    if(social_post_reaction_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", social_post_reaction_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto_collection_query_parameters->search
    if(social_post_reaction_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", social_post_reaction_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto_collection_query_parameters->select
    if(social_post_reaction_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", social_post_reaction_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto_collection_query_parameters->expand
    if(social_post_reaction_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", social_post_reaction_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto_collection_query_parameters->is_empty
    if(social_post_reaction_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", social_post_reaction_dto_collection_query_parameters->is_empty) == NULL) {
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

social_post_reaction_dto_collection_query_parameters_t *social_post_reaction_dto_collection_query_parameters_parseFromJSON(cJSON *social_post_reaction_dto_collection_query_parametersJSON){

    social_post_reaction_dto_collection_query_parameters_t *social_post_reaction_dto_collection_query_parameters_local_var = NULL;

    // social_post_reaction_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // social_post_reaction_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // social_post_reaction_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // social_post_reaction_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    social_post_reaction_dto_collection_query_parameters_local_var = social_post_reaction_dto_collection_query_parameters_create (
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

    return social_post_reaction_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
