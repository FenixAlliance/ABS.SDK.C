#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_hours_approval_status_update_dto.h"


char* project_hours_approval_status_update_dto_approval_status_ToString(timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_e approval_status) {
    char* approval_statusArray[] =  { "NULL", "Pending", "Approved", "Rejected" };
    return approval_statusArray[approval_status];
}

timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_e project_hours_approval_status_update_dto_approval_status_FromString(char* approval_status){
    int stringToReturn = 0;
    char *approval_statusArray[] =  { "NULL", "Pending", "Approved", "Rejected" };
    size_t sizeofArray = sizeof(approval_statusArray) / sizeof(approval_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(approval_status, approval_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto_create(
    timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_e approval_status,
    char *comments
    ) {
    project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto_local_var = malloc(sizeof(project_hours_approval_status_update_dto_t));
    if (!project_hours_approval_status_update_dto_local_var) {
        return NULL;
    }
    project_hours_approval_status_update_dto_local_var->approval_status = approval_status;
    project_hours_approval_status_update_dto_local_var->comments = comments;

    return project_hours_approval_status_update_dto_local_var;
}


void project_hours_approval_status_update_dto_free(project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto) {
    if(NULL == project_hours_approval_status_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_hours_approval_status_update_dto->comments) {
        free(project_hours_approval_status_update_dto->comments);
        project_hours_approval_status_update_dto->comments = NULL;
    }
    free(project_hours_approval_status_update_dto);
}

cJSON *project_hours_approval_status_update_dto_convertToJSON(project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_hours_approval_status_update_dto->approval_status
    if(project_hours_approval_status_update_dto->approval_status != timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "approvalStatus", approval_statusproject_hours_approval_status_update_dto_ToString(project_hours_approval_status_update_dto->approval_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // project_hours_approval_status_update_dto->comments
    if(project_hours_approval_status_update_dto->comments) {
    if(cJSON_AddStringToObject(item, "comments", project_hours_approval_status_update_dto->comments) == NULL) {
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

project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto_parseFromJSON(cJSON *project_hours_approval_status_update_dtoJSON){

    project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto_local_var = NULL;

    // project_hours_approval_status_update_dto->approval_status
    cJSON *approval_status = cJSON_GetObjectItemCaseSensitive(project_hours_approval_status_update_dtoJSON, "approvalStatus");
    timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_e approval_statusVariable;
    if (approval_status) { 
    if(!cJSON_IsString(approval_status))
    {
    goto end; //Enum
    }
    approval_statusVariable = project_hours_approval_status_update_dto_approval_status_FromString(approval_status->valuestring);
    }

    // project_hours_approval_status_update_dto->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(project_hours_approval_status_update_dtoJSON, "comments");
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }


    project_hours_approval_status_update_dto_local_var = project_hours_approval_status_update_dto_create (
        approval_status ? approval_statusVariable : timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_NULL,
        comments && !cJSON_IsNull(comments) ? strdup(comments->valuestring) : NULL
        );

    return project_hours_approval_status_update_dto_local_var;
end:
    return NULL;

}
