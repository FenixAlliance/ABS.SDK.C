/*
 * forum_options.h
 *
 * 
 */

#ifndef _forum_options_H_
#define _forum_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct forum_options_t forum_options_t;




typedef struct forum_options_t {
    int forums_per_page; //numeric

} forum_options_t;

forum_options_t *forum_options_create(
    int forums_per_page
);

void forum_options_free(forum_options_t *forum_options);

forum_options_t *forum_options_parseFromJSON(cJSON *forum_optionsJSON);

cJSON *forum_options_convertToJSON(forum_options_t *forum_options);

#endif /* _forum_options_H_ */

