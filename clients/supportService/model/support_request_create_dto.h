/*
 * support_request_create_dto.h
 *
 * 
 */

#ifndef _support_request_create_dto_H_
#define _support_request_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_request_create_dto_t support_request_create_dto_t;




typedef struct support_request_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    int approved; //boolean
    char *approved_timestamp; //date time
    char *support_entitlement_id; // string
    char *contact_id; // string

} support_request_create_dto_t;

support_request_create_dto_t *support_request_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *support_entitlement_id,
    char *contact_id
);

void support_request_create_dto_free(support_request_create_dto_t *support_request_create_dto);

support_request_create_dto_t *support_request_create_dto_parseFromJSON(cJSON *support_request_create_dtoJSON);

cJSON *support_request_create_dto_convertToJSON(support_request_create_dto_t *support_request_create_dto);

#endif /* _support_request_create_dto_H_ */

