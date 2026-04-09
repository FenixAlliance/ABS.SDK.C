/*
 * wallet_dto_envelope.h
 *
 * 
 */

#ifndef _wallet_dto_envelope_H_
#define _wallet_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_dto_envelope_t wallet_dto_envelope_t;

#include "wallet_dto.h"



typedef struct wallet_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct wallet_dto_t *result; //model

} wallet_dto_envelope_t;

wallet_dto_envelope_t *wallet_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    wallet_dto_t *result
);

void wallet_dto_envelope_free(wallet_dto_envelope_t *wallet_dto_envelope);

wallet_dto_envelope_t *wallet_dto_envelope_parseFromJSON(cJSON *wallet_dto_envelopeJSON);

cJSON *wallet_dto_envelope_convertToJSON(wallet_dto_envelope_t *wallet_dto_envelope);

#endif /* _wallet_dto_envelope_H_ */

