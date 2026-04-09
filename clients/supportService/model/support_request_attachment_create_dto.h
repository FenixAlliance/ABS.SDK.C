/*
 * support_request_attachment_create_dto.h
 *
 * 
 */

#ifndef _support_request_attachment_create_dto_H_
#define _support_request_attachment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_request_attachment_create_dto_t support_request_attachment_create_dto_t;




typedef struct support_request_attachment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *notes; // string
    char *title; // string
    char *author; // string
    int is_folder; //boolean
    char *file_name; // string
    char *abstract; // string
    char *key_words; // string
    int valid_response; //boolean
    char *parent_file_upload_id; // string
    char *file_path; // string
    char *business_id; // string
    char *business_profile_record_id; // string
    char *metadata; // string
    char *support_request_id; // string

} support_request_attachment_create_dto_t;

support_request_attachment_create_dto_t *support_request_attachment_create_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *file_name,
    char *abstract,
    char *key_words,
    int valid_response,
    char *parent_file_upload_id,
    char *file_path,
    char *business_id,
    char *business_profile_record_id,
    char *metadata,
    char *support_request_id
);

void support_request_attachment_create_dto_free(support_request_attachment_create_dto_t *support_request_attachment_create_dto);

support_request_attachment_create_dto_t *support_request_attachment_create_dto_parseFromJSON(cJSON *support_request_attachment_create_dtoJSON);

cJSON *support_request_attachment_create_dto_convertToJSON(support_request_attachment_create_dto_t *support_request_attachment_create_dto);

#endif /* _support_request_attachment_create_dto_H_ */

