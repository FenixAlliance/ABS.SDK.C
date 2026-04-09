/*
 * web_content_dto_envelope.h
 *
 * 
 */

#ifndef _web_content_dto_envelope_H_
#define _web_content_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_content_dto_envelope_t web_content_dto_envelope_t;

#include "web_content_dto.h"



typedef struct web_content_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct web_content_dto_t *result; //model

} web_content_dto_envelope_t;

web_content_dto_envelope_t *web_content_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    web_content_dto_t *result
);

void web_content_dto_envelope_free(web_content_dto_envelope_t *web_content_dto_envelope);

web_content_dto_envelope_t *web_content_dto_envelope_parseFromJSON(cJSON *web_content_dto_envelopeJSON);

cJSON *web_content_dto_envelope_convertToJSON(web_content_dto_envelope_t *web_content_dto_envelope);

#endif /* _web_content_dto_envelope_H_ */

