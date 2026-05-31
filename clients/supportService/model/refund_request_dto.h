/*
 * refund_request_dto.h
 *
 * 
 */

#ifndef _refund_request_dto_H_
#define _refund_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct refund_request_dto_t refund_request_dto_t;




typedef struct refund_request_dto_t {
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
    char *refund_policy_id; // string
    char *payment_id; // string

} refund_request_dto_t;

refund_request_dto_t *refund_request_dto_create(
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
    char *refund_policy_id,
    char *payment_id
);

void refund_request_dto_free(refund_request_dto_t *refund_request_dto);

refund_request_dto_t *refund_request_dto_parseFromJSON(cJSON *refund_request_dtoJSON);

cJSON *refund_request_dto_convertToJSON(refund_request_dto_t *refund_request_dto);

#endif /* _refund_request_dto_H_ */

