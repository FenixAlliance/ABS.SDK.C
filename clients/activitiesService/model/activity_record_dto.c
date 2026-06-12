#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_record_dto.h"



activity_record_dto_t *activity_record_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *title,
    char *description,
    int completed,
    char *due_date,
    char *activity_feed_id,
    char *activity_type_id,
    char *tenant_id,
    char *enrollment_id,
    char *social_profile_id,
    char *parent_activity_id,
    char *in_charge_enrollment_id
    ) {
    activity_record_dto_t *activity_record_dto_local_var = malloc(sizeof(activity_record_dto_t));
    if (!activity_record_dto_local_var) {
        return NULL;
    }
    activity_record_dto_local_var->id = id;
    activity_record_dto_local_var->timestamp = timestamp;
    activity_record_dto_local_var->type = type;
    activity_record_dto_local_var->title = title;
    activity_record_dto_local_var->description = description;
    activity_record_dto_local_var->completed = completed;
    activity_record_dto_local_var->due_date = due_date;
    activity_record_dto_local_var->activity_feed_id = activity_feed_id;
    activity_record_dto_local_var->activity_type_id = activity_type_id;
    activity_record_dto_local_var->tenant_id = tenant_id;
    activity_record_dto_local_var->enrollment_id = enrollment_id;
    activity_record_dto_local_var->social_profile_id = social_profile_id;
    activity_record_dto_local_var->parent_activity_id = parent_activity_id;
    activity_record_dto_local_var->in_charge_enrollment_id = in_charge_enrollment_id;

    return activity_record_dto_local_var;
}


void activity_record_dto_free(activity_record_dto_t *activity_record_dto) {
    if(NULL == activity_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_record_dto->id) {
        free(activity_record_dto->id);
        activity_record_dto->id = NULL;
    }
    if (activity_record_dto->timestamp) {
        free(activity_record_dto->timestamp);
        activity_record_dto->timestamp = NULL;
    }
    if (activity_record_dto->type) {
        free(activity_record_dto->type);
        activity_record_dto->type = NULL;
    }
    if (activity_record_dto->title) {
        free(activity_record_dto->title);
        activity_record_dto->title = NULL;
    }
    if (activity_record_dto->description) {
        free(activity_record_dto->description);
        activity_record_dto->description = NULL;
    }
    if (activity_record_dto->due_date) {
        free(activity_record_dto->due_date);
        activity_record_dto->due_date = NULL;
    }
    if (activity_record_dto->activity_feed_id) {
        free(activity_record_dto->activity_feed_id);
        activity_record_dto->activity_feed_id = NULL;
    }
    if (activity_record_dto->activity_type_id) {
        free(activity_record_dto->activity_type_id);
        activity_record_dto->activity_type_id = NULL;
    }
    if (activity_record_dto->tenant_id) {
        free(activity_record_dto->tenant_id);
        activity_record_dto->tenant_id = NULL;
    }
    if (activity_record_dto->enrollment_id) {
        free(activity_record_dto->enrollment_id);
        activity_record_dto->enrollment_id = NULL;
    }
    if (activity_record_dto->social_profile_id) {
        free(activity_record_dto->social_profile_id);
        activity_record_dto->social_profile_id = NULL;
    }
    if (activity_record_dto->parent_activity_id) {
        free(activity_record_dto->parent_activity_id);
        activity_record_dto->parent_activity_id = NULL;
    }
    if (activity_record_dto->in_charge_enrollment_id) {
        free(activity_record_dto->in_charge_enrollment_id);
        activity_record_dto->in_charge_enrollment_id = NULL;
    }
    free(activity_record_dto);
}

