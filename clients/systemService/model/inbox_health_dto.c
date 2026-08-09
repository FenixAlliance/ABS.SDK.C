#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inbox_health_dto.h"



inbox_health_dto_t *inbox_health_dto_create(
    int enabled,
    int received_count,
    int accepted_count,
    int processing_count,
    int retry_scheduled_count,
    int rejected_count,
    int quarantined_count,
    int dead_letter_count,
    int cancelled_count,
    double oldest_accepted_age_seconds,
    char *last_successful_processing_utc,
    int successful_processing_tracked
    ) {
    inbox_health_dto_t *inbox_health_dto_local_var = malloc(sizeof(inbox_health_dto_t));
    if (!inbox_health_dto_local_var) {
        return NULL;
    }
    inbox_health_dto_local_var->enabled = enabled;
    inbox_health_dto_local_var->received_count = received_count;
    inbox_health_dto_local_var->accepted_count = accepted_count;
    inbox_health_dto_local_var->processing_count = processing_count;
    inbox_health_dto_local_var->retry_scheduled_count = retry_scheduled_count;
    inbox_health_dto_local_var->rejected_count = rejected_count;
    inbox_health_dto_local_var->quarantined_count = quarantined_count;
    inbox_health_dto_local_var->dead_letter_count = dead_letter_count;
    inbox_health_dto_local_var->cancelled_count = cancelled_count;
    inbox_health_dto_local_var->oldest_accepted_age_seconds = oldest_accepted_age_seconds;
    inbox_health_dto_local_var->last_successful_processing_utc = last_successful_processing_utc;
    inbox_health_dto_local_var->successful_processing_tracked = successful_processing_tracked;

    return inbox_health_dto_local_var;
}


