/*
 * notification_dto.h
 *
 * 
 */

#ifndef _notification_dto_H_
#define _notification_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notification_dto_t notification_dto_t;




typedef struct notification_dto_t {
    char *id; // string
    char *timestamp; //date time
    int read; //boolean
    char *icon; // string
    char *message; // string
    char *redirect_url; // string
    char *social_profile_id; // string
    char *read_timestamp; //date time
    char *issued_timestamp; //date time

} notification_dto_t;

notification_dto_t *notification_dto_create(
    char *id,
    char *timestamp,
    int read,
    char *icon,
    char *message,
    char *redirect_url,
    char *social_profile_id,
    char *read_timestamp,
    char *issued_timestamp
);

void notification_dto_free(notification_dto_t *notification_dto);

notification_dto_t *notification_dto_parseFromJSON(cJSON *notification_dtoJSON);

cJSON *notification_dto_convertToJSON(notification_dto_t *notification_dto);

#endif /* _notification_dto_H_ */

