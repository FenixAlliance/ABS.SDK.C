/*
 * social_post_attachment_update_dto.h
 *
 * 
 */

#ifndef _social_post_attachment_update_dto_H_
#define _social_post_attachment_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_attachment_update_dto_t social_post_attachment_update_dto_t;




typedef struct social_post_attachment_update_dto_t {
    char *notes; // string
    char *metadata; // string
    char *title; // string
    char *author; // string
    int is_folder; //boolean
    char *file_name; // string
    char *abstract; // string
    char *key_words; // string
    int valid_response; //boolean
    char *parent_file_upload_id; // string
    char *file_path; // string

} social_post_attachment_update_dto_t;

social_post_attachment_update_dto_t *social_post_attachment_update_dto_create(
    char *notes,
    char *metadata,
    char *title,
    char *author,
    int is_folder,
    char *file_name,
    char *abstract,
    char *key_words,
    int valid_response,
    char *parent_file_upload_id,
    char *file_path
);

void social_post_attachment_update_dto_free(social_post_attachment_update_dto_t *social_post_attachment_update_dto);

social_post_attachment_update_dto_t *social_post_attachment_update_dto_parseFromJSON(cJSON *social_post_attachment_update_dtoJSON);

cJSON *social_post_attachment_update_dto_convertToJSON(social_post_attachment_update_dto_t *social_post_attachment_update_dto);

#endif /* _social_post_attachment_update_dto_H_ */

