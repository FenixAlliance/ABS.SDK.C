/*
 * downloadables_options.h
 *
 * 
 */

#ifndef _downloadables_options_H_
#define _downloadables_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct downloadables_options_t downloadables_options_t;




typedef struct downloadables_options_t {
    int mask_file_names; //boolean
    int grant_access_after_payment; //boolean
    int downloads_require_login; //boolean

} downloadables_options_t;

downloadables_options_t *downloadables_options_create(
    int mask_file_names,
    int grant_access_after_payment,
    int downloads_require_login
);

void downloadables_options_free(downloadables_options_t *downloadables_options);

downloadables_options_t *downloadables_options_parseFromJSON(cJSON *downloadables_optionsJSON);

cJSON *downloadables_options_convertToJSON(downloadables_options_t *downloadables_options);

#endif /* _downloadables_options_H_ */

