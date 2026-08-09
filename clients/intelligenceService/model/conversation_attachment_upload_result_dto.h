/*
 * conversation_attachment_upload_result_dto.h
 *
 * 
 */

#ifndef _conversation_attachment_upload_result_dto_H_
#define _conversation_attachment_upload_result_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct conversation_attachment_upload_result_dto_t conversation_attachment_upload_result_dto_t;




typedef struct conversation_attachment_upload_result_dto_t {
    char *file_id; // string
    char *name; // string
    char *content_type; // string
    long length; //numeric

} conversation_attachment_upload_result_dto_t;

conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto_create(
    char *file_id,
    char *name,
    char *content_type,
    long length
);

void conversation_attachment_upload_result_dto_free(conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto);

conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto_parseFromJSON(cJSON *conversation_attachment_upload_result_dtoJSON);

cJSON *conversation_attachment_upload_result_dto_convertToJSON(conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto);

#endif /* _conversation_attachment_upload_result_dto_H_ */

