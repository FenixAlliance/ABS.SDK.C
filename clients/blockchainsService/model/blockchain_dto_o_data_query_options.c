#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_dto_o_data_query_options.h"



blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options_create(
    http_request_t *request,
    o_data_query_context_t *context,
    o_data_raw_query_options_t *raw_values,
    select_expand_query_option_t *select_expand,
    apply_query_option_t *apply,
    compute_query_option_t *compute,
    filter_query_option_t *filter,
    search_query_option_t *search,
    order_by_query_option_t *order_by,
    skip_query_option_t *skip,
    skip_token_query_option_t *skip_token,
    top_query_option_t *top,
    count_query_option_t *count,
    object_t *validator,
    blockchain_dto_e_tag_t *if_match,
    blockchain_dto_e_tag_t *if_none_match
    ) {
    blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options_local_var = malloc(sizeof(blockchain_dto_o_data_query_options_t));
    if (!blockchain_dto_o_data_query_options_local_var) {
        return NULL;
    }
    blockchain_dto_o_data_query_options_local_var->request = request;
    blockchain_dto_o_data_query_options_local_var->context = context;
    blockchain_dto_o_data_query_options_local_var->raw_values = raw_values;
    blockchain_dto_o_data_query_options_local_var->select_expand = select_expand;
    blockchain_dto_o_data_query_options_local_var->apply = apply;
    blockchain_dto_o_data_query_options_local_var->compute = compute;
    blockchain_dto_o_data_query_options_local_var->filter = filter;
    blockchain_dto_o_data_query_options_local_var->search = search;
    blockchain_dto_o_data_query_options_local_var->order_by = order_by;
    blockchain_dto_o_data_query_options_local_var->skip = skip;
    blockchain_dto_o_data_query_options_local_var->skip_token = skip_token;
    blockchain_dto_o_data_query_options_local_var->top = top;
    blockchain_dto_o_data_query_options_local_var->count = count;
    blockchain_dto_o_data_query_options_local_var->validator = validator;
    blockchain_dto_o_data_query_options_local_var->if_match = if_match;
    blockchain_dto_o_data_query_options_local_var->if_none_match = if_none_match;

    return blockchain_dto_o_data_query_options_local_var;
}


