#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_create_dto.h"



course_create_dto_t *course_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *sku,
    char *summary,
    char *code,
    char *version,
    char *course_category_id,
    char *instructor_profile_id,
    char *currency_id,
    double regular_price,
    int max_course_enrollments,
    int total_effort_in_weeks,
    int total_hours_per_week,
    int total_effort_in_hours,
    char *start_date_time,
    char *end_date_time,
    char *inscriptions_start_date_time,
    char *inscriptions_end_date_time
    ) {
    course_create_dto_t *course_create_dto_local_var = malloc(sizeof(course_create_dto_t));
    if (!course_create_dto_local_var) {
        return NULL;
    }
    course_create_dto_local_var->id = id;
    course_create_dto_local_var->timestamp = timestamp;
    course_create_dto_local_var->title = title;
    course_create_dto_local_var->description = description;
    course_create_dto_local_var->sku = sku;
    course_create_dto_local_var->summary = summary;
    course_create_dto_local_var->code = code;
    course_create_dto_local_var->version = version;
    course_create_dto_local_var->course_category_id = course_category_id;
    course_create_dto_local_var->instructor_profile_id = instructor_profile_id;
    course_create_dto_local_var->currency_id = currency_id;
    course_create_dto_local_var->regular_price = regular_price;
    course_create_dto_local_var->max_course_enrollments = max_course_enrollments;
    course_create_dto_local_var->total_effort_in_weeks = total_effort_in_weeks;
    course_create_dto_local_var->total_hours_per_week = total_hours_per_week;
    course_create_dto_local_var->total_effort_in_hours = total_effort_in_hours;
    course_create_dto_local_var->start_date_time = start_date_time;
    course_create_dto_local_var->end_date_time = end_date_time;
    course_create_dto_local_var->inscriptions_start_date_time = inscriptions_start_date_time;
    course_create_dto_local_var->inscriptions_end_date_time = inscriptions_end_date_time;

    return course_create_dto_local_var;
}


void course_create_dto_free(course_create_dto_t *course_create_dto) {
    if(NULL == course_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_create_dto->id) {
        free(course_create_dto->id);
        course_create_dto->id = NULL;
    }
    if (course_create_dto->timestamp) {
        free(course_create_dto->timestamp);
        course_create_dto->timestamp = NULL;
    }
    if (course_create_dto->title) {
        free(course_create_dto->title);
        course_create_dto->title = NULL;
    }
    if (course_create_dto->description) {
        free(course_create_dto->description);
        course_create_dto->description = NULL;
    }
    if (course_create_dto->sku) {
        free(course_create_dto->sku);
        course_create_dto->sku = NULL;
    }
    if (course_create_dto->summary) {
        free(course_create_dto->summary);
        course_create_dto->summary = NULL;
    }
    if (course_create_dto->code) {
        free(course_create_dto->code);
        course_create_dto->code = NULL;
    }
    if (course_create_dto->version) {
        free(course_create_dto->version);
        course_create_dto->version = NULL;
    }
    if (course_create_dto->course_category_id) {
        free(course_create_dto->course_category_id);
        course_create_dto->course_category_id = NULL;
    }
    if (course_create_dto->instructor_profile_id) {
        free(course_create_dto->instructor_profile_id);
        course_create_dto->instructor_profile_id = NULL;
    }
    if (course_create_dto->currency_id) {
        free(course_create_dto->currency_id);
        course_create_dto->currency_id = NULL;
    }
    if (course_create_dto->start_date_time) {
        free(course_create_dto->start_date_time);
        course_create_dto->start_date_time = NULL;
    }
    if (course_create_dto->end_date_time) {
        free(course_create_dto->end_date_time);
        course_create_dto->end_date_time = NULL;
    }
    if (course_create_dto->inscriptions_start_date_time) {
        free(course_create_dto->inscriptions_start_date_time);
        course_create_dto->inscriptions_start_date_time = NULL;
    }
    if (course_create_dto->inscriptions_end_date_time) {
        free(course_create_dto->inscriptions_end_date_time);
        course_create_dto->inscriptions_end_date_time = NULL;
    }
    free(course_create_dto);
}

