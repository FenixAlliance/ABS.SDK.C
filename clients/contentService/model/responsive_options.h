/*
 * responsive_options.h
 *
 * 
 */

#ifndef _responsive_options_H_
#define _responsive_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct responsive_options_t responsive_options_t;




typedef struct responsive_options_t {
    int enable_responsive; //boolean
    int enable_mobile_zoom; //boolean
    int grid_responsive_breakpoint; //boolean
    int header_responsive_breakpoint; //boolean
    int content_responsive_breakpoint; //boolean
    int sidebar_responsive_breakpoint; //boolean
    int element_responsive_breakpoint_sm; //numeric
    int element_responsive_breakpoint_md; //numeric
    int element_responsive_breakpoint_lg; //numeric
    float responsive_min_font_size_factor; //numeric
    float typography_responsive_sensitivity; //numeric

} responsive_options_t;

responsive_options_t *responsive_options_create(
    int enable_responsive,
    int enable_mobile_zoom,
    int grid_responsive_breakpoint,
    int header_responsive_breakpoint,
    int content_responsive_breakpoint,
    int sidebar_responsive_breakpoint,
    int element_responsive_breakpoint_sm,
    int element_responsive_breakpoint_md,
    int element_responsive_breakpoint_lg,
    float responsive_min_font_size_factor,
    float typography_responsive_sensitivity
);

void responsive_options_free(responsive_options_t *responsive_options);

responsive_options_t *responsive_options_parseFromJSON(cJSON *responsive_optionsJSON);

cJSON *responsive_options_convertToJSON(responsive_options_t *responsive_options);

#endif /* _responsive_options_H_ */

