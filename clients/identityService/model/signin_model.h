/*
 * signin_model.h
 *
 * 
 */

#ifndef _signin_model_H_
#define _signin_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signin_model_t signin_model_t;




typedef struct signin_model_t {
    char *email; // string
    char *password; // string

} signin_model_t;

signin_model_t *signin_model_create(
    char *email,
    char *password
);

void signin_model_free(signin_model_t *signin_model);

signin_model_t *signin_model_parseFromJSON(cJSON *signin_modelJSON);

cJSON *signin_model_convertToJSON(signin_model_t *signin_model);

#endif /* _signin_model_H_ */

