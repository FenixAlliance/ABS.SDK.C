/*
 * security_permission_dto_envelope.h
 *
 * 
 */

#ifndef _security_permission_dto_envelope_H_
#define _security_permission_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_permission_dto_envelope_t security_permission_dto_envelope_t;

#include "security_permission_dto.h"



typedef struct security_permission_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct security_permission_dto_t *result; //model

} security_permission_dto_envelope_t;

security_permission_dto_envelope_t *security_permission_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    security_permission_dto_t *result
);

void security_permission_dto_envelope_free(security_permission_dto_envelope_t *security_permission_dto_envelope);

security_permission_dto_envelope_t *security_permission_dto_envelope_parseFromJSON(cJSON *security_permission_dto_envelopeJSON);

cJSON *security_permission_dto_envelope_convertToJSON(security_permission_dto_envelope_t *security_permission_dto_envelope);

#endif /* _security_permission_dto_envelope_H_ */

