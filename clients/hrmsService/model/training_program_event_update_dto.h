/*
 * training_program_event_update_dto.h
 *
 * 
 */

#ifndef _training_program_event_update_dto_H_
#define _training_program_event_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct training_program_event_update_dto_t training_program_event_update_dto_t;


// Enum REPETITIONCRITERIA for training_program_event_update_dto

typedef enum  { hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_NULL = 0, hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_NotRepeat, hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_WorkWeek, hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_Day, hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_Month, hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_Year } hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e;

char* training_program_event_update_dto_repetition_criteria_ToString(hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e repetition_criteria);

hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e training_program_event_update_dto_repetition_criteria_FromString(char* repetition_criteria);

// Enum DAYOFTHEWEEK for training_program_event_update_dto

typedef enum  { hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_NULL = 0, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_All, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Sunday, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Monday, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Tuesday, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Wednesday, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Thursday, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Friday, hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_Saturday } hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e;

char* training_program_event_update_dto_day_of_the_week_ToString(hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e day_of_the_week);

hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e training_program_event_update_dto_day_of_the_week_FromString(char* day_of_the_week);



typedef struct training_program_event_update_dto_t {
    char *title; // string
    char *description; // string
    char *start; //date time
    char *end; //date time
    int is_break; //boolean
    int occust_on_monday; //boolean
    int occust_on_tuesday; //boolean
    int occust_on_wednesday; //boolean
    int occust_on_thursday; //boolean
    int occust_on_friday; //boolean
    int occust_on_saturday; //boolean
    int occust_on_sunday; //boolean
    int repeat_every; //numeric
    hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e repetition_criteria; //enum
    char *recurrence_start; //date time
    char *recurrence_end; //date time
    hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e day_of_the_week; //enum
    char *schedule_id; // string
    char *parent_time_interval_id; // string
    char *training_program_id; // string

} training_program_event_update_dto_t;

training_program_event_update_dto_t *training_program_event_update_dto_create(
    char *title,
    char *description,
    char *start,
    char *end,
    int is_break,
    int occust_on_monday,
    int occust_on_tuesday,
    int occust_on_wednesday,
    int occust_on_thursday,
    int occust_on_friday,
    int occust_on_saturday,
    int occust_on_sunday,
    int repeat_every,
    hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e repetition_criteria,
    char *recurrence_start,
    char *recurrence_end,
    hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e day_of_the_week,
    char *schedule_id,
    char *parent_time_interval_id,
    char *training_program_id
);

void training_program_event_update_dto_free(training_program_event_update_dto_t *training_program_event_update_dto);

training_program_event_update_dto_t *training_program_event_update_dto_parseFromJSON(cJSON *training_program_event_update_dtoJSON);

cJSON *training_program_event_update_dto_convertToJSON(training_program_event_update_dto_t *training_program_event_update_dto);

#endif /* _training_program_event_update_dto_H_ */

