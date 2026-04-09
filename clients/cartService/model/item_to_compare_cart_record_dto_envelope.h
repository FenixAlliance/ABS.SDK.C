/*
 * item_to_compare_cart_record_dto_envelope.h
 *
 * 
 */

#ifndef _item_to_compare_cart_record_dto_envelope_H_
#define _item_to_compare_cart_record_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_to_compare_cart_record_dto_envelope_t item_to_compare_cart_record_dto_envelope_t;

#include "item_to_compare_cart_record_dto.h"



typedef struct item_to_compare_cart_record_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct item_to_compare_cart_record_dto_t *result; //model

} item_to_compare_cart_record_dto_envelope_t;

item_to_compare_cart_record_dto_envelope_t *item_to_compare_cart_record_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    item_to_compare_cart_record_dto_t *result
);

void item_to_compare_cart_record_dto_envelope_free(item_to_compare_cart_record_dto_envelope_t *item_to_compare_cart_record_dto_envelope);

item_to_compare_cart_record_dto_envelope_t *item_to_compare_cart_record_dto_envelope_parseFromJSON(cJSON *item_to_compare_cart_record_dto_envelopeJSON);

cJSON *item_to_compare_cart_record_dto_envelope_convertToJSON(item_to_compare_cart_record_dto_envelope_t *item_to_compare_cart_record_dto_envelope);

#endif /* _item_to_compare_cart_record_dto_envelope_H_ */

