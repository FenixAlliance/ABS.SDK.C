/*
 * social_post_comment_create_dto.h
 *
 * 
 */

#ifndef _social_post_comment_create_dto_H_
#define _social_post_comment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_comment_create_dto_t social_post_comment_create_dto_t;


// Enum BODYFORMAT for social_post_comment_create_dto

typedef enum  { socialservice_social_post_comment_create_dto_BODYFORMAT_NULL = 0, socialservice_social_post_comment_create_dto_BODYFORMAT_PlainText, socialservice_social_post_comment_create_dto_BODYFORMAT_Html } socialservice_social_post_comment_create_dto_BODYFORMAT_e;

char* social_post_comment_create_dto_body_format_ToString(socialservice_social_post_comment_create_dto_BODYFORMAT_e body_format);

socialservice_social_post_comment_create_dto_BODYFORMAT_e social_post_comment_create_dto_body_format_FromString(char* body_format);



typedef struct social_post_comment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *message; // string
    char *body_html; // string
    socialservice_social_post_comment_create_dto_BODYFORMAT_e body_format; //enum
    char *parent_comment_id; // string
    char *social_profile_id; // string
    char *social_feed_post_id; // string
    char *social_post_id; // string

} social_post_comment_create_dto_t;

social_post_comment_create_dto_t *social_post_comment_create_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *body_html,
    socialservice_social_post_comment_create_dto_BODYFORMAT_e body_format,
    char *parent_comment_id,
    char *social_profile_id,
    char *social_feed_post_id,
    char *social_post_id
);

void social_post_comment_create_dto_free(social_post_comment_create_dto_t *social_post_comment_create_dto);

social_post_comment_create_dto_t *social_post_comment_create_dto_parseFromJSON(cJSON *social_post_comment_create_dtoJSON);

cJSON *social_post_comment_create_dto_convertToJSON(social_post_comment_create_dto_t *social_post_comment_create_dto);

#endif /* _social_post_comment_create_dto_H_ */

