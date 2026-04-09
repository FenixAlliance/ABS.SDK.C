/*
 * contact_profile_dto_list_envelope.h
 *
 * 
 */

#ifndef _contact_profile_dto_list_envelope_H_
#define _contact_profile_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_profile_dto_list_envelope_t contact_profile_dto_list_envelope_t;

#include "contact_profile_dto.h"



typedef struct contact_profile_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} contact_profile_dto_list_envelope_t;

contact_profile_dto_list_envelope_t *contact_profile_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void contact_profile_dto_list_envelope_free(contact_profile_dto_list_envelope_t *contact_profile_dto_list_envelope);

contact_profile_dto_list_envelope_t *contact_profile_dto_list_envelope_parseFromJSON(cJSON *contact_profile_dto_list_envelopeJSON);

cJSON *contact_profile_dto_list_envelope_convertToJSON(contact_profile_dto_list_envelope_t *contact_profile_dto_list_envelope);

#endif /* _contact_profile_dto_list_envelope_H_ */

