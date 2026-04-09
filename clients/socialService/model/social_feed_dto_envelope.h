/*
 * social_feed_dto_envelope.h
 *
 * 
 */

#ifndef _social_feed_dto_envelope_H_
#define _social_feed_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_feed_dto_envelope_t social_feed_dto_envelope_t;

#include "social_feed_dto.h"



typedef struct social_feed_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct social_feed_dto_t *result; //model

} social_feed_dto_envelope_t;

social_feed_dto_envelope_t *social_feed_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    social_feed_dto_t *result
);

void social_feed_dto_envelope_free(social_feed_dto_envelope_t *social_feed_dto_envelope);

social_feed_dto_envelope_t *social_feed_dto_envelope_parseFromJSON(cJSON *social_feed_dto_envelopeJSON);

cJSON *social_feed_dto_envelope_convertToJSON(social_feed_dto_envelope_t *social_feed_dto_envelope);

#endif /* _social_feed_dto_envelope_H_ */

