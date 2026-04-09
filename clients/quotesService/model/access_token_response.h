/*
 * access_token_response.h
 *
 * 
 */

#ifndef _access_token_response_H_
#define _access_token_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct access_token_response_t access_token_response_t;




typedef struct access_token_response_t {
    char *token_type; // string
    char *access_token; // string
    long expires_in; //numeric
    char *refresh_token; // string

} access_token_response_t;

access_token_response_t *access_token_response_create(
    char *token_type,
    char *access_token,
    long expires_in,
    char *refresh_token
);

void access_token_response_free(access_token_response_t *access_token_response);

access_token_response_t *access_token_response_parseFromJSON(cJSON *access_token_responseJSON);

cJSON *access_token_response_convertToJSON(access_token_response_t *access_token_response);

#endif /* _access_token_response_H_ */

