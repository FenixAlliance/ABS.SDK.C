#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_time_log_dto.h"


char* project_time_log_dto_record_type_ToString(projectsservice_project_time_log_dto_RECORDTYPE_e record_type) {
    char* record_typeArray[] =  { "NULL", "RegularHours", "OvertimeToPay", "OvertimeToCompensate" };
    return record_typeArray[record_type];
}

projectsservice_project_time_log_dto_RECORDTYPE_e project_time_log_dto_record_type_FromString(char* record_type){
    int stringToReturn = 0;
    char *record_typeArray[] =  { "NULL", "RegularHours", "OvertimeToPay", "OvertimeToCompensate" };
    size_t sizeofArray = sizeof(record_typeArray) / sizeof(record_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(record_type, record_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

project_time_log_dto_t *project_time_log_dto_create(
    char *id,
    char *timestamp,
    char *project_id,
    char *project_task_id,
    char *task_category_id,
    char *project_period_id,
    char *responsible_contact_id,
    char *creator_contact_id,
    projectsservice_project_time_log_dto_RECORDTYPE_e record_type,
    char *time_span,
    char *log_date,
    char *comments,
    char *type
    ) {
    project_time_log_dto_t *project_time_log_dto_local_var = malloc(sizeof(project_time_log_dto_t));
    if (!project_time_log_dto_local_var) {
        return NULL;
    }
    project_time_log_dto_local_var->id = id;
    project_time_log_dto_local_var->timestamp = timestamp;
    project_time_log_dto_local_var->project_id = project_id;
    project_time_log_dto_local_var->project_task_id = project_task_id;
    project_time_log_dto_local_var->task_category_id = task_category_id;
    project_time_log_dto_local_var->project_period_id = project_period_id;
    project_time_log_dto_local_var->responsible_contact_id = responsible_contact_id;
    project_time_log_dto_local_var->creator_contact_id = creator_contact_id;
    project_time_log_dto_local_var->record_type = record_type;
    project_time_log_dto_local_var->time_span = time_span;
    project_time_log_dto_local_var->log_date = log_date;
    project_time_log_dto_local_var->comments = comments;
    project_time_log_dto_local_var->type = type;

    return project_time_log_dto_local_var;
}


void project_time_log_dto_free(project_time_log_dto_t *project_time_log_dto) {
    if(NULL == project_time_log_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_time_log_dto->id) {
        free(project_time_log_dto->id);
        project_time_log_dto->id = NULL;
    }
    if (project_time_log_dto->timestamp) {
        free(project_time_log_dto->timestamp);
        project_time_log_dto->timestamp = NULL;
    }
    if (project_time_log_dto->project_id) {
        free(project_time_log_dto->project_id);
        project_time_log_dto->project_id = NULL;
    }
    if (project_time_log_dto->project_task_id) {
        free(project_time_log_dto->project_task_id);
        project_time_log_dto->project_task_id = NULL;
    }
    if (project_time_log_dto->task_category_id) {
        free(project_time_log_dto->task_category_id);
        project_time_log_dto->task_category_id = NULL;
    }
    if (project_time_log_dto->project_period_id) {
        free(project_time_log_dto->project_period_id);
        project_time_log_dto->project_period_id = NULL;
    }
    if (project_time_log_dto->responsible_contact_id) {
        free(project_time_log_dto->responsible_contact_id);
        project_time_log_dto->responsible_contact_id = NULL;
    }
    if (project_time_log_dto->creator_contact_id) {
        free(project_time_log_dto->creator_contact_id);
        project_time_log_dto->creator_contact_id = NULL;
    }
    if (project_time_log_dto->time_span) {
        free(project_time_log_dto->time_span);
        project_time_log_dto->time_span = NULL;
    }
    if (project_time_log_dto->log_date) {
        free(project_time_log_dto->log_date);
        project_time_log_dto->log_date = NULL;
    }
    if (project_time_log_dto->comments) {
        free(project_time_log_dto->comments);
        project_time_log_dto->comments = NULL;
    }
    if (project_time_log_dto->type) {
        free(project_time_log_dto->type);
        project_time_log_dto->type = NULL;
    }
    free(project_time_log_dto);
}

cJSON *project_time_log_dto_convertToJSON(project_time_log_dto_t *project_time_log_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_time_log_dto->id
    if(project_time_log_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_time_log_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->timestamp
    if(project_time_log_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_time_log_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_time_log_dto->project_id
    if(project_time_log_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectId", project_time_log_dto->project_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->project_task_id
    if(project_time_log_dto->project_task_id) {
    if(cJSON_AddStringToObject(item, "projectTaskId", project_time_log_dto->project_task_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->task_category_id
    if(project_time_log_dto->task_category_id) {
    if(cJSON_AddStringToObject(item, "taskCategoryId", project_time_log_dto->task_category_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->project_period_id
    if(project_time_log_dto->project_period_id) {
    if(cJSON_AddStringToObject(item, "projectPeriodId", project_time_log_dto->project_period_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->responsible_contact_id
    if(project_time_log_dto->responsible_contact_id) {
    if(cJSON_AddStringToObject(item, "responsibleContactId", project_time_log_dto->responsible_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->creator_contact_id
    if(project_time_log_dto->creator_contact_id) {
    if(cJSON_AddStringToObject(item, "creatorContactId", project_time_log_dto->creator_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->record_type
    if(project_time_log_dto->record_type != projectsservice_project_time_log_dto_RECORDTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "recordType", record_typeproject_time_log_dto_ToString(project_time_log_dto->record_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // project_time_log_dto->time_span
    if(project_time_log_dto->time_span) {
    if(cJSON_AddStringToObject(item, "timeSpan", project_time_log_dto->time_span) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->log_date
    if(project_time_log_dto->log_date) {
    if(cJSON_AddStringToObject(item, "logDate", project_time_log_dto->log_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_time_log_dto->comments
    if(project_time_log_dto->comments) {
    if(cJSON_AddStringToObject(item, "comments", project_time_log_dto->comments) == NULL) {
    goto fail; //String
    }
    }


    // project_time_log_dto->type
    if(project_time_log_dto->type) {
    if(cJSON_AddStringToObject(item, "type", project_time_log_dto->type) == NULL) {
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

project_time_log_dto_t *project_time_log_dto_parseFromJSON(cJSON *project_time_log_dtoJSON){

    project_time_log_dto_t *project_time_log_dto_local_var = NULL;

    // project_time_log_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_time_log_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "projectId");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->project_task_id
    cJSON *project_task_id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "projectTaskId");
    if (project_task_id) { 
    if(!cJSON_IsString(project_task_id) && !cJSON_IsNull(project_task_id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->task_category_id
    cJSON *task_category_id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "taskCategoryId");
    if (task_category_id) { 
    if(!cJSON_IsString(task_category_id) && !cJSON_IsNull(task_category_id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->project_period_id
    cJSON *project_period_id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "projectPeriodId");
    if (project_period_id) { 
    if(!cJSON_IsString(project_period_id) && !cJSON_IsNull(project_period_id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->responsible_contact_id
    cJSON *responsible_contact_id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "responsibleContactId");
    if (responsible_contact_id) { 
    if(!cJSON_IsString(responsible_contact_id) && !cJSON_IsNull(responsible_contact_id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->creator_contact_id
    cJSON *creator_contact_id = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "creatorContactId");
    if (creator_contact_id) { 
    if(!cJSON_IsString(creator_contact_id) && !cJSON_IsNull(creator_contact_id))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->record_type
    cJSON *record_type = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "recordType");
    projectsservice_project_time_log_dto_RECORDTYPE_e record_typeVariable;
    if (record_type) { 
    if(!cJSON_IsString(record_type))
    {
    goto end; //Enum
    }
    record_typeVariable = project_time_log_dto_record_type_FromString(record_type->valuestring);
    }

    // project_time_log_dto->time_span
    cJSON *time_span = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "timeSpan");
    if (time_span) { 
    if(!cJSON_IsString(time_span) && !cJSON_IsNull(time_span))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->log_date
    cJSON *log_date = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "logDate");
    if (log_date) { 
    if(!cJSON_IsString(log_date) && !cJSON_IsNull(log_date))
    {
    goto end; //DateTime
    }
    }

    // project_time_log_dto->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "comments");
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }

    // project_time_log_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(project_time_log_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    project_time_log_dto_local_var = project_time_log_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL,
        project_task_id && !cJSON_IsNull(project_task_id) ? strdup(project_task_id->valuestring) : NULL,
        task_category_id && !cJSON_IsNull(task_category_id) ? strdup(task_category_id->valuestring) : NULL,
        project_period_id && !cJSON_IsNull(project_period_id) ? strdup(project_period_id->valuestring) : NULL,
        responsible_contact_id && !cJSON_IsNull(responsible_contact_id) ? strdup(responsible_contact_id->valuestring) : NULL,
        creator_contact_id && !cJSON_IsNull(creator_contact_id) ? strdup(creator_contact_id->valuestring) : NULL,
        record_type ? record_typeVariable : projectsservice_project_time_log_dto_RECORDTYPE_NULL,
        time_span && !cJSON_IsNull(time_span) ? strdup(time_span->valuestring) : NULL,
        log_date && !cJSON_IsNull(log_date) ? strdup(log_date->valuestring) : NULL,
        comments && !cJSON_IsNull(comments) ? strdup(comments->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return project_time_log_dto_local_var;
end:
    return NULL;

}
