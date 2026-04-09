/*
 * social_group_dto.h
 *
 * 
 */

#ifndef _social_group_dto_H_
#define _social_group_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_group_dto_t social_group_dto_t;




typedef struct social_group_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *title; // string
    char *avatar_url; // string
    char *business_id; // string
    char *business_profile_record_id; // string
    char *social_profile_id; // string

} social_group_dto_t;

social_group_dto_t *social_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *title,
    char *avatar_url,
    char *business_id,
    char *business_profile_record_id,
    char *social_profile_id
);

void social_group_dto_free(social_group_dto_t *social_group_dto);

social_group_dto_t *social_group_dto_parseFromJSON(cJSON *social_group_dtoJSON);

cJSON *social_group_dto_convertToJSON(social_group_dto_t *social_group_dto);

#endif /* _social_group_dto_H_ */

