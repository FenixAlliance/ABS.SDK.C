/*
 * execute_signing_request_dto.h
 *
 * 
 */

#ifndef _execute_signing_request_dto_H_
#define _execute_signing_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_signing_request_dto_t execute_signing_request_dto_t;




typedef struct execute_signing_request_dto_t {
    char *provider_name; // string
    char *provider_mode; // string
    char *signing_profile_id; // string
    char *signing_certificate_id; // string

} execute_signing_request_dto_t;

execute_signing_request_dto_t *execute_signing_request_dto_create(
    char *provider_name,
    char *provider_mode,
    char *signing_profile_id,
    char *signing_certificate_id
);

void execute_signing_request_dto_free(execute_signing_request_dto_t *execute_signing_request_dto);

execute_signing_request_dto_t *execute_signing_request_dto_parseFromJSON(cJSON *execute_signing_request_dtoJSON);

cJSON *execute_signing_request_dto_convertToJSON(execute_signing_request_dto_t *execute_signing_request_dto);

#endif /* _execute_signing_request_dto_H_ */

