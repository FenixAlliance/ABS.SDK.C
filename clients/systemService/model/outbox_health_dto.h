/*
 * outbox_health_dto.h
 *
 * 
 */

#ifndef _outbox_health_dto_H_
#define _outbox_health_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct outbox_health_dto_t outbox_health_dto_t;




typedef struct outbox_health_dto_t {
    int enabled; //boolean
    int pending_count; //numeric
    int processing_count; //numeric
    int failed_count; //numeric
    int dead_letter_count; //numeric
    double oldest_pending_age_seconds; //numeric
    char *last_successful_dispatch_utc; //date time
    int successful_dispatch_tracked; //boolean

} outbox_health_dto_t;

outbox_health_dto_t *outbox_health_dto_create(
    int enabled,
    int pending_count,
    int processing_count,
    int failed_count,
    int dead_letter_count,
    double oldest_pending_age_seconds,
    char *last_successful_dispatch_utc,
    int successful_dispatch_tracked
);

void outbox_health_dto_free(outbox_health_dto_t *outbox_health_dto);

outbox_health_dto_t *outbox_health_dto_parseFromJSON(cJSON *outbox_health_dtoJSON);

cJSON *outbox_health_dto_convertToJSON(outbox_health_dto_t *outbox_health_dto);

#endif /* _outbox_health_dto_H_ */

