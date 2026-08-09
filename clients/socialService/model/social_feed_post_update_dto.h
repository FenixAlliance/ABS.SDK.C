/*
 * social_feed_post_update_dto.h
 *
 * 
 */

#ifndef _social_feed_post_update_dto_H_
#define _social_feed_post_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_feed_post_update_dto_t social_feed_post_update_dto_t;


// Enum BODYFORMAT for social_feed_post_update_dto

typedef enum  { socialservice_social_feed_post_update_dto_BODYFORMAT_NULL = 0, socialservice_social_feed_post_update_dto_BODYFORMAT_PlainText, socialservice_social_feed_post_update_dto_BODYFORMAT_Html } socialservice_social_feed_post_update_dto_BODYFORMAT_e;

char* social_feed_post_update_dto_body_format_ToString(socialservice_social_feed_post_update_dto_BODYFORMAT_e body_format);

socialservice_social_feed_post_update_dto_BODYFORMAT_e social_feed_post_update_dto_body_format_FromString(char* body_format);



typedef struct social_feed_post_update_dto_t {
    char *title; // string
    char *message; // string
    char *body_html; // string
    socialservice_social_feed_post_update_dto_BODYFORMAT_e body_format; //enum
    char *background_style; // string

} social_feed_post_update_dto_t;

social_feed_post_update_dto_t *social_feed_post_update_dto_create(
    char *title,
    char *message,
    char *body_html,
    socialservice_social_feed_post_update_dto_BODYFORMAT_e body_format,
    char *background_style
);

void social_feed_post_update_dto_free(social_feed_post_update_dto_t *social_feed_post_update_dto);

social_feed_post_update_dto_t *social_feed_post_update_dto_parseFromJSON(cJSON *social_feed_post_update_dtoJSON);

cJSON *social_feed_post_update_dto_convertToJSON(social_feed_post_update_dto_t *social_feed_post_update_dto);

#endif /* _social_feed_post_update_dto_H_ */

