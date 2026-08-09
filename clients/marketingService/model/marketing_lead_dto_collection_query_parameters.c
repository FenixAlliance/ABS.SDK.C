#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_lead_dto_collection_query_parameters.h"



marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters_create(
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
    marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters_local_var = malloc(sizeof(marketing_lead_dto_collection_query_parameters_t));
    if (!marketing_lead_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    marketing_lead_dto_collection_query_parameters_local_var->top = top;
    marketing_lead_dto_collection_query_parameters_local_var->skip = skip;
    marketing_lead_dto_collection_query_parameters_local_var->count = count;
    marketing_lead_dto_collection_query_parameters_local_var->filter = filter;
    marketing_lead_dto_collection_query_parameters_local_var->order_by = order_by;
    marketing_lead_dto_collection_query_parameters_local_var->search = search;
    marketing_lead_dto_collection_query_parameters_local_var->select = select;
    marketing_lead_dto_collection_query_parameters_local_var->expand = expand;
    marketing_lead_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return marketing_lead_dto_collection_query_parameters_local_var;
}


void marketing_lead_dto_collection_query_parameters_free(marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters) {
    if(NULL == marketing_lead_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_lead_dto_collection_query_parameters->filter) {
        free(marketing_lead_dto_collection_query_parameters->filter);
        marketing_lead_dto_collection_query_parameters->filter = NULL;
    }
    if (marketing_lead_dto_collection_query_parameters->order_by) {
        free(marketing_lead_dto_collection_query_parameters->order_by);
        marketing_lead_dto_collection_query_parameters->order_by = NULL;
    }
    if (marketing_lead_dto_collection_query_parameters->search) {
        free(marketing_lead_dto_collection_query_parameters->search);
        marketing_lead_dto_collection_query_parameters->search = NULL;
    }
    if (marketing_lead_dto_collection_query_parameters->select) {
        free(marketing_lead_dto_collection_query_parameters->select);
        marketing_lead_dto_collection_query_parameters->select = NULL;
    }
    if (marketing_lead_dto_collection_query_parameters->expand) {
        free(marketing_lead_dto_collection_query_parameters->expand);
        marketing_lead_dto_collection_query_parameters->expand = NULL;
    }
    free(marketing_lead_dto_collection_query_parameters);
}

cJSON *marketing_lead_dto_collection_query_parameters_convertToJSON(marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // marketing_lead_dto_collection_query_parameters->top
    if(marketing_lead_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", marketing_lead_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_lead_dto_collection_query_parameters->skip
    if(marketing_lead_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", marketing_lead_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_lead_dto_collection_query_parameters->count
    if(marketing_lead_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", marketing_lead_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // marketing_lead_dto_collection_query_parameters->filter
    if(marketing_lead_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", marketing_lead_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto_collection_query_parameters->order_by
    if(marketing_lead_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", marketing_lead_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto_collection_query_parameters->search
    if(marketing_lead_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", marketing_lead_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto_collection_query_parameters->select
    if(marketing_lead_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", marketing_lead_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto_collection_query_parameters->expand
    if(marketing_lead_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", marketing_lead_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto_collection_query_parameters->is_empty
    if(marketing_lead_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", marketing_lead_dto_collection_query_parameters->is_empty) == NULL) {
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

marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters_parseFromJSON(cJSON *marketing_lead_dto_collection_query_parametersJSON){

    marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters_local_var = NULL;

    // marketing_lead_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // marketing_lead_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // marketing_lead_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // marketing_lead_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(marketing_lead_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    marketing_lead_dto_collection_query_parameters_local_var = marketing_lead_dto_collection_query_parameters_create (
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

    return marketing_lead_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
