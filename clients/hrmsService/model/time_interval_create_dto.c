#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "time_interval_create_dto.h"



time_interval_create_dto_t *time_interval_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int is_break,
    int occust_on_monday,
    int occust_on_tuesday,
    int occust_on_wednesday,
    int occust_on_thursday,
    int occust_on_friday,
    int occust_on_saturday,
    int occust_on_sunday,
    char *start,
    char *end,
    int repeat_every,
    char *schedule_id,
    char *parent_time_interval_id
    ) {
    time_interval_create_dto_t *time_interval_create_dto_local_var = malloc(sizeof(time_interval_create_dto_t));
    if (!time_interval_create_dto_local_var) {
        return NULL;
    }
    time_interval_create_dto_local_var->id = id;
    time_interval_create_dto_local_var->timestamp = timestamp;
    time_interval_create_dto_local_var->title = title;
    time_interval_create_dto_local_var->description = description;
    time_interval_create_dto_local_var->is_break = is_break;
    time_interval_create_dto_local_var->occust_on_monday = occust_on_monday;
    time_interval_create_dto_local_var->occust_on_tuesday = occust_on_tuesday;
    time_interval_create_dto_local_var->occust_on_wednesday = occust_on_wednesday;
    time_interval_create_dto_local_var->occust_on_thursday = occust_on_thursday;
    time_interval_create_dto_local_var->occust_on_friday = occust_on_friday;
    time_interval_create_dto_local_var->occust_on_saturday = occust_on_saturday;
    time_interval_create_dto_local_var->occust_on_sunday = occust_on_sunday;
    time_interval_create_dto_local_var->start = start;
    time_interval_create_dto_local_var->end = end;
    time_interval_create_dto_local_var->repeat_every = repeat_every;
    time_interval_create_dto_local_var->schedule_id = schedule_id;
    time_interval_create_dto_local_var->parent_time_interval_id = parent_time_interval_id;

    return time_interval_create_dto_local_var;
}


