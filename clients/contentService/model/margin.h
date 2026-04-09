/*
 * margin.h
 *
 * 
 */

#ifndef _margin_H_
#define _margin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct margin_t margin_t;




typedef struct margin_t {
    char *top; // string
    char *bottom; // string
    char *right; // string
    char *left; // string

} margin_t;

margin_t *margin_create(
    char *top,
    char *bottom,
    char *right,
    char *left
);

void margin_free(margin_t *margin);

margin_t *margin_parseFromJSON(cJSON *marginJSON);

cJSON *margin_convertToJSON(margin_t *margin);

#endif /* _margin_H_ */

