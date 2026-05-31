/*
 * inquiry_request_update_dto.h
 *
 * 
 */

#ifndef _inquiry_request_update_dto_H_
#define _inquiry_request_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inquiry_request_update_dto_t inquiry_request_update_dto_t;




typedef struct inquiry_request_update_dto_t {
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
    char *social_profile_id; // string

} inquiry_request_update_dto_t;

inquiry_request_update_dto_t *inquiry_request_update_dto_create(
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
    char *social_profile_id
);

void inquiry_request_update_dto_free(inquiry_request_update_dto_t *inquiry_request_update_dto);

inquiry_request_update_dto_t *inquiry_request_update_dto_parseFromJSON(cJSON *inquiry_request_update_dtoJSON);

cJSON *inquiry_request_update_dto_convertToJSON(inquiry_request_update_dto_t *inquiry_request_update_dto);

#endif /* _inquiry_request_update_dto_H_ */

