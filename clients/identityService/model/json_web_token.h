/*
 * json_web_token.h
 *
 * 
 */

#ifndef _json_web_token_H_
#define _json_web_token_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct json_web_token_t json_web_token_t;

#include "json_web_token_header.h"
#include "json_web_token_payload.h"



typedef struct json_web_token_t {
    struct json_web_token_header_t *header; //model
    struct json_web_token_payload_t *payload; //model
    char *signature; // string
    char *token_type; // string
    long expires_in; //numeric
    char *access_token; // string

} json_web_token_t;

json_web_token_t *json_web_token_create(
    json_web_token_header_t *header,
    json_web_token_payload_t *payload,
    char *signature,
    char *token_type,
    long expires_in,
    char *access_token
);

void json_web_token_free(json_web_token_t *json_web_token);

json_web_token_t *json_web_token_parseFromJSON(cJSON *json_web_tokenJSON);

cJSON *json_web_token_convertToJSON(json_web_token_t *json_web_token);

#endif /* _json_web_token_H_ */

