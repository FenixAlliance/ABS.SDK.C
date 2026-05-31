/*
 * warehouse_dto_envelope.h
 *
 * 
 */

#ifndef _warehouse_dto_envelope_H_
#define _warehouse_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct warehouse_dto_envelope_t warehouse_dto_envelope_t;

#include "warehouse_dto.h"



typedef struct warehouse_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct warehouse_dto_t *result; //model

} warehouse_dto_envelope_t;

warehouse_dto_envelope_t *warehouse_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    warehouse_dto_t *result
);

void warehouse_dto_envelope_free(warehouse_dto_envelope_t *warehouse_dto_envelope);

warehouse_dto_envelope_t *warehouse_dto_envelope_parseFromJSON(cJSON *warehouse_dto_envelopeJSON);

cJSON *warehouse_dto_envelope_convertToJSON(warehouse_dto_envelope_t *warehouse_dto_envelope);

#endif /* _warehouse_dto_envelope_H_ */

