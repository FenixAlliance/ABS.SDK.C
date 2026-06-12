/*
 * activity_feed_dto_envelope.h
 *
 * 
 */

#ifndef _activity_feed_dto_envelope_H_
#define _activity_feed_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_feed_dto_envelope_t activity_feed_dto_envelope_t;

#include "activity_feed_dto.h"



typedef struct activity_feed_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct activity_feed_dto_t *result; //model

} activity_feed_dto_envelope_t;

activity_feed_dto_envelope_t *activity_feed_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    activity_feed_dto_t *result
);

void activity_feed_dto_envelope_free(activity_feed_dto_envelope_t *activity_feed_dto_envelope);

activity_feed_dto_envelope_t *activity_feed_dto_envelope_parseFromJSON(cJSON *activity_feed_dto_envelopeJSON);

cJSON *activity_feed_dto_envelope_convertToJSON(activity_feed_dto_envelope_t *activity_feed_dto_envelope);

#endif /* _activity_feed_dto_envelope_H_ */