void inbox_health_dto_free(inbox_health_dto_t *inbox_health_dto) {
    if(NULL == inbox_health_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (inbox_health_dto->last_successful_processing_utc) {
        free(inbox_health_dto->last_successful_processing_utc);
        inbox_health_dto->last_successful_processing_utc = NULL;
    }
    free(inbox_health_dto);
}

cJSON *inbox_health_dto_convertToJSON(inbox_health_dto_t *inbox_health_dto) {
    cJSON *item = cJSON_CreateObject();

    // inbox_health_dto->enabled
    if(inbox_health_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", inbox_health_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // inbox_health_dto->received_count
    if(inbox_health_dto->received_count) {
    if(cJSON_AddNumberToObject(item, "receivedCount", inbox_health_dto->received_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->accepted_count
    if(inbox_health_dto->accepted_count) {
    if(cJSON_AddNumberToObject(item, "acceptedCount", inbox_health_dto->accepted_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->processing_count
    if(inbox_health_dto->processing_count) {
    if(cJSON_AddNumberToObject(item, "processingCount", inbox_health_dto->processing_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->retry_scheduled_count
    if(inbox_health_dto->retry_scheduled_count) {
    if(cJSON_AddNumberToObject(item, "retryScheduledCount", inbox_health_dto->retry_scheduled_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->rejected_count
    if(inbox_health_dto->rejected_count) {
    if(cJSON_AddNumberToObject(item, "rejectedCount", inbox_health_dto->rejected_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->quarantined_count
    if(inbox_health_dto->quarantined_count) {
    if(cJSON_AddNumberToObject(item, "quarantinedCount", inbox_health_dto->quarantined_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->dead_letter_count
    if(inbox_health_dto->dead_letter_count) {
    if(cJSON_AddNumberToObject(item, "deadLetterCount", inbox_health_dto->dead_letter_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->cancelled_count
    if(inbox_health_dto->cancelled_count) {
    if(cJSON_AddNumberToObject(item, "cancelledCount", inbox_health_dto->cancelled_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->oldest_accepted_age_seconds
    if(inbox_health_dto->oldest_accepted_age_seconds) {
    if(cJSON_AddNumberToObject(item, "oldestAcceptedAgeSeconds", inbox_health_dto->oldest_accepted_age_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_health_dto->last_successful_processing_utc
    if(inbox_health_dto->last_successful_processing_utc) {
    if(cJSON_AddStringToObject(item, "lastSuccessfulProcessingUtc", inbox_health_dto->last_successful_processing_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_health_dto->successful_processing_tracked
    if(inbox_health_dto->successful_processing_tracked) {
    if(cJSON_AddBoolToObject(item, "successfulProcessingTracked", inbox_health_dto->successful_processing_tracked) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inbox_health_dto_t *inbox_health_dto_parseFromJSON(cJSON *inbox_health_dtoJSON){

    inbox_health_dto_t *inbox_health_dto_local_var = NULL;

    // inbox_health_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // inbox_health_dto->received_count
    cJSON *received_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "receivedCount");
    if (received_count) { 
    if(!cJSON_IsNumber(received_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->accepted_count
    cJSON *accepted_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "acceptedCount");
    if (accepted_count) { 
    if(!cJSON_IsNumber(accepted_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->processing_count
    cJSON *processing_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "processingCount");
    if (processing_count) { 
    if(!cJSON_IsNumber(processing_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->retry_scheduled_count
    cJSON *retry_scheduled_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "retryScheduledCount");
    if (retry_scheduled_count) { 
    if(!cJSON_IsNumber(retry_scheduled_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->rejected_count
    cJSON *rejected_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "rejectedCount");
    if (rejected_count) { 
    if(!cJSON_IsNumber(rejected_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->quarantined_count
    cJSON *quarantined_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "quarantinedCount");
    if (quarantined_count) { 
    if(!cJSON_IsNumber(quarantined_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->dead_letter_count
    cJSON *dead_letter_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "deadLetterCount");
    if (dead_letter_count) { 
    if(!cJSON_IsNumber(dead_letter_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->cancelled_count
    cJSON *cancelled_count = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "cancelledCount");
    if (cancelled_count) { 
    if(!cJSON_IsNumber(cancelled_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->oldest_accepted_age_seconds
    cJSON *oldest_accepted_age_seconds = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "oldestAcceptedAgeSeconds");
    if (oldest_accepted_age_seconds) { 
    if(!cJSON_IsNumber(oldest_accepted_age_seconds))
    {
    goto end; //Numeric
    }
    }

    // inbox_health_dto->last_successful_processing_utc
    cJSON *last_successful_processing_utc = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "lastSuccessfulProcessingUtc");
    if (last_successful_processing_utc) { 
    if(!cJSON_IsString(last_successful_processing_utc) && !cJSON_IsNull(last_successful_processing_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_health_dto->successful_processing_tracked
    cJSON *successful_processing_tracked = cJSON_GetObjectItemCaseSensitive(inbox_health_dtoJSON, "successfulProcessingTracked");
    if (successful_processing_tracked) { 
    if(!cJSON_IsBool(successful_processing_tracked))
    {
    goto end; //Bool
    }
    }


    inbox_health_dto_local_var = inbox_health_dto_create (
        enabled ? enabled->valueint : 0,
        received_count ? received_count->valuedouble : 0,
        accepted_count ? accepted_count->valuedouble : 0,
        processing_count ? processing_count->valuedouble : 0,
        retry_scheduled_count ? retry_scheduled_count->valuedouble : 0,
        rejected_count ? rejected_count->valuedouble : 0,
        quarantined_count ? quarantined_count->valuedouble : 0,
        dead_letter_count ? dead_letter_count->valuedouble : 0,
        cancelled_count ? cancelled_count->valuedouble : 0,
        oldest_accepted_age_seconds ? oldest_accepted_age_seconds->valuedouble : 0,
        last_successful_processing_utc && !cJSON_IsNull(last_successful_processing_utc) ? strdup(last_successful_processing_utc->valuestring) : NULL,
        successful_processing_tracked ? successful_processing_tracked->valueint : 0
        );

    return inbox_health_dto_local_var;
end:
    return NULL;

}
