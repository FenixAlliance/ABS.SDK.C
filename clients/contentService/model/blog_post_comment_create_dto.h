/*
 * blog_post_comment_create_dto.h
 *
 * 
 */

#ifndef _blog_post_comment_create_dto_H_
#define _blog_post_comment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_comment_create_dto_t blog_post_comment_create_dto_t;




typedef struct blog_post_comment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *message; // string
    char *owner_social_profile_id; // string
    char *social_post_id; // string
    char *parent_comment_id; // string

} blog_post_comment_create_dto_t;

blog_post_comment_create_dto_t *blog_post_comment_create_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *owner_social_profile_id,
    char *social_post_id,
    char *parent_comment_id
);

void blog_post_comment_create_dto_free(blog_post_comment_create_dto_t *blog_post_comment_create_dto);

blog_post_comment_create_dto_t *blog_post_comment_create_dto_parseFromJSON(cJSON *blog_post_comment_create_dtoJSON);

cJSON *blog_post_comment_create_dto_convertToJSON(blog_post_comment_create_dto_t *blog_post_comment_create_dto);

#endif /* _blog_post_comment_create_dto_H_ */

