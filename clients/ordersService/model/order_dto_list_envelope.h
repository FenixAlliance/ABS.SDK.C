/*
 * order_dto_list_envelope.h
 *
 * 
 */

#ifndef _order_dto_list_envelope_H_
#define _order_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_dto_list_envelope_t order_dto_list_envelope_t;

#include "order_dto.h"



typedef struct order_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} order_dto_list_envelope_t;

order_dto_list_envelope_t *order_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void order_dto_list_envelope_free(order_dto_list_envelope_t *order_dto_list_envelope);

order_dto_list_envelope_t *order_dto_list_envelope_parseFromJSON(cJSON *order_dto_list_envelopeJSON);

cJSON *order_dto_list_envelope_convertToJSON(order_dto_list_envelope_t *order_dto_list_envelope);

#endif /* _order_dto_list_envelope_H_ */

