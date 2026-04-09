/*
 * json_web_key_set.h
 *
 * 
 */

#ifndef _json_web_key_set_H_
#define _json_web_key_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct json_web_key_set_t json_web_key_set_t;

#include "json_web_key.h"



typedef struct json_web_key_set_t {
    list_t *keys; //nonprimitive container

} json_web_key_set_t;

json_web_key_set_t *json_web_key_set_create(
    list_t *keys
);

void json_web_key_set_free(json_web_key_set_t *json_web_key_set);

json_web_key_set_t *json_web_key_set_parseFromJSON(cJSON *json_web_key_setJSON);

cJSON *json_web_key_set_convertToJSON(json_web_key_set_t *json_web_key_set);

#endif /* _json_web_key_set_H_ */

