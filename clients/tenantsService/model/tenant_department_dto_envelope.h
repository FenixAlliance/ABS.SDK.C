/*
 * tenant_department_dto_envelope.h
 *
 * 
 */

#ifndef _tenant_department_dto_envelope_H_
#define _tenant_department_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_department_dto_envelope_t tenant_department_dto_envelope_t;

#include "tenant_department_dto.h"



typedef struct tenant_department_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct tenant_department_dto_t *result; //model

} tenant_department_dto_envelope_t;

tenant_department_dto_envelope_t *tenant_department_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    tenant_department_dto_t *result
);

void tenant_department_dto_envelope_free(tenant_department_dto_envelope_t *tenant_department_dto_envelope);

tenant_department_dto_envelope_t *tenant_department_dto_envelope_parseFromJSON(cJSON *tenant_department_dto_envelopeJSON);

cJSON *tenant_department_dto_envelope_convertToJSON(tenant_department_dto_envelope_t *tenant_department_dto_envelope);

#endif /* _tenant_department_dto_envelope_H_ */

