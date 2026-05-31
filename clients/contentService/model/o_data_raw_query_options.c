#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_data_raw_query_options.h"



o_data_raw_query_options_t *o_data_raw_query_options_create(
    char *filter,
    char *apply,
    char *compute,
    char *search,
    char *order_by,
    char *top,
    char *skip,
    char *select,
    char *expand,
    char *count,
    char *format,
    char *skip_token,
    char *delta_token
    ) {
    o_data_raw_query_options_t *o_data_raw_query_options_local_var = malloc(sizeof(o_data_raw_query_options_t));
    if (!o_data_raw_query_options_local_var) {
        return NULL;
    }
    o_data_raw_query_options_local_var->filter = filter;
    o_data_raw_query_options_local_var->apply = apply;
    o_data_raw_query_options_local_var->compute = compute;
    o_data_raw_query_options_local_var->search = search;
    o_data_raw_query_options_local_var->order_by = order_by;
    o_data_raw_query_options_local_var->top = top;
    o_data_raw_query_options_local_var->skip = skip;
    o_data_raw_query_options_local_var->select = select;
    o_data_raw_query_options_local_var->expand = expand;
    o_data_raw_query_options_local_var->count = count;
    o_data_raw_query_options_local_var->format = format;
    o_data_raw_query_options_local_var->skip_token = skip_token;
    o_data_raw_query_options_local_var->delta_token = delta_token;

    return o_data_raw_query_options_local_var;
}


void o_data_raw_query_options_free(o_data_raw_query_options_t *o_data_raw_query_options) {
    if(NULL == o_data_raw_query_options){
        return ;
    }
    listEntry_t *listEntry;
    if (o_data_raw_query_options->filter) {
        free(o_data_raw_query_options->filter);
        o_data_raw_query_options->filter = NULL;
    }
    if (o_data_raw_query_options->apply) {
        free(o_data_raw_query_options->apply);
        o_data_raw_query_options->apply = NULL;
    }
    if (o_data_raw_query_options->compute) {
        free(o_data_raw_query_options->compute);
        o_data_raw_query_options->compute = NULL;
    }
    if (o_data_raw_query_options->search) {
        free(o_data_raw_query_options->search);
        o_data_raw_query_options->search = NULL;
    }
    if (o_data_raw_query_options->order_by) {
        free(o_data_raw_query_options->order_by);
        o_data_raw_query_options->order_by = NULL;
    }
    if (o_data_raw_query_options->top) {
        free(o_data_raw_query_options->top);
        o_data_raw_query_options->top = NULL;
    }
    if (o_data_raw_query_options->skip) {
        free(o_data_raw_query_options->skip);
        o_data_raw_query_options->skip = NULL;
    }
    if (o_data_raw_query_options->select) {
        free(o_data_raw_query_options->select);
        o_data_raw_query_options->select = NULL;
    }
    if (o_data_raw_query_options->expand) {
        free(o_data_raw_query_options->expand);
        o_data_raw_query_options->expand = NULL;
    }
    if (o_data_raw_query_options->count) {
        free(o_data_raw_query_options->count);
        o_data_raw_query_options->count = NULL;
    }
    if (o_data_raw_query_options->format) {
        free(o_data_raw_query_options->format);
        o_data_raw_query_options->format = NULL;
    }
    if (o_data_raw_query_options->skip_token) {
        free(o_data_raw_query_options->skip_token);
        o_data_raw_query_options->skip_token = NULL;
    }
    if (o_data_raw_query_options->delta_token) {
        free(o_data_raw_query_options->delta_token);
        o_data_raw_query_options->delta_token = NULL;
    }
    free(o_data_raw_query_options);
}

