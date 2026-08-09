#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sales_literature_dto_collection_query_parameters.h"



sales_literature_dto_collection_query_parameters_t *sales_literature_dto_collection_query_parameters_create(
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
    sales_literature_dto_collection_query_parameters_t *sales_literature_dto_collection_query_parameters_local_var = malloc(sizeof(sales_literature_dto_collection_query_parameters_t));
    if (!sales_literature_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    sales_literature_dto_collection_query_parameters_local_var->top = top;
    sales_literature_dto_collection_query_parameters_local_var->skip = skip;
    sales_literature_dto_collection_query_parameters_local_var->count = count;
    sales_literature_dto_collection_query_parameters_local_var->filter = filter;
    sales_literature_dto_collection_query_parameters_local_var->order_by = order_by;
    sales_literature_dto_collection_query_parameters_local_var->search = search;
    sales_literature_dto_collection_query_parameters_local_var->select = select;
    sales_literature_dto_collection_query_parameters_local_var->expand = expand;
    sales_literature_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return sales_literature_dto_collection_query_parameters_local_var;
}


void sales_literature_dto_collection_query_parameters_free(sales_literature_dto_collection_query_parameters_t *sales_literature_dto_collection_query_parameters) {
    if(NULL == sales_literature_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (sales_literature_dto_collection_query_parameters->filter) {
        free(sales_literature_dto_collection_query_parameters->filter);
        sales_literature_dto_collection_query_parameters->filter = NULL;
    }
    if (sales_literature_dto_collection_query_parameters->order_by) {
        free(sales_literature_dto_collection_query_parameters->order_by);
        sales_literature_dto_collection_query_parameters->order_by = NULL;
    }
    if (sales_literature_dto_collection_query_parameters->search) {
        free(sales_literature_dto_collection_query_parameters->search);
        sales_literature_dto_collection_query_parameters->search = NULL;
    }
    if (sales_literature_dto_collection_query_parameters->select) {
        free(sales_literature_dto_collection_query_parameters->select);
        sales_literature_dto_collection_query_parameters->select = NULL;
    }
    if (sales_literature_dto_collection_query_parameters->expand) {
        free(sales_literature_dto_collection_query_parameters->expand);
        sales_literature_dto_collection_query_parameters->expand = NULL;
    }
    free(sales_literature_dto_collection_query_parameters);
}

cJSON *sales_literature_dto_collection_query_parameters_convertToJSON(sales_literature_dto_collection_query_parameters_t *sales_literature_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // sales_literature_dto_collection_query_parameters->top
    if(sales_literature_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", sales_literature_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // sales_literature_dto_collection_query_parameters->skip
    if(sales_literature_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", sales_literature_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // sales_literature_dto_collection_query_parameters->count
    if(sales_literature_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", sales_literature_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // sales_literature_dto_collection_query_parameters->filter
    if(sales_literature_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", sales_literature_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_collection_query_parameters->order_by
    if(sales_literature_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", sales_literature_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_collection_query_parameters->search
    if(sales_literature_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", sales_literature_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_collection_query_parameters->select
    if(sales_literature_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", sales_literature_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_collection_query_parameters->expand
    if(sales_literature_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", sales_literature_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_collection_query_parameters->is_empty
    if(sales_literature_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", sales_literature_dto_collection_query_parameters->is_empty) == NULL) {
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

sales_literature_dto_collection_query_parameters_t *sales_literature_dto_collection_query_parameters_parseFromJSON(cJSON *sales_literature_dto_collection_query_parametersJSON){

    sales_literature_dto_collection_query_parameters_t *sales_literature_dto_collection_query_parameters_local_var = NULL;

    // sales_literature_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // sales_literature_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // sales_literature_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // sales_literature_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    sales_literature_dto_collection_query_parameters_local_var = sales_literature_dto_collection_query_parameters_create (
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

    return sales_literature_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
