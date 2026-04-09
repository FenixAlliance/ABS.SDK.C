/*
 * employee_profile_dto_list_envelope.h
 *
 * 
 */

#ifndef _employee_profile_dto_list_envelope_H_
#define _employee_profile_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_profile_dto_list_envelope_t employee_profile_dto_list_envelope_t;

#include "employee_profile_dto.h"



typedef struct employee_profile_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} employee_profile_dto_list_envelope_t;

employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void employee_profile_dto_list_envelope_free(employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope);

employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope_parseFromJSON(cJSON *employee_profile_dto_list_envelopeJSON);

cJSON *employee_profile_dto_list_envelope_convertToJSON(employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope);

#endif /* _employee_profile_dto_list_envelope_H_ */

