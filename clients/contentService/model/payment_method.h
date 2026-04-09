/*
 * payment_method.h
 *
 * 
 */

#ifndef _payment_method_H_
#define _payment_method_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_method_t payment_method_t;




typedef struct payment_method_t {
    int enable; //boolean
    int priority; //boolean
    char *name; // string
    char *description; // string
    char *instructions; // string
    list_t *supported_features; //primitive container

} payment_method_t;

payment_method_t *payment_method_create(
    int enable,
    int priority,
    char *name,
    char *description,
    char *instructions,
    list_t *supported_features
);

void payment_method_free(payment_method_t *payment_method);

payment_method_t *payment_method_parseFromJSON(cJSON *payment_methodJSON);

cJSON *payment_method_convertToJSON(payment_method_t *payment_method);

#endif /* _payment_method_H_ */

