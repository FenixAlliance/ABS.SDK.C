/*
 * blog_post_comment_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _blog_post_comment_dto_collection_query_parameters_H_
#define _blog_post_comment_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_comment_dto_collection_query_parameters_t blog_post_comment_dto_collection_query_parameters_t;




typedef struct blog_post_comment_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} blog_post_comment_dto_collection_query_parameters_t;

blog_post_comment_dto_collection_query_parameters_t *blog_post_comment_dto_collection_query_parameters_create(
    int top,
    int skip,
    int count,
    char *filter,
    char *order_by,
    char *search,
    char *select,
    char *expand,
    int is_empty
);

void blog_post_comment_dto_collection_query_parameters_free(blog_post_comment_dto_collection_query_parameters_t *blog_post_comment_dto_collection_query_parameters);

blog_post_comment_dto_collection_query_parameters_t *blog_post_comment_dto_collection_query_parameters_parseFromJSON(cJSON *blog_post_comment_dto_collection_query_parametersJSON);

cJSON *blog_post_comment_dto_collection_query_parameters_convertToJSON(blog_post_comment_dto_collection_query_parameters_t *blog_post_comment_dto_collection_query_parameters);

#endif /* _blog_post_comment_dto_collection_query_parameters_H_ */

