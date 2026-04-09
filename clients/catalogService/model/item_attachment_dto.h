/*
 * item_attachment_dto.h
 *
 * 
 */

#ifndef _item_attachment_dto_H_
#define _item_attachment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attachment_dto_t item_attachment_dto_t;




typedef struct item_attachment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *notes; // string
    char *title; // string
    char *author; // string
    int is_folder; //boolean
    char *hash; // string
    char *file_url; // string
    char *file_path; // string
    char *file_name; // string
    char *abstract; // string
    char *key_words; // string
    char *metadata; // string
    long file_length; //numeric
    char *content_type; // string
    char *parent_file_id; // string
    int valid_response; //boolean
    char *user_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *social_profile_id; // string
    char *folder_path; // string
    char *item_id; // string

} item_attachment_dto_t;

item_attachment_dto_t *item_attachment_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *hash,
    char *file_url,
    char *file_path,
    char *file_name,
    char *abstract,
    char *key_words,
    char *metadata,
    long file_length,
    char *content_type,
    char *parent_file_id,
    int valid_response,
    char *user_id,
    char *tenant_id,
    char *enrollment_id,
    char *social_profile_id,
    char *folder_path,
    char *item_id
);

void item_attachment_dto_free(item_attachment_dto_t *item_attachment_dto);

item_attachment_dto_t *item_attachment_dto_parseFromJSON(cJSON *item_attachment_dtoJSON);

cJSON *item_attachment_dto_convertToJSON(item_attachment_dto_t *item_attachment_dto);

#endif /* _item_attachment_dto_H_ */

