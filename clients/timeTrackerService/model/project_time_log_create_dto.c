#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_time_log_create_dto.h"


char* project_time_log_create_dto_project_time_log_record_type_ToString(timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_type) {
    char* project_time_log_record_typeArray[] =  { "NULL", "RegularHours", "OvertimeToPay", "OvertimeToCompensate" };
    return project_time_log_record_typeArray[project_time_log_record_type];
}

timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_create_dto_project_time_log_record_type_FromString(char* project_time_log_record_type){
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

project_time_log_create_dto_t *project_time_log_create_dto_create(
    char *id,
    char *timestamp,
    char *time_span,
    char *log_date,
    char *comments,
    char *project_task_id,
    char *project_period_id,
    timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_type,
    char *project_id
    ) {
    project_time_log_create_dto_t *project_time_log_create_dto_local_var = malloc(sizeof(project_time_log_create_dto_t));
    if (!project_time_log_create_dto_local_var) {
        return NULL;
    }
    project_time_log_create_dto_local_var->id = id;
    project_time_log_create_dto_local_var->timestamp = timestamp;
    project_time_log_create_dto_local_var->time_span = time_span;
    project_time_log_create_dto_local_var->log_date = log_date;
    project_time_log_create_dto_local_var->comments = comments;
    project_time_log_create_dto_local_var->project_task_id = project_task_id;
    project_time_log_create_dto_local_var->project_period_id = project_period_id;
    project_time_log_create_dto_local_var->project_time_log_record_type = project_time_log_record_type;
    project_time_log_create_dto_local_var->project_id = project_id;

    return project_time_log_create_dto_local_var;
}


void project_time_log_create_dto_free(project_time_log_create_dto_t *project_time_log_create_dto) {
    if(NULL == project_time_log_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_time_log_create_dto->id) {
        free(project_time_log_create_dto->id);
        project_time_log_create_dto->id = NULL;
    }
    if (project_time_log_create_dto->timestamp) {
        free(project_time_log_create_dto->timestamp);
        project_time_log_create_dto->timestamp = NULL;
    }
    if (project_time_log_create_dto->time_span) {
        free(project_time_log_create_dto->time_span);
        project_time_log_create_dto->time_span = NULL;
    }
    if (project_time_log_create_dto->log_date) {
        free(project_time_log_create_dto->log_date);
        project_time_log_create_dto->log_date = NULL;
    }
    if (project_time_log_create_dto->comments) {
        free(project_time_log_create_dto->comments);
        project_time_log_create_dto->comments = NULL;
    }
    if (project_time_log_create_dto->project_task_id) {
        free(project_time_log_create_dto->project_task_id);
        project_time_log_create_dto->project_task_id = NULL;
    }
    if (project_time_log_create_dto->project_period_id) {
        free(project_time_log_create_dto->project_period_id);
        project_time_log_create_dto->project_period_id = NULL;
    }
    if (project_time_log_create_dto->project_id) {
        free(project_time_log_create_dto->project_id);
        project_time_log_create_dto->project_id = NULL;
    }
    free(project_time_log_create_dto);
}

cJSON *project_time_log_create_dto_convertToJSON(project_time_log_create_dto_t *project_time_log_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_time_log_create_dto->id
    if(project_time_log_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_time_log_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_create_dto->timestamp
    if(project_time_log_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_time_log_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_time_log_create_dto->time_span
    if(project_time_log_create_dto->time_span) {
    if(cJSON_AddStringToObject(item, "timeSpan", project_time_log_create_dto->time_span) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_create_dto->log_date
    if(project_time_log_create_dto->log_date) {
    if(cJSON_AddStringToObject(item, "logDate", project_time_log_create_dto->log_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_time_log_create_dto->comments
    if(project_time_log_create_dto->comments) {
    if(cJSON_AddStringToObject(item, "comments", project_time_log_create_dto->comments) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_create_dto->project_task_id
    if (!project_time_log_create_dto->project_task_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "projectTaskID", project_time_log_create_dto->project_task_id) == NULL) {
    goto fail; //String
    }


    // project_time_log_create_dto->project_period_id
    if (!project_time_log_create_dto->project_period_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "projectPeriodID", project_time_log_create_dto->project_period_id) == NULL) {
    goto fail; //String
    }


    // project_time_log_create_dto->project_time_log_record_type
    if(project_time_log_create_dto->project_time_log_record_type != timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "projectTimeLogRecordType", project_time_log_record_typeproject_time_log_create_dto_ToString(project_time_log_create_dto->project_time_log_record_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // project_time_log_create_dto->project_id
    if(project_time_log_create_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectID", project_time_log_create_dto->project_id) == NULL) {
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

project_time_log_create_dto_t *project_time_log_create_dto_parseFromJSON(cJSON *project_time_log_create_dtoJSON){

    project_time_log_create_dto_t *project_time_log_create_dto_local_var = NULL;

    // project_time_log_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_time_log_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_time_log_create_dto->time_span
    cJSON *time_span = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "timeSpan");
    if (time_span) { 
    if(!cJSON_IsString(time_span) && !cJSON_IsNull(time_span))
    {
    goto end; //String
    }
    }

    // project_time_log_create_dto->log_date
    cJSON *log_date = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "logDate");
    if (log_date) { 
    if(!cJSON_IsString(log_date) && !cJSON_IsNull(log_date))
    {
    goto end; //DateTime
    }
    }

    // project_time_log_create_dto->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "comments");
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }

    // project_time_log_create_dto->project_task_id
    cJSON *project_task_id = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "projectTaskID");
    if (!project_task_id) {
        goto end;
    }

    
    if(!cJSON_IsString(project_task_id))
    {
    goto end; //String
    }

    // project_time_log_create_dto->project_period_id
    cJSON *project_period_id = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "projectPeriodID");
    if (!project_period_id) {
        goto end;
    }

    
    if(!cJSON_IsString(project_period_id))
    {
    goto end; //String
    }

    // project_time_log_create_dto->project_time_log_record_type
    cJSON *project_time_log_record_type = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "projectTimeLogRecordType");
    timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_typeVariable;
    if (project_time_log_record_type) { 
    if(!cJSON_IsString(project_time_log_record_type))
    {
    goto end; //Enum
    }
    project_time_log_record_typeVariable = project_time_log_create_dto_project_time_log_record_type_FromString(project_time_log_record_type->valuestring);
    }

    // project_time_log_create_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(project_time_log_create_dtoJSON, "projectID");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }


    project_time_log_create_dto_local_var = project_time_log_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        time_span && !cJSON_IsNull(time_span) ? strdup(time_span->valuestring) : NULL,
        log_date && !cJSON_IsNull(log_date) ? strdup(log_date->valuestring) : NULL,
        comments && !cJSON_IsNull(comments) ? strdup(comments->valuestring) : NULL,
        strdup(project_task_id->valuestring),
        strdup(project_period_id->valuestring),
        project_time_log_record_type ? project_time_log_record_typeVariable : timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL
        );

    return project_time_log_create_dto_local_var;
end:
    return NULL;

}
