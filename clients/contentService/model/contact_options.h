/*
 * contact_options.h
 *
 * 
 */

#ifndef _contact_options_H_
#define _contact_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_options_t contact_options_t;




typedef struct contact_options_t {
    char *email1; // string
    char *email2; // string
    char *phone_number1; // string
    char *phone_number2; // string
    char *address_line1; // string
    char *address_line2; // string
    char *city_id; // string
    char *country_state_id; // string
    char *country_id; // string
    char *postal_code; // string

} contact_options_t;

contact_options_t *contact_options_create(
    char *email1,
    char *email2,
    char *phone_number1,
    char *phone_number2,
    char *address_line1,
    char *address_line2,
    char *city_id,
    char *country_state_id,
    char *country_id,
    char *postal_code
);

void contact_options_free(contact_options_t *contact_options);

contact_options_t *contact_options_parseFromJSON(cJSON *contact_optionsJSON);

cJSON *contact_options_convertToJSON(contact_options_t *contact_options);

#endif /* _contact_options_H_ */

