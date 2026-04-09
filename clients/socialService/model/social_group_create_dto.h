/*
 * social_group_create_dto.h
 *
 * 
 */

#ifndef _social_group_create_dto_H_
#define _social_group_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_group_create_dto_t social_group_create_dto_t;




typedef struct social_group_create_dto_t {
    char *name; // string
    char *title; // string
    char *avatar_url; // string
    char *social_profile_id; // string

} social_group_create_dto_t;

social_group_create_dto_t *social_group_create_dto_create(
    char *name,
    char *title,
    char *avatar_url,
    char *social_profile_id
);

void social_group_create_dto_free(social_group_create_dto_t *social_group_create_dto);

social_group_create_dto_t *social_group_create_dto_parseFromJSON(cJSON *social_group_create_dtoJSON);

cJSON *social_group_create_dto_convertToJSON(social_group_create_dto_t *social_group_create_dto);

#endif /* _social_group_create_dto_H_ */

