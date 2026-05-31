/*
 * return_request_update_dto.h
 *
 * 
 */

#ifndef _return_request_update_dto_H_
#define _return_request_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_request_update_dto_t return_request_update_dto_t;




typedef struct return_request_update_dto_t {
    char *title; // string
    char *description; // string
    int approved; //boolean
    char *approved_timestamp; //date time
    char *support_entitlement_id; // string
    char *return_policy_id; // string

} return_request_update_dto_t;

return_request_update_dto_t *return_request_update_dto_create(
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *support_entitlement_id,
    char *return_policy_id
);

void return_request_update_dto_free(return_request_update_dto_t *return_request_update_dto);

return_request_update_dto_t *return_request_update_dto_parseFromJSON(cJSON *return_request_update_dtoJSON);

cJSON *return_request_update_dto_convertToJSON(return_request_update_dto_t *return_request_update_dto);

#endif /* _return_request_update_dto_H_ */

