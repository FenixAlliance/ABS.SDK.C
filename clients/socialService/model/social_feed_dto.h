/*
 * social_feed_dto.h
 *
 * 
 */

#ifndef _social_feed_dto_H_
#define _social_feed_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_feed_dto_t social_feed_dto_t;




typedef struct social_feed_dto_t {
    char *id; // string
    char *timestamp; //date time
    int social_posts_count; //numeric
    char *social_profile_id; // string

} social_feed_dto_t;

social_feed_dto_t *social_feed_dto_create(
    char *id,
    char *timestamp,
    int social_posts_count,
    char *social_profile_id
);

void social_feed_dto_free(social_feed_dto_t *social_feed_dto);

social_feed_dto_t *social_feed_dto_parseFromJSON(cJSON *social_feed_dtoJSON);

cJSON *social_feed_dto_convertToJSON(social_feed_dto_t *social_feed_dto);

#endif /* _social_feed_dto_H_ */