cJSON *o_data_raw_query_options_convertToJSON(o_data_raw_query_options_t *o_data_raw_query_options) {
    cJSON *item = cJSON_CreateObject();

    // o_data_raw_query_options->filter
    if(o_data_raw_query_options->filter) {
    if(cJSON_AddStringToObject(item, "filter", o_data_raw_query_options->filter) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->apply
    if(o_data_raw_query_options->apply) {
    if(cJSON_AddStringToObject(item, "apply", o_data_raw_query_options->apply) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->compute
    if(o_data_raw_query_options->compute) {
    if(cJSON_AddStringToObject(item, "compute", o_data_raw_query_options->compute) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->search
    if(o_data_raw_query_options->search) {
    if(cJSON_AddStringToObject(item, "search", o_data_raw_query_options->search) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->order_by
    if(o_data_raw_query_options->order_by) {
    if(cJSON_AddStringToObject(item, "orderBy", o_data_raw_query_options->order_by) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->top
    if(o_data_raw_query_options->top) {
    if(cJSON_AddStringToObject(item, "top", o_data_raw_query_options->top) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->skip
    if(o_data_raw_query_options->skip) {
    if(cJSON_AddStringToObject(item, "skip", o_data_raw_query_options->skip) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->select
    if(o_data_raw_query_options->select) {
    if(cJSON_AddStringToObject(item, "select", o_data_raw_query_options->select) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->expand
    if(o_data_raw_query_options->expand) {
    if(cJSON_AddStringToObject(item, "expand", o_data_raw_query_options->expand) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->count
    if(o_data_raw_query_options->count) {
    if(cJSON_AddStringToObject(item, "count", o_data_raw_query_options->count) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->format
    if(o_data_raw_query_options->format) {
    if(cJSON_AddStringToObject(item, "format", o_data_raw_query_options->format) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->skip_token
    if(o_data_raw_query_options->skip_token) {
    if(cJSON_AddStringToObject(item, "skipToken", o_data_raw_query_options->skip_token) == NULL) {
    goto fail; //String
    }
    }


    // o_data_raw_query_options->delta_token
    if(o_data_raw_query_options->delta_token) {
    if(cJSON_AddStringToObject(item, "deltaToken", o_data_raw_query_options->delta_token) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

o_data_raw_query_options_t *o_data_raw_query_options_parseFromJSON(cJSON *o_data_raw_query_optionsJSON){

    o_data_raw_query_options_t *o_data_raw_query_options_local_var = NULL;

    // o_data_raw_query_options->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "filter");
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->apply
    cJSON *apply = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "apply");
    if (apply) { 
    if(!cJSON_IsString(apply) && !cJSON_IsNull(apply))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->compute
    cJSON *compute = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "compute");
    if (compute) { 
    if(!cJSON_IsString(compute) && !cJSON_IsNull(compute))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "search");
    if (search) { 
    if(!cJSON_IsString(search) && !cJSON_IsNull(search))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "orderBy");
    if (order_by) { 
    if(!cJSON_IsString(order_by) && !cJSON_IsNull(order_by))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "top");
    if (top) { 
    if(!cJSON_IsString(top) && !cJSON_IsNull(top))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "skip");
    if (skip) { 
    if(!cJSON_IsString(skip) && !cJSON_IsNull(skip))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->select
    cJSON *select = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "select");
    if (select) { 
    if(!cJSON_IsString(select) && !cJSON_IsNull(select))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->expand
    cJSON *expand = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "expand");
    if (expand) { 
    if(!cJSON_IsString(expand) && !cJSON_IsNull(expand))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "count");
    if (count) { 
    if(!cJSON_IsString(count) && !cJSON_IsNull(count))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->format
    cJSON *format = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "format");
    if (format) { 
    if(!cJSON_IsString(format) && !cJSON_IsNull(format))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->skip_token
    cJSON *skip_token = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "skipToken");
    if (skip_token) { 
    if(!cJSON_IsString(skip_token) && !cJSON_IsNull(skip_token))
    {
    goto end; //String
    }
    }

    // o_data_raw_query_options->delta_token
    cJSON *delta_token = cJSON_GetObjectItemCaseSensitive(o_data_raw_query_optionsJSON, "deltaToken");
    if (delta_token) { 
    if(!cJSON_IsString(delta_token) && !cJSON_IsNull(delta_token))
    {
    goto end; //String
    }
    }


    o_data_raw_query_options_local_var = o_data_raw_query_options_create (
        filter && !cJSON_IsNull(filter) ? strdup(filter->valuestring) : NULL,
        apply && !cJSON_IsNull(apply) ? strdup(apply->valuestring) : NULL,
        compute && !cJSON_IsNull(compute) ? strdup(compute->valuestring) : NULL,
        search && !cJSON_IsNull(search) ? strdup(search->valuestring) : NULL,
        order_by && !cJSON_IsNull(order_by) ? strdup(order_by->valuestring) : NULL,
        top && !cJSON_IsNull(top) ? strdup(top->valuestring) : NULL,
        skip && !cJSON_IsNull(skip) ? strdup(skip->valuestring) : NULL,
        select && !cJSON_IsNull(select) ? strdup(select->valuestring) : NULL,
        expand && !cJSON_IsNull(expand) ? strdup(expand->valuestring) : NULL,
        count && !cJSON_IsNull(count) ? strdup(count->valuestring) : NULL,
        format && !cJSON_IsNull(format) ? strdup(format->valuestring) : NULL,
        skip_token && !cJSON_IsNull(skip_token) ? strdup(skip_token->valuestring) : NULL,
        delta_token && !cJSON_IsNull(delta_token) ? strdup(delta_token->valuestring) : NULL
        );

    return o_data_raw_query_options_local_var;
end:
    return NULL;

}
