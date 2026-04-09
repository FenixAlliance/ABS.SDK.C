/*
 * accounting_period_dto_list_envelope.h
 *
 * 
 */

#ifndef _accounting_period_dto_list_envelope_H_
#define _accounting_period_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_period_dto_list_envelope_t accounting_period_dto_list_envelope_t;

#include "accounting_period_dto.h"



typedef struct accounting_period_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} accounting_period_dto_list_envelope_t;

accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void accounting_period_dto_list_envelope_free(accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope);

accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope_parseFromJSON(cJSON *accounting_period_dto_list_envelopeJSON);

cJSON *accounting_period_dto_list_envelope_convertToJSON(accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope);

#endif /* _accounting_period_dto_list_envelope_H_ */

