/*
 * webhook_request_dto.h
 *
 * 
 */

#ifndef _webhook_request_dto_H_
#define _webhook_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_request_dto_t webhook_request_dto_t;




typedef struct webhook_request_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *type; // string
    char *request_url; // string
    char *business_id; // string

} webhook_request_dto_t;

webhook_request_dto_t *webhook_request_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *type,
    char *request_url,
    char *business_id
);

void webhook_request_dto_free(webhook_request_dto_t *webhook_request_dto);

webhook_request_dto_t *webhook_request_dto_parseFromJSON(cJSON *webhook_request_dtoJSON);

cJSON *webhook_request_dto_convertToJSON(webhook_request_dto_t *webhook_request_dto);

#endif /* _webhook_request_dto_H_ */

