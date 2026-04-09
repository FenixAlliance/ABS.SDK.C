/*
 * asset_dto_envelope.h
 *
 * 
 */

#ifndef _asset_dto_envelope_H_
#define _asset_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_dto_envelope_t asset_dto_envelope_t;

#include "asset_dto.h"



typedef struct asset_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct asset_dto_t *result; //model

} asset_dto_envelope_t;

asset_dto_envelope_t *asset_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    asset_dto_t *result
);

void asset_dto_envelope_free(asset_dto_envelope_t *asset_dto_envelope);

asset_dto_envelope_t *asset_dto_envelope_parseFromJSON(cJSON *asset_dto_envelopeJSON);

cJSON *asset_dto_envelope_convertToJSON(asset_dto_envelope_t *asset_dto_envelope);

#endif /* _asset_dto_envelope_H_ */

