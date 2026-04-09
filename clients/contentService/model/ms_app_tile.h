/*
 * ms_app_tile.h
 *
 * 
 */

#ifndef _ms_app_tile_H_
#define _ms_app_tile_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ms_app_tile_t ms_app_tile_t;




typedef struct ms_app_tile_t {
    char *color; // string
    char *logo; // string
    char *logo_square; // string
    char *logo144; // string
    char *logo150; // string
    char *logo310; // string
    char *logo310_w; // string
    char *logo70; // string

} ms_app_tile_t;

ms_app_tile_t *ms_app_tile_create(
    char *color,
    char *logo,
    char *logo_square,
    char *logo144,
    char *logo150,
    char *logo310,
    char *logo310_w,
    char *logo70
);

void ms_app_tile_free(ms_app_tile_t *ms_app_tile);

ms_app_tile_t *ms_app_tile_parseFromJSON(cJSON *ms_app_tileJSON);

cJSON *ms_app_tile_convertToJSON(ms_app_tile_t *ms_app_tile);

#endif /* _ms_app_tile_H_ */

