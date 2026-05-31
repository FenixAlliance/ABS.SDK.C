#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_event_update_dto.h"


char* training_program_event_update_dto_repetition_criteria_ToString(hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e repetition_criteria) {
    char* repetition_criteriaArray[] =  { "NULL", "NotRepeat", "WorkWeek", "Day", "Month", "Year" };
    return repetition_criteriaArray[repetition_criteria];
}

hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e training_program_event_update_dto_repetition_criteria_FromString(char* repetition_criteria){
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
char* training_program_event_update_dto_day_of_the_week_ToString(hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e day_of_the_week) {
    char* day_of_the_weekArray[] =  { "NULL", "All", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return day_of_the_weekArray[day_of_the_week];
}

hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e training_program_event_update_dto_day_of_the_week_FromString(char* day_of_the_week){
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
    ) {
    training_program_event_update_dto_t *training_program_event_update_dto_local_var = malloc(sizeof(training_program_event_update_dto_t));
    if (!training_program_event_update_dto_local_var) {
        return NULL;
    }
    training_program_event_update_dto_local_var->title = title;
    training_program_event_update_dto_local_var->description = description;
    training_program_event_update_dto_local_var->start = start;
    training_program_event_update_dto_local_var->end = end;
    training_program_event_update_dto_local_var->is_break = is_break;
    training_program_event_update_dto_local_var->occust_on_monday = occust_on_monday;
    training_program_event_update_dto_local_var->occust_on_tuesday = occust_on_tuesday;
    training_program_event_update_dto_local_var->occust_on_wednesday = occust_on_wednesday;
    training_program_event_update_dto_local_var->occust_on_thursday = occust_on_thursday;
    training_program_event_update_dto_local_var->occust_on_friday = occust_on_friday;
    training_program_event_update_dto_local_var->occust_on_saturday = occust_on_saturday;
    training_program_event_update_dto_local_var->occust_on_sunday = occust_on_sunday;
    training_program_event_update_dto_local_var->repeat_every = repeat_every;
    training_program_event_update_dto_local_var->repetition_criteria = repetition_criteria;
    training_program_event_update_dto_local_var->recurrence_start = recurrence_start;
    training_program_event_update_dto_local_var->recurrence_end = recurrence_end;
    training_program_event_update_dto_local_var->day_of_the_week = day_of_the_week;
    training_program_event_update_dto_local_var->schedule_id = schedule_id;
    training_program_event_update_dto_local_var->parent_time_interval_id = parent_time_interval_id;
    training_program_event_update_dto_local_var->training_program_id = training_program_id;

    return training_program_event_update_dto_local_var;
}


void training_program_event_update_dto_free(training_program_event_update_dto_t *training_program_event_update_dto) {
    if(NULL == training_program_event_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_event_update_dto->title) {
        free(training_program_event_update_dto->title);
        training_program_event_update_dto->title = NULL;
    }
    if (training_program_event_update_dto->description) {
        free(training_program_event_update_dto->description);
        training_program_event_update_dto->description = NULL;
    }
    if (training_program_event_update_dto->start) {
        free(training_program_event_update_dto->start);
        training_program_event_update_dto->start = NULL;
    }
    if (training_program_event_update_dto->end) {
        free(training_program_event_update_dto->end);
        training_program_event_update_dto->end = NULL;
    }
    if (training_program_event_update_dto->recurrence_start) {
        free(training_program_event_update_dto->recurrence_start);
        training_program_event_update_dto->recurrence_start = NULL;
    }
    if (training_program_event_update_dto->recurrence_end) {
        free(training_program_event_update_dto->recurrence_end);
        training_program_event_update_dto->recurrence_end = NULL;
    }
    if (training_program_event_update_dto->schedule_id) {
        free(training_program_event_update_dto->schedule_id);
        training_program_event_update_dto->schedule_id = NULL;
    }
    if (training_program_event_update_dto->parent_time_interval_id) {
        free(training_program_event_update_dto->parent_time_interval_id);
        training_program_event_update_dto->parent_time_interval_id = NULL;
    }
    if (training_program_event_update_dto->training_program_id) {
        free(training_program_event_update_dto->training_program_id);
        training_program_event_update_dto->training_program_id = NULL;
    }
    free(training_program_event_update_dto);
}

cJSON *training_program_event_update_dto_convertToJSON(training_program_event_update_dto_t *training_program_event_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_event_update_dto->title
    if(training_program_event_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", training_program_event_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // training_program_event_update_dto->description
    if(training_program_event_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", training_program_event_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // training_program_event_update_dto->start
    if(training_program_event_update_dto->start) {
    if(cJSON_AddStringToObject(item, "start", training_program_event_update_dto->start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_event_update_dto->end
    if(training_program_event_update_dto->end) {
    if(cJSON_AddStringToObject(item, "end", training_program_event_update_dto->end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_event_update_dto->is_break
    if(training_program_event_update_dto->is_break) {
    if(cJSON_AddBoolToObject(item, "isBreak", training_program_event_update_dto->is_break) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_monday
    if(training_program_event_update_dto->occust_on_monday) {
    if(cJSON_AddBoolToObject(item, "occustOnMonday", training_program_event_update_dto->occust_on_monday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_tuesday
    if(training_program_event_update_dto->occust_on_tuesday) {
    if(cJSON_AddBoolToObject(item, "occustOnTuesday", training_program_event_update_dto->occust_on_tuesday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_wednesday
    if(training_program_event_update_dto->occust_on_wednesday) {
    if(cJSON_AddBoolToObject(item, "occustOnWednesday", training_program_event_update_dto->occust_on_wednesday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_thursday
    if(training_program_event_update_dto->occust_on_thursday) {
    if(cJSON_AddBoolToObject(item, "occustOnThursday", training_program_event_update_dto->occust_on_thursday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_friday
    if(training_program_event_update_dto->occust_on_friday) {
    if(cJSON_AddBoolToObject(item, "occustOnFriday", training_program_event_update_dto->occust_on_friday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_saturday
    if(training_program_event_update_dto->occust_on_saturday) {
    if(cJSON_AddBoolToObject(item, "occustOnSaturday", training_program_event_update_dto->occust_on_saturday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->occust_on_sunday
    if(training_program_event_update_dto->occust_on_sunday) {
    if(cJSON_AddBoolToObject(item, "occustOnSunday", training_program_event_update_dto->occust_on_sunday) == NULL) {
    goto fail; //Bool
    }
    }


    // training_program_event_update_dto->repeat_every
    if(training_program_event_update_dto->repeat_every) {
    if(cJSON_AddNumberToObject(item, "repeatEvery", training_program_event_update_dto->repeat_every) == NULL) {
    goto fail; //Numeric
    }
    }


    // training_program_event_update_dto->repetition_criteria
    if(training_program_event_update_dto->repetition_criteria != hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_NULL) {
    if(cJSON_AddStringToObject(item, "repetitionCriteria", repetition_criteriatraining_program_event_update_dto_ToString(training_program_event_update_dto->repetition_criteria)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // training_program_event_update_dto->recurrence_start
    if(training_program_event_update_dto->recurrence_start) {
    if(cJSON_AddStringToObject(item, "recurrenceStart", training_program_event_update_dto->recurrence_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_event_update_dto->recurrence_end
    if(training_program_event_update_dto->recurrence_end) {
    if(cJSON_AddStringToObject(item, "recurrenceEnd", training_program_event_update_dto->recurrence_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_event_update_dto->day_of_the_week
    if(training_program_event_update_dto->day_of_the_week != hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_NULL) {
    if(cJSON_AddStringToObject(item, "dayOfTheWeek", day_of_the_weektraining_program_event_update_dto_ToString(training_program_event_update_dto->day_of_the_week)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // training_program_event_update_dto->schedule_id
    if(training_program_event_update_dto->schedule_id) {
    if(cJSON_AddStringToObject(item, "scheduleId", training_program_event_update_dto->schedule_id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_event_update_dto->parent_time_interval_id
    if(training_program_event_update_dto->parent_time_interval_id) {
    if(cJSON_AddStringToObject(item, "parentTimeIntervalId", training_program_event_update_dto->parent_time_interval_id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_event_update_dto->training_program_id
    if(training_program_event_update_dto->training_program_id) {
    if(cJSON_AddStringToObject(item, "trainingProgramId", training_program_event_update_dto->training_program_id) == NULL) {
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

training_program_event_update_dto_t *training_program_event_update_dto_parseFromJSON(cJSON *training_program_event_update_dtoJSON){

    training_program_event_update_dto_t *training_program_event_update_dto_local_var = NULL;

    // training_program_event_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // training_program_event_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // training_program_event_update_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "start");
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }
    }

    // training_program_event_update_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "end");
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }
    }

    // training_program_event_update_dto->is_break
    cJSON *is_break = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "isBreak");
    if (is_break) { 
    if(!cJSON_IsBool(is_break))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_monday
    cJSON *occust_on_monday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnMonday");
    if (occust_on_monday) { 
    if(!cJSON_IsBool(occust_on_monday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_tuesday
    cJSON *occust_on_tuesday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnTuesday");
    if (occust_on_tuesday) { 
    if(!cJSON_IsBool(occust_on_tuesday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_wednesday
    cJSON *occust_on_wednesday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnWednesday");
    if (occust_on_wednesday) { 
    if(!cJSON_IsBool(occust_on_wednesday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_thursday
    cJSON *occust_on_thursday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnThursday");
    if (occust_on_thursday) { 
    if(!cJSON_IsBool(occust_on_thursday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_friday
    cJSON *occust_on_friday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnFriday");
    if (occust_on_friday) { 
    if(!cJSON_IsBool(occust_on_friday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_saturday
    cJSON *occust_on_saturday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnSaturday");
    if (occust_on_saturday) { 
    if(!cJSON_IsBool(occust_on_saturday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->occust_on_sunday
    cJSON *occust_on_sunday = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "occustOnSunday");
    if (occust_on_sunday) { 
    if(!cJSON_IsBool(occust_on_sunday))
    {
    goto end; //Bool
    }
    }

    // training_program_event_update_dto->repeat_every
    cJSON *repeat_every = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "repeatEvery");
    if (repeat_every) { 
    if(!cJSON_IsNumber(repeat_every))
    {
    goto end; //Numeric
    }
    }

    // training_program_event_update_dto->repetition_criteria
    cJSON *repetition_criteria = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "repetitionCriteria");
    hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_e repetition_criteriaVariable;
    if (repetition_criteria) { 
    if(!cJSON_IsString(repetition_criteria))
    {
    goto end; //Enum
    }
    repetition_criteriaVariable = training_program_event_update_dto_repetition_criteria_FromString(repetition_criteria->valuestring);
    }

    // training_program_event_update_dto->recurrence_start
    cJSON *recurrence_start = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "recurrenceStart");
    if (recurrence_start) { 
    if(!cJSON_IsString(recurrence_start) && !cJSON_IsNull(recurrence_start))
    {
    goto end; //DateTime
    }
    }

    // training_program_event_update_dto->recurrence_end
    cJSON *recurrence_end = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "recurrenceEnd");
    if (recurrence_end) { 
    if(!cJSON_IsString(recurrence_end) && !cJSON_IsNull(recurrence_end))
    {
    goto end; //DateTime
    }
    }

    // training_program_event_update_dto->day_of_the_week
    cJSON *day_of_the_week = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "dayOfTheWeek");
    hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_e day_of_the_weekVariable;
    if (day_of_the_week) { 
    if(!cJSON_IsString(day_of_the_week))
    {
    goto end; //Enum
    }
    day_of_the_weekVariable = training_program_event_update_dto_day_of_the_week_FromString(day_of_the_week->valuestring);
    }

    // training_program_event_update_dto->schedule_id
    cJSON *schedule_id = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "scheduleId");
    if (schedule_id) { 
    if(!cJSON_IsString(schedule_id) && !cJSON_IsNull(schedule_id))
    {
    goto end; //String
    }
    }

    // training_program_event_update_dto->parent_time_interval_id
    cJSON *parent_time_interval_id = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "parentTimeIntervalId");
    if (parent_time_interval_id) { 
    if(!cJSON_IsString(parent_time_interval_id) && !cJSON_IsNull(parent_time_interval_id))
    {
    goto end; //String
    }
    }

    // training_program_event_update_dto->training_program_id
    cJSON *training_program_id = cJSON_GetObjectItemCaseSensitive(training_program_event_update_dtoJSON, "trainingProgramId");
    if (training_program_id) { 
    if(!cJSON_IsString(training_program_id) && !cJSON_IsNull(training_program_id))
    {
    goto end; //String
    }
    }


    training_program_event_update_dto_local_var = training_program_event_update_dto_create (
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
        repetition_criteria ? repetition_criteriaVariable : hrmsservice_training_program_event_update_dto_REPETITIONCRITERIA_NULL,
        recurrence_start && !cJSON_IsNull(recurrence_start) ? strdup(recurrence_start->valuestring) : NULL,
        recurrence_end && !cJSON_IsNull(recurrence_end) ? strdup(recurrence_end->valuestring) : NULL,
        day_of_the_week ? day_of_the_weekVariable : hrmsservice_training_program_event_update_dto_DAYOFTHEWEEK_NULL,
        schedule_id && !cJSON_IsNull(schedule_id) ? strdup(schedule_id->valuestring) : NULL,
        parent_time_interval_id && !cJSON_IsNull(parent_time_interval_id) ? strdup(parent_time_interval_id->valuestring) : NULL,
        training_program_id && !cJSON_IsNull(training_program_id) ? strdup(training_program_id->valuestring) : NULL
        );

    return training_program_event_update_dto_local_var;
end:
    return NULL;

}
