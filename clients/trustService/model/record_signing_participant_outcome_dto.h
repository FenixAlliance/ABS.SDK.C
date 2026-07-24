/*
 * record_signing_participant_outcome_dto.h
 *
 * 
 */

#ifndef _record_signing_participant_outcome_dto_H_
#define _record_signing_participant_outcome_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct record_signing_participant_outcome_dto_t record_signing_participant_outcome_dto_t;


// Enum OUTCOME for record_signing_participant_outcome_dto

typedef enum  { trustservice_record_signing_participant_outcome_dto_OUTCOME_NULL = 0, trustservice_record_signing_participant_outcome_dto_OUTCOME_Pending, trustservice_record_signing_participant_outcome_dto_OUTCOME_Sent, trustservice_record_signing_participant_outcome_dto_OUTCOME_Viewed, trustservice_record_signing_participant_outcome_dto_OUTCOME__Signed, trustservice_record_signing_participant_outcome_dto_OUTCOME_Approved, trustservice_record_signing_participant_outcome_dto_OUTCOME_Declined, trustservice_record_signing_participant_outcome_dto_OUTCOME_Skipped, trustservice_record_signing_participant_outcome_dto_OUTCOME_Expired, trustservice_record_signing_participant_outcome_dto_OUTCOME_Failed } trustservice_record_signing_participant_outcome_dto_OUTCOME_e;

char* record_signing_participant_outcome_dto_outcome_ToString(trustservice_record_signing_participant_outcome_dto_OUTCOME_e outcome);

trustservice_record_signing_participant_outcome_dto_OUTCOME_e record_signing_participant_outcome_dto_outcome_FromString(char* outcome);



typedef struct record_signing_participant_outcome_dto_t {
    trustservice_record_signing_participant_outcome_dto_OUTCOME_e outcome; //enum
    char *outcome_at_utc; //date time
    char *decline_reason; // string
    char *external_reference; // string

} record_signing_participant_outcome_dto_t;

record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto_create(
    trustservice_record_signing_participant_outcome_dto_OUTCOME_e outcome,
    char *outcome_at_utc,
    char *decline_reason,
    char *external_reference
);

void record_signing_participant_outcome_dto_free(record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto);

record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto_parseFromJSON(cJSON *record_signing_participant_outcome_dtoJSON);

cJSON *record_signing_participant_outcome_dto_convertToJSON(record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto);

#endif /* _record_signing_participant_outcome_dto_H_ */

