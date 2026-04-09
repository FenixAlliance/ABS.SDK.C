/*
 * blog_post_comment_dto.h
 *
 * 
 */

#ifndef _blog_post_comment_dto_H_
#define _blog_post_comment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_comment_dto_t blog_post_comment_dto_t;




typedef struct blog_post_comment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *blog_post_id; // string
    char *message; // string
    char *owner_social_profile_id; // string
    char *social_post_id; // string
    char *parent_comment_id; // string

} blog_post_comment_dto_t;

blog_post_comment_dto_t *blog_post_comment_dto_create(
    char *id,
    char *timestamp,
    char *blog_post_id,
    char *message,
    char *owner_social_profile_id,
    char *social_post_id,
    char *parent_comment_id
);

void blog_post_comment_dto_free(blog_post_comment_dto_t *blog_post_comment_dto);

blog_post_comment_dto_t *blog_post_comment_dto_parseFromJSON(cJSON *blog_post_comment_dtoJSON);

cJSON *blog_post_comment_dto_convertToJSON(blog_post_comment_dto_t *blog_post_comment_dto);

#endif /* _blog_post_comment_dto_H_ */

