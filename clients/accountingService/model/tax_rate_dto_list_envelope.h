/*
 * tax_rate_dto_list_envelope.h
 *
 * 
 */

#ifndef _tax_rate_dto_list_envelope_H_
#define _tax_rate_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_rate_dto_list_envelope_t tax_rate_dto_list_envelope_t;

#include "tax_rate_dto.h"



typedef struct tax_rate_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} tax_rate_dto_list_envelope_t;

tax_rate_dto_list_envelope_t *tax_rate_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void tax_rate_dto_list_envelope_free(tax_rate_dto_list_envelope_t *tax_rate_dto_list_envelope);

tax_rate_dto_list_envelope_t *tax_rate_dto_list_envelope_parseFromJSON(cJSON *tax_rate_dto_list_envelopeJSON);

cJSON *tax_rate_dto_list_envelope_convertToJSON(tax_rate_dto_list_envelope_t *tax_rate_dto_list_envelope);

#endif /* _tax_rate_dto_list_envelope_H_ */

