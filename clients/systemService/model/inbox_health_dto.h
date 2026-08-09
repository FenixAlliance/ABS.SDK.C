/*
 * inbox_health_dto.h
 *
 * 
 */

#ifndef _inbox_health_dto_H_
#define _inbox_health_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inbox_health_dto_t inbox_health_dto_t;




typedef struct inbox_health_dto_t {
    int enabled; //boolean
    int received_count; //numeric
    int accepted_count; //numeric
    int processing_count; //numeric
    int retry_scheduled_count; //numeric
    int rejected_count; //numeric
    int quarantined_count; //numeric
    int dead_letter_count; //numeric
    int cancelled_count; //numeric
    double oldest_accepted_age_seconds; //numeric
    char *last_successful_processing_utc; //date time
    int successful_processing_tracked; //boolean

} inbox_health_dto_t;

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
);

void inbox_health_dto_free(inbox_health_dto_t *inbox_health_dto);

inbox_health_dto_t *inbox_health_dto_parseFromJSON(cJSON *inbox_health_dtoJSON);

cJSON *inbox_health_dto_convertToJSON(inbox_health_dto_t *inbox_health_dto);

#endif /* _inbox_health_dto_H_ */

