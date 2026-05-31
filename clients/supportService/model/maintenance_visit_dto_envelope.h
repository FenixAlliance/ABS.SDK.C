/*
 * maintenance_visit_dto_envelope.h
 *
 * 
 */

#ifndef _maintenance_visit_dto_envelope_H_
#define _maintenance_visit_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct maintenance_visit_dto_envelope_t maintenance_visit_dto_envelope_t;

#include "maintenance_visit_dto.h"



typedef struct maintenance_visit_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct maintenance_visit_dto_t *result; //model

} maintenance_visit_dto_envelope_t;

maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    maintenance_visit_dto_t *result
);

void maintenance_visit_dto_envelope_free(maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope);

maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope_parseFromJSON(cJSON *maintenance_visit_dto_envelopeJSON);

cJSON *maintenance_visit_dto_envelope_convertToJSON(maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope);

#endif /* _maintenance_visit_dto_envelope_H_ */

