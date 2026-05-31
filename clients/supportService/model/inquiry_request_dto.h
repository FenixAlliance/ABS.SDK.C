/*
 * inquiry_request_dto.h
 *
 * 
 */

#ifndef _inquiry_request_dto_H_
#define _inquiry_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inquiry_request_dto_t inquiry_request_dto_t;




typedef struct inquiry_request_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *name; // string
    char *last_name; // string
    char *email; // string
    char *organization_name; // string
    char *job_role; // string
    char *organization_domain; // string
    char *country_id; // string
    char *phone; // string
    char *message; // string
    char *tenant_id; // string
    char *business_profile_record_id; // string
    char *account_holder_id; // string
    char *social_profile_id; // string

} inquiry_request_dto_t;

inquiry_request_dto_t *inquiry_request_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *name,
    char *last_name,
    char *email,
    char *organization_name,
    char *job_role,
    char *organization_domain,
    char *country_id,
    char *phone,
    char *message,
    char *tenant_id,
    char *business_profile_record_id,
    char *account_holder_id,
    char *social_profile_id
);

void inquiry_request_dto_free(inquiry_request_dto_t *inquiry_request_dto);

inquiry_request_dto_t *inquiry_request_dto_parseFromJSON(cJSON *inquiry_request_dtoJSON);

cJSON *inquiry_request_dto_convertToJSON(inquiry_request_dto_t *inquiry_request_dto);

#endif /* _inquiry_request_dto_H_ */

