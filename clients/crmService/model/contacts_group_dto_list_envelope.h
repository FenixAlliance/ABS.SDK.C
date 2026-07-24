/*
 * contacts_group_dto_list_envelope.h
 *
 * 
 */

#ifndef _contacts_group_dto_list_envelope_H_
#define _contacts_group_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacts_group_dto_list_envelope_t contacts_group_dto_list_envelope_t;

#include "contacts_group_dto.h"



typedef struct contacts_group_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} contacts_group_dto_list_envelope_t;

contacts_group_dto_list_envelope_t *contacts_group_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void contacts_group_dto_list_envelope_free(contacts_group_dto_list_envelope_t *contacts_group_dto_list_envelope);

contacts_group_dto_list_envelope_t *contacts_group_dto_list_envelope_parseFromJSON(cJSON *contacts_group_dto_list_envelopeJSON);

cJSON *contacts_group_dto_list_envelope_convertToJSON(contacts_group_dto_list_envelope_t *contacts_group_dto_list_envelope);

#endif /* _contacts_group_dto_list_envelope_H_ */

