/*
 * newsletter_subscription_dto_envelope.h
 *
 * 
 */

#ifndef _newsletter_subscription_dto_envelope_H_
#define _newsletter_subscription_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct newsletter_subscription_dto_envelope_t newsletter_subscription_dto_envelope_t;

#include "newsletter_subscription_dto.h"



typedef struct newsletter_subscription_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct newsletter_subscription_dto_t *result; //model

} newsletter_subscription_dto_envelope_t;

newsletter_subscription_dto_envelope_t *newsletter_subscription_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    newsletter_subscription_dto_t *result
);

void newsletter_subscription_dto_envelope_free(newsletter_subscription_dto_envelope_t *newsletter_subscription_dto_envelope);

newsletter_subscription_dto_envelope_t *newsletter_subscription_dto_envelope_parseFromJSON(cJSON *newsletter_subscription_dto_envelopeJSON);

cJSON *newsletter_subscription_dto_envelope_convertToJSON(newsletter_subscription_dto_envelope_t *newsletter_subscription_dto_envelope);

#endif /* _newsletter_subscription_dto_envelope_H_ */

