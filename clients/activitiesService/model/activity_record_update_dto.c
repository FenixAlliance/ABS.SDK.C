#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_record_update_dto.h"



activity_record_update_dto_t *activity_record_update_dto_create(
    char *type,
    char *title,
    char *description,
    int completed,
    char *due_date,
    char *activity_type_id,
    char *parent_activity_id,
    char *in_charge_enrollment_id
    ) {
    activity_record_update_dto_t *activity_record_update_dto_local_var = malloc(sizeof(activity_record_update_dto_t));
    if (!activity_record_update_dto_local_var) {
        return NULL;
    }
    activity_record_update_dto_local_var->type = type;
    activity_record_update_dto_local_var->title = title;
    activity_record_update_dto_local_var->description = description;
    activity_record_update_dto_local_var->completed = completed;
    activity_record_update_dto_local_var->due_date = due_date;
    activity_record_update_dto_local_var->activity_type_id = activity_type_id;
    activity_record_update_dto_local_var->parent_activity_id = parent_activity_id;
    activity_record_update_dto_local_var->in_charge_enrollment_id = in_charge_enrollment_id;

    return activity_record_update_dto_local_var;
}


void activity_record_update_dto_free(activity_record_update_dto_t *activity_record_update_dto) {
    if(NULL == activity_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_record_update_dto->type) {
        free(activity_record_update_dto->type);
        activity_record_update_dto->type = NULL;
    }
    if (activity_record_update_dto->title) {
        free(activity_record_update_dto->title);
        activity_record_update_dto->title = NULL;
    }
    if (activity_record_update_dto->description) {
        free(activity_record_update_dto->description);
        activity_record_update_dto->description = NULL;
    }
    if (activity_record_update_dto->due_date) {
        free(activity_record_update_dto->due_date);
        activity_record_update_dto->due_date = NULL;
    }
    if (activity_record_update_dto->activity_type_id) {
        free(activity_record_update_dto->activity_type_id);
        activity_record_update_dto->activity_type_id = NULL;
    }
    if (activity_record_update_dto->parent_activity_id) {
        free(activity_record_update_dto->parent_activity_id);
        activity_record_update_dto->parent_activity_id = NULL;
    }
    if (activity_record_update_dto->in_charge_enrollment_id) {
        free(activity_record_update_dto->in_charge_enrollment_id);
        activity_record_update_dto->in_charge_enrollment_id = NULL;
    }
    free(activity_record_update_dto);
}

cJSON *activity_record_update_dto_convertToJSON(activity_record_update_dto_t *activity_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // activity_record_update_dto->type
    if(activity_record_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", activity_record_update_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_update_dto->title
    if(activity_record_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", activity_record_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_update_dto->description
    if(activity_record_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", activity_record_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_update_dto->completed
    if(activity_record_update_dto->completed) {
    if(cJSON_AddBoolToObject(item, "completed", activity_record_update_dto->completed) == NULL) {
    goto fail; //Bool
    }
    }


    // activity_record_update_dto->due_date
    if(activity_record_update_dto->due_date) {
    if(cJSON_AddStringToObject(item, "dueDate", activity_record_update_dto->due_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // activity_record_update_dto->activity_type_id
    if(activity_record_update_dto->activity_type_id) {
    if(cJSON_AddStringToObject(item, "activityTypeId", activity_record_update_dto->activity_type_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_update_dto->parent_activity_id
    if(activity_record_update_dto->parent_activity_id) {
    if(cJSON_AddStringToObject(item, "parentActivityId", activity_record_update_dto->parent_activity_id) == NULL) {
    goto fail; //String
    }
    }


    // activity_record_update_dto->in_charge_enrollment_id
    if(activity_record_update_dto->in_charge_enrollment_id) {
    if(cJSON_AddStringToObject(item, "inChargeEnrollmentId", activity_record_update_dto->in_charge_enrollment_id) == NULL) {
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

activity_record_update_dto_t *activity_record_update_dto_parseFromJSON(cJSON *activity_record_update_dtoJSON){

    activity_record_update_dto_t *activity_record_update_dto_local_var = NULL;

    // activity_record_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // activity_record_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // activity_record_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // activity_record_update_dto->completed
    cJSON *completed = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "completed");
    if (completed) { 
    if(!cJSON_IsBool(completed))
    {
    goto end; //Bool
    }
    }

    // activity_record_update_dto->due_date
    cJSON *due_date = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "dueDate");
    if (due_date) { 
    if(!cJSON_IsString(due_date) && !cJSON_IsNull(due_date))
    {
    goto end; //DateTime
    }
    }

    // activity_record_update_dto->activity_type_id
    cJSON *activity_type_id = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "activityTypeId");
    if (activity_type_id) { 
    if(!cJSON_IsString(activity_type_id) && !cJSON_IsNull(activity_type_id))
    {
    goto end; //String
    }
    }

    // activity_record_update_dto->parent_activity_id
    cJSON *parent_activity_id = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "parentActivityId");
    if (parent_activity_id) { 
    if(!cJSON_IsString(parent_activity_id) && !cJSON_IsNull(parent_activity_id))
    {
    goto end; //String
    }
    }

    // activity_record_update_dto->in_charge_enrollment_id
    cJSON *in_charge_enrollment_id = cJSON_GetObjectItemCaseSensitive(activity_record_update_dtoJSON, "inChargeEnrollmentId");
    if (in_charge_enrollment_id) { 
    if(!cJSON_IsString(in_charge_enrollment_id) && !cJSON_IsNull(in_charge_enrollment_id))
    {
    goto end; //String
    }
    }


    activity_record_update_dto_local_var = activity_record_update_dto_create (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        completed ? completed->valueint : 0,
        due_date && !cJSON_IsNull(due_date) ? strdup(due_date->valuestring) : NULL,
        activity_type_id && !cJSON_IsNull(activity_type_id) ? strdup(activity_type_id->valuestring) : NULL,
        parent_activity_id && !cJSON_IsNull(parent_activity_id) ? strdup(parent_activity_id->valuestring) : NULL,
        in_charge_enrollment_id && !cJSON_IsNull(in_charge_enrollment_id) ? strdup(in_charge_enrollment_id->valuestring) : NULL
        );

    return activity_record_update_dto_local_var;
end:
    return NULL;

}
