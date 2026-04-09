/*
 * background.h
 *
 * 
 */

#ifndef _background_H_
#define _background_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct background_t background_t;


// Enum BGREPEAT for background

typedef enum  { contentservice_background_BGREPEAT_NULL = 0, contentservice_background_BGREPEAT_All, contentservice_background_BGREPEAT_Horizontally, contentservice_background_BGREPEAT_Vertically, contentservice_background_BGREPEAT_NoRepeat } contentservice_background_BGREPEAT_e;

char* background_bg_repeat_ToString(contentservice_background_BGREPEAT_e bg_repeat);

contentservice_background_BGREPEAT_e background_bg_repeat_FromString(char* bg_repeat);

// Enum BGPOSITION for background

typedef enum  { contentservice_background_BGPOSITION_NULL = 0, contentservice_background_BGPOSITION_TopLeft, contentservice_background_BGPOSITION_TopRight, contentservice_background_BGPOSITION_TopCenter, contentservice_background_BGPOSITION_CenterLeft, contentservice_background_BGPOSITION_CenterRight, contentservice_background_BGPOSITION_CenterCenter, contentservice_background_BGPOSITION_BottomLeft, contentservice_background_BGPOSITION_BottomRight, contentservice_background_BGPOSITION_BottomCenter } contentservice_background_BGPOSITION_e;

char* background_bg_position_ToString(contentservice_background_BGPOSITION_e bg_position);

contentservice_background_BGPOSITION_e background_bg_position_FromString(char* bg_position);



typedef struct background_t {
    contentservice_background_BGREPEAT_e bg_repeat; //enum
    contentservice_background_BGPOSITION_e bg_position; //enum
    char *background_color; // string
    char *background_image_url; // string
    int enable_full_width_background_image; //boolean

} background_t;

background_t *background_create(
    contentservice_background_BGREPEAT_e bg_repeat,
    contentservice_background_BGPOSITION_e bg_position,
    char *background_color,
    char *background_image_url,
    int enable_full_width_background_image
);

void background_free(background_t *background);

background_t *background_parseFromJSON(cJSON *backgroundJSON);

cJSON *background_convertToJSON(background_t *background);

#endif /* _background_H_ */

