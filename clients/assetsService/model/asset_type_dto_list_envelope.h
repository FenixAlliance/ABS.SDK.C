/*
 * asset_type_dto_list_envelope.h
 *
 * 
 */

#ifndef _asset_type_dto_list_envelope_H_
#define _asset_type_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_type_dto_list_envelope_t asset_type_dto_list_envelope_t;

#include "asset_type_dto.h"



typedef struct asset_type_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} asset_type_dto_list_envelope_t;

asset_type_dto_list_envelope_t *asset_type_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void asset_type_dto_list_envelope_free(asset_type_dto_list_envelope_t *asset_type_dto_list_envelope);

asset_type_dto_list_envelope_t *asset_type_dto_list_envelope_parseFromJSON(cJSON *asset_type_dto_list_envelopeJSON);

cJSON *asset_type_dto_list_envelope_convertToJSON(asset_type_dto_list_envelope_t *asset_type_dto_list_envelope);

#endif /* _asset_type_dto_list_envelope_H_ */

