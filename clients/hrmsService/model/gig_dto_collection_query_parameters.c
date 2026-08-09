#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_dto_collection_query_parameters.h"



gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters_create(
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
    gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters_local_var = malloc(sizeof(gig_dto_collection_query_parameters_t));
    if (!gig_dto_collection_query_parameters_local_var) {
        return NULL;
    }
    gig_dto_collection_query_parameters_local_var->top = top;
    gig_dto_collection_query_parameters_local_var->skip = skip;
    gig_dto_collection_query_parameters_local_var->count = count;
    gig_dto_collection_query_parameters_local_var->filter = filter;
    gig_dto_collection_query_parameters_local_var->order_by = order_by;
    gig_dto_collection_query_parameters_local_var->search = search;
    gig_dto_collection_query_parameters_local_var->select = select;
    gig_dto_collection_query_parameters_local_var->expand = expand;
    gig_dto_collection_query_parameters_local_var->is_empty = is_empty;

    return gig_dto_collection_query_parameters_local_var;
}


void gig_dto_collection_query_parameters_free(gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters) {
    if(NULL == gig_dto_collection_query_parameters){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_dto_collection_query_parameters->filter) {
        free(gig_dto_collection_query_parameters->filter);
        gig_dto_collection_query_parameters->filter = NULL;
    }
    if (gig_dto_collection_query_parameters->order_by) {
        free(gig_dto_collection_query_parameters->order_by);
        gig_dto_collection_query_parameters->order_by = NULL;
    }
    if (gig_dto_collection_query_parameters->search) {
        free(gig_dto_collection_query_parameters->search);
        gig_dto_collection_query_parameters->search = NULL;
    }
    if (gig_dto_collection_query_parameters->select) {
        free(gig_dto_collection_query_parameters->select);
        gig_dto_collection_query_parameters->select = NULL;
    }
    if (gig_dto_collection_query_parameters->expand) {
        free(gig_dto_collection_query_parameters->expand);
        gig_dto_collection_query_parameters->expand = NULL;
    }
    free(gig_dto_collection_query_parameters);
}

cJSON *gig_dto_collection_query_parameters_convertToJSON(gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters) {
    cJSON *item = cJSON_CreateObject();

    // gig_dto_collection_query_parameters->top
    if(gig_dto_collection_query_parameters->top) {
    if(cJSON_AddNumberToObject(item, "top", gig_dto_collection_query_parameters->top) == NULL) {
    goto fail; //Numeric
    }
    }


    // gig_dto_collection_query_parameters->skip
    if(gig_dto_collection_query_parameters->skip) {
    if(cJSON_AddNumberToObject(item, "skip", gig_dto_collection_query_parameters->skip) == NULL) {
    goto fail; //Numeric
    }
    }


    // gig_dto_collection_query_parameters->count
    if(gig_dto_collection_query_parameters->count) {
    if(cJSON_AddBoolToObject(item, "count", gig_dto_collection_query_parameters->count) == NULL) {
    goto fail; //Bool
    }
    }


    // gig_dto_collection_query_parameters->filter
    if(gig_dto_collection_query_parameters->filter) {
    if(cJSON_AddStringToObject(item, "filter", gig_dto_collection_query_parameters->filter) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_collection_query_parameters->order_by
    if(gig_dto_collection_query_parameters->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", gig_dto_collection_query_parameters->order_by) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_collection_query_parameters->search
    if(gig_dto_collection_query_parameters->search) {
    if(cJSON_AddStringToObject(item, "search", gig_dto_collection_query_parameters->search) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_collection_query_parameters->select
    if(gig_dto_collection_query_parameters->select) {
    if(cJSON_AddStringToObject(item, "select", gig_dto_collection_query_parameters->select) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_collection_query_parameters->expand
    if(gig_dto_collection_query_parameters->expand) {
    if(cJSON_AddStringToObject(item, "expand", gig_dto_collection_query_parameters->expand) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_collection_query_parameters->is_empty
    if(gig_dto_collection_query_parameters->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", gig_dto_collection_query_parameters->is_empty) == NULL) {
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

gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters_parseFromJSON(cJSON *gig_dto_collection_query_parametersJSON){

    gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters_local_var = NULL;

    // gig_dto_collection_query_parameters->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // gig_dto_collection_query_parameters->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "skip");
    if (skip) { 
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }
    }

    // gig_dto_collection_query_parameters->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "count");
    if (count) { 
    if(!cJSON_IsBool(count))
    {
    goto end; //Bool
    }
    }

    // gig_dto_collection_query_parameters->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // gig_dto_collection_query_parameters->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // gig_dto_collection_query_parameters->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // gig_dto_collection_query_parameters->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // gig_dto_collection_query_parameters->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // gig_dto_collection_query_parameters->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(gig_dto_collection_query_parametersJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    gig_dto_collection_query_parameters_local_var = gig_dto_collection_query_parameters_create (
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

    return gig_dto_collection_query_parameters_local_var;
end:
    return NULL;

}
