/*
 * notification_dto_list_envelope.h
 *
 * 
 */

#ifndef _notification_dto_list_envelope_H_
#define _notification_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notification_dto_list_envelope_t notification_dto_list_envelope_t;

#include "notification_dto.h"



typedef struct notification_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} notification_dto_list_envelope_t;

notification_dto_list_envelope_t *notification_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void notification_dto_list_envelope_free(notification_dto_list_envelope_t *notification_dto_list_envelope);

notification_dto_list_envelope_t *notification_dto_list_envelope_parseFromJSON(cJSON *notification_dto_list_envelopeJSON);

cJSON *notification_dto_list_envelope_convertToJSON(notification_dto_list_envelope_t *notification_dto_list_envelope);

#endif /* _notification_dto_list_envelope_H_ */

