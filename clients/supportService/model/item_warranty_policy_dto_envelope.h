/*
 * item_warranty_policy_dto_envelope.h
 *
 * 
 */

#ifndef _item_warranty_policy_dto_envelope_H_
#define _item_warranty_policy_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_warranty_policy_dto_envelope_t item_warranty_policy_dto_envelope_t;

#include "item_warranty_policy_dto.h"



typedef struct item_warranty_policy_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct item_warranty_policy_dto_t *result; //model

} item_warranty_policy_dto_envelope_t;

item_warranty_policy_dto_envelope_t *item_warranty_policy_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    item_warranty_policy_dto_t *result
);

void item_warranty_policy_dto_envelope_free(item_warranty_policy_dto_envelope_t *item_warranty_policy_dto_envelope);

item_warranty_policy_dto_envelope_t *item_warranty_policy_dto_envelope_parseFromJSON(cJSON *item_warranty_policy_dto_envelopeJSON);

cJSON *item_warranty_policy_dto_envelope_convertToJSON(item_warranty_policy_dto_envelope_t *item_warranty_policy_dto_envelope);

#endif /* _item_warranty_policy_dto_envelope_H_ */

