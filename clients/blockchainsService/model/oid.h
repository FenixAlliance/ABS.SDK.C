/*
 * oid.h
 *
 * 
 */

#ifndef _oid_H_
#define _oid_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct oid_t oid_t;




typedef struct oid_t {
    char *value; // string
    char *friendly_name; // string

} oid_t;

oid_t *oid_create(
    char *value,
    char *friendly_name
);

void oid_free(oid_t *oid);

oid_t *oid_parseFromJSON(cJSON *oidJSON);

cJSON *oid_convertToJSON(oid_t *oid);

#endif /* _oid_H_ */

