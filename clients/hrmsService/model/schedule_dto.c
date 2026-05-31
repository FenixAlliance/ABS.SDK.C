#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "schedule_dto.h"



schedule_dto_t *schedule_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *name,
    char *description,
    int disabled,
    int sunday,
    int monday,
    int tuesday,
    int wednesday,
    int thursday,
    int friday,
    int saturday,
    int unique_interval,
    int is24x7_interval,
    char *start,
    char *end,
    char *timezone_id,
    char *fiscal_year_id,
    char *holiday_schedule_id
    ) {
    schedule_dto_t *schedule_dto_local_var = malloc(sizeof(schedule_dto_t));
    if (!schedule_dto_local_var) {
        return NULL;
    }
    schedule_dto_local_var->id = id;
    schedule_dto_local_var->timestamp = timestamp;
    schedule_dto_local_var->tenant_id = tenant_id;
    schedule_dto_local_var->name = name;
    schedule_dto_local_var->description = description;
    schedule_dto_local_var->disabled = disabled;
    schedule_dto_local_var->sunday = sunday;
    schedule_dto_local_var->monday = monday;
    schedule_dto_local_var->tuesday = tuesday;
    schedule_dto_local_var->wednesday = wednesday;
    schedule_dto_local_var->thursday = thursday;
    schedule_dto_local_var->friday = friday;
    schedule_dto_local_var->saturday = saturday;
    schedule_dto_local_var->unique_interval = unique_interval;
    schedule_dto_local_var->is24x7_interval = is24x7_interval;
    schedule_dto_local_var->start = start;
    schedule_dto_local_var->end = end;
    schedule_dto_local_var->timezone_id = timezone_id;
    schedule_dto_local_var->fiscal_year_id = fiscal_year_id;
    schedule_dto_local_var->holiday_schedule_id = holiday_schedule_id;

    return schedule_dto_local_var;
}


