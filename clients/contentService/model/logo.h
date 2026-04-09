/*
 * logo.h
 *
 * 
 */

#ifndef _logo_H_
#define _logo_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct logo_t logo_t;

#include "margin.h"

// Enum ALIGNMENT for logo

typedef enum  { contentservice_logo_ALIGNMENT_NULL = 0, contentservice_logo_ALIGNMENT_Center, contentservice_logo_ALIGNMENT_Right, contentservice_logo_ALIGNMENT_Left } contentservice_logo_ALIGNMENT_e;

char* logo_alignment_ToString(contentservice_logo_ALIGNMENT_e alignment);

contentservice_logo_ALIGNMENT_e logo_alignment_FromString(char* alignment);



typedef struct logo_t {
    struct margin_t *margin; //model
    contentservice_logo_ALIGNMENT_e alignment; //enum
    int width; //numeric
    int height; //numeric
    int max_width; //numeric
    int max_height; //numeric
    char *custom_link_url; // string
    char *background_color; // string
    char *defalt_logo_url; // string
    char *defalt_retina_logo_url; // string
    char *defalt_sticky_logo_url; // string
    char *defalt_sticky_retina_logo_url; // string
    char *defalt_mobile_logo_url; // string
    char *defalt_mobile_retina_logo_url; // string
    char *footer; // string
    char *header; // string

} logo_t;

logo_t *logo_create(
    margin_t *margin,
    contentservice_logo_ALIGNMENT_e alignment,
    int width,
    int height,
    int max_width,
    int max_height,
    char *custom_link_url,
    char *background_color,
    char *defalt_logo_url,
    char *defalt_retina_logo_url,
    char *defalt_sticky_logo_url,
    char *defalt_sticky_retina_logo_url,
    char *defalt_mobile_logo_url,
    char *defalt_mobile_retina_logo_url,
    char *footer,
    char *header
);

void logo_free(logo_t *logo);

logo_t *logo_parseFromJSON(cJSON *logoJSON);

cJSON *logo_convertToJSON(logo_t *logo);

#endif /* _logo_H_ */

