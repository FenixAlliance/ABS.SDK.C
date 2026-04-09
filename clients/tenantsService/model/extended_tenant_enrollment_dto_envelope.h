/*
 * extended_tenant_enrollment_dto_envelope.h
 *
 * 
 */

#ifndef _extended_tenant_enrollment_dto_envelope_H_
#define _extended_tenant_enrollment_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_tenant_enrollment_dto_envelope_t extended_tenant_enrollment_dto_envelope_t;

#include "extended_tenant_enrollment_dto.h"



typedef struct extended_tenant_enrollment_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct extended_tenant_enrollment_dto_t *result; //model

} extended_tenant_enrollment_dto_envelope_t;

extended_tenant_enrollment_dto_envelope_t *extended_tenant_enrollment_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    extended_tenant_enrollment_dto_t *result
);

void extended_tenant_enrollment_dto_envelope_free(extended_tenant_enrollment_dto_envelope_t *extended_tenant_enrollment_dto_envelope);

extended_tenant_enrollment_dto_envelope_t *extended_tenant_enrollment_dto_envelope_parseFromJSON(cJSON *extended_tenant_enrollment_dto_envelopeJSON);

cJSON *extended_tenant_enrollment_dto_envelope_convertToJSON(extended_tenant_enrollment_dto_envelope_t *extended_tenant_enrollment_dto_envelope);

#endif /* _extended_tenant_enrollment_dto_envelope_H_ */

