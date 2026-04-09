/*
 * account_type_dto_list_envelope.h
 *
 * 
 */

#ifndef _account_type_dto_list_envelope_H_
#define _account_type_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_type_dto_list_envelope_t account_type_dto_list_envelope_t;

#include "account_type_dto.h"



typedef struct account_type_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} account_type_dto_list_envelope_t;

account_type_dto_list_envelope_t *account_type_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void account_type_dto_list_envelope_free(account_type_dto_list_envelope_t *account_type_dto_list_envelope);

account_type_dto_list_envelope_t *account_type_dto_list_envelope_parseFromJSON(cJSON *account_type_dto_list_envelopeJSON);

cJSON *account_type_dto_list_envelope_convertToJSON(account_type_dto_list_envelope_t *account_type_dto_list_envelope);

#endif /* _account_type_dto_list_envelope_H_ */

