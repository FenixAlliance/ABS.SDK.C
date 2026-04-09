/*
 * padding.h
 *
 * 
 */

#ifndef _padding_H_
#define _padding_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct padding_t padding_t;




typedef struct padding_t {
    char *top; // string
    char *bottom; // string
    char *right; // string
    char *left; // string

} padding_t;

padding_t *padding_create(
    char *top,
    char *bottom,
    char *right,
    char *left
);

void padding_free(padding_t *padding);

padding_t *padding_parseFromJSON(cJSON *paddingJSON);

cJSON *padding_convertToJSON(padding_t *padding);

#endif /* _padding_H_ */

