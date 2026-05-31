/*
 * host_string.h
 *
 * 
 */

#ifndef _host_string_H_
#define _host_string_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct host_string_t host_string_t;




typedef struct host_string_t {
    char *value; // string
    int has_value; //boolean
    char *host; // string
    int port; //numeric

} host_string_t;

host_string_t *host_string_create(
    char *value,
    int has_value,
    char *host,
    int port
);

void host_string_free(host_string_t *host_string);

host_string_t *host_string_parseFromJSON(cJSON *host_stringJSON);

cJSON *host_string_convertToJSON(host_string_t *host_string);

#endif /* _host_string_H_ */

