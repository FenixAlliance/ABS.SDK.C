#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_feed_dto.h"



activity_feed_dto_t *activity_feed_dto_create(
    char *id,
    char *timestamp,
    int activities_count,
    char *tenant_id
    ) {
    activity_feed_dto_t *activity_feed_dto_local_var = malloc(sizeof(activity_feed_dto_t));
    if (!activity_feed_dto_local_var) {
        return NULL;
    }
    activity_feed_dto_local_var->id = id;
    activity_feed_dto_local_var->timestamp = timestamp;
    activity_feed_dto_local_var->activities_count = activities_count;
    activity_feed_dto_local_var->tenant_id = tenant_id;

    return activity_feed_dto_local_var;
}


void activity_feed_dto_free(activity_feed_dto_t *activity_feed_dto) {
    if(NULL == activity_feed_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_feed_dto->id) {
        free(activity_feed_dto->id);
        activity_feed_dto->id = NULL;
    }
    if (activity_feed_dto->timestamp) {
        free(activity_feed_dto->timestamp);
        activity_feed_dto->timestamp = NULL;
    }
    if (activity_feed_dto->tenant_id) {
        free(activity_feed_dto->tenant_id);
        activity_feed_dto->tenant_id = NULL;
    }
    free(activity_feed_dto);
}

cJSON *activity_feed_dto_convertToJSON(activity_feed_dto_t *activity_feed_dto) {
    cJSON *item = cJSON_CreateObject();

    // activity_feed_dto->id
    if(activity_feed_dto->id) {
    if(cJSON_AddStringToObject(item, "id", activity_feed_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // activity_feed_dto->timestamp
    if(activity_feed_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", activity_feed_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // activity_feed_dto->activities_count
    if(activity_feed_dto->activities_count) {
    if(cJSON_AddNumberToObject(item, "activitiesCount", activity_feed_dto->activities_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // activity_feed_dto->tenant_id
    if(activity_feed_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", activity_feed_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_feed_dto_t *activity_feed_dto_parseFromJSON(cJSON *activity_feed_dtoJSON){

    activity_feed_dto_t *activity_feed_dto_local_var = NULL;

    // activity_feed_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(activity_feed_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // activity_feed_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(activity_feed_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // activity_feed_dto->activities_count
    cJSON *activities_count = cJSON_GetObjectItemCaseSensitive(activity_feed_dtoJSON, "activitiesCount");
    if (activities_count) { 
    if(!cJSON_IsNumber(activities_count))
    {
    goto end; //Numeric
    }
    }

    // activity_feed_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(activity_feed_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    activity_feed_dto_local_var = activity_feed_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activities_count ? activities_count->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return activity_feed_dto_local_var;
end:
    return NULL;

}
