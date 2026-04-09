#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscription_update_dto.h"


char* subscription_update_dto_subscription_class_ToString(subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_class) {
    char* subscription_classArray[] =  { "NULL", "Trial", "Standard" };
    return subscription_classArray[subscription_class];
}

subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_update_dto_subscription_class_FromString(char* subscription_class){
    int stringToReturn = 0;
    char *subscription_classArray[] =  { "NULL", "Trial", "Standard" };
    size_t sizeofArray = sizeof(subscription_classArray) / sizeof(subscription_classArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(subscription_class, subscription_classArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

subscription_update_dto_t *subscription_update_dto_create(
    char *id,
    char *timestamp,
    char *individual_id,
    char *organization_id,
    char *subscription_plan_id,
    subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_class
    ) {
    subscription_update_dto_t *subscription_update_dto_local_var = malloc(sizeof(subscription_update_dto_t));
    if (!subscription_update_dto_local_var) {
        return NULL;
    }
    subscription_update_dto_local_var->id = id;
    subscription_update_dto_local_var->timestamp = timestamp;
    subscription_update_dto_local_var->individual_id = individual_id;
    subscription_update_dto_local_var->organization_id = organization_id;
    subscription_update_dto_local_var->subscription_plan_id = subscription_plan_id;
    subscription_update_dto_local_var->subscription_class = subscription_class;

    return subscription_update_dto_local_var;
}


void subscription_update_dto_free(subscription_update_dto_t *subscription_update_dto) {
    if(NULL == subscription_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (subscription_update_dto->id) {
        free(subscription_update_dto->id);
        subscription_update_dto->id = NULL;
    }
    if (subscription_update_dto->timestamp) {
        free(subscription_update_dto->timestamp);
        subscription_update_dto->timestamp = NULL;
    }
    if (subscription_update_dto->individual_id) {
        free(subscription_update_dto->individual_id);
        subscription_update_dto->individual_id = NULL;
    }
    if (subscription_update_dto->organization_id) {
        free(subscription_update_dto->organization_id);
        subscription_update_dto->organization_id = NULL;
    }
    if (subscription_update_dto->subscription_plan_id) {
        free(subscription_update_dto->subscription_plan_id);
        subscription_update_dto->subscription_plan_id = NULL;
    }
    free(subscription_update_dto);
}

cJSON *subscription_update_dto_convertToJSON(subscription_update_dto_t *subscription_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // subscription_update_dto->id
    if(subscription_update_dto->id) {
    if(cJSON_AddStringToObject(item, "id", subscription_update_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_update_dto->timestamp
    if(subscription_update_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", subscription_update_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_update_dto->individual_id
    if(subscription_update_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", subscription_update_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_update_dto->organization_id
    if(subscription_update_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", subscription_update_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_update_dto->subscription_plan_id
    if(subscription_update_dto->subscription_plan_id) {
    if(cJSON_AddStringToObject(item, "subscriptionPlanId", subscription_update_dto->subscription_plan_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_update_dto->subscription_class
    if(subscription_update_dto->subscription_class != subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_NULL) {
    if(cJSON_AddStringToObject(item, "subscriptionClass", subscription_classsubscription_update_dto_ToString(subscription_update_dto->subscription_class)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subscription_update_dto_t *subscription_update_dto_parseFromJSON(cJSON *subscription_update_dtoJSON){

    subscription_update_dto_t *subscription_update_dto_local_var = NULL;

    // subscription_update_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(subscription_update_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // subscription_update_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(subscription_update_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // subscription_update_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(subscription_update_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // subscription_update_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(subscription_update_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // subscription_update_dto->subscription_plan_id
    cJSON *subscription_plan_id = cJSON_GetObjectItemCaseSensitive(subscription_update_dtoJSON, "subscriptionPlanId");
    if (subscription_plan_id) { 
    if(!cJSON_IsString(subscription_plan_id) && !cJSON_IsNull(subscription_plan_id))
    {
    goto end; //String
    }
    }

    // subscription_update_dto->subscription_class
    cJSON *subscription_class = cJSON_GetObjectItemCaseSensitive(subscription_update_dtoJSON, "subscriptionClass");
    subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_e subscription_classVariable;
    if (subscription_class) { 
    if(!cJSON_IsString(subscription_class))
    {
    goto end; //Enum
    }
    subscription_classVariable = subscription_update_dto_subscription_class_FromString(subscription_class->valuestring);
    }


    subscription_update_dto_local_var = subscription_update_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        subscription_plan_id && !cJSON_IsNull(subscription_plan_id) ? strdup(subscription_plan_id->valuestring) : NULL,
        subscription_class ? subscription_classVariable : subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_NULL
        );

    return subscription_update_dto_local_var;
end:
    return NULL;

}
