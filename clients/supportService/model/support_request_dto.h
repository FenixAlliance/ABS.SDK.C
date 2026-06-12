/*
 * support_request_dto.h
 *
 * 
 */

#ifndef _support_request_dto_H_
#define _support_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_request_dto_t support_request_dto_t;




typedef struct support_request_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    int approved; //boolean
    char *approved_timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *support_entitlement_id; // string
    char *contact_id; // string
    char *user_id; // string

} support_request_dto_t;

support_request_dto_t *support_request_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *support_entitlement_id,
    char *contact_id,
    char *user_id
);

void support_request_dto_free(support_request_dto_t *support_request_dto);

support_request_dto_t *support_request_dto_parseFromJSON(cJSON *support_request_dtoJSON);

cJSON *support_request_dto_convertToJSON(support_request_dto_t *support_request_dto);

#endif /* _support_request_dto_H_ */

