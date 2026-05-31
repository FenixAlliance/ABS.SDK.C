#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shift_dto.h"


char* shift_dto_repetition_criteria_ToString(hrmsservice_shift_dto_REPETITIONCRITERIA_e repetition_criteria) {
    char* repetition_criteriaArray[] =  { "NULL", "NotRepeat", "WorkWeek", "Day", "Month", "Year" };
    return repetition_criteriaArray[repetition_criteria];
}

hrmsservice_shift_dto_REPETITIONCRITERIA_e shift_dto_repetition_criteria_FromString(char* repetition_criteria){
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
char* shift_dto_day_of_the_week_ToString(hrmsservice_shift_dto_DAYOFTHEWEEK_e day_of_the_week) {
    char* day_of_the_weekArray[] =  { "NULL", "All", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return day_of_the_weekArray[day_of_the_week];
}

hrmsservice_shift_dto_DAYOFTHEWEEK_e shift_dto_day_of_the_week_FromString(char* day_of_the_week){
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

shift_dto_t *shift_dto_create(
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
    hrmsservice_shift_dto_REPETITIONCRITERIA_e repetition_criteria,
    char *recurrence_start,
    char *recurrence_end,
    hrmsservice_shift_dto_DAYOFTHEWEEK_e day_of_the_week,
    char *schedule_id,
    char *parent_time_interval_id,
    char *tenant_id,
    char *employee_profile_id
    ) {
    shift_dto_t *shift_dto_local_var = malloc(sizeof(shift_dto_t));
    if (!shift_dto_local_var) {
        return NULL;
    }
    shift_dto_local_var->id = id;
    shift_dto_local_var->timestamp = timestamp;
    shift_dto_local_var->title = title;
    shift_dto_local_var->description = description;
    shift_dto_local_var->start = start;
    shift_dto_local_var->end = end;
    shift_dto_local_var->is_break = is_break;
    shift_dto_local_var->occust_on_monday = occust_on_monday;
    shift_dto_local_var->occust_on_tuesday = occust_on_tuesday;
    shift_dto_local_var->occust_on_wednesday = occust_on_wednesday;
    shift_dto_local_var->occust_on_thursday = occust_on_thursday;
    shift_dto_local_var->occust_on_friday = occust_on_friday;
    shift_dto_local_var->occust_on_saturday = occust_on_saturday;
    shift_dto_local_var->occust_on_sunday = occust_on_sunday;
    shift_dto_local_var->repeat_every = repeat_every;
    shift_dto_local_var->repetition_criteria = repetition_criteria;
    shift_dto_local_var->recurrence_start = recurrence_start;
    shift_dto_local_var->recurrence_end = recurrence_end;
    shift_dto_local_var->day_of_the_week = day_of_the_week;
    shift_dto_local_var->schedule_id = schedule_id;
    shift_dto_local_var->parent_time_interval_id = parent_time_interval_id;
    shift_dto_local_var->tenant_id = tenant_id;
    shift_dto_local_var->employee_profile_id = employee_profile_id;

    return shift_dto_local_var;
}


void shift_dto_free(shift_dto_t *shift_dto) {
    if(NULL == shift_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shift_dto->id) {
        free(shift_dto->id);
        shift_dto->id = NULL;
    }
    if (shift_dto->timestamp) {
        free(shift_dto->timestamp);
        shift_dto->timestamp = NULL;
    }
    if (shift_dto->title) {
        free(shift_dto->title);
        shift_dto->title = NULL;
    }
    if (shift_dto->description) {
        free(shift_dto->description);
        shift_dto->description = NULL;
    }
    if (shift_dto->start) {
        free(shift_dto->start);
        shift_dto->start = NULL;
    }
    if (shift_dto->end) {
        free(shift_dto->end);
        shift_dto->end = NULL;
    }
    if (shift_dto->recurrence_start) {
        free(shift_dto->recurrence_start);
        shift_dto->recurrence_start = NULL;
    }
    if (shift_dto->recurrence_end) {
        free(shift_dto->recurrence_end);
        shift_dto->recurrence_end = NULL;
    }
    if (shift_dto->schedule_id) {
        free(shift_dto->schedule_id);
        shift_dto->schedule_id = NULL;
    }
    if (shift_dto->parent_time_interval_id) {
        free(shift_dto->parent_time_interval_id);
        shift_dto->parent_time_interval_id = NULL;
    }
    if (shift_dto->tenant_id) {
        free(shift_dto->tenant_id);
        shift_dto->tenant_id = NULL;
    }
    if (shift_dto->employee_profile_id) {
        free(shift_dto->employee_profile_id);
        shift_dto->employee_profile_id = NULL;
    }
    free(shift_dto);
}

cJSON *shift_dto_convertToJSON(shift_dto_t *shift_dto) {
    cJSON *item = cJSON_CreateObject();

    // shift_dto->id
    if(shift_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shift_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto->timestamp
    if(shift_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shift_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_dto->title
    if(shift_dto->title) {
    if(cJSON_AddStringToObject(item, "title", shift_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto->description
    if(shift_dto->description) {
    if(cJSON_AddStringToObject(item, "description", shift_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto->start
    if(shift_dto->start) {
    if(cJSON_AddStringToObject(item, "start", shift_dto->start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_dto->end
    if(shift_dto->end) {
    if(cJSON_AddStringToObject(item, "end", shift_dto->end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_dto->is_break
    if(shift_dto->is_break) {
    if(cJSON_AddBoolToObject(item, "isBreak", shift_dto->is_break) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_monday
    if(shift_dto->occust_on_monday) {
    if(cJSON_AddBoolToObject(item, "occustOnMonday", shift_dto->occust_on_monday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_tuesday
    if(shift_dto->occust_on_tuesday) {
    if(cJSON_AddBoolToObject(item, "occustOnTuesday", shift_dto->occust_on_tuesday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_wednesday
    if(shift_dto->occust_on_wednesday) {
    if(cJSON_AddBoolToObject(item, "occustOnWednesday", shift_dto->occust_on_wednesday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_thursday
    if(shift_dto->occust_on_thursday) {
    if(cJSON_AddBoolToObject(item, "occustOnThursday", shift_dto->occust_on_thursday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_friday
    if(shift_dto->occust_on_friday) {
    if(cJSON_AddBoolToObject(item, "occustOnFriday", shift_dto->occust_on_friday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_saturday
    if(shift_dto->occust_on_saturday) {
    if(cJSON_AddBoolToObject(item, "occustOnSaturday", shift_dto->occust_on_saturday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->occust_on_sunday
    if(shift_dto->occust_on_sunday) {
    if(cJSON_AddBoolToObject(item, "occustOnSunday", shift_dto->occust_on_sunday) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto->repeat_every
    if(shift_dto->repeat_every) {
    if(cJSON_AddNumberToObject(item, "repeatEvery", shift_dto->repeat_every) == NULL) {
    goto fail; //Numeric
    }
    }


    // shift_dto->repetition_criteria
    if(shift_dto->repetition_criteria != hrmsservice_shift_dto_REPETITIONCRITERIA_NULL) {
    if(cJSON_AddStringToObject(item, "repetitionCriteria", repetition_criteriashift_dto_ToString(shift_dto->repetition_criteria)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // shift_dto->recurrence_start
    if(shift_dto->recurrence_start) {
    if(cJSON_AddStringToObject(item, "recurrenceStart", shift_dto->recurrence_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_dto->recurrence_end
    if(shift_dto->recurrence_end) {
    if(cJSON_AddStringToObject(item, "recurrenceEnd", shift_dto->recurrence_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_dto->day_of_the_week
    if(shift_dto->day_of_the_week != hrmsservice_shift_dto_DAYOFTHEWEEK_NULL) {
    if(cJSON_AddStringToObject(item, "dayOfTheWeek", day_of_the_weekshift_dto_ToString(shift_dto->day_of_the_week)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // shift_dto->schedule_id
    if(shift_dto->schedule_id) {
    if(cJSON_AddStringToObject(item, "scheduleId", shift_dto->schedule_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto->parent_time_interval_id
    if(shift_dto->parent_time_interval_id) {
    if(cJSON_AddStringToObject(item, "parentTimeIntervalId", shift_dto->parent_time_interval_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto->tenant_id
    if(shift_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", shift_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto->employee_profile_id
    if(shift_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", shift_dto->employee_profile_id) == NULL) {
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

shift_dto_t *shift_dto_parseFromJSON(cJSON *shift_dtoJSON){

    shift_dto_t *shift_dto_local_var = NULL;

    // shift_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shift_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shift_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // shift_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // shift_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "start");
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }
    }

    // shift_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "end");
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }
    }

    // shift_dto->is_break
    cJSON *is_break = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "isBreak");
    if (is_break) { 
    if(!cJSON_IsBool(is_break))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_monday
    cJSON *occust_on_monday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnMonday");
    if (occust_on_monday) { 
    if(!cJSON_IsBool(occust_on_monday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_tuesday
    cJSON *occust_on_tuesday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnTuesday");
    if (occust_on_tuesday) { 
    if(!cJSON_IsBool(occust_on_tuesday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_wednesday
    cJSON *occust_on_wednesday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnWednesday");
    if (occust_on_wednesday) { 
    if(!cJSON_IsBool(occust_on_wednesday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_thursday
    cJSON *occust_on_thursday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnThursday");
    if (occust_on_thursday) { 
    if(!cJSON_IsBool(occust_on_thursday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_friday
    cJSON *occust_on_friday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnFriday");
    if (occust_on_friday) { 
    if(!cJSON_IsBool(occust_on_friday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_saturday
    cJSON *occust_on_saturday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnSaturday");
    if (occust_on_saturday) { 
    if(!cJSON_IsBool(occust_on_saturday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->occust_on_sunday
    cJSON *occust_on_sunday = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "occustOnSunday");
    if (occust_on_sunday) { 
    if(!cJSON_IsBool(occust_on_sunday))
    {
    goto end; //Bool
    }
    }

    // shift_dto->repeat_every
    cJSON *repeat_every = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "repeatEvery");
    if (repeat_every) { 
    if(!cJSON_IsNumber(repeat_every))
    {
    goto end; //Numeric
    }
    }

    // shift_dto->repetition_criteria
    cJSON *repetition_criteria = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "repetitionCriteria");
    hrmsservice_shift_dto_REPETITIONCRITERIA_e repetition_criteriaVariable;
    if (repetition_criteria) { 
    if(!cJSON_IsString(repetition_criteria))
    {
    goto end; //Enum
    }
    repetition_criteriaVariable = shift_dto_repetition_criteria_FromString(repetition_criteria->valuestring);
    }

    // shift_dto->recurrence_start
    cJSON *recurrence_start = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "recurrenceStart");
    if (recurrence_start) { 
    if(!cJSON_IsString(recurrence_start) && !cJSON_IsNull(recurrence_start))
    {
    goto end; //DateTime
    }
    }

    // shift_dto->recurrence_end
    cJSON *recurrence_end = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "recurrenceEnd");
    if (recurrence_end) { 
    if(!cJSON_IsString(recurrence_end) && !cJSON_IsNull(recurrence_end))
    {
    goto end; //DateTime
    }
    }

    // shift_dto->day_of_the_week
    cJSON *day_of_the_week = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "dayOfTheWeek");
    hrmsservice_shift_dto_DAYOFTHEWEEK_e day_of_the_weekVariable;
    if (day_of_the_week) { 
    if(!cJSON_IsString(day_of_the_week))
    {
    goto end; //Enum
    }
    day_of_the_weekVariable = shift_dto_day_of_the_week_FromString(day_of_the_week->valuestring);
    }

    // shift_dto->schedule_id
    cJSON *schedule_id = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "scheduleId");
    if (schedule_id) { 
    if(!cJSON_IsString(schedule_id) && !cJSON_IsNull(schedule_id))
    {
    goto end; //String
    }
    }

    // shift_dto->parent_time_interval_id
    cJSON *parent_time_interval_id = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "parentTimeIntervalId");
    if (parent_time_interval_id) { 
    if(!cJSON_IsString(parent_time_interval_id) && !cJSON_IsNull(parent_time_interval_id))
    {
    goto end; //String
    }
    }

    // shift_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // shift_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(shift_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }


    shift_dto_local_var = shift_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        start && !cJSON_IsNull(start) ? strdup(start->valuestring) : NULL,
        end && !cJSON_IsNull(end) ? strdup(end->valuestring) : NULL,
        is_break ? is_break->valueint : 0,
        occust_on_monday ? occust_on_monday->valueint : 0,
        occust_on_tuesday ? occust_on_tuesday->valueint : 0,
        occust_on_wednesday ? occust_on_wednesday->valueint : 0,
        occust_on_thursday ? occust_on_thursday->valueint : 0,
        occust_on_friday ? occust_on_friday->valueint : 0,
        occust_on_saturday ? occust_on_saturday->valueint : 0,
        occust_on_sunday ? occust_on_sunday->valueint : 0,
        repeat_every ? repeat_every->valuedouble : 0,
        repetition_criteria ? repetition_criteriaVariable : hrmsservice_shift_dto_REPETITIONCRITERIA_NULL,
        recurrence_start && !cJSON_IsNull(recurrence_start) ? strdup(recurrence_start->valuestring) : NULL,
        recurrence_end && !cJSON_IsNull(recurrence_end) ? strdup(recurrence_end->valuestring) : NULL,
        day_of_the_week ? day_of_the_weekVariable : hrmsservice_shift_dto_DAYOFTHEWEEK_NULL,
        schedule_id && !cJSON_IsNull(schedule_id) ? strdup(schedule_id->valuestring) : NULL,
        parent_time_interval_id && !cJSON_IsNull(parent_time_interval_id) ? strdup(parent_time_interval_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL
        );

    return shift_dto_local_var;
end:
    return NULL;

}
