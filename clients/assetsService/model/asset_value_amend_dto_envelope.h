/*
 * asset_value_amend_dto_envelope.h
 *
 * 
 */

#ifndef _asset_value_amend_dto_envelope_H_
#define _asset_value_amend_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_value_amend_dto_envelope_t asset_value_amend_dto_envelope_t;

#include "asset_value_amend_dto.h"



typedef struct asset_value_amend_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct asset_value_amend_dto_t *result; //model

} asset_value_amend_dto_envelope_t;

asset_value_amend_dto_envelope_t *asset_value_amend_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    asset_value_amend_dto_t *result
);

void asset_value_amend_dto_envelope_free(asset_value_amend_dto_envelope_t *asset_value_amend_dto_envelope);

asset_value_amend_dto_envelope_t *asset_value_amend_dto_envelope_parseFromJSON(cJSON *asset_value_amend_dto_envelopeJSON);

cJSON *asset_value_amend_dto_envelope_convertToJSON(asset_value_amend_dto_envelope_t *asset_value_amend_dto_envelope);

#endif /* _asset_value_amend_dto_envelope_H_ */

