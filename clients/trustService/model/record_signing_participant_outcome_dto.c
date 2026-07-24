#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "record_signing_participant_outcome_dto.h"


char* record_signing_participant_outcome_dto_outcome_ToString(trustservice_record_signing_participant_outcome_dto_OUTCOME_e outcome) {
    char* outcomeArray[] =  { "NULL", "Pending", "Sent", "Viewed", "Signed", "Approved", "Declined", "Skipped", "Expired", "Failed" };
    return outcomeArray[outcome];
}

trustservice_record_signing_participant_outcome_dto_OUTCOME_e record_signing_participant_outcome_dto_outcome_FromString(char* outcome){
    int stringToReturn = 0;
    char *outcomeArray[] =  { "NULL", "Pending", "Sent", "Viewed", "Signed", "Approved", "Declined", "Skipped", "Expired", "Failed" };
    size_t sizeofArray = sizeof(outcomeArray) / sizeof(outcomeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(outcome, outcomeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto_create(
    trustservice_record_signing_participant_outcome_dto_OUTCOME_e outcome,
    char *outcome_at_utc,
    char *decline_reason,
    char *external_reference
    ) {
    record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto_local_var = malloc(sizeof(record_signing_participant_outcome_dto_t));
    if (!record_signing_participant_outcome_dto_local_var) {
        return NULL;
    }
    record_signing_participant_outcome_dto_local_var->outcome = outcome;
    record_signing_participant_outcome_dto_local_var->outcome_at_utc = outcome_at_utc;
    record_signing_participant_outcome_dto_local_var->decline_reason = decline_reason;
    record_signing_participant_outcome_dto_local_var->external_reference = external_reference;

    return record_signing_participant_outcome_dto_local_var;
}


void record_signing_participant_outcome_dto_free(record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto) {
    if(NULL == record_signing_participant_outcome_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (record_signing_participant_outcome_dto->outcome_at_utc) {
        free(record_signing_participant_outcome_dto->outcome_at_utc);
        record_signing_participant_outcome_dto->outcome_at_utc = NULL;
    }
    if (record_signing_participant_outcome_dto->decline_reason) {
        free(record_signing_participant_outcome_dto->decline_reason);
        record_signing_participant_outcome_dto->decline_reason = NULL;
    }
    if (record_signing_participant_outcome_dto->external_reference) {
        free(record_signing_participant_outcome_dto->external_reference);
        record_signing_participant_outcome_dto->external_reference = NULL;
    }
    free(record_signing_participant_outcome_dto);
}

cJSON *record_signing_participant_outcome_dto_convertToJSON(record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto) {
    cJSON *item = cJSON_CreateObject();

    // record_signing_participant_outcome_dto->outcome
    if (trustservice_record_signing_participant_outcome_dto_OUTCOME_NULL == record_signing_participant_outcome_dto->outcome) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "outcome", outcomerecord_signing_participant_outcome_dto_ToString(record_signing_participant_outcome_dto->outcome)) == NULL)
    {
    goto fail; //Enum
    }


    // record_signing_participant_outcome_dto->outcome_at_utc
    if(record_signing_participant_outcome_dto->outcome_at_utc) {
    if(cJSON_AddStringToObject(item, "outcomeAtUtc", record_signing_participant_outcome_dto->outcome_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // record_signing_participant_outcome_dto->decline_reason
    if(record_signing_participant_outcome_dto->decline_reason) {
    if(cJSON_AddStringToObject(item, "declineReason", record_signing_participant_outcome_dto->decline_reason) == NULL) {
    goto fail; //String
    }
    }


    // record_signing_participant_outcome_dto->external_reference
    if(record_signing_participant_outcome_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", record_signing_participant_outcome_dto->external_reference) == NULL) {
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

record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto_parseFromJSON(cJSON *record_signing_participant_outcome_dtoJSON){

    record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto_local_var = NULL;

    // record_signing_participant_outcome_dto->outcome
    cJSON *outcome = cJSON_GetObjectItemCaseSensitive(record_signing_participant_outcome_dtoJSON, "outcome");
    if (!outcome) {
        goto end;
    }

    trustservice_record_signing_participant_outcome_dto_OUTCOME_e outcomeVariable;
    
    if(!cJSON_IsString(outcome))
    {
    goto end; //Enum
    }
    outcomeVariable = record_signing_participant_outcome_dto_outcome_FromString(outcome->valuestring);

    // record_signing_participant_outcome_dto->outcome_at_utc
    cJSON *outcome_at_utc = cJSON_GetObjectItemCaseSensitive(record_signing_participant_outcome_dtoJSON, "outcomeAtUtc");
    if (outcome_at_utc) { 
    if(!cJSON_IsString(outcome_at_utc) && !cJSON_IsNull(outcome_at_utc))
    {
    goto end; //DateTime
    }
    }

    // record_signing_participant_outcome_dto->decline_reason
    cJSON *decline_reason = cJSON_GetObjectItemCaseSensitive(record_signing_participant_outcome_dtoJSON, "declineReason");
    if (decline_reason) { 
    if(!cJSON_IsString(decline_reason) && !cJSON_IsNull(decline_reason))
    {
    goto end; //String
    }
    }

    // record_signing_participant_outcome_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(record_signing_participant_outcome_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }


    record_signing_participant_outcome_dto_local_var = record_signing_participant_outcome_dto_create (
        outcomeVariable,
        outcome_at_utc && !cJSON_IsNull(outcome_at_utc) ? strdup(outcome_at_utc->valuestring) : NULL,
        decline_reason && !cJSON_IsNull(decline_reason) ? strdup(decline_reason->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL
        );

    return record_signing_participant_outcome_dto_local_var;
end:
    return NULL;

}
