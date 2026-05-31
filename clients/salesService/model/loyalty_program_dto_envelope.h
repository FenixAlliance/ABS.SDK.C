/*
 * loyalty_program_dto_envelope.h
 *
 * 
 */

#ifndef _loyalty_program_dto_envelope_H_
#define _loyalty_program_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loyalty_program_dto_envelope_t loyalty_program_dto_envelope_t;

#include "loyalty_program_dto.h"



typedef struct loyalty_program_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct loyalty_program_dto_t *result; //model

} loyalty_program_dto_envelope_t;

loyalty_program_dto_envelope_t *loyalty_program_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    loyalty_program_dto_t *result
);

void loyalty_program_dto_envelope_free(loyalty_program_dto_envelope_t *loyalty_program_dto_envelope);

loyalty_program_dto_envelope_t *loyalty_program_dto_envelope_parseFromJSON(cJSON *loyalty_program_dto_envelopeJSON);

cJSON *loyalty_program_dto_envelope_convertToJSON(loyalty_program_dto_envelope_t *loyalty_program_dto_envelope);

#endif /* _loyalty_program_dto_envelope_H_ */

