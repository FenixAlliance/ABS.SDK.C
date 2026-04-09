/*
 * item_price_calculation_envelope.h
 *
 * 
 */

#ifndef _item_price_calculation_envelope_H_
#define _item_price_calculation_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_price_calculation_envelope_t item_price_calculation_envelope_t;

#include "item_price_calculation.h"



typedef struct item_price_calculation_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct item_price_calculation_t *result; //model

} item_price_calculation_envelope_t;

item_price_calculation_envelope_t *item_price_calculation_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    item_price_calculation_t *result
);

void item_price_calculation_envelope_free(item_price_calculation_envelope_t *item_price_calculation_envelope);

item_price_calculation_envelope_t *item_price_calculation_envelope_parseFromJSON(cJSON *item_price_calculation_envelopeJSON);

cJSON *item_price_calculation_envelope_convertToJSON(item_price_calculation_envelope_t *item_price_calculation_envelope);

#endif /* _item_price_calculation_envelope_H_ */

