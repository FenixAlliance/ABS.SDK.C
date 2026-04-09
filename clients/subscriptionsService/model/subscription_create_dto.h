/*
 * subscription_create_dto.h
 *
 * 
 */

#ifndef _subscription_create_dto_H_
#define _subscription_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_create_dto_t subscription_create_dto_t;


// Enum SUBSCRIPTIONCLASS for subscription_create_dto

typedef enum  { subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_NULL = 0, subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_Trial, subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_Standard } subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_e;

char* subscription_create_dto_subscription_class_ToString(subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_e subscription_class);

subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_e subscription_create_dto_subscription_class_FromString(char* subscription_class);



typedef struct subscription_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *individual_id; // string
    char *organization_id; // string
    char *subscription_plan_id; // string
    subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_e subscription_class; //enum

} subscription_create_dto_t;

subscription_create_dto_t *subscription_create_dto_create(
    char *id,
    char *timestamp,
    char *individual_id,
    char *organization_id,
    char *subscription_plan_id,
    subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_e subscription_class
);

void subscription_create_dto_free(subscription_create_dto_t *subscription_create_dto);

subscription_create_dto_t *subscription_create_dto_parseFromJSON(cJSON *subscription_create_dtoJSON);

cJSON *subscription_create_dto_convertToJSON(subscription_create_dto_t *subscription_create_dto);

#endif /* _subscription_create_dto_H_ */

