/*
 * i_open_api_contact.h
 *
 * 
 */

#ifndef _i_open_api_contact_H_
#define _i_open_api_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_open_api_contact_t i_open_api_contact_t;




typedef struct i_open_api_contact_t {
    char *name; // string
    char *email; // string
    char *url; // string

} i_open_api_contact_t;

i_open_api_contact_t *i_open_api_contact_create(
    char *name,
    char *email,
    char *url
);

void i_open_api_contact_free(i_open_api_contact_t *i_open_api_contact);

i_open_api_contact_t *i_open_api_contact_parseFromJSON(cJSON *i_open_api_contactJSON);

cJSON *i_open_api_contact_convertToJSON(i_open_api_contact_t *i_open_api_contact);

#endif /* _i_open_api_contact_H_ */

