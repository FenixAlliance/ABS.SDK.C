/*
 * payment_method_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _payment_method_dto_i_read_only_list_envelope_H_
#define _payment_method_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_method_dto_i_read_only_list_envelope_t payment_method_dto_i_read_only_list_envelope_t;

#include "payment_method_dto.h"



typedef struct payment_method_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} payment_method_dto_i_read_only_list_envelope_t;

payment_method_dto_i_read_only_list_envelope_t *payment_method_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void payment_method_dto_i_read_only_list_envelope_free(payment_method_dto_i_read_only_list_envelope_t *payment_method_dto_i_read_only_list_envelope);

payment_method_dto_i_read_only_list_envelope_t *payment_method_dto_i_read_only_list_envelope_parseFromJSON(cJSON *payment_method_dto_i_read_only_list_envelopeJSON);

cJSON *payment_method_dto_i_read_only_list_envelope_convertToJSON(payment_method_dto_i_read_only_list_envelope_t *payment_method_dto_i_read_only_list_envelope);

#endif /* _payment_method_dto_i_read_only_list_envelope_H_ */

