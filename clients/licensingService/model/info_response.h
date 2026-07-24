/*
 * info_response.h
 *
 * 
 */

#ifndef _info_response_H_
#define _info_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct info_response_t info_response_t;




typedef struct info_response_t {
    char *email; // string
    int is_email_confirmed; //boolean

} info_response_t;

info_response_t *info_response_create(
    char *email,
    int is_email_confirmed
);

void info_response_free(info_response_t *info_response);

info_response_t *info_response_parseFromJSON(cJSON *info_responseJSON);

cJSON *info_response_convertToJSON(info_response_t *info_response);

#endif /* _info_response_H_ */

