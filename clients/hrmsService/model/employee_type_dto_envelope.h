/*
 * employee_type_dto_envelope.h
 *
 * 
 */

#ifndef _employee_type_dto_envelope_H_
#define _employee_type_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_type_dto_envelope_t employee_type_dto_envelope_t;

#include "employee_type_dto.h"



typedef struct employee_type_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct employee_type_dto_t *result; //model

} employee_type_dto_envelope_t;

employee_type_dto_envelope_t *employee_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    employee_type_dto_t *result
);

void employee_type_dto_envelope_free(employee_type_dto_envelope_t *employee_type_dto_envelope);

employee_type_dto_envelope_t *employee_type_dto_envelope_parseFromJSON(cJSON *employee_type_dto_envelopeJSON);

cJSON *employee_type_dto_envelope_convertToJSON(employee_type_dto_envelope_t *employee_type_dto_envelope);

#endif /* _employee_type_dto_envelope_H_ */

