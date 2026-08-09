#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "outbox_health_dto.h"



outbox_health_dto_t *outbox_health_dto_create(
    int enabled,
    int pending_count,
    int processing_count,
    int failed_count,
    int dead_letter_count,
    double oldest_pending_age_seconds,
    char *last_successful_dispatch_utc,
    int successful_dispatch_tracked
    ) {
    outbox_health_dto_t *outbox_health_dto_local_var = malloc(sizeof(outbox_health_dto_t));
    if (!outbox_health_dto_local_var) {
        return NULL;
    }
    outbox_health_dto_local_var->enabled = enabled;
    outbox_health_dto_local_var->pending_count = pending_count;
    outbox_health_dto_local_var->processing_count = processing_count;
    outbox_health_dto_local_var->failed_count = failed_count;
    outbox_health_dto_local_var->dead_letter_count = dead_letter_count;
    outbox_health_dto_local_var->oldest_pending_age_seconds = oldest_pending_age_seconds;
    outbox_health_dto_local_var->last_successful_dispatch_utc = last_successful_dispatch_utc;
    outbox_health_dto_local_var->successful_dispatch_tracked = successful_dispatch_tracked;

    return outbox_health_dto_local_var;
}


void outbox_health_dto_free(outbox_health_dto_t *outbox_health_dto) {
    if(NULL == outbox_health_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (outbox_health_dto->last_successful_dispatch_utc) {
        free(outbox_health_dto->last_successful_dispatch_utc);
        outbox_health_dto->last_successful_dispatch_utc = NULL;
    }
    free(outbox_health_dto);
}

cJSON *outbox_health_dto_convertToJSON(outbox_health_dto_t *outbox_health_dto) {
    cJSON *item = cJSON_CreateObject();

    // outbox_health_dto->enabled
    if(outbox_health_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", outbox_health_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // outbox_health_dto->pending_count
    if(outbox_health_dto->pending_count) {
    if(cJSON_AddNumberToObject(item, "pendingCount", outbox_health_dto->pending_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_health_dto->processing_count
    if(outbox_health_dto->processing_count) {
    if(cJSON_AddNumberToObject(item, "processingCount", outbox_health_dto->processing_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_health_dto->failed_count
    if(outbox_health_dto->failed_count) {
    if(cJSON_AddNumberToObject(item, "failedCount", outbox_health_dto->failed_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_health_dto->dead_letter_count
    if(outbox_health_dto->dead_letter_count) {
    if(cJSON_AddNumberToObject(item, "deadLetterCount", outbox_health_dto->dead_letter_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_health_dto->oldest_pending_age_seconds
    if(outbox_health_dto->oldest_pending_age_seconds) {
    if(cJSON_AddNumberToObject(item, "oldestPendingAgeSeconds", outbox_health_dto->oldest_pending_age_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_health_dto->last_successful_dispatch_utc
    if(outbox_health_dto->last_successful_dispatch_utc) {
    if(cJSON_AddStringToObject(item, "lastSuccessfulDispatchUtc", outbox_health_dto->last_successful_dispatch_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_health_dto->successful_dispatch_tracked
    if(outbox_health_dto->successful_dispatch_tracked) {
    if(cJSON_AddBoolToObject(item, "successfulDispatchTracked", outbox_health_dto->successful_dispatch_tracked) == NULL) {
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

outbox_health_dto_t *outbox_health_dto_parseFromJSON(cJSON *outbox_health_dtoJSON){

    outbox_health_dto_t *outbox_health_dto_local_var = NULL;

    // outbox_health_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // outbox_health_dto->pending_count
    cJSON *pending_count = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "pendingCount");
    if (pending_count) { 
    if(!cJSON_IsNumber(pending_count))
    {
    goto end; //Numeric
    }
    }

    // outbox_health_dto->processing_count
    cJSON *processing_count = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "processingCount");
    if (processing_count) { 
    if(!cJSON_IsNumber(processing_count))
    {
    goto end; //Numeric
    }
    }

    // outbox_health_dto->failed_count
    cJSON *failed_count = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "failedCount");
    if (failed_count) { 
    if(!cJSON_IsNumber(failed_count))
    {
    goto end; //Numeric
    }
    }

    // outbox_health_dto->dead_letter_count
    cJSON *dead_letter_count = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "deadLetterCount");
    if (dead_letter_count) { 
    if(!cJSON_IsNumber(dead_letter_count))
    {
    goto end; //Numeric
    }
    }

    // outbox_health_dto->oldest_pending_age_seconds
    cJSON *oldest_pending_age_seconds = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "oldestPendingAgeSeconds");
    if (oldest_pending_age_seconds) { 
    if(!cJSON_IsNumber(oldest_pending_age_seconds))
    {
    goto end; //Numeric
    }
    }

    // outbox_health_dto->last_successful_dispatch_utc
    cJSON *last_successful_dispatch_utc = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "lastSuccessfulDispatchUtc");
    if (last_successful_dispatch_utc) { 
    if(!cJSON_IsString(last_successful_dispatch_utc) && !cJSON_IsNull(last_successful_dispatch_utc))
    {
    goto end; //DateTime
    }
    }

    // outbox_health_dto->successful_dispatch_tracked
    cJSON *successful_dispatch_tracked = cJSON_GetObjectItemCaseSensitive(outbox_health_dtoJSON, "successfulDispatchTracked");
    if (successful_dispatch_tracked) { 
    if(!cJSON_IsBool(successful_dispatch_tracked))
    {
    goto end; //Bool
    }
    }


    outbox_health_dto_local_var = outbox_health_dto_create (
        enabled ? enabled->valueint : 0,
        pending_count ? pending_count->valuedouble : 0,
        processing_count ? processing_count->valuedouble : 0,
        failed_count ? failed_count->valuedouble : 0,
        dead_letter_count ? dead_letter_count->valuedouble : 0,
        oldest_pending_age_seconds ? oldest_pending_age_seconds->valuedouble : 0,
        last_successful_dispatch_utc && !cJSON_IsNull(last_successful_dispatch_utc) ? strdup(last_successful_dispatch_utc->valuestring) : NULL,
        successful_dispatch_tracked ? successful_dispatch_tracked->valueint : 0
        );

    return outbox_health_dto_local_var;
end:
    return NULL;

}
