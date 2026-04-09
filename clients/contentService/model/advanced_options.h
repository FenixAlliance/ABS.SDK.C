/*
 * advanced_options.h
 *
 * 
 */

#ifndef _advanced_options_H_
#define _advanced_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct advanced_options_t advanced_options_t;




typedef struct advanced_options_t {
    char *home_page_id; // string
    char *cart_page_id; // string
    char *checkout_page_id; // string
    char *privacy_policy_page_id; // string
    char *customer_account_page_id; // string
    char *terms_and_conditions_page_id; // string

} advanced_options_t;

advanced_options_t *advanced_options_create(
    char *home_page_id,
    char *cart_page_id,
    char *checkout_page_id,
    char *privacy_policy_page_id,
    char *customer_account_page_id,
    char *terms_and_conditions_page_id
);

void advanced_options_free(advanced_options_t *advanced_options);

advanced_options_t *advanced_options_parseFromJSON(cJSON *advanced_optionsJSON);

cJSON *advanced_options_convertToJSON(advanced_options_t *advanced_options);

#endif /* _advanced_options_H_ */

