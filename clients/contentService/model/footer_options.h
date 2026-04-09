/*
 * footer_options.h
 *
 * 
 */

#ifndef _footer_options_H_
#define _footer_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct footer_options_t footer_options_t;

#include "background.h"
#include "padding.h"
#include "typography.h"

// Enum WIDGETDIVIDER for footer_options

typedef enum  { contentservice_footer_options_WIDGETDIVIDER_NULL = 0, contentservice_footer_options_WIDGETDIVIDER_None, contentservice_footer_options_WIDGETDIVIDER_Solid, contentservice_footer_options_WIDGETDIVIDER_Dotted, contentservice_footer_options_WIDGETDIVIDER__Double, contentservice_footer_options_WIDGETDIVIDER_Groove, contentservice_footer_options_WIDGETDIVIDER_Ridge } contentservice_footer_options_WIDGETDIVIDER_e;

char* footer_options_widget_divider_ToString(contentservice_footer_options_WIDGETDIVIDER_e widget_divider);

contentservice_footer_options_WIDGETDIVIDER_e footer_options_widget_divider_FromString(char* widget_divider);



typedef struct footer_options_t {
    int number_of_columns; //numeric
    int enable_widgets; //boolean
    int enable_copyright_bar; //boolean
    int center_widgets_content; //boolean
    int center_copyright_content; //boolean
    int enable_vertical_widget_divider_line; //boolean
    int vertical_widget_divider_line_size; //numeric
    char *copyright_text; // string
    char *copyright_background_color; // string
    int border_size; //numeric
    char *border_color; // string
    char *widget_divider_color; // string
    contentservice_footer_options_WIDGETDIVIDER_e widget_divider; //enum
    struct padding_t *copyright_padding; //model
    struct padding_t *widgets_area_padding; //model
    struct padding_t *footer_area_padding; //model
    struct background_t *footer_background; //model
    struct background_t *copyright_background; //model
    struct typography_t *headings_typography; //model
    struct typography_t *widgets_typography; //model
    struct typography_t *copyright_typography; //model

} footer_options_t;

footer_options_t *footer_options_create(
    int number_of_columns,
    int enable_widgets,
    int enable_copyright_bar,
    int center_widgets_content,
    int center_copyright_content,
    int enable_vertical_widget_divider_line,
    int vertical_widget_divider_line_size,
    char *copyright_text,
    char *copyright_background_color,
    int border_size,
    char *border_color,
    char *widget_divider_color,
    contentservice_footer_options_WIDGETDIVIDER_e widget_divider,
    padding_t *copyright_padding,
    padding_t *widgets_area_padding,
    padding_t *footer_area_padding,
    background_t *footer_background,
    background_t *copyright_background,
    typography_t *headings_typography,
    typography_t *widgets_typography,
    typography_t *copyright_typography
);

void footer_options_free(footer_options_t *footer_options);

footer_options_t *footer_options_parseFromJSON(cJSON *footer_optionsJSON);

cJSON *footer_options_convertToJSON(footer_options_t *footer_options);

#endif /* _footer_options_H_ */

