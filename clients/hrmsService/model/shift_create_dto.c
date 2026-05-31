#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shift_create_dto.h"


char* shift_create_dto_repetition_criteria_ToString(hrmsservice_shift_create_dto_REPETITIONCRITERIA_e repetition_criteria) {
    char* repetition_criteriaArray[] =  { "NULL", "NotRepeat", "WorkWeek", "Day", "Month", "Year" };
    return repetition_criteriaArray[repetition_criteria];
}

hrmsservice_shift_create_dto_REPETITIONCRITERIA_e shift_create_dto_repetition_criteria_FromString(char* repetition_criteria){
    int stringToReturn = 0;
    char *repetition_criteriaArray[] =  { "NULL", "NotRepeat", "WorkWeek", "Day", "Month", "Year" };
    size_t sizeofArray = sizeof(repetition_criteriaArray) / sizeof(repetition_criteriaArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(repetition_criteria, repetition_criteriaArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* shift_create_dto_day_of_the_week_ToString(hrmsservice_shift_create_dto_DAYOFTHEWEEK_e day_of_the_week) {
    char* day_of_the_weekArray[] =  { "NULL", "All", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return day_of_the_weekArray[day_of_the_week];
}

hrmsservice_shift_create_dto_DAYOFTHEWEEK_e shift_create_dto_day_of_the_week_FromString(char* day_of_the_week){
    int stringToReturn = 0;
    char *day_of_the_weekArray[] =  { "NULL", "All", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    size_t sizeofArray = sizeof(day_of_the_weekArray) / sizeof(day_of_the_weekArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(day_of_the_week, day_of_the_weekArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    shift_create_dto_t *shift_create_dto_local_var = malloc(sizeof(shift_create_dto_t));
    if (!shift_create_dto_local_var) {
        return NULL;
    }
    shift_create_dto_local_var->id = id;
    shift_create_dto_local_var->timestamp = timestamp;
    shift_create_dto_local_var->title = title;
    shift_create_dto_local_var->description = description;
    shift_create_dto_local_var->start = start;
    shift_create_dto_local_var->end = end;
    shift_create_dto_local_var->is_break = is_break;
    shift_create_dto_local_var->occust_on_monday = occust_on_monday;
    shift_create_dto_local_var->occust_on_tuesday = occust_on_tuesday;
    shift_create_dto_local_var->occust_on_wednesday = occust_on_wednesday;
    shift_create_dto_local_var->occust_on_thursday = occust_on_thursday;
    shift_create_dto_local_var->occust_on_friday = occust_on_friday;
    shift_create_dto_local_var->occust_on_saturday = occust_on_saturday;
    shift_create_dto_local_var->occust_on_sunday = occust_on_sunday;
    shift_create_dto_local_var->repeat_every = repeat_every;
    shift_create_dto_local_var->repetition_criteria = repetition_criteria;
    shift_create_dto_local_var->recurrence_start = recurrence_start;
    shift_create_dto_local_var->recurrence_end = recurrence_end;
    shift_create_dto_local_var->day_of_the_week = day_of_the_week;
    shift_create_dto_local_var->schedule_id = schedule_id;
    shift_create_dto_local_var->parent_time_interval_id = parent_time_interval_id;
    shift_create_dto_local_var->employee_profile_id = employee_profile_id;

    return shift_create_dto_local_var;
}


void shift_create_dto_free(shift_create_dto_t *shift_create_dto) {
    if(NULL == shift_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shift_create_dto->id) {
        free(shift_create_dto->id);
        shift_create_dto->id = NULL;
    }
    if (shift_create_dto->timestamp) {
        free(shift_create_dto->timestamp);
        shift_create_dto->timestamp = NULL;
    }
    if (shift_create_dto->title) {
        free(shift_create_dto->title);
        shift_create_dto->title = NULL;
    }
    if (shift_create_dto->description) {
        free(shift_create_dto->description);
        shift_create_dto->description = NULL;
    }
    if (shift_create_dto->start) {
        free(shift_create_dto->start);
        shift_create_dto->start = NULL;
    }
    if (shift_create_dto->end) {
        free(shift_create_dto->end);
        shift_create_dto->end = NULL;
    }
    if (shift_create_dto->recurrence_start) {
        free(shift_create_dto->recurrence_start);
        shift_create_dto->recurrence_start = NULL;
    }
    if (shift_create_dto->recurrence_end) {
        free(shift_create_dto->recurrence_end);
        shift_create_dto->recurrence_end = NULL;
    }
    if (shift_create_dto->schedule_id) {
        free(shift_create_dto->schedule_id);
        shift_create_dto->schedule_id = NULL;
    }
    if (shift_create_dto->parent_time_interval_id) {
        free(shift_create_dto->parent_time_interval_id);
        shift_create_dto->parent_time_interval_id = NULL;
    }
    if (shift_create_dto->employee_profile_id) {
        free(shift_create_dto->employee_profile_id);
        shift_create_dto->employee_profile_id = NULL;
    }
    free(shift_create_dto);
}

cJSON *shift_create_dto_convertToJSON(shift_create_dto_t *shift_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // shift_create_dto->id
    if(shift_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shift_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shift_create_dto->timestamp
    if(shift_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shift_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_create_dto->title
    if (!shift_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", shift_create_dto->title) == NULL) {
    goto fail; //String
    }


    // shift_create_dto->description
    if(shift_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", shift_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // shift_create_dto->start
    if (!shift_create_dto->start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "start", shift_create_dto->start) == NULL) {
    goto fail; //Date-Time
    }


    // shift_create_dto->end
    if (!shift_create_dto->end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "end", shift_create_dto->end) == NULL) {
    goto fail; //Date-Time
    }


    // shift_create_dto->is_break
    if(shift_create_dto->is_break) {
    if(cJSON_AddBoolToObject(item, "isBreak", shift_create_dto->is_break) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_monday
    if(shift_create_dto->occust_on_monday) {
    if(cJSON_AddBoolToObject(item, "occustOnMonday", shift_create_dto->occust_on_monday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_tuesday
    if(shift_create_dto->occust_on_tuesday) {
    if(cJSON_AddBoolToObject(item, "occustOnTuesday", shift_create_dto->occust_on_tuesday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_wednesday
    if(shift_create_dto->occust_on_wednesday) {
    if(cJSON_AddBoolToObject(item, "occustOnWednesday", shift_create_dto->occust_on_wednesday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_thursday
    if(shift_create_dto->occust_on_thursday) {
    if(cJSON_AddBoolToObject(item, "occustOnThursday", shift_create_dto->occust_on_thursday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_friday
    if(shift_create_dto->occust_on_friday) {
    if(cJSON_AddBoolToObject(item, "occustOnFriday", shift_create_dto->occust_on_friday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_saturday
    if(shift_create_dto->occust_on_saturday) {
    if(cJSON_AddBoolToObject(item, "occustOnSaturday", shift_create_dto->occust_on_saturday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->occust_on_sunday
    if(shift_create_dto->occust_on_sunday) {
    if(cJSON_AddBoolToObject(item, "occustOnSunday", shift_create_dto->occust_on_sunday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_create_dto->repeat_every
    if(shift_create_dto->repeat_every) {
    if(cJSON_AddNumberToObject(item, "repeatEvery", shift_create_dto->repeat_every) == NULL) {
    goto fail; //Numeric
    }
    }


    // shift_create_dto->repetition_criteria
    if(shift_create_dto->repetition_criteria != hrmsservice_shift_create_dto_REPETITIONCRITERIA_NULL) {
    if(cJSON_AddStringToObject(item, "repetitionCriteria", repetition_criteriashift_create_dto_ToString(shift_create_dto->repetition_criteria)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // shift_create_dto->recurrence_start
    if(shift_create_dto->recurrence_start) {
    if(cJSON_AddStringToObject(item, "recurrenceStart", shift_create_dto->recurrence_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_create_dto->recurrence_end
    if(shift_create_dto->recurrence_end) {
    if(cJSON_AddStringToObject(item, "recurrenceEnd", shift_create_dto->recurrence_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_create_dto->day_of_the_week
    if(shift_create_dto->day_of_the_week != hrmsservice_shift_create_dto_DAYOFTHEWEEK_NULL) {
    if(cJSON_AddStringToObject(item, "dayOfTheWeek", day_of_the_weekshift_create_dto_ToString(shift_create_dto->day_of_the_week)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // shift_create_dto->schedule_id
    if(shift_create_dto->schedule_id) {
    if(cJSON_AddStringToObject(item, "scheduleId", shift_create_dto->schedule_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_create_dto->parent_time_interval_id
    if(shift_create_dto->parent_time_interval_id) {
    if(cJSON_AddStringToObject(item, "parentTimeIntervalId", shift_create_dto->parent_time_interval_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_create_dto->employee_profile_id
    if (!shift_create_dto->employee_profile_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "employeeProfileId", shift_create_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

shift_create_dto_t *shift_create_dto_parseFromJSON(cJSON *shift_create_dtoJSON){

    shift_create_dto_t *shift_create_dto_local_var = NULL;

    // shift_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shift_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shift_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // shift_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // shift_create_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "start");
    if (!start) {
        goto end;
    }

    
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }

    // shift_create_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "end");
    if (!end) {
        goto end;
    }

    
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }

    // shift_create_dto->is_break
    cJSON *is_break = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "isBreak");
    if (is_break) { 
    if(!cJSON_IsBool(is_break))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_monday
    cJSON *occust_on_monday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnMonday");
    if (occust_on_monday) { 
    if(!cJSON_IsBool(occust_on_monday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_tuesday
    cJSON *occust_on_tuesday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnTuesday");
    if (occust_on_tuesday) { 
    if(!cJSON_IsBool(occust_on_tuesday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_wednesday
    cJSON *occust_on_wednesday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnWednesday");
    if (occust_on_wednesday) { 
    if(!cJSON_IsBool(occust_on_wednesday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_thursday
    cJSON *occust_on_thursday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnThursday");
    if (occust_on_thursday) { 
    if(!cJSON_IsBool(occust_on_thursday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_friday
    cJSON *occust_on_friday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnFriday");
    if (occust_on_friday) { 
    if(!cJSON_IsBool(occust_on_friday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_saturday
    cJSON *occust_on_saturday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnSaturday");
    if (occust_on_saturday) { 
    if(!cJSON_IsBool(occust_on_saturday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->occust_on_sunday
    cJSON *occust_on_sunday = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "occustOnSunday");
    if (occust_on_sunday) { 
    if(!cJSON_IsBool(occust_on_sunday))
    {
    goto end; //Bool
    }
    }

    // shift_create_dto->repeat_every
    cJSON *repeat_every = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "repeatEvery");
    if (repeat_every) { 
    if(!cJSON_IsNumber(repeat_every))
    {
    goto end; //Numeric
    }
    }

    // shift_create_dto->repetition_criteria
    cJSON *repetition_criteria = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "repetitionCriteria");
    hrmsservice_shift_create_dto_REPETITIONCRITERIA_e repetition_criteriaVariable;
    if (repetition_criteria) { 
    if(!cJSON_IsString(repetition_criteria))
    {
    goto end; //Enum
    }
    repetition_criteriaVariable = shift_create_dto_repetition_criteria_FromString(repetition_criteria->valuestring);
    }

    // shift_create_dto->recurrence_start
    cJSON *recurrence_start = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "recurrenceStart");
    if (recurrence_start) { 
    if(!cJSON_IsString(recurrence_start) && !cJSON_IsNull(recurrence_start))
    {
    goto end; //DateTime
    }
    }

    // shift_create_dto->recurrence_end
    cJSON *recurrence_end = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "recurrenceEnd");
    if (recurrence_end) { 
    if(!cJSON_IsString(recurrence_end) && !cJSON_IsNull(recurrence_end))
    {
    goto end; //DateTime
    }
    }

    // shift_create_dto->day_of_the_week
    cJSON *day_of_the_week = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "dayOfTheWeek");
    hrmsservice_shift_create_dto_DAYOFTHEWEEK_e day_of_the_weekVariable;
    if (day_of_the_week) { 
    if(!cJSON_IsString(day_of_the_week))
    {
    goto end; //Enum
    }
    day_of_the_weekVariable = shift_create_dto_day_of_the_week_FromString(day_of_the_week->valuestring);
    }

    // shift_create_dto->schedule_id
    cJSON *schedule_id = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "scheduleId");
    if (schedule_id) { 
    if(!cJSON_IsString(schedule_id) && !cJSON_IsNull(schedule_id))
    {
    goto end; //String
    }
    }

    // shift_create_dto->parent_time_interval_id
    cJSON *parent_time_interval_id = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "parentTimeIntervalId");
    if (parent_time_interval_id) { 
    if(!cJSON_IsString(parent_time_interval_id) && !cJSON_IsNull(parent_time_interval_id))
    {
    goto end; //String
    }
    }

    // shift_create_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(shift_create_dtoJSON, "employeeProfileId");
    if (!employee_profile_id) {
        goto end;
    }

    
    if(!cJSON_IsString(employee_profile_id))
    {
    goto end; //String
    }


    shift_create_dto_local_var = shift_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        strdup(start->valuestring),
        strdup(end->valuestring),
        is_break ? is_break->valueint : 0,
        occust_on_monday ? occust_on_monday->valueint : 0,
        occust_on_tuesday ? occust_on_tuesday->valueint : 0,
        occust_on_wednesday ? occust_on_wednesday->valueint : 0,
        occust_on_thursday ? occust_on_thursday->valueint : 0,
        occust_on_friday ? occust_on_friday->valueint : 0,
        occust_on_saturday ? occust_on_saturday->valueint : 0,
        occust_on_sunday ? occust_on_sunday->valueint : 0,
        repeat_every ? repeat_every->valuedouble : 0,
        repetition_criteria ? repetition_criteriaVariable : hrmsservice_shift_create_dto_REPETITIONCRITERIA_NULL,
        recurrence_start && !cJSON_IsNull(recurrence_start) ? strdup(recurrence_start->valuestring) : NULL,
        recurrence_end && !cJSON_IsNull(recurrence_end) ? strdup(recurrence_end->valuestring) : NULL,
        day_of_the_week ? day_of_the_weekVariable : hrmsservice_shift_create_dto_DAYOFTHEWEEK_NULL,
        schedule_id && !cJSON_IsNull(schedule_id) ? strdup(schedule_id->valuestring) : NULL,
        parent_time_interval_id && !cJSON_IsNull(parent_time_interval_id) ? strdup(parent_time_interval_id->valuestring) : NULL,
        strdup(employee_profile_id->valuestring)
        );

    return shift_create_dto_local_var;
end:
    return NULL;

}