void time_interval_create_dto_free(time_interval_create_dto_t *time_interval_create_dto) {
    if(NULL == time_interval_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (time_interval_create_dto->id) {
        free(time_interval_create_dto->id);
        time_interval_create_dto->id = NULL;
    }
    if (time_interval_create_dto->timestamp) {
        free(time_interval_create_dto->timestamp);
        time_interval_create_dto->timestamp = NULL;
    }
    if (time_interval_create_dto->title) {
        free(time_interval_create_dto->title);
        time_interval_create_dto->title = NULL;
    }
    if (time_interval_create_dto->description) {
        free(time_interval_create_dto->description);
        time_interval_create_dto->description = NULL;
    }
    if (time_interval_create_dto->start) {
        free(time_interval_create_dto->start);
        time_interval_create_dto->start = NULL;
    }
    if (time_interval_create_dto->end) {
        free(time_interval_create_dto->end);
        time_interval_create_dto->end = NULL;
    }
    if (time_interval_create_dto->schedule_id) {
        free(time_interval_create_dto->schedule_id);
        time_interval_create_dto->schedule_id = NULL;
    }
    if (time_interval_create_dto->parent_time_interval_id) {
        free(time_interval_create_dto->parent_time_interval_id);
        time_interval_create_dto->parent_time_interval_id = NULL;
    }
    free(time_interval_create_dto);
}

cJSON *time_interval_create_dto_convertToJSON(time_interval_create_dto_t *time_interval_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // time_interval_create_dto->id
    if(time_interval_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", time_interval_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_create_dto->timestamp
    if(time_interval_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", time_interval_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // time_interval_create_dto->title
    if (!time_interval_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", time_interval_create_dto->title) == NULL) {
    goto fail; //String
    }


    // time_interval_create_dto->description
    if(time_interval_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", time_interval_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // time_interval_create_dto->is_break
    if(time_interval_create_dto->is_break) {
    if(cJSON_AddBoolToObject(item, "isBreak", time_interval_create_dto->is_break) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_monday
    if(time_interval_create_dto->occust_on_monday) {
    if(cJSON_AddBoolToObject(item, "occustOnMonday", time_interval_create_dto->occust_on_monday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_tuesday
    if(time_interval_create_dto->occust_on_tuesday) {
    if(cJSON_AddBoolToObject(item, "occustOnTuesday", time_interval_create_dto->occust_on_tuesday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_wednesday
    if(time_interval_create_dto->occust_on_wednesday) {
    if(cJSON_AddBoolToObject(item, "occustOnWednesday", time_interval_create_dto->occust_on_wednesday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_thursday
    if(time_interval_create_dto->occust_on_thursday) {
    if(cJSON_AddBoolToObject(item, "occustOnThursday", time_interval_create_dto->occust_on_thursday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_friday
    if(time_interval_create_dto->occust_on_friday) {
    if(cJSON_AddBoolToObject(item, "occustOnFriday", time_interval_create_dto->occust_on_friday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_saturday
    if(time_interval_create_dto->occust_on_saturday) {
    if(cJSON_AddBoolToObject(item, "occustOnSaturday", time_interval_create_dto->occust_on_saturday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->occust_on_sunday
    if(time_interval_create_dto->occust_on_sunday) {
    if(cJSON_AddBoolToObject(item, "occustOnSunday", time_interval_create_dto->occust_on_sunday) == NULL) {
    goto fail; //Bool
    }
    }


    // time_interval_create_dto->start
    if(time_interval_create_dto->start) {
    if(cJSON_AddStringToObject(item, "start", time_interval_create_dto->start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // time_interval_create_dto->end
    if(time_interval_create_dto->end) {
    if(cJSON_AddStringToObject(item, "end", time_interval_create_dto->end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // time_interval_create_dto->repeat_every
    if(time_interval_create_dto->repeat_every) {
    if(cJSON_AddNumberToObject(item, "repeatEvery", time_interval_create_dto->repeat_every) == NULL) {
    goto fail; //Numeric
    }
    }


    // time_interval_create_dto->schedule_id
    if (!time_interval_create_dto->schedule_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "scheduleId", time_interval_create_dto->schedule_id) == NULL) {
    goto fail; //String
    }


    // time_interval_create_dto->parent_time_interval_id
    if(time_interval_create_dto->parent_time_interval_id) {
    if(cJSON_AddStringToObject(item, "parentTimeIntervalId", time_interval_create_dto->parent_time_interval_id) == NULL) {
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

time_interval_create_dto_t *time_interval_create_dto_parseFromJSON(cJSON *time_interval_create_dtoJSON){

    time_interval_create_dto_t *time_interval_create_dto_local_var = NULL;

    // time_interval_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // time_interval_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // time_interval_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // time_interval_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // time_interval_create_dto->is_break
    cJSON *is_break = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "isBreak");
    if (is_break) { 
    if(!cJSON_IsBool(is_break))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_monday
    cJSON *occust_on_monday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnMonday");
    if (occust_on_monday) { 
    if(!cJSON_IsBool(occust_on_monday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_tuesday
    cJSON *occust_on_tuesday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnTuesday");
    if (occust_on_tuesday) { 
    if(!cJSON_IsBool(occust_on_tuesday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_wednesday
    cJSON *occust_on_wednesday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnWednesday");
    if (occust_on_wednesday) { 
    if(!cJSON_IsBool(occust_on_wednesday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_thursday
    cJSON *occust_on_thursday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnThursday");
    if (occust_on_thursday) { 
    if(!cJSON_IsBool(occust_on_thursday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_friday
    cJSON *occust_on_friday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnFriday");
    if (occust_on_friday) { 
    if(!cJSON_IsBool(occust_on_friday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_saturday
    cJSON *occust_on_saturday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnSaturday");
    if (occust_on_saturday) { 
    if(!cJSON_IsBool(occust_on_saturday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->occust_on_sunday
    cJSON *occust_on_sunday = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "occustOnSunday");
    if (occust_on_sunday) { 
    if(!cJSON_IsBool(occust_on_sunday))
    {
    goto end; //Bool
    }
    }

    // time_interval_create_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "start");
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }
    }

    // time_interval_create_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "end");
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }
    }

    // time_interval_create_dto->repeat_every
    cJSON *repeat_every = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "repeatEvery");
    if (repeat_every) { 
    if(!cJSON_IsNumber(repeat_every))
    {
    goto end; //Numeric
    }
    }

    // time_interval_create_dto->schedule_id
    cJSON *schedule_id = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "scheduleId");
    if (!schedule_id) {
        goto end;
    }

    
    if(!cJSON_IsString(schedule_id))
    {
    goto end; //String
    }

    // time_interval_create_dto->parent_time_interval_id
    cJSON *parent_time_interval_id = cJSON_GetObjectItemCaseSensitive(time_interval_create_dtoJSON, "parentTimeIntervalId");
    if (parent_time_interval_id) { 
    if(!cJSON_IsString(parent_time_interval_id) && !cJSON_IsNull(parent_time_interval_id))
    {
    goto end; //String
    }
    }


    time_interval_create_dto_local_var = time_interval_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        is_break ? is_break->valueint : 0,
        occust_on_monday ? occust_on_monday->valueint : 0,
        occust_on_tuesday ? occust_on_tuesday->valueint : 0,
        occust_on_wednesday ? occust_on_wednesday->valueint : 0,
        occust_on_thursday ? occust_on_thursday->valueint : 0,
        occust_on_friday ? occust_on_friday->valueint : 0,
        occust_on_saturday ? occust_on_saturday->valueint : 0,
        occust_on_sunday ? occust_on_sunday->valueint : 0,
        start && !cJSON_IsNull(start) ? strdup(start->valuestring) : NULL,
        end && !cJSON_IsNull(end) ? strdup(end->valuestring) : NULL,
        repeat_every ? repeat_every->valuedouble : 0,
        strdup(schedule_id->valuestring),
        parent_time_interval_id && !cJSON_IsNull(parent_time_interval_id) ? strdup(parent_time_interval_id->valuestring) : NULL
        );

    return time_interval_create_dto_local_var;
end:
    return NULL;

}
