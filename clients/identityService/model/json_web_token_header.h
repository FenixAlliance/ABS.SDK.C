/*
 * json_web_token_header.h
 *
 * 
 */

#ifndef _json_web_token_header_H_
#define _json_web_token_header_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct json_web_token_header_t json_web_token_header_t;




typedef struct json_web_token_header_t {
    char *alg; // string
    char *jku; // string
    char *kid; // string
    char *typ; // string

} json_web_token_header_t;

json_web_token_header_t *json_web_token_header_create(
    char *alg,
    char *jku,
    char *kid,
    char *typ
);

void json_web_token_header_free(json_web_token_header_t *json_web_token_header);

json_web_token_header_t *json_web_token_header_parseFromJSON(cJSON *json_web_token_headerJSON);

cJSON *json_web_token_header_convertToJSON(json_web_token_header_t *json_web_token_header);

#endif /* _json_web_token_header_H_ */

