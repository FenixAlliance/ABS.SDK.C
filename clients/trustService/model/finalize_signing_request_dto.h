/*
 * finalize_signing_request_dto.h
 *
 * 
 */

#ifndef _finalize_signing_request_dto_H_
#define _finalize_signing_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct finalize_signing_request_dto_t finalize_signing_request_dto_t;




typedef struct finalize_signing_request_dto_t {
    char *signed_file_upload_id; // string
    char *evidence_file_upload_id; // string
    char *external_reference; // string
    char *provider_name; // string
    char *outcome_notes; // string

} finalize_signing_request_dto_t;

finalize_signing_request_dto_t *finalize_signing_request_dto_create(
    char *signed_file_upload_id,
    char *evidence_file_upload_id,
    char *external_reference,
    char *provider_name,
    char *outcome_notes
);

void finalize_signing_request_dto_free(finalize_signing_request_dto_t *finalize_signing_request_dto);

finalize_signing_request_dto_t *finalize_signing_request_dto_parseFromJSON(cJSON *finalize_signing_request_dtoJSON);

cJSON *finalize_signing_request_dto_convertToJSON(finalize_signing_request_dto_t *finalize_signing_request_dto);

#endif /* _finalize_signing_request_dto_H_ */

