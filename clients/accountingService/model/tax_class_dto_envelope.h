/*
 * tax_class_dto_envelope.h
 *
 * 
 */

#ifndef _tax_class_dto_envelope_H_
#define _tax_class_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_dto_envelope_t tax_class_dto_envelope_t;

#include "tax_class_dto.h"



typedef struct tax_class_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct tax_class_dto_t *result; //model

} tax_class_dto_envelope_t;

tax_class_dto_envelope_t *tax_class_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    tax_class_dto_t *result
);

void tax_class_dto_envelope_free(tax_class_dto_envelope_t *tax_class_dto_envelope);

tax_class_dto_envelope_t *tax_class_dto_envelope_parseFromJSON(cJSON *tax_class_dto_envelopeJSON);

cJSON *tax_class_dto_envelope_convertToJSON(tax_class_dto_envelope_t *tax_class_dto_envelope);

#endif /* _tax_class_dto_envelope_H_ */

