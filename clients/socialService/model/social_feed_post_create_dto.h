/*
 * social_feed_post_create_dto.h
 *
 * 
 */

#ifndef _social_feed_post_create_dto_H_
#define _social_feed_post_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_feed_post_create_dto_t social_feed_post_create_dto_t;


// Enum BODYFORMAT for social_feed_post_create_dto

typedef enum  { socialservice_social_feed_post_create_dto_BODYFORMAT_NULL = 0, socialservice_social_feed_post_create_dto_BODYFORMAT_PlainText, socialservice_social_feed_post_create_dto_BODYFORMAT_Html } socialservice_social_feed_post_create_dto_BODYFORMAT_e;

char* social_feed_post_create_dto_body_format_ToString(socialservice_social_feed_post_create_dto_BODYFORMAT_e body_format);

socialservice_social_feed_post_create_dto_BODYFORMAT_e social_feed_post_create_dto_body_format_FromString(char* body_format);



typedef struct social_feed_post_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *message; // string
    char *social_feed_id; // string
    char *social_profile_id; // string
    char *body_html; // string
    socialservice_social_feed_post_create_dto_BODYFORMAT_e body_format; //enum
    char *background_style; // string

} social_feed_post_create_dto_t;

social_feed_post_create_dto_t *social_feed_post_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_feed_id,
    char *social_profile_id,
    char *body_html,
    socialservice_social_feed_post_create_dto_BODYFORMAT_e body_format,
    char *background_style
);

void social_feed_post_create_dto_free(social_feed_post_create_dto_t *social_feed_post_create_dto);

social_feed_post_create_dto_t *social_feed_post_create_dto_parseFromJSON(cJSON *social_feed_post_create_dtoJSON);

cJSON *social_feed_post_create_dto_convertToJSON(social_feed_post_create_dto_t *social_feed_post_create_dto);

#endif /* _social_feed_post_create_dto_H_ */

