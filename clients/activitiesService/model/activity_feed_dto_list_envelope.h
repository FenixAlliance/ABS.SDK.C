/*
 * activity_feed_dto_list_envelope.h
 *
 * 
 */

#ifndef _activity_feed_dto_list_envelope_H_
#define _activity_feed_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_feed_dto_list_envelope_t activity_feed_dto_list_envelope_t;

#include "activity_feed_dto.h"



typedef struct activity_feed_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} activity_feed_dto_list_envelope_t;

activity_feed_dto_list_envelope_t *activity_feed_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void activity_feed_dto_list_envelope_free(activity_feed_dto_list_envelope_t *activity_feed_dto_list_envelope);

activity_feed_dto_list_envelope_t *activity_feed_dto_list_envelope_parseFromJSON(cJSON *activity_feed_dto_list_envelopeJSON);

cJSON *activity_feed_dto_list_envelope_convertToJSON(activity_feed_dto_list_envelope_t *activity_feed_dto_list_envelope);

#endif /* _activity_feed_dto_list_envelope_H_ */

