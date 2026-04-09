/*
 * custom_font.h
 *
 * 
 */

#ifndef _custom_font_H_
#define _custom_font_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_font_t custom_font_t;




typedef struct custom_font_t {
    char *name; // string
    char *wof_f2; // string
    char *woff; // string
    char *ttf; // string
    char *eot; // string
    char *svg; // string

} custom_font_t;

custom_font_t *custom_font_create(
    char *name,
    char *wof_f2,
    char *woff,
    char *ttf,
    char *eot,
    char *svg
);

void custom_font_free(custom_font_t *custom_font);

custom_font_t *custom_font_parseFromJSON(cJSON *custom_fontJSON);

cJSON *custom_font_convertToJSON(custom_font_t *custom_font);

#endif /* _custom_font_H_ */