cJSON *course_create_dto_convertToJSON(course_create_dto_t *course_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_create_dto->id
    if(course_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->timestamp
    if(course_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_create_dto->title
    if (!course_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_create_dto->description
    if (!course_create_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", course_create_dto->description) == NULL) {
    goto fail; //String
    }


    // course_create_dto->sku
    if(course_create_dto->sku) {
    if(cJSON_AddStringToObject(item, "sku", course_create_dto->sku) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->summary
    if(course_create_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", course_create_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->code
    if(course_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", course_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->version
    if(course_create_dto->version) {
    if(cJSON_AddStringToObject(item, "version", course_create_dto->version) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->course_category_id
    if(course_create_dto->course_category_id) {
    if(cJSON_AddStringToObject(item, "courseCategoryId", course_create_dto->course_category_id) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->instructor_profile_id
    if(course_create_dto->instructor_profile_id) {
    if(cJSON_AddStringToObject(item, "instructorProfileId", course_create_dto->instructor_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->currency_id
    if(course_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", course_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->regular_price
    if(course_create_dto->regular_price) {
    if(cJSON_AddNumberToObject(item, "regularPrice", course_create_dto->regular_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_create_dto->max_course_enrollments
    if(course_create_dto->max_course_enrollments) {
    if(cJSON_AddNumberToObject(item, "maxCourseEnrollments", course_create_dto->max_course_enrollments) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_create_dto->total_effort_in_weeks
    if(course_create_dto->total_effort_in_weeks) {
    if(cJSON_AddNumberToObject(item, "totalEffortInWeeks", course_create_dto->total_effort_in_weeks) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_create_dto->total_hours_per_week
    if(course_create_dto->total_hours_per_week) {
    if(cJSON_AddNumberToObject(item, "totalHoursPerWeek", course_create_dto->total_hours_per_week) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_create_dto->total_effort_in_hours
    if(course_create_dto->total_effort_in_hours) {
    if(cJSON_AddNumberToObject(item, "totalEffortInHours", course_create_dto->total_effort_in_hours) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_create_dto->start_date_time
    if(course_create_dto->start_date_time) {
    if(cJSON_AddStringToObject(item, "startDateTime", course_create_dto->start_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_create_dto->end_date_time
    if(course_create_dto->end_date_time) {
    if(cJSON_AddStringToObject(item, "endDateTime", course_create_dto->end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_create_dto->inscriptions_start_date_time
    if(course_create_dto->inscriptions_start_date_time) {
    if(cJSON_AddStringToObject(item, "inscriptionsStartDateTime", course_create_dto->inscriptions_start_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_create_dto->inscriptions_end_date_time
    if(course_create_dto->inscriptions_end_date_time) {
    if(cJSON_AddStringToObject(item, "inscriptionsEndDateTime", course_create_dto->inscriptions_end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_create_dto_t *course_create_dto_parseFromJSON(cJSON *course_create_dtoJSON){

    course_create_dto_t *course_create_dto_local_var = NULL;

    // course_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // course_create_dto->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "sku");
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // course_create_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // course_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // course_create_dto->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // course_create_dto->course_category_id
    cJSON *course_category_id = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "courseCategoryId");
    if (course_category_id) { 
    if(!cJSON_IsString(course_category_id) && !cJSON_IsNull(course_category_id))
    {
    goto end; //String
    }
    }

    // course_create_dto->instructor_profile_id
    cJSON *instructor_profile_id = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "instructorProfileId");
    if (instructor_profile_id) { 
    if(!cJSON_IsString(instructor_profile_id) && !cJSON_IsNull(instructor_profile_id))
    {
    goto end; //String
    }
    }

    // course_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // course_create_dto->regular_price
    cJSON *regular_price = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "regularPrice");
    if (regular_price) { 
    if(!cJSON_IsNumber(regular_price))
    {
    goto end; //Numeric
    }
    }

    // course_create_dto->max_course_enrollments
    cJSON *max_course_enrollments = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "maxCourseEnrollments");
    if (max_course_enrollments) { 
    if(!cJSON_IsNumber(max_course_enrollments))
    {
    goto end; //Numeric
    }
    }

    // course_create_dto->total_effort_in_weeks
    cJSON *total_effort_in_weeks = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "totalEffortInWeeks");
    if (total_effort_in_weeks) { 
    if(!cJSON_IsNumber(total_effort_in_weeks))
    {
    goto end; //Numeric
    }
    }

    // course_create_dto->total_hours_per_week
    cJSON *total_hours_per_week = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "totalHoursPerWeek");
    if (total_hours_per_week) { 
    if(!cJSON_IsNumber(total_hours_per_week))
    {
    goto end; //Numeric
    }
    }

    // course_create_dto->total_effort_in_hours
    cJSON *total_effort_in_hours = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "totalEffortInHours");
    if (total_effort_in_hours) { 
    if(!cJSON_IsNumber(total_effort_in_hours))
    {
    goto end; //Numeric
    }
    }

    // course_create_dto->start_date_time
    cJSON *start_date_time = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "startDateTime");
    if (start_date_time) { 
    if(!cJSON_IsString(start_date_time) && !cJSON_IsNull(start_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_create_dto->end_date_time
    cJSON *end_date_time = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "endDateTime");
    if (end_date_time) { 
    if(!cJSON_IsString(end_date_time) && !cJSON_IsNull(end_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_create_dto->inscriptions_start_date_time
    cJSON *inscriptions_start_date_time = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "inscriptionsStartDateTime");
    if (inscriptions_start_date_time) { 
    if(!cJSON_IsString(inscriptions_start_date_time) && !cJSON_IsNull(inscriptions_start_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_create_dto->inscriptions_end_date_time
    cJSON *inscriptions_end_date_time = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "inscriptionsEndDateTime");
    if (inscriptions_end_date_time) { 
    if(!cJSON_IsString(inscriptions_end_date_time) && !cJSON_IsNull(inscriptions_end_date_time))
    {
    goto end; //DateTime
    }
    }


    course_create_dto_local_var = course_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        strdup(description->valuestring),
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        course_category_id && !cJSON_IsNull(course_category_id) ? strdup(course_category_id->valuestring) : NULL,
        instructor_profile_id && !cJSON_IsNull(instructor_profile_id) ? strdup(instructor_profile_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        regular_price ? regular_price->valuedouble : 0,
        max_course_enrollments ? max_course_enrollments->valuedouble : 0,
        total_effort_in_weeks ? total_effort_in_weeks->valuedouble : 0,
        total_hours_per_week ? total_hours_per_week->valuedouble : 0,
        total_effort_in_hours ? total_effort_in_hours->valuedouble : 0,
        start_date_time && !cJSON_IsNull(start_date_time) ? strdup(start_date_time->valuestring) : NULL,
        end_date_time && !cJSON_IsNull(end_date_time) ? strdup(end_date_time->valuestring) : NULL,
        inscriptions_start_date_time && !cJSON_IsNull(inscriptions_start_date_time) ? strdup(inscriptions_start_date_time->valuestring) : NULL,
        inscriptions_end_date_time && !cJSON_IsNull(inscriptions_end_date_time) ? strdup(inscriptions_end_date_time->valuestring) : NULL
        );

    return course_create_dto_local_var;
end:
    return NULL;

}