void blockchain_dto_o_data_query_options_free(blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options) {
    if(NULL == blockchain_dto_o_data_query_options){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_dto_o_data_query_options->request) {
        http_request_free(blockchain_dto_o_data_query_options->request);
        blockchain_dto_o_data_query_options->request = NULL;
    }
    if (blockchain_dto_o_data_query_options->context) {
        o_data_query_context_free(blockchain_dto_o_data_query_options->context);
        blockchain_dto_o_data_query_options->context = NULL;
    }
    if (blockchain_dto_o_data_query_options->raw_values) {
        o_data_raw_query_options_free(blockchain_dto_o_data_query_options->raw_values);
        blockchain_dto_o_data_query_options->raw_values = NULL;
    }
    if (blockchain_dto_o_data_query_options->select_expand) {
        select_expand_query_option_free(blockchain_dto_o_data_query_options->select_expand);
        blockchain_dto_o_data_query_options->select_expand = NULL;
    }
    if (blockchain_dto_o_data_query_options->apply) {
        apply_query_option_free(blockchain_dto_o_data_query_options->apply);
        blockchain_dto_o_data_query_options->apply = NULL;
    }
    if (blockchain_dto_o_data_query_options->compute) {
        compute_query_option_free(blockchain_dto_o_data_query_options->compute);
        blockchain_dto_o_data_query_options->compute = NULL;
    }
    if (blockchain_dto_o_data_query_options->filter) {
        filter_query_option_free(blockchain_dto_o_data_query_options->filter);
        blockchain_dto_o_data_query_options->filter = NULL;
    }
    if (blockchain_dto_o_data_query_options->search) {
        search_query_option_free(blockchain_dto_o_data_query_options->search);
        blockchain_dto_o_data_query_options->search = NULL;
    }
    if (blockchain_dto_o_data_query_options->order_by) {
        order_by_query_option_free(blockchain_dto_o_data_query_options->order_by);
        blockchain_dto_o_data_query_options->order_by = NULL;
    }
    if (blockchain_dto_o_data_query_options->skip) {
        skip_query_option_free(blockchain_dto_o_data_query_options->skip);
        blockchain_dto_o_data_query_options->skip = NULL;
    }
    if (blockchain_dto_o_data_query_options->skip_token) {
        skip_token_query_option_free(blockchain_dto_o_data_query_options->skip_token);
        blockchain_dto_o_data_query_options->skip_token = NULL;
    }
    if (blockchain_dto_o_data_query_options->top) {
        top_query_option_free(blockchain_dto_o_data_query_options->top);
        blockchain_dto_o_data_query_options->top = NULL;
    }
    if (blockchain_dto_o_data_query_options->count) {
        count_query_option_free(blockchain_dto_o_data_query_options->count);
        blockchain_dto_o_data_query_options->count = NULL;
    }
    if (blockchain_dto_o_data_query_options->validator) {
        object_free(blockchain_dto_o_data_query_options->validator);
        blockchain_dto_o_data_query_options->validator = NULL;
    }
    if (blockchain_dto_o_data_query_options->if_match) {
        blockchain_dto_e_tag_free(blockchain_dto_o_data_query_options->if_match);
        blockchain_dto_o_data_query_options->if_match = NULL;
    }
    if (blockchain_dto_o_data_query_options->if_none_match) {
        blockchain_dto_e_tag_free(blockchain_dto_o_data_query_options->if_none_match);
        blockchain_dto_o_data_query_options->if_none_match = NULL;
    }
    free(blockchain_dto_o_data_query_options);
}

