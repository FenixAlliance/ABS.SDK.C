/*
 * receipt_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _receipt_dto_i_read_only_list_envelope_H_
#define _receipt_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct receipt_dto_i_read_only_list_envelope_t receipt_dto_i_read_only_list_envelope_t;

#include "receipt_dto.h"



typedef struct receipt_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} receipt_dto_i_read_only_list_envelope_t;

receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void receipt_dto_i_read_only_list_envelope_free(receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope);

receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope_parseFromJSON(cJSON *receipt_dto_i_read_only_list_envelopeJSON);

cJSON *receipt_dto_i_read_only_list_envelope_convertToJSON(receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope);

#endif /* _receipt_dto_i_read_only_list_envelope_H_ */

