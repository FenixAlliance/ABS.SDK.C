/*
 * i_identity.h
 *
 * 
 */

#ifndef _i_identity_H_
#define _i_identity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_identity_t i_identity_t;




typedef struct i_identity_t {
    char *name; // string
    char *authentication_type; // string
    int is_authenticated; //boolean

} i_identity_t;

i_identity_t *i_identity_create(
    char *name,
    char *authentication_type,
    int is_authenticated
);

void i_identity_free(i_identity_t *i_identity);

i_identity_t *i_identity_parseFromJSON(cJSON *i_identityJSON);

cJSON *i_identity_convertToJSON(i_identity_t *i_identity);

#endif /* _i_identity_H_ */

