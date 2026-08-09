#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_conversation_dto_collection_query_parameters.h"



cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters_create(
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
    cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters_local_var = malloc(sizeof(cognitive_agent_conversation_dto_collection_query_parameters_t));
    if (!cognitive_agent_conversation_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->top = top;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->skip = skip;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->count = count;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->filter = filter;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->order_by = order_by;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->search = search;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->select = select;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->expand = expand;
    cognitive_agent_conversation_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return cognitive_agent_conversation_dto_collection_query_parameters_local_var;
}


void cognitive_agent_conversation_dto_collection_query_parameters_free(cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters) {
    if(NULL == cognitive_agent_conversation_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_conversation_dto_collection_query_parameters->filter) {
        free(cognitive_agent_conversation_dto_collection_query_parameters->filter);
        cognitive_agent_conversation_dto_collection_query_parameters->filter = NULL;
    }
    if (cognitive_agent_conversation_dto_collection_query_parameters->order_by) {
        free(cognitive_agent_conversation_dto_collection_query_parameters->order_by);
        cognitive_agent_conversation_dto_collection_query_parameters->order_by = NULL;
    }
    if (cognitive_agent_conversation_dto_collection_query_parameters->search) {
        free(cognitive_agent_conversation_dto_collection_query_parameters->search);
        cognitive_agent_conversation_dto_collection_query_parameters->search = NULL;
    }
    if (cognitive_agent_conversation_dto_collection_query_parameters->select) {
        free(cognitive_agent_conversation_dto_collection_query_parameters->select);
        cognitive_agent_conversation_dto_collection_query_parameters->select = NULL;
    }
    if (cognitive_agent_conversation_dto_collection_query_parameters->expand) {
        free(cognitive_agent_conversation_dto_collection_query_parameters->expand);
        cognitive_agent_conversation_dto_collection_query_parameters->expand = NULL;
    }
    free(cognitive_agent_conversation_dto_collection_query_parameters);
}

cJSON *cognitive_agent_conversation_dto_collection_query_parameters_convertToJSON(cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_conversation_dto_collection_query_parameters->top
    if(cognitive_agent_conversation_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", cognitive_agent_conversation_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->skip
    if(cognitive_agent_conversation_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", cognitive_agent_conversation_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->count
    if(cognitive_agent_conversation_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", cognitive_agent_conversation_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->filter
    if(cognitive_agent_conversation_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", cognitive_agent_conversation_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->order_by
    if(cognitive_agent_conversation_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", cognitive_agent_conversation_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->search
    if(cognitive_agent_conversation_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", cognitive_agent_conversation_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->select
    if(cognitive_agent_conversation_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", cognitive_agent_conversation_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->expand
    if(cognitive_agent_conversation_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", cognitive_agent_conversation_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_dto_collection_query_parameters->is_empty
    if(cognitive_agent_conversation_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", cognitive_agent_conversation_dto_collection_query_parameters->is_empty) == NULL) {
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

cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters_parseFromJSON(cJSON *cognitive_agent_conversation_dto_collection_query_parametersJSON){

    cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters_local_var = NULL;

    // cognitive_agent_conversation_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    cognitive_agent_conversation_dto_collection_query_parameters_local_var = cognitive_agent_conversation_dto_collection_query_parameters_create (
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

    return cognitive_agent_conversation_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
