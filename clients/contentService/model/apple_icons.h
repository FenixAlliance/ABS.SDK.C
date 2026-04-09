/*
 * apple_icons.h
 *
 * 
 */

#ifndef _apple_icons_H_
#define _apple_icons_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apple_icons_t apple_icons_t;




typedef struct apple_icons_t {
    char *the57; // string
    char *the60; // string
    char *the72; // string
    char *the76; // string
    char *the114; // string
    char *the120; // string
    char *the128; // string
    char *the144; // string
    char *the152; // string
    char *the167; // string
    char *the180; // string

} apple_icons_t;

apple_icons_t *apple_icons_create(
    char *the57,
    char *the60,
    char *the72,
    char *the76,
    char *the114,
    char *the120,
    char *the128,
    char *the144,
    char *the152,
    char *the167,
    char *the180
);

void apple_icons_free(apple_icons_t *apple_icons);

apple_icons_t *apple_icons_parseFromJSON(cJSON *apple_iconsJSON);

cJSON *apple_icons_convertToJSON(apple_icons_t *apple_icons);

#endif /* _apple_icons_H_ */

