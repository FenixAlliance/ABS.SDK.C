/*
 * info_request.h
 *
 * 
 */

#ifndef _info_request_H_
#define _info_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct info_request_t info_request_t;




typedef struct info_request_t {
    char *new_email; // string
    char *new_password; // string
    char *old_password; // string

} info_request_t;

info_request_t *info_request_create(
    char *new_email,
    char *new_password,
    char *old_password
);

void info_request_free(info_request_t *info_request);

info_request_t *info_request_parseFromJSON(cJSON *info_requestJSON);

cJSON *info_request_convertToJSON(info_request_t *info_request);

#endif /* _info_request_H_ */

