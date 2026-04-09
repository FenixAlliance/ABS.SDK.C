/*
 * billing_profile_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _billing_profile_dto_i_read_only_list_envelope_H_
#define _billing_profile_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_profile_dto_i_read_only_list_envelope_t billing_profile_dto_i_read_only_list_envelope_t;

#include "billing_profile_dto.h"



typedef struct billing_profile_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} billing_profile_dto_i_read_only_list_envelope_t;

billing_profile_dto_i_read_only_list_envelope_t *billing_profile_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void billing_profile_dto_i_read_only_list_envelope_free(billing_profile_dto_i_read_only_list_envelope_t *billing_profile_dto_i_read_only_list_envelope);

billing_profile_dto_i_read_only_list_envelope_t *billing_profile_dto_i_read_only_list_envelope_parseFromJSON(cJSON *billing_profile_dto_i_read_only_list_envelopeJSON);

cJSON *billing_profile_dto_i_read_only_list_envelope_convertToJSON(billing_profile_dto_i_read_only_list_envelope_t *billing_profile_dto_i_read_only_list_envelope);

#endif /* _billing_profile_dto_i_read_only_list_envelope_H_ */

