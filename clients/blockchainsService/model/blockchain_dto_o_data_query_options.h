/*
 * blockchain_dto_o_data_query_options.h
 *
 * 
 */

#ifndef _blockchain_dto_o_data_query_options_H_
#define _blockchain_dto_o_data_query_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_dto_o_data_query_options_t blockchain_dto_o_data_query_options_t;

#include "apply_query_option.h"
#include "blockchain_dto_e_tag.h"
#include "compute_query_option.h"
#include "count_query_option.h"
#include "filter_query_option.h"
#include "http_request.h"
#include "o_data_query_context.h"
#include "o_data_raw_query_options.h"
#include "object.h"
#include "order_by_query_option.h"
#include "search_query_option.h"
#include "select_expand_query_option.h"
#include "skip_query_option.h"
#include "skip_token_query_option.h"
#include "top_query_option.h"



typedef struct blockchain_dto_o_data_query_options_t {
    struct http_request_t *request; //model
    struct o_data_query_context_t *context; //model
    struct o_data_raw_query_options_t *raw_values; //model
    struct select_expand_query_option_t *select_expand; //model
    struct apply_query_option_t *apply; //model
    struct compute_query_option_t *compute; //model
    struct filter_query_option_t *filter; //model
    struct search_query_option_t *search; //model
    struct order_by_query_option_t *order_by; //model
    struct skip_query_option_t *skip; //model
    struct skip_token_query_option_t *skip_token; //model
    struct top_query_option_t *top; //model
    struct count_query_option_t *count; //model
    object_t *validator; //object
    struct blockchain_dto_e_tag_t *if_match; //model
    struct blockchain_dto_e_tag_t *if_none_match; //model

} blockchain_dto_o_data_query_options_t;

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
);

void blockchain_dto_o_data_query_options_free(blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options);

blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options_parseFromJSON(cJSON *blockchain_dto_o_data_query_optionsJSON);

cJSON *blockchain_dto_o_data_query_options_convertToJSON(blockchain_dto_o_data_query_options_t *blockchain_dto_o_data_query_options);

#endif /* _blockchain_dto_o_data_query_options_H_ */

