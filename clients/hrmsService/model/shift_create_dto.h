/*
 * shift_create_dto.h
 *
 * 
 */

#ifndef _shift_create_dto_H_
#define _shift_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shift_create_dto_t shift_create_dto_t;


// Enum REPETITIONCRITERIA for shift_create_dto

typedef enum  { hrmsservice_shift_create_dto_REPETITIONCRITERIA_NULL = 0, hrmsservice_shift_create_dto_REPETITIONCRITERIA_NotRepeat, hrmsservice_shift_create_dto_REPETITIONCRITERIA_WorkWeek, hrmsservice_shift_create_dto_REPETITIONCRITERIA_Day, hrmsservice_shift_create_dto_REPETITIONCRITERIA_Month, hrmsservice_shift_create_dto_REPETITIONCRITERIA_Year } hrmsservice_shift_create_dto_REPETITIONCRITERIA_e;

char* shift_create_dto_repetition_criteria_ToString(hrmsservice_shift_create_dto_REPETITIONCRITERIA_e repetition_criteria);

hrmsservice_shift_create_dto_REPETITIONCRITERIA_e shift_create_dto_repetition_criteria_FromString(char* repetition_criteria);

// Enum DAYOFTHEWEEK for shift_create_dto

typedef enum  { hrmsservice_shift_create_dto_DAYOFTHEWEEK_NULL = 0, hrmsservice_shift_create_dto_DAYOFTHEWEEK_All, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Sunday, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Monday, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Tuesday, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Wednesday, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Thursday, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Friday, hrmsservice_shift_create_dto_DAYOFTHEWEEK_Saturday } hrmsservice_shift_create_dto_DAYOFTHEWEEK_e;

char* shift_create_dto_day_of_the_week_ToString(hrmsservice_shift_create_dto_DAYOFTHEWEEK_e day_of_the_week);

hrmsservice_shift_create_dto_DAYOFTHEWEEK_e shift_create_dto_day_of_the_week_FromString(char* day_of_the_week);



typedef struct shift_create_dto_t {
    char *id; // string
    char *timestamp; //date time
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
    hrmsservice_shift_create_dto_REPETITIONCRITERIA_e repetition_criteria; //enum
    char *recurrence_start; //date time
    char *recurrence_end; //date time
    hrmsservice_shift_create_dto_DAYOFTHEWEEK_e day_of_the_week; //enum
    char *schedule_id; // string
    char *parent_time_interval_id; // string
    char *employee_profile_id; // string

} shift_create_dto_t;

shift_create_dto_t *shift_create_dto_create(
    char *id,
    char *timestamp,
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
    hrmsservice_shift_create_dto_REPETITIONCRITERIA_e repetition_criteria,
    char *recurrence_start,
    char *recurrence_end,
    hrmsservice_shift_create_dto_DAYOFTHEWEEK_e day_of_the_week,
    char *schedule_id,
    char *parent_time_interval_id,
    char *employee_profile_id
);

void shift_create_dto_free(shift_create_dto_t *shift_create_dto);

shift_create_dto_t *shift_create_dto_parseFromJSON(cJSON *shift_create_dtoJSON);

cJSON *shift_create_dto_convertToJSON(shift_create_dto_t *shift_create_dto);

#endif /* _shift_create_dto_H_ */

