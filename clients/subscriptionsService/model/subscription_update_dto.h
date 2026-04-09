/*
 * subscription_update_dto.h
 *
 * 
 */

#ifndef _subscription_update_dto_H_
#define _subscription_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_update_dto_t subscription_update_dto_t;


// Enum SUBSCRIPTIONCLASS for subscription_update_dto

typedef enum  { subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_NULL = 0, subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_Trial, subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_Standard } subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e;

char* subscription_update_dto_subscription_class_ToString(subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_class);

subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_update_dto_subscription_class_FromString(char* subscription_class);



typedef struct subscription_update_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *individual_id; // string
    char *organization_id; // string
    char *subscription_plan_id; // string
    subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_class; //enum

} subscription_update_dto_t;

subscription_update_dto_t *subscription_update_dto_create(
    char *id,
    char *timestamp,
    char *individual_id,
    char *organization_id,
    char *subscription_plan_id,
    subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_class
);

void subscription_update_dto_free(subscription_update_dto_t *subscription_update_dto);

subscription_update_dto_t *subscription_update_dto_parseFromJSON(cJSON *subscription_update_dtoJSON);

cJSON *subscription_update_dto_convertToJSON(subscription_update_dto_t *subscription_update_dto);

#endif /* _subscription_update_dto_H_ */

