/*
 * social_post_bucket_create_dto.h
 *
 * 
 */

#ifndef _social_post_bucket_create_dto_H_
#define _social_post_bucket_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_bucket_create_dto_t social_post_bucket_create_dto_t;




typedef struct social_post_bucket_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string

} social_post_bucket_create_dto_t;

social_post_bucket_create_dto_t *social_post_bucket_create_dto_create(
    char *id,
    char *timestamp,
    char *name
);

void social_post_bucket_create_dto_free(social_post_bucket_create_dto_t *social_post_bucket_create_dto);

social_post_bucket_create_dto_t *social_post_bucket_create_dto_parseFromJSON(cJSON *social_post_bucket_create_dtoJSON);

cJSON *social_post_bucket_create_dto_convertToJSON(social_post_bucket_create_dto_t *social_post_bucket_create_dto);

#endif /* _social_post_bucket_create_dto_H_ */

