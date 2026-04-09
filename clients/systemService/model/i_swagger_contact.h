/*
 * i_swagger_contact.h
 *
 * 
 */

#ifndef _i_swagger_contact_H_
#define _i_swagger_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_swagger_contact_t i_swagger_contact_t;




typedef struct i_swagger_contact_t {
    char *name; // string
    char *email; // string
    char *url; // string

} i_swagger_contact_t;

i_swagger_contact_t *i_swagger_contact_create(
    char *name,
    char *email,
    char *url
);

void i_swagger_contact_free(i_swagger_contact_t *i_swagger_contact);

i_swagger_contact_t *i_swagger_contact_parseFromJSON(cJSON *i_swagger_contactJSON);

cJSON *i_swagger_contact_convertToJSON(i_swagger_contact_t *i_swagger_contact);

#endif /* _i_swagger_contact_H_ */