cJSON *blockchain_dto_o_data_query_options_convertToJSON(blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_dto_o_data_query_options->request
    if(blockchain_dto_o_data_query_options->request) {
    cJSON *request_local_JSON = http_request_convertToJSON(blockchain_dto_o_data_query_options->request);
    if(request_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "request", request_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->context
    if(blockchain_dto_o_data_query_options->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(blockchain_dto_o_data_query_options->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->raw_values
    if(blockchain_dto_o_data_query_options->raw_values) {
    cJSON *raw_values_local_JSON = o_data_raw_query_options_convertToJSON(blockchain_dto_o_data_query_options->raw_values);
    if(raw_values_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rawValues", raw_values_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->select_expand
    if(blockchain_dto_o_data_query_options->select_expand) {
    cJSON *select_expand_local_JSON = select_expand_query_option_convertToJSON(blockchain_dto_o_data_query_options->select_expand);
    if(select_expand_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selectExpand", select_expand_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->apply
    if(blockchain_dto_o_data_query_options->apply) {
    cJSON *apply_local_JSON = apply_query_option_convertToJSON(blockchain_dto_o_data_query_options->apply);
    if(apply_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "apply", apply_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->compute
    if(blockchain_dto_o_data_query_options->compute) {
    cJSON *compute_local_JSON = compute_query_option_convertToJSON(blockchain_dto_o_data_query_options->compute);
    if(compute_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "compute", compute_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->filter
    if(blockchain_dto_o_data_query_options->filter) {
    cJSON *filter_local_JSON = filter_query_option_convertToJSON(blockchain_dto_o_data_query_options->filter);
    if(filter_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "filter", filter_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->search
    if(blockchain_dto_o_data_query_options->search) {
    cJSON *search_local_JSON = search_query_option_convertToJSON(blockchain_dto_o_data_query_options->search);
    if(search_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "search", search_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->order_by
    if(blockchain_dto_o_data_query_options->order_by) {
    cJSON *order_by_local_JSON = order_by_query_option_convertToJSON(blockchain_dto_o_data_query_options->order_by);
    if(order_by_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "orderBy", order_by_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->skip
    if(blockchain_dto_o_data_query_options->skip) {
    cJSON *skip_local_JSON = skip_query_option_convertToJSON(blockchain_dto_o_data_query_options->skip);
    if(skip_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "skip", skip_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->skip_token
    if(blockchain_dto_o_data_query_options->skip_token) {
    cJSON *skip_token_local_JSON = skip_token_query_option_convertToJSON(blockchain_dto_o_data_query_options->skip_token);
    if(skip_token_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "skipToken", skip_token_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->top
    if(blockchain_dto_o_data_query_options->top) {
    cJSON *top_local_JSON = top_query_option_convertToJSON(blockchain_dto_o_data_query_options->top);
    if(top_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "top", top_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->count
    if(blockchain_dto_o_data_query_options->count) {
    cJSON *count_local_JSON = count_query_option_convertToJSON(blockchain_dto_o_data_query_options->count);
    if(count_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "count", count_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->validator
    if(blockchain_dto_o_data_query_options->validator) {
    cJSON *validator_object = object_convertToJSON(blockchain_dto_o_data_query_options->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->if_match
    if(blockchain_dto_o_data_query_options->if_match) {
    cJSON *if_match_local_JSON = blockchain_dto_e_tag_convertToJSON(blockchain_dto_o_data_query_options->if_match);
    if(if_match_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ifMatch", if_match_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_o_data_query_options->if_none_match
    if(blockchain_dto_o_data_query_options->if_none_match) {
    cJSON *if_none_match_local_JSON = blockchain_dto_e_tag_convertToJSON(blockchain_dto_o_data_query_options->if_none_match);
    if(if_none_match_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ifNoneMatch", if_none_match_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options_parseFromJSON(cJSON *blockchain_dto_o_data_query_optionsJSON){

    blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options_local_var = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->request
    http_request_t *request_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->raw_values
    o_data_raw_query_options_t *raw_values_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->select_expand
    select_expand_query_option_t *select_expand_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->apply
    apply_query_option_t *apply_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->compute
    compute_query_option_t *compute_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->filter
    filter_query_option_t *filter_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->search
    search_query_option_t *search_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->order_by
    order_by_query_option_t *order_by_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->skip
    skip_query_option_t *skip_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->skip_token
    skip_token_query_option_t *skip_token_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->top
    top_query_option_t *top_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->count
    count_query_option_t *count_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->if_match
    blockchain_dto_e_tag_t *if_match_local_nonprim = NULL;

    // define the local variable for blockchain_dto_o_data_query_options->if_none_match
    blockchain_dto_e_tag_t *if_none_match_local_nonprim = NULL;

    // blockchain_dto_o_data_query_options->request
    cJSON *request = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "request");
    if (request) { 
    request_local_nonprim = http_request_parseFromJSON(request); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->raw_values
    cJSON *raw_values = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "rawValues");
    if (raw_values) { 
    raw_values_local_nonprim = o_data_raw_query_options_parseFromJSON(raw_values); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->select_expand
    cJSON *select_expand = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "selectExpand");
    if (select_expand) { 
    select_expand_local_nonprim = select_expand_query_option_parseFromJSON(select_expand); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->apply
    cJSON *apply = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "apply");
    if (apply) { 
    apply_local_nonprim = apply_query_option_parseFromJSON(apply); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->compute
    cJSON *compute = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "compute");
    if (compute) { 
    compute_local_nonprim = compute_query_option_parseFromJSON(compute); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "filter");
    if (filter) { 
    filter_local_nonprim = filter_query_option_parseFromJSON(filter); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "search");
    if (search) { 
    search_local_nonprim = search_query_option_parseFromJSON(search); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->order_by
    cJSON *order_by = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "orderBy");
    if (order_by) { 
    order_by_local_nonprim = order_by_query_option_parseFromJSON(order_by); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "skip");
    if (skip) { 
    skip_local_nonprim = skip_query_option_parseFromJSON(skip); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->skip_token
    cJSON *skip_token = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "skipToken");
    if (skip_token) { 
    skip_token_local_nonprim = skip_token_query_option_parseFromJSON(skip_token); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "top");
    if (top) { 
    top_local_nonprim = top_query_option_parseFromJSON(top); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "count");
    if (count) { 
    count_local_nonprim = count_query_option_parseFromJSON(count); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }

    // blockchain_dto_o_data_query_options->if_match
    cJSON *if_match = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "ifMatch");
    if (if_match) { 
    if_match_local_nonprim = blockchain_dto_e_tag_parseFromJSON(if_match); //nonprimitive
    }

    // blockchain_dto_o_data_query_options->if_none_match
    cJSON *if_none_match = cJSON_GetObjectItemCaseSensitive(blockchain_dto_o_data_query_optionsJSON, "ifNoneMatch");
    if (if_none_match) { 
    if_none_match_local_nonprim = blockchain_dto_e_tag_parseFromJSON(if_none_match); //nonprimitive
    }


    blockchain_dto_o_data_query_options_local_var = blockchain_dto_o_data_query_options_create (
        request ? request_local_nonprim : NULL,
        context ? context_local_nonprim : NULL,
        raw_values ? raw_values_local_nonprim : NULL,
        select_expand ? select_expand_local_nonprim : NULL,
        apply ? apply_local_nonprim : NULL,
        compute ? compute_local_nonprim : NULL,
        filter ? filter_local_nonprim : NULL,
        search ? search_local_nonprim : NULL,
        order_by ? order_by_local_nonprim : NULL,
        skip ? skip_local_nonprim : NULL,
        skip_token ? skip_token_local_nonprim : NULL,
        top ? top_local_nonprim : NULL,
        count ? count_local_nonprim : NULL,
        validator ? validator_local_object : NULL,
        if_match ? if_match_local_nonprim : NULL,
        if_none_match ? if_none_match_local_nonprim : NULL
        );

    return blockchain_dto_o_data_query_options_local_var;
end:
    if (request_local_nonprim) {
        http_request_free(request_local_nonprim);
        request_local_nonprim = NULL;
    }
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (raw_values_local_nonprim) {
        o_data_raw_query_options_free(raw_values_local_nonprim);
        raw_values_local_nonprim = NULL;
    }
    if (select_expand_local_nonprim) {
        select_expand_query_option_free(select_expand_local_nonprim);
        select_expand_local_nonprim = NULL;
    }
    if (apply_local_nonprim) {
        apply_query_option_free(apply_local_nonprim);
        apply_local_nonprim = NULL;
    }
    if (compute_local_nonprim) {
        compute_query_option_free(compute_local_nonprim);
        compute_local_nonprim = NULL;
    }
    if (filter_local_nonprim) {
        filter_query_option_free(filter_local_nonprim);
        filter_local_nonprim = NULL;
    }
    if (search_local_nonprim) {
        search_query_option_free(search_local_nonprim);
        search_local_nonprim = NULL;
    }
    if (order_by_local_nonprim) {
        order_by_query_option_free(order_by_local_nonprim);
        order_by_local_nonprim = NULL;
    }
    if (skip_local_nonprim) {
        skip_query_option_free(skip_local_nonprim);
        skip_local_nonprim = NULL;
    }
    if (skip_token_local_nonprim) {
        skip_token_query_option_free(skip_token_local_nonprim);
        skip_token_local_nonprim = NULL;
    }
    if (top_local_nonprim) {
        top_query_option_free(top_local_nonprim);
        top_local_nonprim = NULL;
    }
    if (count_local_nonprim) {
        count_query_option_free(count_local_nonprim);
        count_local_nonprim = NULL;
    }
    if (if_match_local_nonprim) {
        blockchain_dto_e_tag_free(if_match_local_nonprim);
        if_match_local_nonprim = NULL;
    }
    if (if_none_match_local_nonprim) {
        blockchain_dto_e_tag_free(if_none_match_local_nonprim);
        if_none_match_local_nonprim = NULL;
    }
    return NULL;

}
