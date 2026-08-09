/*
 * social_post_comment_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _social_post_comment_dto_collection_query_parameters_H_
#define _social_post_comment_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_comment_dto_collection_query_parameters_t social_post_comment_dto_collection_query_parameters_t;




typedef struct social_post_comment_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} social_post_comment_dto_collection_query_parameters_t;

social_post_comment_dto_collection_query_parameters_t *social_post_comment_dto_collection_query_parameters_create(
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

void social_post_comment_dto_collection_query_parameters_free(social_post_comment_dto_collection_query_parameters_t *social_post_comment_dto_collection_query_parameters);

social_post_comment_dto_collection_query_parameters_t *social_post_comment_dto_collection_query_parameters_parseFromJSON(cJSON *social_post_comment_dto_collection_query_parametersJSON);

cJSON *social_post_comment_dto_collection_query_parameters_convertToJSON(social_post_comment_dto_collection_query_parameters_t *social_post_comment_dto_collection_query_parameters);

#endif /* _social_post_comment_dto_collection_query_parameters_H_ */

