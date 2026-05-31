/*
 * leave_type_dto_list_envelope.h
 *
 * 
 */

#ifndef _leave_type_dto_list_envelope_H_
#define _leave_type_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_type_dto_list_envelope_t leave_type_dto_list_envelope_t;

#include "leave_type_dto.h"



typedef struct leave_type_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} leave_type_dto_list_envelope_t;

leave_type_dto_list_envelope_t *leave_type_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void leave_type_dto_list_envelope_free(leave_type_dto_list_envelope_t *leave_type_dto_list_envelope);

leave_type_dto_list_envelope_t *leave_type_dto_list_envelope_parseFromJSON(cJSON *leave_type_dto_list_envelopeJSON);

cJSON *leave_type_dto_list_envelope_convertToJSON(leave_type_dto_list_envelope_t *leave_type_dto_list_envelope);

#endif /* _leave_type_dto_list_envelope_H_ */

