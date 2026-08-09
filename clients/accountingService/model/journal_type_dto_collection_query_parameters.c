#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_type_dto_collection_query_parameters.h"



journal_type_dto_collection_query_parameters_t *journal_type_dto_collection_query_parameters_create(
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
    journal_type_dto_collection_query_parameters_t *journal_type_dto_collection_query_parameters_local_var = malloc(sizeof(journal_type_dto_collection_query_parameters_t));
    if (!journal_type_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    journal_type_dto_collection_query_parameters_local_var->top = top;
    journal_type_dto_collection_query_parameters_local_var->skip = skip;
    journal_type_dto_collection_query_parameters_local_var->count = count;
    journal_type_dto_collection_query_parameters_local_var->filter = filter;
    journal_type_dto_collection_query_parameters_local_var->order_by = order_by;
    journal_type_dto_collection_query_parameters_local_var->search = search;
    journal_type_dto_collection_query_parameters_local_var->select = select;
    journal_type_dto_collection_query_parameters_local_var->expand = expand;
    journal_type_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return journal_type_dto_collection_query_parameters_local_var;
}


void journal_type_dto_collection_query_parameters_free(journal_type_dto_collection_query_parameters_t *journal_type_dto_collection_query_parameters) {
    if(NULL == journal_type_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_type_dto_collection_query_parameters->filter) {
        free(journal_type_dto_collection_query_parameters->filter);
        journal_type_dto_collection_query_parameters->filter = NULL;
    }
    if (journal_type_dto_collection_query_parameters->order_by) {
        free(journal_type_dto_collection_query_parameters->order_by);
        journal_type_dto_collection_query_parameters->order_by = NULL;
    }
    if (journal_type_dto_collection_query_parameters->search) {
        free(journal_type_dto_collection_query_parameters->search);
        journal_type_dto_collection_query_parameters->search = NULL;
    }
    if (journal_type_dto_collection_query_parameters->select) {
        free(journal_type_dto_collection_query_parameters->select);
        journal_type_dto_collection_query_parameters->select = NULL;
    }
    if (journal_type_dto_collection_query_parameters->expand) {
        free(journal_type_dto_collection_query_parameters->expand);
        journal_type_dto_collection_query_parameters->expand = NULL;
    }
    free(journal_type_dto_collection_query_parameters);
}

cJSON *journal_type_dto_collection_query_parameters_convertToJSON(journal_type_dto_collection_query_parameters_t *journal_type_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // journal_type_dto_collection_query_parameters->top
    if(journal_type_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", journal_type_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_type_dto_collection_query_parameters->skip
    if(journal_type_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", journal_type_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_type_dto_collection_query_parameters->count
    if(journal_type_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", journal_type_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_type_dto_collection_query_parameters->filter
    if(journal_type_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", journal_type_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_collection_query_parameters->order_by
    if(journal_type_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", journal_type_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_collection_query_parameters->search
    if(journal_type_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", journal_type_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_collection_query_parameters->select
    if(journal_type_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", journal_type_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_collection_query_parameters->expand
    if(journal_type_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", journal_type_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_collection_query_parameters->is_empty
    if(journal_type_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", journal_type_dto_collection_query_parameters->is_empty) == NULL) {
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

journal_type_dto_collection_query_parameters_t *journal_type_dto_collection_query_parameters_parseFromJSON(cJSON *journal_type_dto_collection_query_parametersJSON){

    journal_type_dto_collection_query_parameters_t *journal_type_dto_collection_query_parameters_local_var = NULL;

    // journal_type_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // journal_type_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // journal_type_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // journal_type_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // journal_type_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // journal_type_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // journal_type_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // journal_type_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // journal_type_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(journal_type_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    journal_type_dto_collection_query_parameters_local_var = journal_type_dto_collection_query_parameters_create (
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

    return journal_type_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
