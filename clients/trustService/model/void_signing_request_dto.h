/*
 * void_signing_request_dto.h
 *
 * 
 */

#ifndef _void_signing_request_dto_H_
#define _void_signing_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct void_signing_request_dto_t void_signing_request_dto_t;




typedef struct void_signing_request_dto_t {
    char *voided_reason; // string

} void_signing_request_dto_t;

void_signing_request_dto_t *void_signing_request_dto_create(
    char *voided_reason
);

void void_signing_request_dto_free(void_signing_request_dto_t *void_signing_request_dto);

void_signing_request_dto_t *void_signing_request_dto_parseFromJSON(cJSON *void_signing_request_dtoJSON);

cJSON *void_signing_request_dto_convertToJSON(void_signing_request_dto_t *void_signing_request_dto);

#endif /* _void_signing_request_dto_H_ */

