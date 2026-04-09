/*
 * project_time_log_dto.h
 *
 * 
 */

#ifndef _project_time_log_dto_H_
#define _project_time_log_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_time_log_dto_t project_time_log_dto_t;


// Enum RECORDTYPE for project_time_log_dto

typedef enum  { timetrackerservice_project_time_log_dto_RECORDTYPE_NULL = 0, timetrackerservice_project_time_log_dto_RECORDTYPE_RegularHours, timetrackerservice_project_time_log_dto_RECORDTYPE_OvertimeToPay, timetrackerservice_project_time_log_dto_RECORDTYPE_OvertimeToCompensate } timetrackerservice_project_time_log_dto_RECORDTYPE_e;

char* project_time_log_dto_record_type_ToString(timetrackerservice_project_time_log_dto_RECORDTYPE_e record_type);

timetrackerservice_project_time_log_dto_RECORDTYPE_e project_time_log_dto_record_type_FromString(char* record_type);



typedef struct project_time_log_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *project_id; // string
    char *project_task_id; // string
    char *task_category_id; // string
    char *project_period_id; // string
    char *responsible_contact_id; // string
    char *creator_contact_id; // string
    timetrackerservice_project_time_log_dto_RECORDTYPE_e record_type; //enum
    char *time_span; // string
    char *log_date; //date time
    char *comments; // string
    char *type; // string

} project_time_log_dto_t;

project_time_log_dto_t *project_time_log_dto_create(
    char *id,
    char *timestamp,
    char *project_id,
    char *project_task_id,
    char *task_category_id,
    char *project_period_id,
    char *responsible_contact_id,
    char *creator_contact_id,
    timetrackerservice_project_time_log_dto_RECORDTYPE_e record_type,
    char *time_span,
    char *log_date,
    char *comments,
    char *type
);

void project_time_log_dto_free(project_time_log_dto_t *project_time_log_dto);

project_time_log_dto_t *project_time_log_dto_parseFromJSON(cJSON *project_time_log_dtoJSON);

cJSON *project_time_log_dto_convertToJSON(project_time_log_dto_t *project_time_log_dto);

#endif /* _project_time_log_dto_H_ */

