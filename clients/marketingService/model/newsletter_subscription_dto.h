/*
 * newsletter_subscription_dto.h
 *
 * 
 */

#ifndef _newsletter_subscription_dto_H_
#define _newsletter_subscription_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct newsletter_subscription_dto_t newsletter_subscription_dto_t;




typedef struct newsletter_subscription_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *email; // string
    int verified; //boolean
    char *contact_id; // string
    char *user_id; // string
    char *newsletter_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} newsletter_subscription_dto_t;

newsletter_subscription_dto_t *newsletter_subscription_dto_create(
    char *id,
    char *timestamp,
    char *email,
    int verified,
    char *contact_id,
    char *user_id,
    char *newsletter_id,
    char *tenant_id,
    char *enrollment_id
);

void newsletter_subscription_dto_free(newsletter_subscription_dto_t *newsletter_subscription_dto);

newsletter_subscription_dto_t *newsletter_subscription_dto_parseFromJSON(cJSON *newsletter_subscription_dtoJSON);

cJSON *newsletter_subscription_dto_convertToJSON(newsletter_subscription_dto_t *newsletter_subscription_dto);

#endif /* _newsletter_subscription_dto_H_ */

