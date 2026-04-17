/*
 * web_portal_dto_list_envelope.h
 *
 * 
 */

#ifndef _web_portal_dto_list_envelope_H_
#define _web_portal_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_portal_dto_list_envelope_t web_portal_dto_list_envelope_t;

#include "web_portal_dto.h"



typedef struct web_portal_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} web_portal_dto_list_envelope_t;

web_portal_dto_list_envelope_t *web_portal_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void web_portal_dto_list_envelope_free(web_portal_dto_list_envelope_t *web_portal_dto_list_envelope);

web_portal_dto_list_envelope_t *web_portal_dto_list_envelope_parseFromJSON(cJSON *web_portal_dto_list_envelopeJSON);

cJSON *web_portal_dto_list_envelope_convertToJSON(web_portal_dto_list_envelope_t *web_portal_dto_list_envelope);

#endif /* _web_portal_dto_list_envelope_H_ */

