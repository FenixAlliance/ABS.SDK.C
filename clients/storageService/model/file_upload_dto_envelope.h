/*
 * file_upload_dto_envelope.h
 *
 * 
 */

#ifndef _file_upload_dto_envelope_H_
#define _file_upload_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct file_upload_dto_envelope_t file_upload_dto_envelope_t;

#include "file_upload_dto.h"



typedef struct file_upload_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct file_upload_dto_t *result; //model

} file_upload_dto_envelope_t;

file_upload_dto_envelope_t *file_upload_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    file_upload_dto_t *result
);

void file_upload_dto_envelope_free(file_upload_dto_envelope_t *file_upload_dto_envelope);

file_upload_dto_envelope_t *file_upload_dto_envelope_parseFromJSON(cJSON *file_upload_dto_envelopeJSON);

cJSON *file_upload_dto_envelope_convertToJSON(file_upload_dto_envelope_t *file_upload_dto_envelope);

#endif /* _file_upload_dto_envelope_H_ */

