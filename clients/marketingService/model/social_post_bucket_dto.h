/*
 * social_post_bucket_dto.h
 *
 * 
 */

#ifndef _social_post_bucket_dto_H_
#define _social_post_bucket_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_bucket_dto_t social_post_bucket_dto_t;




typedef struct social_post_bucket_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} social_post_bucket_dto_t;

social_post_bucket_dto_t *social_post_bucket_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id
);

void social_post_bucket_dto_free(social_post_bucket_dto_t *social_post_bucket_dto);

social_post_bucket_dto_t *social_post_bucket_dto_parseFromJSON(cJSON *social_post_bucket_dtoJSON);

cJSON *social_post_bucket_dto_convertToJSON(social_post_bucket_dto_t *social_post_bucket_dto);

#endif /* _social_post_bucket_dto_H_ */

