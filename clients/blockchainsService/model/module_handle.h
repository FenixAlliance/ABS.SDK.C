/*
 * module_handle.h
 *
 * 
 */

#ifndef _module_handle_H_
#define _module_handle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_handle_t module_handle_t;




typedef struct module_handle_t {
    int md_stream_version; //numeric

} module_handle_t;

module_handle_t *module_handle_create(
    int md_stream_version
);

void module_handle_free(module_handle_t *module_handle);

module_handle_t *module_handle_parseFromJSON(cJSON *module_handleJSON);

cJSON *module_handle_convertToJSON(module_handle_t *module_handle);

#endif /* _module_handle_H_ */

