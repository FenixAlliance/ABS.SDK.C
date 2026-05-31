/*
 * payroll_dto_envelope.h
 *
 * 
 */

#ifndef _payroll_dto_envelope_H_
#define _payroll_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_dto_envelope_t payroll_dto_envelope_t;

#include "payroll_dto.h"



typedef struct payroll_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct payroll_dto_t *result; //model

} payroll_dto_envelope_t;

payroll_dto_envelope_t *payroll_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    payroll_dto_t *result
);

void payroll_dto_envelope_free(payroll_dto_envelope_t *payroll_dto_envelope);

payroll_dto_envelope_t *payroll_dto_envelope_parseFromJSON(cJSON *payroll_dto_envelopeJSON);

cJSON *payroll_dto_envelope_convertToJSON(payroll_dto_envelope_t *payroll_dto_envelope);

#endif /* _payroll_dto_envelope_H_ */

