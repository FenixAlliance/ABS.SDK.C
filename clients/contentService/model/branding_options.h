/*
 * branding_options.h
 *
 * 
 */

#ifndef _branding_options_H_
#define _branding_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_options_t branding_options_t;

#include "apple_icons.h"
#include "dashboard_options.h"
#include "favicons.h"
#include "logo.h"
#include "ms_app_tile.h"
#include "studio_options.h"



typedef struct branding_options_t {
    char *default_lang; // string
    char *primary_color; // string
    char *secondary_color; // string
    struct logo_t *header_logo; //model
    struct logo_t *footer_logo; //model
    struct favicons_t *favicons; //model
    struct apple_icons_t *apple_icon; //model
    struct ms_app_tile_t *ms_app_tile; //model
    struct dashboard_options_t *dashboard; //model
    struct studio_options_t *studio; //model

} branding_options_t;

branding_options_t *branding_options_create(
    char *default_lang,
    char *primary_color,
    char *secondary_color,
    logo_t *header_logo,
    logo_t *footer_logo,
    favicons_t *favicons,
    apple_icons_t *apple_icon,
    ms_app_tile_t *ms_app_tile,
    dashboard_options_t *dashboard,
    studio_options_t *studio
);

void branding_options_free(branding_options_t *branding_options);

branding_options_t *branding_options_parseFromJSON(cJSON *branding_optionsJSON);

cJSON *branding_options_convertToJSON(branding_options_t *branding_options);

#endif /* _branding_options_H_ */

