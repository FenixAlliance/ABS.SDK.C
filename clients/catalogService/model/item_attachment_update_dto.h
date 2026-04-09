/*
 * item_attachment_update_dto.h
 *
 * 
 */

#ifndef _item_attachment_update_dto_H_
#define _item_attachment_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attachment_update_dto_t item_attachment_update_dto_t;




typedef struct item_attachment_update_dto_t {
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

} item_attachment_update_dto_t;

item_attachment_update_dto_t *item_attachment_update_dto_create(
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

void item_attachment_update_dto_free(item_attachment_update_dto_t *item_attachment_update_dto);

item_attachment_update_dto_t *item_attachment_update_dto_parseFromJSON(cJSON *item_attachment_update_dtoJSON);

cJSON *item_attachment_update_dto_convertToJSON(item_attachment_update_dto_t *item_attachment_update_dto);

#endif /* _item_attachment_update_dto_H_ */

