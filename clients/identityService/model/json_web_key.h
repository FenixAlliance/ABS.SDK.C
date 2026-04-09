/*
 * json_web_key.h
 *
 * 
 */

#ifndef _json_web_key_H_
#define _json_web_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct json_web_key_t json_web_key_t;




typedef struct json_web_key_t {
    char *kid; // string
    long nbf; //numeric
    char *use; // string
    char *kty; // string
    char *e; // string
    char *n; // string

} json_web_key_t;

json_web_key_t *json_web_key_create(
    char *kid,
    long nbf,
    char *use,
    char *kty,
    char *e,
    char *n
);

void json_web_key_free(json_web_key_t *json_web_key);

json_web_key_t *json_web_key_parseFromJSON(cJSON *json_web_keyJSON);

cJSON *json_web_key_convertToJSON(json_web_key_t *json_web_key);

#endif /* _json_web_key_H_ */

