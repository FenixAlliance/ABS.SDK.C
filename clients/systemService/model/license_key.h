/*
 * license_key.h
 *
 * 
 */

#ifndef _license_key_H_
#define _license_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_key_t license_key_t;




typedef struct license_key_t {
    char *key; // string

} license_key_t;

license_key_t *license_key_create(
    char *key
);

void license_key_free(license_key_t *license_key);

license_key_t *license_key_parseFromJSON(cJSON *license_keyJSON);

cJSON *license_key_convertToJSON(license_key_t *license_key);

#endif /* _license_key_H_ */

