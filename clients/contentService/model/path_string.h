/*
 * path_string.h
 *
 * 
 */

#ifndef _path_string_H_
#define _path_string_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct path_string_t path_string_t;




typedef struct path_string_t {
    char *value; // string
    int has_value; //boolean

} path_string_t;

path_string_t *path_string_create(
    char *value,
    int has_value
);

void path_string_free(path_string_t *path_string);

path_string_t *path_string_parseFromJSON(cJSON *path_stringJSON);

cJSON *path_string_convertToJSON(path_string_t *path_string);

#endif /* _path_string_H_ */

