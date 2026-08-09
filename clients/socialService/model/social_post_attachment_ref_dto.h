/*
 * social_post_attachment_ref_dto.h
 *
 * 
 */

#ifndef _social_post_attachment_ref_dto_H_
#define _social_post_attachment_ref_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_attachment_ref_dto_t social_post_attachment_ref_dto_t;




typedef struct social_post_attachment_ref_dto_t {
    char *id; // string
    char *file_url; // string
    char *title; // string
    char *content_type; // string

} social_post_attachment_ref_dto_t;

social_post_attachment_ref_dto_t *social_post_attachment_ref_dto_create(
    char *id,
    char *file_url,
    char *title,
    char *content_type
);

void social_post_attachment_ref_dto_free(social_post_attachment_ref_dto_t *social_post_attachment_ref_dto);

social_post_attachment_ref_dto_t *social_post_attachment_ref_dto_parseFromJSON(cJSON *social_post_attachment_ref_dtoJSON);

cJSON *social_post_attachment_ref_dto_convertToJSON(social_post_attachment_ref_dto_t *social_post_attachment_ref_dto);

#endif /* _social_post_attachment_ref_dto_H_ */

