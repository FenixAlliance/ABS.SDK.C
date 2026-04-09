/*
 * social_post_comment_dto.h
 *
 * 
 */

#ifndef _social_post_comment_dto_H_
#define _social_post_comment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_comment_dto_t social_post_comment_dto_t;




typedef struct social_post_comment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *message; // string
    char *parent_comment_id; // string
    char *social_profile_id; // string
    char *social_feed_post_id; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string
    char *social_post_id; // string

} social_post_comment_dto_t;

social_post_comment_dto_t *social_post_comment_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *parent_comment_id,
    char *social_profile_id,
    char *social_feed_post_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    char *social_post_id
);

void social_post_comment_dto_free(social_post_comment_dto_t *social_post_comment_dto);

social_post_comment_dto_t *social_post_comment_dto_parseFromJSON(cJSON *social_post_comment_dtoJSON);

cJSON *social_post_comment_dto_convertToJSON(social_post_comment_dto_t *social_post_comment_dto);

#endif /* _social_post_comment_dto_H_ */

