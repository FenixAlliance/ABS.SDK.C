/*
 * return_request_dto.h
 *
 * 
 */

#ifndef _return_request_dto_H_
#define _return_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_request_dto_t return_request_dto_t;




typedef struct return_request_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    int approved; //boolean
    char *approved_timestamp; //date time
    char *tenant_id; // string
    char *business_profile_record_id; // string
    char *support_entitlement_id; // string
    char *contact_id; // string
    char *account_holder_id; // string
    char *return_policy_id; // string

} return_request_dto_t;

return_request_dto_t *return_request_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *tenant_id,
    char *business_profile_record_id,
    char *support_entitlement_id,
    char *contact_id,
    char *account_holder_id,
    char *return_policy_id
);

void return_request_dto_free(return_request_dto_t *return_request_dto);

return_request_dto_t *return_request_dto_parseFromJSON(cJSON *return_request_dtoJSON);

cJSON *return_request_dto_convertToJSON(return_request_dto_t *return_request_dto);

#endif /* _return_request_dto_H_ */

