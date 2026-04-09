/*
 * emails_options.h
 *
 * 
 */

#ifndef _emails_options_H_
#define _emails_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct emails_options_t emails_options_t;




typedef struct emails_options_t {
    char *alert_template; // string
    char *action_template; // string
    char *receipt_template; // string
    char *welcome_template; // string

} emails_options_t;

emails_options_t *emails_options_create(
    char *alert_template,
    char *action_template,
    char *receipt_template,
    char *welcome_template
);

void emails_options_free(emails_options_t *emails_options);

emails_options_t *emails_options_parseFromJSON(cJSON *emails_optionsJSON);

cJSON *emails_options_convertToJSON(emails_options_t *emails_options);

#endif /* _emails_options_H_ */

