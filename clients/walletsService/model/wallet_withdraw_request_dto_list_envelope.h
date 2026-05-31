/*
 * wallet_withdraw_request_dto_list_envelope.h
 *
 * 
 */

#ifndef _wallet_withdraw_request_dto_list_envelope_H_
#define _wallet_withdraw_request_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_withdraw_request_dto_list_envelope_t wallet_withdraw_request_dto_list_envelope_t;

#include "wallet_withdraw_request_dto.h"



typedef struct wallet_withdraw_request_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} wallet_withdraw_request_dto_list_envelope_t;

wallet_withdraw_request_dto_list_envelope_t *wallet_withdraw_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void wallet_withdraw_request_dto_list_envelope_free(wallet_withdraw_request_dto_list_envelope_t *wallet_withdraw_request_dto_list_envelope);

wallet_withdraw_request_dto_list_envelope_t *wallet_withdraw_request_dto_list_envelope_parseFromJSON(cJSON *wallet_withdraw_request_dto_list_envelopeJSON);

cJSON *wallet_withdraw_request_dto_list_envelope_convertToJSON(wallet_withdraw_request_dto_list_envelope_t *wallet_withdraw_request_dto_list_envelope);

#endif /* _wallet_withdraw_request_dto_list_envelope_H_ */

