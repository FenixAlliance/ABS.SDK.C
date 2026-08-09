/*
 * conversation_attachment_upload_result_dto_envelope.h
 *
 * 
 */

#ifndef _conversation_attachment_upload_result_dto_envelope_H_
#define _conversation_attachment_upload_result_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct conversation_attachment_upload_result_dto_envelope_t conversation_attachment_upload_result_dto_envelope_t;

#include "conversation_attachment_upload_result_dto.h"



typedef struct conversation_attachment_upload_result_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct conversation_attachment_upload_result_dto_t *result; //model

} conversation_attachment_upload_result_dto_envelope_t;

conversation_attachment_upload_result_dto_envelope_t *conversation_attachment_upload_result_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    conversation_attachment_upload_result_dto_t *result
);

void conversation_attachment_upload_result_dto_envelope_free(conversation_attachment_upload_result_dto_envelope_t *conversation_attachment_upload_result_dto_envelope);

conversation_attachment_upload_result_dto_envelope_t *conversation_attachment_upload_result_dto_envelope_parseFromJSON(cJSON *conversation_attachment_upload_result_dto_envelopeJSON);

cJSON *conversation_attachment_upload_result_dto_envelope_convertToJSON(conversation_attachment_upload_result_dto_envelope_t *conversation_attachment_upload_result_dto_envelope);

#endif /* _conversation_attachment_upload_result_dto_envelope_H_ */

