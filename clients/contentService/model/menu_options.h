/*
 * menu_options.h
 *
 * 
 */

#ifndef _menu_options_H_
#define _menu_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct menu_options_t menu_options_t;

#include "typography.h"

// Enum MENUHIGHLIGHTSTYLE for menu_options

typedef enum  { contentservice_menu_options_MENUHIGHLIGHTSTYLE_NULL = 0, contentservice_menu_options_MENUHIGHLIGHTSTYLE_TopBar, contentservice_menu_options_MENUHIGHLIGHTSTYLE_BottomBar, contentservice_menu_options_MENUHIGHLIGHTSTYLE_Arrow, contentservice_menu_options_MENUHIGHLIGHTSTYLE_ColorOnly, contentservice_menu_options_MENUHIGHLIGHTSTYLE_Background } contentservice_menu_options_MENUHIGHLIGHTSTYLE_e;

char* menu_options_menu_highlight_style_ToString(contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_highlight_style);

contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_options_menu_highlight_style_FromString(char* menu_highlight_style);

// Enum MAINMENUSEARCHLAYOUT for menu_options

typedef enum  { contentservice_menu_options_MAINMENUSEARCHLAYOUT_NULL = 0, contentservice_menu_options_MAINMENUSEARCHLAYOUT_Dropdown, contentservice_menu_options_MAINMENUSEARCHLAYOUT_Overlay } contentservice_menu_options_MAINMENUSEARCHLAYOUT_e;

char* menu_options_main_menu_search_layout_ToString(contentservice_menu_options_MAINMENUSEARCHLAYOUT_e main_menu_search_layout);

contentservice_menu_options_MAINMENUSEARCHLAYOUT_e menu_options_main_menu_search_layout_FromString(char* main_menu_search_layout);

// Enum MENUDROPDOWNANIMATION for menu_options

typedef enum  { contentservice_menu_options_MENUDROPDOWNANIMATION_NULL = 0, contentservice_menu_options_MENUDROPDOWNANIMATION_Fade, contentservice_menu_options_MENUDROPDOWNANIMATION_Slide } contentservice_menu_options_MENUDROPDOWNANIMATION_e;

char* menu_options_menu_dropdown_animation_ToString(contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_dropdown_animation);

contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_options_menu_dropdown_animation_FromString(char* menu_dropdown_animation);

// Enum MENUDROPDOWNINDICATOR for menu_options

typedef enum  { contentservice_menu_options_MENUDROPDOWNINDICATOR_NULL = 0, contentservice_menu_options_MENUDROPDOWNINDICATOR_None, contentservice_menu_options_MENUDROPDOWNINDICATOR_Parent, contentservice_menu_options_MENUDROPDOWNINDICATOR_ParentAndChild } contentservice_menu_options_MENUDROPDOWNINDICATOR_e;

char* menu_options_menu_dropdown_indicator_ToString(contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_dropdown_indicator);

contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_options_menu_dropdown_indicator_FromString(char* menu_dropdown_indicator);



typedef struct menu_options_t {
    char *side_navigation_font_size; // string
    char *main_menu_dropdown_font_color; // string
    char *main_menu_font_hover_active_color; // string
    char *main_menu_dropdown_separator_color; // string
    char *main_menu_dropdown_background_hover_color; // string
    char *main_menu_dropdown_background_color; // string
    char *menu_highlight_label_radius; // string
    int enable_main_menu_cart_icon; //boolean
    int enable_main_menu_drop_shadow; //boolean
    int enable_main_menu_search_icon; //boolean
    int enable_main_menu_dropdown_divider; //boolean
    int enable_main_menu_notifications_icon; //boolean
    int enable_main_menu_icon_circle_borders; //boolean
    int main_menu_dropdown_width; //numeric
    int main_menu_dropdown_font_size; //numeric
    int main_menu_dropdown_item_padding; //numeric
    int main_menu_dropdown_top_border_size; //numeric
    int main_menu_height; //numeric
    int main_menu_item_padding; //numeric
    int main_menu_highlight_bar_size; //numeric
    int main_menu_item_padding_on_mobile; //numeric
    int main_menu_highlight_background_color; //numeric
    struct typography_t *main_menu_typography; //model
    contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_highlight_style; //enum
    contentservice_menu_options_MAINMENUSEARCHLAYOUT_e main_menu_search_layout; //enum
    contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_dropdown_animation; //enum
    contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_dropdown_indicator; //enum

} menu_options_t;

menu_options_t *menu_options_create(
    char *side_navigation_font_size,
    char *main_menu_dropdown_font_color,
    char *main_menu_font_hover_active_color,
    char *main_menu_dropdown_separator_color,
    char *main_menu_dropdown_background_hover_color,
    char *main_menu_dropdown_background_color,
    char *menu_highlight_label_radius,
    int enable_main_menu_cart_icon,
    int enable_main_menu_drop_shadow,
    int enable_main_menu_search_icon,
    int enable_main_menu_dropdown_divider,
    int enable_main_menu_notifications_icon,
    int enable_main_menu_icon_circle_borders,
    int main_menu_dropdown_width,
    int main_menu_dropdown_font_size,
    int main_menu_dropdown_item_padding,
    int main_menu_dropdown_top_border_size,
    int main_menu_height,
    int main_menu_item_padding,
    int main_menu_highlight_bar_size,
    int main_menu_item_padding_on_mobile,
    int main_menu_highlight_background_color,
    typography_t *main_menu_typography,
    contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_highlight_style,
    contentservice_menu_options_MAINMENUSEARCHLAYOUT_e main_menu_search_layout,
    contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_dropdown_animation,
    contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_dropdown_indicator
);

void menu_options_free(menu_options_t *menu_options);

menu_options_t *menu_options_parseFromJSON(cJSON *menu_optionsJSON);

cJSON *menu_options_convertToJSON(menu_options_t *menu_options);

#endif /* _menu_options_H_ */

