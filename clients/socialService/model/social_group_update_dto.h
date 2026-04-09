/*
 * social_group_update_dto.h
 *
 * 
 */

#ifndef _social_group_update_dto_H_
#define _social_group_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_group_update_dto_t social_group_update_dto_t;




typedef struct social_group_update_dto_t {
    char *name; // string
    char *title; // string
    char *avatar_url; // string

} social_group_update_dto_t;

social_group_update_dto_t *social_group_update_dto_create(
    char *name,
    char *title,
    char *avatar_url
);

void social_group_update_dto_free(social_group_update_dto_t *social_group_update_dto);

social_group_update_dto_t *social_group_update_dto_parseFromJSON(cJSON *social_group_update_dtoJSON);

cJSON *social_group_update_dto_convertToJSON(social_group_update_dto_t *social_group_update_dto);

#endif /* _social_group_update_dto_H_ */

