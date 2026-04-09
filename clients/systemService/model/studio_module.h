/*
 * studio_module.h
 *
 * 
 */

#ifndef _studio_module_H_
#define _studio_module_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct studio_module_t studio_module_t;




typedef struct studio_module_t {
    char *name; // string
    char *version; // string

} studio_module_t;

studio_module_t *studio_module_create(
    char *name,
    char *version
);

void studio_module_free(studio_module_t *studio_module);

studio_module_t *studio_module_parseFromJSON(cJSON *studio_moduleJSON);

cJSON *studio_module_convertToJSON(studio_module_t *studio_module);

#endif /* _studio_module_H_ */

