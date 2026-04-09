/*
 * project_time_log_create_dto.h
 *
 * 
 */

#ifndef _project_time_log_create_dto_H_
#define _project_time_log_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_time_log_create_dto_t project_time_log_create_dto_t;


// Enum PROJECTTIMELOGRECORDTYPE for project_time_log_create_dto

typedef enum  { timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_NULL = 0, timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_RegularHours, timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_OvertimeToPay, timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_OvertimeToCompensate } timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e;

char* project_time_log_create_dto_project_time_log_record_type_ToString(timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_type);

timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_create_dto_project_time_log_record_type_FromString(char* project_time_log_record_type);



typedef struct project_time_log_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *time_span; // string
    char *log_date; //date time
    char *comments; // string
    char *project_task_id; // string
    char *project_period_id; // string
    timetrackerservice_project_time_log_create_dto_PROJECTTIMELOGRECORDTYPE_e project_time_log_record_type; //enum
    char *project_id; // string

} project_time_log_create_dto_t;

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
);

void project_time_log_create_dto_free(project_time_log_create_dto_t *project_time_log_create_dto);

project_time_log_create_dto_t *project_time_log_create_dto_parseFromJSON(cJSON *project_time_log_create_dtoJSON);

cJSON *project_time_log_create_dto_convertToJSON(project_time_log_create_dto_t *project_time_log_create_dto);

#endif /* _project_time_log_create_dto_H_ */

