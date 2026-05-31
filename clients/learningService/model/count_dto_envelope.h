/*
 * count_dto_envelope.h
 *
 * 
 */

#ifndef _count_dto_envelope_H_
#define _count_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct count_dto_envelope_t count_dto_envelope_t;

#include "count_dto.h"



typedef struct count_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct count_dto_t *result; //model

} count_dto_envelope_t;

count_dto_envelope_t *count_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    count_dto_t *result
);

void count_dto_envelope_free(count_dto_envelope_t *count_dto_envelope);

count_dto_envelope_t *count_dto_envelope_parseFromJSON(cJSON *count_dto_envelopeJSON);

cJSON *count_dto_envelope_convertToJSON(count_dto_envelope_t *count_dto_envelope);

#endif /* _count_dto_envelope_H_ */

