/*
 * i_session.h
 *
 * 
 */

#ifndef _i_session_H_
#define _i_session_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_session_t i_session_t;




typedef struct i_session_t {
    int is_available; //boolean
    char *id; // string
    list_t *keys; //primitive container

} i_session_t;

i_session_t *i_session_create(
    int is_available,
    char *id,
    list_t *keys
);

void i_session_free(i_session_t *i_session);

i_session_t *i_session_parseFromJSON(cJSON *i_sessionJSON);

cJSON *i_session_convertToJSON(i_session_t *i_session);

#endif /* _i_session_H_ */

