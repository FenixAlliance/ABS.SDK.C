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




typedef struct social_feed_post_update_dto_t {
    char *title; // string
    char *message; // string

} social_feed_post_update_dto_t;

social_feed_post_update_dto_t *social_feed_post_update_dto_create(
    char *title,
    char *message
);

void social_feed_post_update_dto_free(social_feed_post_update_dto_t *social_feed_post_update_dto);

social_feed_post_update_dto_t *social_feed_post_update_dto_parseFromJSON(cJSON *social_feed_post_update_dtoJSON);

cJSON *social_feed_post_update_dto_convertToJSON(social_feed_post_update_dto_t *social_feed_post_update_dto);

#endif /* _social_feed_post_update_dto_H_ */

