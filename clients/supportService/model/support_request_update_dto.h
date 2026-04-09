/*
 * support_request_update_dto.h
 *
 * 
 */

#ifndef _support_request_update_dto_H_
#define _support_request_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_request_update_dto_t support_request_update_dto_t;




typedef struct support_request_update_dto_t {
    char *title; // string
    char *description; // string
    int approved; //boolean
    char *approved_timestamp; //date time
    char *support_entitlement_id; // string

} support_request_update_dto_t;

support_request_update_dto_t *support_request_update_dto_create(
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *support_entitlement_id
);

void support_request_update_dto_free(support_request_update_dto_t *support_request_update_dto);

support_request_update_dto_t *support_request_update_dto_parseFromJSON(cJSON *support_request_update_dtoJSON);

cJSON *support_request_update_dto_convertToJSON(support_request_update_dto_t *support_request_update_dto);

#endif /* _support_request_update_dto_H_ */

