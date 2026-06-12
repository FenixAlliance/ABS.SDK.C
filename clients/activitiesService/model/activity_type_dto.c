#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_type_dto.h"



activity_type_dto_t *activity_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id,
    int activity_records_count
    ) {
    activity_type_dto_t *activity_type_dto_local_var = malloc(sizeof(activity_type_dto_t));
    if (!activity_type_dto_local_var) {
        return NULL;
    }
    activity_type_dto_local_var->id = id;
    activity_type_dto_local_var->timestamp = timestamp;
    activity_type_dto_local_var->name = name;
    activity_type_dto_local_var->tenant_id = tenant_id;
    activity_type_dto_local_var->enrollment_id = enrollment_id;
    activity_type_dto_local_var->activity_records_count = activity_records_count;

    return activity_type_dto_local_var;
}


void activity_type_dto_free(activity_type_dto_t *activity_type_dto) {
    if(NULL == activity_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_type_dto->id) {
        free(activity_type_dto->id);
        activity_type_dto->id = NULL;
    }
    if (activity_type_dto->timestamp) {
        free(activity_type_dto->timestamp);
        activity_type_dto->timestamp = NULL;
    }
    if (activity_type_dto->name) {
        free(activity_type_dto->name);
        activity_type_dto->name = NULL;
    }
    if (activity_type_dto->tenant_id) {
        free(activity_type_dto->tenant_id);
        activity_type_dto->tenant_id = NULL;
    }
    if (activity_type_dto->enrollment_id) {
        free(activity_type_dto->enrollment_id);
        activity_type_dto->enrollment_id = NULL;
    }
    free(activity_type_dto);
}

cJSON *activity_type_dto_convertToJSON(activity_type_dto_t *activity_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // activity_type_dto->id
    if(activity_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", activity_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // activity_type_dto->timestamp
    if(activity_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", activity_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // activity_type_dto->name
    if(activity_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", activity_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // activity_type_dto->tenant_id
    if(activity_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", activity_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_type_dto->enrollment_id
    if(activity_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", activity_type_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_type_dto->activity_records_count
    if(activity_type_dto->activity_records_count) {
    if(cJSON_AddNumberToObject(item, "activityRecordsCount", activity_type_dto->activity_records_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_type_dto_t *activity_type_dto_parseFromJSON(cJSON *activity_type_dtoJSON){

    activity_type_dto_t *activity_type_dto_local_var = NULL;

    // activity_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(activity_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // activity_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(activity_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // activity_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(activity_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // activity_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(activity_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // activity_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(activity_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // activity_type_dto->activity_records_count
    cJSON *activity_records_count = cJSON_GetObjectItemCaseSensitive(activity_type_dtoJSON, "activityRecordsCount");
    if (activity_records_count) { 
    if(!cJSON_IsNumber(activity_records_count))
    {
    goto end; //Numeric
    }
    }


    activity_type_dto_local_var = activity_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        activity_records_count ? activity_records_count->valuedouble : 0
        );

    return activity_type_dto_local_var;
end:
    return NULL;

}
