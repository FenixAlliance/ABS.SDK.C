/*
 * item_image_create_dto.h
 *
 * 
 */

#ifndef _item_image_create_dto_H_
#define _item_image_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_image_create_dto_t item_image_create_dto_t;




typedef struct item_image_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_id; // string
    char *business_profile_record_id; // string
    char *item_id; // string
    int is_item_mozaic_bg; //boolean
    char *m_d5_hash; // string
    char *metadata; // string
    char *file_upload_url; // string
    char *file_name; // string
    char *title; // string
    char *abstract; // string
    char *author; // string
    char *key_words; // string
    char *notes; // string
    char *content_type; // string
    long file_length; //numeric
    int valid_response; //boolean
    char *social_profile_id; // string
    char *parent_file_upload_id; // string
    char *account_holder_id; // string

} item_image_create_dto_t;

item_image_create_dto_t *item_image_create_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *item_id,
    int is_item_mozaic_bg,
    char *m_d5_hash,
    char *metadata,
    char *file_upload_url,
    char *file_name,
    char *title,
    char *abstract,
    char *author,
    char *key_words,
    char *notes,
    char *content_type,
    long file_length,
    int valid_response,
    char *social_profile_id,
    char *parent_file_upload_id,
    char *account_holder_id
);

void item_image_create_dto_free(item_image_create_dto_t *item_image_create_dto);

item_image_create_dto_t *item_image_create_dto_parseFromJSON(cJSON *item_image_create_dtoJSON);

cJSON *item_image_create_dto_convertToJSON(item_image_create_dto_t *item_image_create_dto);

#endif /* _item_image_create_dto_H_ */

