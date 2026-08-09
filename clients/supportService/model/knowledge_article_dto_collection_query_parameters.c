#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "knowledge_article_dto_collection_query_parameters.h"



knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters_create(
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
    knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters_local_var = malloc(sizeof(knowledge_article_dto_collection_query_parameters_t));
    if (!knowledge_article_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    knowledge_article_dto_collection_query_parameters_local_var->top = top;
    knowledge_article_dto_collection_query_parameters_local_var->skip = skip;
    knowledge_article_dto_collection_query_parameters_local_var->count = count;
    knowledge_article_dto_collection_query_parameters_local_var->filter = filter;
    knowledge_article_dto_collection_query_parameters_local_var->order_by = order_by;
    knowledge_article_dto_collection_query_parameters_local_var->search = search;
    knowledge_article_dto_collection_query_parameters_local_var->select = select;
    knowledge_article_dto_collection_query_parameters_local_var->expand = expand;
    knowledge_article_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return knowledge_article_dto_collection_query_parameters_local_var;
}


void knowledge_article_dto_collection_query_parameters_free(knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters) {
    if(NULL == knowledge_article_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (knowledge_article_dto_collection_query_parameters->filter) {
        free(knowledge_article_dto_collection_query_parameters->filter);
        knowledge_article_dto_collection_query_parameters->filter = NULL;
    }
    if (knowledge_article_dto_collection_query_parameters->order_by) {
        free(knowledge_article_dto_collection_query_parameters->order_by);
        knowledge_article_dto_collection_query_parameters->order_by = NULL;
    }
    if (knowledge_article_dto_collection_query_parameters->search) {
        free(knowledge_article_dto_collection_query_parameters->search);
        knowledge_article_dto_collection_query_parameters->search = NULL;
    }
    if (knowledge_article_dto_collection_query_parameters->select) {
        free(knowledge_article_dto_collection_query_parameters->select);
        knowledge_article_dto_collection_query_parameters->select = NULL;
    }
    if (knowledge_article_dto_collection_query_parameters->expand) {
        free(knowledge_article_dto_collection_query_parameters->expand);
        knowledge_article_dto_collection_query_parameters->expand = NULL;
    }
    free(knowledge_article_dto_collection_query_parameters);
}

cJSON *knowledge_article_dto_collection_query_parameters_convertToJSON(knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // knowledge_article_dto_collection_query_parameters->top
    if(knowledge_article_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", knowledge_article_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // knowledge_article_dto_collection_query_parameters->skip
    if(knowledge_article_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", knowledge_article_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // knowledge_article_dto_collection_query_parameters->count
    if(knowledge_article_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", knowledge_article_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // knowledge_article_dto_collection_query_parameters->filter
    if(knowledge_article_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", knowledge_article_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_collection_query_parameters->order_by
    if(knowledge_article_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", knowledge_article_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_collection_query_parameters->search
    if(knowledge_article_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", knowledge_article_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_collection_query_parameters->select
    if(knowledge_article_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", knowledge_article_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_collection_query_parameters->expand
    if(knowledge_article_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", knowledge_article_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_collection_query_parameters->is_empty
    if(knowledge_article_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", knowledge_article_dto_collection_query_parameters->is_empty) == NULL) {
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

knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters_parseFromJSON(cJSON *knowledge_article_dto_collection_query_parametersJSON){

    knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters_local_var = NULL;

    // knowledge_article_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // knowledge_article_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // knowledge_article_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // knowledge_article_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    knowledge_article_dto_collection_query_parameters_local_var = knowledge_article_dto_collection_query_parameters_create (
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

    return knowledge_article_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
