/*
 * social_post_bucket_update_dto.h
 *
 * 
 */

#ifndef _social_post_bucket_update_dto_H_
#define _social_post_bucket_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_bucket_update_dto_t social_post_bucket_update_dto_t;




typedef struct social_post_bucket_update_dto_t {
    char *name; // string

} social_post_bucket_update_dto_t;

social_post_bucket_update_dto_t *social_post_bucket_update_dto_create(
    char *name
);

void social_post_bucket_update_dto_free(social_post_bucket_update_dto_t *social_post_bucket_update_dto);

social_post_bucket_update_dto_t *social_post_bucket_update_dto_parseFromJSON(cJSON *social_post_bucket_update_dtoJSON);

cJSON *social_post_bucket_update_dto_convertToJSON(social_post_bucket_update_dto_t *social_post_bucket_update_dto);

#endif /* _social_post_bucket_update_dto_H_ */

