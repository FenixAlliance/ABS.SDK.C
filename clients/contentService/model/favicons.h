/*
 * favicons.h
 *
 * 
 */

#ifndef _favicons_H_
#define _favicons_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct favicons_t favicons_t;




typedef struct favicons_t {
    char *favicon; // string
    char *favicon16; // string
    char *favicon32; // string
    char *favicon96; // string
    char *favicon128; // string
    char *favicon196; // string

} favicons_t;

favicons_t *favicons_create(
    char *favicon,
    char *favicon16,
    char *favicon32,
    char *favicon96,
    char *favicon128,
    char *favicon196
);

void favicons_free(favicons_t *favicons);

favicons_t *favicons_parseFromJSON(cJSON *faviconsJSON);

cJSON *favicons_convertToJSON(favicons_t *favicons);

#endif /* _favicons_H_ */

