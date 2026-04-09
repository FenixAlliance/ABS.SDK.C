/*
 * portal_options.h
 *
 * 
 */

#ifndef _portal_options_H_
#define _portal_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct portal_options_t portal_options_t;

#include "background_options.h"
#include "blog_options.h"
#include "branding_options.h"
#include "breadcrumbs_options.h"
#include "color_options.h"
#include "contact_options.h"
#include "dashboard_options.h"
#include "emails_options.h"
#include "footer_options.h"
#include "forum_options.h"
#include "header_options.h"
#include "integrations_options.h"
#include "layout_options.h"
#include "menu_options.h"
#include "object.h"
#include "privacy_options.h"
#include "responsive_options.h"
#include "seo_options.h"
#include "sliding_bar_options.h"
#include "social_media_options.h"
#include "store_options.h"
#include "theming_options.h"
#include "title_bar_options.h"
#include "typography_options.h"

// Enum PORTALUIENGINE for portal_options

typedef enum  { contentservice_portal_options_PORTALUIENGINE_NULL = 0, contentservice_portal_options_PORTALUIENGINE_Angular, contentservice_portal_options_PORTALUIENGINE_React, contentservice_portal_options_PORTALUIENGINE_Razor } contentservice_portal_options_PORTALUIENGINE_e;

char* portal_options_portal_ui_engine_ToString(contentservice_portal_options_PORTALUIENGINE_e portal_ui_engine);

contentservice_portal_options_PORTALUIENGINE_e portal_options_portal_ui_engine_FromString(char* portal_ui_engine);



typedef struct portal_options_t {
    char *title; // string
    char *description; // string
    contentservice_portal_options_PORTALUIENGINE_e portal_ui_engine; //enum
    struct seo_options_t *seo; //model
    struct store_options_t *store; //model
    struct theming_options_t *theming; //model
    struct branding_options_t *branding; //model
    struct social_media_options_t *social; //model
    struct privacy_options_t *privacy; //model
    struct blog_options_t *blog; //model
    struct forum_options_t *forums; //model
    struct footer_options_t *footer; //model
    struct background_options_t *background; //model
    struct breadcrumbs_options_t *breadcrumbs; //model
    struct contact_options_t *contact; //model
    struct color_options_t *color; //model
    struct dashboard_options_t *dashboard; //model
    struct header_options_t *header; //model
    struct title_bar_options_t *title_bar; //model
    struct typography_options_t *typography; //model
    struct social_media_options_t *social_media; //model
    struct sliding_bar_options_t *sliding_bar; //model
    object_t *slideshow; //object
    object_t *slider; //object
    object_t *sidebar; //object
    object_t *search; //object
    struct responsive_options_t *responsive; //model
    object_t *portfolio; //object
    object_t *performance; //object
    object_t *pagination; //object
    object_t *miscellaneous; //object
    struct menu_options_t *menu; //model
    object_t *grid; //object
    object_t *mansory; //object
    object_t *lightbox; //object
    struct layout_options_t *layout; //model
    object_t *code_fields; //object
    object_t *features; //object
    object_t *forms; //object
    struct integrations_options_t *integrations; //model
    struct emails_options_t *emails; //model

} portal_options_t;

portal_options_t *portal_options_create(
    char *title,
    char *description,
    contentservice_portal_options_PORTALUIENGINE_e portal_ui_engine,
    seo_options_t *seo,
    store_options_t *store,
    theming_options_t *theming,
    branding_options_t *branding,
    social_media_options_t *social,
    privacy_options_t *privacy,
    blog_options_t *blog,
    forum_options_t *forums,
    footer_options_t *footer,
    background_options_t *background,
    breadcrumbs_options_t *breadcrumbs,
    contact_options_t *contact,
    color_options_t *color,
    dashboard_options_t *dashboard,
    header_options_t *header,
    title_bar_options_t *title_bar,
    typography_options_t *typography,
    social_media_options_t *social_media,
    sliding_bar_options_t *sliding_bar,
    object_t *slideshow,
    object_t *slider,
    object_t *sidebar,
    object_t *search,
    responsive_options_t *responsive,
    object_t *portfolio,
    object_t *performance,
    object_t *pagination,
    object_t *miscellaneous,
    menu_options_t *menu,
    object_t *grid,
    object_t *mansory,
    object_t *lightbox,
    layout_options_t *layout,
    object_t *code_fields,
    object_t *features,
    object_t *forms,
    integrations_options_t *integrations,
    emails_options_t *emails
);

void portal_options_free(portal_options_t *portal_options);

portal_options_t *portal_options_parseFromJSON(cJSON *portal_optionsJSON);

cJSON *portal_options_convertToJSON(portal_options_t *portal_options);

#endif /* _portal_options_H_ */

