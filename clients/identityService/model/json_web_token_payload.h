/*
 * json_web_token_payload.h
 *
 * 
 */

#ifndef _json_web_token_payload_H_
#define _json_web_token_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct json_web_token_payload_t json_web_token_payload_t;




typedef struct json_web_token_payload_t {
    char *aud; // string
    char *cid; // string
    char *iss; // string
    char *aid; // string
    char *sub; // string
    char *act; // string
    long iat; //numeric
    long nbf; //numeric
    long exp; //numeric
    list_t *scopes; //primitive container

} json_web_token_payload_t;

json_web_token_payload_t *json_web_token_payload_create(
    char *aud,
    char *cid,
    char *iss,
    char *aid,
    char *sub,
    char *act,
    long iat,
    long nbf,
    long exp,
    list_t *scopes
);

void json_web_token_payload_free(json_web_token_payload_t *json_web_token_payload);

json_web_token_payload_t *json_web_token_payload_parseFromJSON(cJSON *json_web_token_payloadJSON);

cJSON *json_web_token_payload_convertToJSON(json_web_token_payload_t *json_web_token_payload);

#endif /* _json_web_token_payload_H_ */

