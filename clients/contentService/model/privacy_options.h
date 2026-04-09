/*
 * privacy_options.h
 *
 * 
 */

#ifndef _privacy_options_H_
#define _privacy_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct privacy_options_t privacy_options_t;




typedef struct privacy_options_t {
    char *cookies_notice_message; // string

} privacy_options_t;

privacy_options_t *privacy_options_create(
    char *cookies_notice_message
);

void privacy_options_free(privacy_options_t *privacy_options);

privacy_options_t *privacy_options_parseFromJSON(cJSON *privacy_optionsJSON);

cJSON *privacy_options_convertToJSON(privacy_options_t *privacy_options);

#endif /* _privacy_options_H_ */