cJSON *activity_record_dto_convertToJSON(activity_record_dto_t *activity_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // activity_record_dto->id
    if(activity_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", activity_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->timestamp
    if(activity_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", activity_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // activity_record_dto->type
    if(activity_record_dto->type) {
    if(cJSON_AddStringToObject(item, "type", activity_record_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->title
    if(activity_record_dto->title) {
    if(cJSON_AddStringToObject(item, "title", activity_record_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->description
    if(activity_record_dto->description) {
    if(cJSON_AddStringToObject(item, "description", activity_record_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->completed
    if(activity_record_dto->completed) {
    if(cJSON_AddBoolToObject(item, "completed", activity_record_dto->completed) == NULL) {
    goto fail; //Bool
    }
    }


    // activity_record_dto->due_date
    if(activity_record_dto->due_date) {
    if(cJSON_AddStringToObject(item, "dueDate", activity_record_dto->due_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // activity_record_dto->activity_feed_id
    if(activity_record_dto->activity_feed_id) {
    if(cJSON_AddStringToObject(item, "activityFeedId", activity_record_dto->activity_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->activity_type_id
    if(activity_record_dto->activity_type_id) {
    if(cJSON_AddStringToObject(item, "activityTypeId", activity_record_dto->activity_type_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->tenant_id
    if(activity_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", activity_record_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->enrollment_id
    if(activity_record_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", activity_record_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->social_profile_id
    if(activity_record_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", activity_record_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->parent_activity_id
    if(activity_record_dto->parent_activity_id) {
    if(cJSON_AddStringToObject(item, "parentActivityId", activity_record_dto->parent_activity_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_dto->in_charge_enrollment_id
    if(activity_record_dto->in_charge_enrollment_id) {
    if(cJSON_AddStringToObject(item, "inChargeEnrollmentId", activity_record_dto->in_charge_enrollment_id) == NULL) {
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

activity_record_dto_t *activity_record_dto_parseFromJSON(cJSON *activity_record_dtoJSON){

    activity_record_dto_t *activity_record_dto_local_var = NULL;

    // activity_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // activity_record_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // activity_record_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // activity_record_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // activity_record_dto->completed
    cJSON *completed = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "completed");
    if (completed) { 
    if(!cJSON_IsBool(completed))
    {
    goto end; //Bool
    }
    }

    // activity_record_dto->due_date
    cJSON *due_date = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "dueDate");
    if (due_date) { 
    if(!cJSON_IsString(due_date) && !cJSON_IsNull(due_date))
    {
    goto end; //DateTime
    }
    }

    // activity_record_dto->activity_feed_id
    cJSON *activity_feed_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "activityFeedId");
    if (activity_feed_id) { 
    if(!cJSON_IsString(activity_feed_id) && !cJSON_IsNull(activity_feed_id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->activity_type_id
    cJSON *activity_type_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "activityTypeId");
    if (activity_type_id) { 
    if(!cJSON_IsString(activity_type_id) && !cJSON_IsNull(activity_type_id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->parent_activity_id
    cJSON *parent_activity_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "parentActivityId");
    if (parent_activity_id) { 
    if(!cJSON_IsString(parent_activity_id) && !cJSON_IsNull(parent_activity_id))
    {
    goto end; //String
    }
    }

    // activity_record_dto->in_charge_enrollment_id
    cJSON *in_charge_enrollment_id = cJSON_GetObjectItemCaseSensitive(activity_record_dtoJSON, "inChargeEnrollmentId");
    if (in_charge_enrollment_id) { 
    if(!cJSON_IsString(in_charge_enrollment_id) && !cJSON_IsNull(in_charge_enrollment_id))
    {
    goto end; //String
    }
    }


    activity_record_dto_local_var = activity_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        completed ? completed->valueint : 0,
        due_date && !cJSON_IsNull(due_date) ? strdup(due_date->valuestring) : NULL,
        activity_feed_id && !cJSON_IsNull(activity_feed_id) ? strdup(activity_feed_id->valuestring) : NULL,
        activity_type_id && !cJSON_IsNull(activity_type_id) ? strdup(activity_type_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        parent_activity_id && !cJSON_IsNull(parent_activity_id) ? strdup(parent_activity_id->valuestring) : NULL,
        in_charge_enrollment_id && !cJSON_IsNull(in_charge_enrollment_id) ? strdup(in_charge_enrollment_id->valuestring) : NULL
        );

    return activity_record_dto_local_var;
end:
    return NULL;

}