void schedule_dto_free(schedule_dto_t *schedule_dto) {
    if(NULL == schedule_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (schedule_dto->id) {
        free(schedule_dto->id);
        schedule_dto->id = NULL;
    }
    if (schedule_dto->timestamp) {
        free(schedule_dto->timestamp);
        schedule_dto->timestamp = NULL;
    }
    if (schedule_dto->tenant_id) {
        free(schedule_dto->tenant_id);
        schedule_dto->tenant_id = NULL;
    }
    if (schedule_dto->name) {
        free(schedule_dto->name);
        schedule_dto->name = NULL;
    }
    if (schedule_dto->description) {
        free(schedule_dto->description);
        schedule_dto->description = NULL;
    }
    if (schedule_dto->start) {
        free(schedule_dto->start);
        schedule_dto->start = NULL;
    }
    if (schedule_dto->end) {
        free(schedule_dto->end);
        schedule_dto->end = NULL;
    }
    if (schedule_dto->timezone_id) {
        free(schedule_dto->timezone_id);
        schedule_dto->timezone_id = NULL;
    }
    if (schedule_dto->fiscal_year_id) {
        free(schedule_dto->fiscal_year_id);
        schedule_dto->fiscal_year_id = NULL;
    }
    if (schedule_dto->holiday_schedule_id) {
        free(schedule_dto->holiday_schedule_id);
        schedule_dto->holiday_schedule_id = NULL;
    }
    free(schedule_dto);
}

cJSON *schedule_dto_convertToJSON(schedule_dto_t *schedule_dto) {
    cJSON *item = cJSON_CreateObject();

    // schedule_dto->id
    if(schedule_dto->id) {
    if(cJSON_AddStringToObject(item, "id", schedule_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto->timestamp
    if(schedule_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", schedule_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // schedule_dto->tenant_id
    if(schedule_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", schedule_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto->name
    if(schedule_dto->name) {
    if(cJSON_AddStringToObject(item, "name", schedule_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto->description
    if(schedule_dto->description) {
    if(cJSON_AddStringToObject(item, "description", schedule_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto->disabled
    if(schedule_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", schedule_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->sunday
    if(schedule_dto->sunday) {
    if(cJSON_AddBoolToObject(item, "sunday", schedule_dto->sunday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->monday
    if(schedule_dto->monday) {
    if(cJSON_AddBoolToObject(item, "monday", schedule_dto->monday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->tuesday
    if(schedule_dto->tuesday) {
    if(cJSON_AddBoolToObject(item, "tuesday", schedule_dto->tuesday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->wednesday
    if(schedule_dto->wednesday) {
    if(cJSON_AddBoolToObject(item, "wednesday", schedule_dto->wednesday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->thursday
    if(schedule_dto->thursday) {
    if(cJSON_AddBoolToObject(item, "thursday", schedule_dto->thursday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->friday
    if(schedule_dto->friday) {
    if(cJSON_AddBoolToObject(item, "friday", schedule_dto->friday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->saturday
    if(schedule_dto->saturday) {
    if(cJSON_AddBoolToObject(item, "saturday", schedule_dto->saturday) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->unique_interval
    if(schedule_dto->unique_interval) {
    if(cJSON_AddBoolToObject(item, "uniqueInterval", schedule_dto->unique_interval) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->is24x7_interval
    if(schedule_dto->is24x7_interval) {
    if(cJSON_AddBoolToObject(item, "is24x7Interval", schedule_dto->is24x7_interval) == NULL) {
    goto fail; //Bool
    }
    }


    // schedule_dto->start
    if(schedule_dto->start) {
    if(cJSON_AddStringToObject(item, "start", schedule_dto->start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // schedule_dto->end
    if(schedule_dto->end) {
    if(cJSON_AddStringToObject(item, "end", schedule_dto->end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // schedule_dto->timezone_id
    if(schedule_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", schedule_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto->fiscal_year_id
    if(schedule_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", schedule_dto->fiscal_year_id) == NULL) {
    goto fail; //String
    }
    }


    // schedule_dto->holiday_schedule_id
    if(schedule_dto->holiday_schedule_id) {
    if(cJSON_AddStringToObject(item, "holidayScheduleId", schedule_dto->holiday_schedule_id) == NULL) {
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

schedule_dto_t *schedule_dto_parseFromJSON(cJSON *schedule_dtoJSON){

    schedule_dto_t *schedule_dto_local_var = NULL;

    // schedule_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // schedule_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // schedule_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // schedule_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // schedule_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // schedule_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->sunday
    cJSON *sunday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "sunday");
    if (sunday) { 
    if(!cJSON_IsBool(sunday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->monday
    cJSON *monday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "monday");
    if (monday) { 
    if(!cJSON_IsBool(monday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->tuesday
    cJSON *tuesday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "tuesday");
    if (tuesday) { 
    if(!cJSON_IsBool(tuesday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->wednesday
    cJSON *wednesday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "wednesday");
    if (wednesday) { 
    if(!cJSON_IsBool(wednesday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->thursday
    cJSON *thursday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "thursday");
    if (thursday) { 
    if(!cJSON_IsBool(thursday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->friday
    cJSON *friday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "friday");
    if (friday) { 
    if(!cJSON_IsBool(friday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->saturday
    cJSON *saturday = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "saturday");
    if (saturday) { 
    if(!cJSON_IsBool(saturday))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->unique_interval
    cJSON *unique_interval = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "uniqueInterval");
    if (unique_interval) { 
    if(!cJSON_IsBool(unique_interval))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->is24x7_interval
    cJSON *is24x7_interval = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "is24x7Interval");
    if (is24x7_interval) { 
    if(!cJSON_IsBool(is24x7_interval))
    {
    goto end; //Bool
    }
    }

    // schedule_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "start");
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }
    }

    // schedule_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "end");
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }
    }

    // schedule_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // schedule_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }

    // schedule_dto->holiday_schedule_id
    cJSON *holiday_schedule_id = cJSON_GetObjectItemCaseSensitive(schedule_dtoJSON, "holidayScheduleId");
    if (holiday_schedule_id) { 
    if(!cJSON_IsString(holiday_schedule_id) && !cJSON_IsNull(holiday_schedule_id))
    {
    goto end; //String
    }
    }


    schedule_dto_local_var = schedule_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        disabled ? disabled->valueint : 0,
        sunday ? sunday->valueint : 0,
        monday ? monday->valueint : 0,
        tuesday ? tuesday->valueint : 0,
        wednesday ? wednesday->valueint : 0,
        thursday ? thursday->valueint : 0,
        friday ? friday->valueint : 0,
        saturday ? saturday->valueint : 0,
        unique_interval ? unique_interval->valueint : 0,
        is24x7_interval ? is24x7_interval->valueint : 0,
        start && !cJSON_IsNull(start) ? strdup(start->valuestring) : NULL,
        end && !cJSON_IsNull(end) ? strdup(end->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL,
        holiday_schedule_id && !cJSON_IsNull(holiday_schedule_id) ? strdup(holiday_schedule_id->valuestring) : NULL
        );

    return schedule_dto_local_var;
end:
    return NULL;

}
