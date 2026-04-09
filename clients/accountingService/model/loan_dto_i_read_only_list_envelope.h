/*
 * loan_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _loan_dto_i_read_only_list_envelope_H_
#define _loan_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_dto_i_read_only_list_envelope_t loan_dto_i_read_only_list_envelope_t;

#include "loan_dto.h"



typedef struct loan_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} loan_dto_i_read_only_list_envelope_t;

loan_dto_i_read_only_list_envelope_t *loan_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void loan_dto_i_read_only_list_envelope_free(loan_dto_i_read_only_list_envelope_t *loan_dto_i_read_only_list_envelope);

loan_dto_i_read_only_list_envelope_t *loan_dto_i_read_only_list_envelope_parseFromJSON(cJSON *loan_dto_i_read_only_list_envelopeJSON);

cJSON *loan_dto_i_read_only_list_envelope_convertToJSON(loan_dto_i_read_only_list_envelope_t *loan_dto_i_read_only_list_envelope);

#endif /* _loan_dto_i_read_only_list_envelope_H_ */

