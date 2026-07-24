/*
 * workstation_dto_list_envelope.h
 *
 * 
 */

#ifndef _workstation_dto_list_envelope_H_
#define _workstation_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct workstation_dto_list_envelope_t workstation_dto_list_envelope_t;

#include "workstation_dto.h"



typedef struct workstation_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} workstation_dto_list_envelope_t;

workstation_dto_list_envelope_t *workstation_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void workstation_dto_list_envelope_free(workstation_dto_list_envelope_t *workstation_dto_list_envelope);

workstation_dto_list_envelope_t *workstation_dto_list_envelope_parseFromJSON(cJSON *workstation_dto_list_envelopeJSON);

cJSON *workstation_dto_list_envelope_convertToJSON(workstation_dto_list_envelope_t *workstation_dto_list_envelope);

#endif /* _workstation_dto_list_envelope_H_ */

