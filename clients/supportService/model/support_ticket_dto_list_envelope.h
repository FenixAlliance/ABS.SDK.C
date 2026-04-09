/*
 * support_ticket_dto_list_envelope.h
 *
 * 
 */

#ifndef _support_ticket_dto_list_envelope_H_
#define _support_ticket_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_dto_list_envelope_t support_ticket_dto_list_envelope_t;

#include "support_ticket_dto.h"



typedef struct support_ticket_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} support_ticket_dto_list_envelope_t;

support_ticket_dto_list_envelope_t *support_ticket_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void support_ticket_dto_list_envelope_free(support_ticket_dto_list_envelope_t *support_ticket_dto_list_envelope);

support_ticket_dto_list_envelope_t *support_ticket_dto_list_envelope_parseFromJSON(cJSON *support_ticket_dto_list_envelopeJSON);

cJSON *support_ticket_dto_list_envelope_convertToJSON(support_ticket_dto_list_envelope_t *support_ticket_dto_list_envelope);

#endif /* _support_ticket_dto_list_envelope_H_ */

