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




typedef struct social_feed_post_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *message; // string
    char *social_feed_id; // string
    char *social_profile_id; // string

} social_feed_post_create_dto_t;

social_feed_post_create_dto_t *social_feed_post_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_feed_id,
    char *social_profile_id
);

void social_feed_post_create_dto_free(social_feed_post_create_dto_t *social_feed_post_create_dto);

social_feed_post_create_dto_t *social_feed_post_create_dto_parseFromJSON(cJSON *social_feed_post_create_dtoJSON);

cJSON *social_feed_post_create_dto_convertToJSON(social_feed_post_create_dto_t *social_feed_post_create_dto);

#endif /* _social_feed_post_create_dto_H_ */

