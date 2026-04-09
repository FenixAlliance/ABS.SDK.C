/*
 * service_queue_dto_envelope.h
 *
 * 
 */

#ifndef _service_queue_dto_envelope_H_
#define _service_queue_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_queue_dto_envelope_t service_queue_dto_envelope_t;

#include "service_queue_dto.h"



typedef struct service_queue_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct service_queue_dto_t *result; //model

} service_queue_dto_envelope_t;

service_queue_dto_envelope_t *service_queue_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    service_queue_dto_t *result
);

void service_queue_dto_envelope_free(service_queue_dto_envelope_t *service_queue_dto_envelope);

service_queue_dto_envelope_t *service_queue_dto_envelope_parseFromJSON(cJSON *service_queue_dto_envelopeJSON);

cJSON *service_queue_dto_envelope_convertToJSON(service_queue_dto_envelope_t *service_queue_dto_envelope);

#endif /* _service_queue_dto_envelope_H_ */

