/*
 * newsletter_subscription_create_dto.h
 *
 * 
 */

#ifndef _newsletter_subscription_create_dto_H_
#define _newsletter_subscription_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct newsletter_subscription_create_dto_t newsletter_subscription_create_dto_t;




typedef struct newsletter_subscription_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *email; // string
    int verified; //boolean
    char *newsletter_id; // string
    char *contact_id; // string

} newsletter_subscription_create_dto_t;

newsletter_subscription_create_dto_t *newsletter_subscription_create_dto_create(
    char *id,
    char *timestamp,
    char *email,
    int verified,
    char *newsletter_id,
    char *contact_id
);

void newsletter_subscription_create_dto_free(newsletter_subscription_create_dto_t *newsletter_subscription_create_dto);

newsletter_subscription_create_dto_t *newsletter_subscription_create_dto_parseFromJSON(cJSON *newsletter_subscription_create_dtoJSON);

cJSON *newsletter_subscription_create_dto_convertToJSON(newsletter_subscription_create_dto_t *newsletter_subscription_create_dto);

#endif /* _newsletter_subscription_create_dto_H_ */

