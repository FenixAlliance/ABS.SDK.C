/*
 * warranty_request_dto.h
 *
 * 
 */

#ifndef _warranty_request_dto_H_
#define _warranty_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct warranty_request_dto_t warranty_request_dto_t;




typedef struct warranty_request_dto_t {
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
    char *warranty_policy_id; // string

} warranty_request_dto_t;

warranty_request_dto_t *warranty_request_dto_create(
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
    char *warranty_policy_id
);

void warranty_request_dto_free(warranty_request_dto_t *warranty_request_dto);

warranty_request_dto_t *warranty_request_dto_parseFromJSON(cJSON *warranty_request_dtoJSON);

cJSON *warranty_request_dto_convertToJSON(warranty_request_dto_t *warranty_request_dto);

#endif /* _warranty_request_dto_H_ */

