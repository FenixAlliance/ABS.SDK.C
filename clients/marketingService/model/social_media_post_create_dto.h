/*
 * social_media_post_create_dto.h
 *
 * 
 */

#ifndef _social_media_post_create_dto_H_
#define _social_media_post_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_media_post_create_dto_t social_media_post_create_dto_t;




typedef struct social_media_post_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *content; // string
    char *featured_image_url; // string
    char *social_post_bucket_id; // string

} social_media_post_create_dto_t;

social_media_post_create_dto_t *social_media_post_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *content,
    char *featured_image_url,
    char *social_post_bucket_id
);

void social_media_post_create_dto_free(social_media_post_create_dto_t *social_media_post_create_dto);

social_media_post_create_dto_t *social_media_post_create_dto_parseFromJSON(cJSON *social_media_post_create_dtoJSON);

cJSON *social_media_post_create_dto_convertToJSON(social_media_post_create_dto_t *social_media_post_create_dto);

#endif /* _social_media_post_create_dto_H_ */

