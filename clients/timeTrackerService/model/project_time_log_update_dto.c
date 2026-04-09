#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_time_log_update_dto.h"


char* project_time_log_update_dto_project_time_log_record_type_ToString(timetrackerservice_project_time_log_update_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_type) {
    char* project_time_log_record_typeArray[] =  { "NULL", "RegularHours", "OvertimeToPay", "OvertimeToCompensate" };
    return project_time_log_record_typeArray[project_time_log_record_type];
}

timetrackerservice_project_time_log_update_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_update_dto_project_time_log_record_type_FromString(char* project_time_log_record_type){
    int stringToReturn = 0;
    char *project_time_log_record_typeArray[] =  { "NULL", "RegularHours", "OvertimeToPay", "OvertimeToCompensate" };
    size_t sizeofArray = sizeof(project_time_log_record_typeArray) / sizeof(project_time_log_record_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(project_time_log_record_type, project_time_log_record_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

project_time_log_update_dto_t *project_time_log_update_dto_create(
    char *log_date,
    char *time_span,
    char *comments,
    char *project_task_id,
    char *project_period_id,
    timetrackerservice_project_time_log_update_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_type
    ) {
    project_time_log_update_dto_t *project_time_log_update_dto_local_var = malloc(sizeof(project_time_log_update_dto_t));
    if (!project_time_log_update_dto_local_var) {
        return NULL;
    }
    project_time_log_update_dto_local_var->log_date = log_date;
    project_time_log_update_dto_local_var->time_span = time_span;
    project_time_log_update_dto_local_var->comments = comments;
    project_time_log_update_dto_local_var->project_task_id = project_task_id;
    project_time_log_update_dto_local_var->project_period_id = project_period_id;
    project_time_log_update_dto_local_var->project_time_log_record_type = project_time_log_record_type;

    return project_time_log_update_dto_local_var;
}


void project_time_log_update_dto_free(project_time_log_update_dto_t *project_time_log_update_dto) {
    if(NULL == project_time_log_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_time_log_update_dto->log_date) {
        free(project_time_log_update_dto->log_date);
        project_time_log_update_dto->log_date = NULL;
    }
    if (project_time_log_update_dto->time_span) {
        free(project_time_log_update_dto->time_span);
        project_time_log_update_dto->time_span = NULL;
    }
    if (project_time_log_update_dto->comments) {
        free(project_time_log_update_dto->comments);
        project_time_log_update_dto->comments = NULL;
    }
    if (project_time_log_update_dto->project_task_id) {
        free(project_time_log_update_dto->project_task_id);
        project_time_log_update_dto->project_task_id = NULL;
    }
    if (project_time_log_update_dto->project_period_id) {
        free(project_time_log_update_dto->project_period_id);
        project_time_log_update_dto->project_period_id = NULL;
    }
    free(project_time_log_update_dto);
}

cJSON *project_time_log_update_dto_convertToJSON(project_time_log_update_dto_t *project_time_log_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_time_log_update_dto->log_date
    if(project_time_log_update_dto->log_date) {
    if(cJSON_AddStringToObject(item, "logDate", project_time_log_update_dto->log_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_time_log_update_dto->time_span
    if(project_time_log_update_dto->time_span) {
    if(cJSON_AddStringToObject(item, "timeSpan", project_time_log_update_dto->time_span) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_update_dto->comments
    if(project_time_log_update_dto->comments) {
    if(cJSON_AddStringToObject(item, "comments", project_time_log_update_dto->comments) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_update_dto->project_task_id
    if(project_time_log_update_dto->project_task_id) {
    if(cJSON_AddStringToObject(item, "projectTaskID", project_time_log_update_dto->project_task_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_update_dto->project_period_id
    if(project_time_log_update_dto->project_period_id) {
    if(cJSON_AddStringToObject(item, "projectPeriodID", project_time_log_update_dto->project_period_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_update_dto->project_time_log_record_type
    if(project_time_log_update_dto->project_time_log_record_type != timetrackerservice_project_time_log_update_dto_PROJECTTIMELOGRECORDTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "projectTimeLogRecordType", project_time_log_record_typeproject_time_log_update_dto_ToString(project_time_log_update_dto->project_time_log_record_type)) == NULL)
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

project_time_log_update_dto_t *project_time_log_update_dto_parseFromJSON(cJSON *project_time_log_update_dtoJSON){

    project_time_log_update_dto_t *project_time_log_update_dto_local_var = NULL;

    // project_time_log_update_dto->log_date
    cJSON *log_date = cJSON_GetObjectItemCaseSensitive(project_time_log_update_dtoJSON, "logDate");
    if (log_date) { 
    if(!cJSON_IsString(log_date) && !cJSON_IsNull(log_date))
    {
    goto end; //DateTime
    }
    }

    // project_time_log_update_dto->time_span
    cJSON *time_span = cJSON_GetObjectItemCaseSensitive(project_time_log_update_dtoJSON, "timeSpan");
    if (time_span) { 
    if(!cJSON_IsString(time_span) && !cJSON_IsNull(time_span))
    {
    goto end; //String
    }
    }

    // project_time_log_update_dto->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(project_time_log_update_dtoJSON, "comments");
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }

    // project_time_log_update_dto->project_task_id
    cJSON *project_task_id = cJSON_GetObjectItemCaseSensitive(project_time_log_update_dtoJSON, "projectTaskID");
    if (project_task_id) { 
    if(!cJSON_IsString(project_task_id) && !cJSON_IsNull(project_task_id))
    {
    goto end; //String
    }
    }

    // project_time_log_update_dto->project_period_id
    cJSON *project_period_id = cJSON_GetObjectItemCaseSensitive(project_time_log_update_dtoJSON, "projectPeriodID");
    if (project_period_id) { 
    if(!cJSON_IsString(project_period_id) && !cJSON_IsNull(project_period_id))
    {
    goto end; //String
    }
    }

    // project_time_log_update_dto->project_time_log_record_type
    cJSON *project_time_log_record_type = cJSON_GetObjectItemCaseSensitive(project_time_log_update_dtoJSON, "projectTimeLogRecordType");
    timetrackerservice_project_time_log_update_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_typeVariable;
    if (project_time_log_record_type) { 
    if(!cJSON_IsString(project_time_log_record_type))
    {
    goto end; //Enum
    }
    project_time_log_record_typeVariable = project_time_log_update_dto_project_time_log_record_type_FromString(project_time_log_record_type->valuestring);
    }


    project_time_log_update_dto_local_var = project_time_log_update_dto_create (
        log_date && !cJSON_IsNull(log_date) ? strdup(log_date->valuestring) : NULL,
        time_span && !cJSON_IsNull(time_span) ? strdup(time_span->valuestring) : NULL,
        comments && !cJSON_IsNull(comments) ? strdup(comments->valuestring) : NULL,
        project_task_id && !cJSON_IsNull(project_task_id) ? strdup(project_task_id->valuestring) : NULL,
        project_period_id && !cJSON_IsNull(project_period_id) ? strdup(project_period_id->valuestring) : NULL,
        project_time_log_record_type ? project_time_log_record_typeVariable : timetrackerservice_project_time_log_update_dto_PROJECTTIMELOGRECORDTYPE_NULL
        );

    return project_time_log_update_dto_local_var;
end:
    return NULL;

}
