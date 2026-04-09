#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_hours_approval_create_dto.h"



project_hours_approval_create_dto_t *project_hours_approval_create_dto_create(
    char *id,
    char *timestamp,
    char *requester_contact_id,
    char *approver_contact_id,
    char *project_period_id,
    char *comments
    ) {
    project_hours_approval_create_dto_t *project_hours_approval_create_dto_local_var = malloc(sizeof(project_hours_approval_create_dto_t));
    if (!project_hours_approval_create_dto_local_var) {
        return NULL;
    }
    project_hours_approval_create_dto_local_var->id = id;
    project_hours_approval_create_dto_local_var->timestamp = timestamp;
    project_hours_approval_create_dto_local_var->requester_contact_id = requester_contact_id;
    project_hours_approval_create_dto_local_var->approver_contact_id = approver_contact_id;
    project_hours_approval_create_dto_local_var->project_period_id = project_period_id;
    project_hours_approval_create_dto_local_var->comments = comments;

    return project_hours_approval_create_dto_local_var;
}


void project_hours_approval_create_dto_free(project_hours_approval_create_dto_t *project_hours_approval_create_dto) {
    if(NULL == project_hours_approval_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_hours_approval_create_dto->id) {
        free(project_hours_approval_create_dto->id);
        project_hours_approval_create_dto->id = NULL;
    }
    if (project_hours_approval_create_dto->timestamp) {
        free(project_hours_approval_create_dto->timestamp);
        project_hours_approval_create_dto->timestamp = NULL;
    }
    if (project_hours_approval_create_dto->requester_contact_id) {
        free(project_hours_approval_create_dto->requester_contact_id);
        project_hours_approval_create_dto->requester_contact_id = NULL;
    }
    if (project_hours_approval_create_dto->approver_contact_id) {
        free(project_hours_approval_create_dto->approver_contact_id);
        project_hours_approval_create_dto->approver_contact_id = NULL;
    }
    if (project_hours_approval_create_dto->project_period_id) {
        free(project_hours_approval_create_dto->project_period_id);
        project_hours_approval_create_dto->project_period_id = NULL;
    }
    if (project_hours_approval_create_dto->comments) {
        free(project_hours_approval_create_dto->comments);
        project_hours_approval_create_dto->comments = NULL;
    }
    free(project_hours_approval_create_dto);
}

cJSON *project_hours_approval_create_dto_convertToJSON(project_hours_approval_create_dto_t *project_hours_approval_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_hours_approval_create_dto->id
    if(project_hours_approval_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_hours_approval_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_hours_approval_create_dto->timestamp
    if(project_hours_approval_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_hours_approval_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_hours_approval_create_dto->requester_contact_id
    if(project_hours_approval_create_dto->requester_contact_id) {
    if(cJSON_AddStringToObject(item, "requesterContactID", project_hours_approval_create_dto->requester_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // project_hours_approval_create_dto->approver_contact_id
    if(project_hours_approval_create_dto->approver_contact_id) {
    if(cJSON_AddStringToObject(item, "approverContactID", project_hours_approval_create_dto->approver_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // project_hours_approval_create_dto->project_period_id
    if(project_hours_approval_create_dto->project_period_id) {
    if(cJSON_AddStringToObject(item, "projectPeriodID", project_hours_approval_create_dto->project_period_id) == NULL) {
    goto fail; //String
    }
    }


    // project_hours_approval_create_dto->comments
    if(project_hours_approval_create_dto->comments) {
    if(cJSON_AddStringToObject(item, "comments", project_hours_approval_create_dto->comments) == NULL) {
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

project_hours_approval_create_dto_t *project_hours_approval_create_dto_parseFromJSON(cJSON *project_hours_approval_create_dtoJSON){

    project_hours_approval_create_dto_t *project_hours_approval_create_dto_local_var = NULL;

    // project_hours_approval_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_hours_approval_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_hours_approval_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_hours_approval_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_hours_approval_create_dto->requester_contact_id
    cJSON *requester_contact_id = cJSON_GetObjectItemCaseSensitive(project_hours_approval_create_dtoJSON, "requesterContactID");
    if (requester_contact_id) { 
    if(!cJSON_IsString(requester_contact_id) && !cJSON_IsNull(requester_contact_id))
    {
    goto end; //String
    }
    }

    // project_hours_approval_create_dto->approver_contact_id
    cJSON *approver_contact_id = cJSON_GetObjectItemCaseSensitive(project_hours_approval_create_dtoJSON, "approverContactID");
    if (approver_contact_id) { 
    if(!cJSON_IsString(approver_contact_id) && !cJSON_IsNull(approver_contact_id))
    {
    goto end; //String
    }
    }

    // project_hours_approval_create_dto->project_period_id
    cJSON *project_period_id = cJSON_GetObjectItemCaseSensitive(project_hours_approval_create_dtoJSON, "projectPeriodID");
    if (project_period_id) { 
    if(!cJSON_IsString(project_period_id) && !cJSON_IsNull(project_period_id))
    {
    goto end; //String
    }
    }

    // project_hours_approval_create_dto->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(project_hours_approval_create_dtoJSON, "comments");
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }


    project_hours_approval_create_dto_local_var = project_hours_approval_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        requester_contact_id && !cJSON_IsNull(requester_contact_id) ? strdup(requester_contact_id->valuestring) : NULL,
        approver_contact_id && !cJSON_IsNull(approver_contact_id) ? strdup(approver_contact_id->valuestring) : NULL,
        project_period_id && !cJSON_IsNull(project_period_id) ? strdup(project_period_id->valuestring) : NULL,
        comments && !cJSON_IsNull(comments) ? strdup(comments->valuestring) : NULL
        );

    return project_hours_approval_create_dto_local_var;
end:
    return NULL;

}
