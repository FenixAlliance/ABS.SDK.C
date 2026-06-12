/*
 * activity_feed_dto.h
 *
 * 
 */

#ifndef _activity_feed_dto_H_
#define _activity_feed_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_feed_dto_t activity_feed_dto_t;




typedef struct activity_feed_dto_t {
    char *id; // string
    char *timestamp; //date time
    int activities_count; //numeric
    char *tenant_id; // string

} activity_feed_dto_t;

activity_feed_dto_t *activity_feed_dto_create(
    char *id,
    char *timestamp,
    int activities_count,
    char *tenant_id
);

void activity_feed_dto_free(activity_feed_dto_t *activity_feed_dto);

activity_feed_dto_t *activity_feed_dto_parseFromJSON(cJSON *activity_feed_dtoJSON);

cJSON *activity_feed_dto_convertToJSON(activity_feed_dto_t *activity_feed_dto);

#endif /* _activity_feed_dto_H_ */

