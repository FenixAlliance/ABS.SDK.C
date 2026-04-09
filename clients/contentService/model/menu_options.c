#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "menu_options.h"


char* menu_options_menu_highlight_style_ToString(contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_highlight_style) {
    char* menu_highlight_styleArray[] =  { "NULL", "TopBar", "BottomBar", "Arrow", "ColorOnly", "Background" };
    return menu_highlight_styleArray[menu_highlight_style];
}

contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_options_menu_highlight_style_FromString(char* menu_highlight_style){
    int stringToReturn = 0;
    char *menu_highlight_styleArray[] =  { "NULL", "TopBar", "BottomBar", "Arrow", "ColorOnly", "Background" };
    size_t sizeofArray = sizeof(menu_highlight_styleArray) / sizeof(menu_highlight_styleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(menu_highlight_style, menu_highlight_styleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* menu_options_main_menu_search_layout_ToString(contentservice_menu_options_MAINMENUSEARCHLAYOUT_e main_menu_search_layout) {
    char* main_menu_search_layoutArray[] =  { "NULL", "Dropdown", "Overlay" };
    return main_menu_search_layoutArray[main_menu_search_layout];
}

contentservice_menu_options_MAINMENUSEARCHLAYOUT_e menu_options_main_menu_search_layout_FromString(char* main_menu_search_layout){
    int stringToReturn = 0;
    char *main_menu_search_layoutArray[] =  { "NULL", "Dropdown", "Overlay" };
    size_t sizeofArray = sizeof(main_menu_search_layoutArray) / sizeof(main_menu_search_layoutArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(main_menu_search_layout, main_menu_search_layoutArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* menu_options_menu_dropdown_animation_ToString(contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_dropdown_animation) {
    char* menu_dropdown_animationArray[] =  { "NULL", "Fade", "Slide" };
    return menu_dropdown_animationArray[menu_dropdown_animation];
}

contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_options_menu_dropdown_animation_FromString(char* menu_dropdown_animation){
    int stringToReturn = 0;
    char *menu_dropdown_animationArray[] =  { "NULL", "Fade", "Slide" };
    size_t sizeofArray = sizeof(menu_dropdown_animationArray) / sizeof(menu_dropdown_animationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(menu_dropdown_animation, menu_dropdown_animationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* menu_options_menu_dropdown_indicator_ToString(contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_dropdown_indicator) {
    char* menu_dropdown_indicatorArray[] =  { "NULL", "None", "Parent", "ParentAndChild" };
    return menu_dropdown_indicatorArray[menu_dropdown_indicator];
}

contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_options_menu_dropdown_indicator_FromString(char* menu_dropdown_indicator){
    int stringToReturn = 0;
    char *menu_dropdown_indicatorArray[] =  { "NULL", "None", "Parent", "ParentAndChild" };
    size_t sizeofArray = sizeof(menu_dropdown_indicatorArray) / sizeof(menu_dropdown_indicatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(menu_dropdown_indicator, menu_dropdown_indicatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    menu_options_t *menu_options_local_var = malloc(sizeof(menu_options_t));
    if (!menu_options_local_var) {
        return NULL;
    }
    menu_options_local_var->side_navigation_font_size = side_navigation_font_size;
    menu_options_local_var->main_menu_dropdown_font_color = main_menu_dropdown_font_color;
    menu_options_local_var->main_menu_font_hover_active_color = main_menu_font_hover_active_color;
    menu_options_local_var->main_menu_dropdown_separator_color = main_menu_dropdown_separator_color;
    menu_options_local_var->main_menu_dropdown_background_hover_color = main_menu_dropdown_background_hover_color;
    menu_options_local_var->main_menu_dropdown_background_color = main_menu_dropdown_background_color;
    menu_options_local_var->menu_highlight_label_radius = menu_highlight_label_radius;
    menu_options_local_var->enable_main_menu_cart_icon = enable_main_menu_cart_icon;
    menu_options_local_var->enable_main_menu_drop_shadow = enable_main_menu_drop_shadow;
    menu_options_local_var->enable_main_menu_search_icon = enable_main_menu_search_icon;
    menu_options_local_var->enable_main_menu_dropdown_divider = enable_main_menu_dropdown_divider;
    menu_options_local_var->enable_main_menu_notifications_icon = enable_main_menu_notifications_icon;
    menu_options_local_var->enable_main_menu_icon_circle_borders = enable_main_menu_icon_circle_borders;
    menu_options_local_var->main_menu_dropdown_width = main_menu_dropdown_width;
    menu_options_local_var->main_menu_dropdown_font_size = main_menu_dropdown_font_size;
    menu_options_local_var->main_menu_dropdown_item_padding = main_menu_dropdown_item_padding;
    menu_options_local_var->main_menu_dropdown_top_border_size = main_menu_dropdown_top_border_size;
    menu_options_local_var->main_menu_height = main_menu_height;
    menu_options_local_var->main_menu_item_padding = main_menu_item_padding;
    menu_options_local_var->main_menu_highlight_bar_size = main_menu_highlight_bar_size;
    menu_options_local_var->main_menu_item_padding_on_mobile = main_menu_item_padding_on_mobile;
    menu_options_local_var->main_menu_highlight_background_color = main_menu_highlight_background_color;
    menu_options_local_var->main_menu_typography = main_menu_typography;
    menu_options_local_var->menu_highlight_style = menu_highlight_style;
    menu_options_local_var->main_menu_search_layout = main_menu_search_layout;
    menu_options_local_var->menu_dropdown_animation = menu_dropdown_animation;
    menu_options_local_var->menu_dropdown_indicator = menu_dropdown_indicator;

    return menu_options_local_var;
}


void menu_options_free(menu_options_t *menu_options) {
    if(NULL == menu_options){
        return ;
    }
    listEntry_t *listEntry;
    if (menu_options->side_navigation_font_size) {
        free(menu_options->side_navigation_font_size);
        menu_options->side_navigation_font_size = NULL;
    }
    if (menu_options->main_menu_dropdown_font_color) {
        free(menu_options->main_menu_dropdown_font_color);
        menu_options->main_menu_dropdown_font_color = NULL;
    }
    if (menu_options->main_menu_font_hover_active_color) {
        free(menu_options->main_menu_font_hover_active_color);
        menu_options->main_menu_font_hover_active_color = NULL;
    }
    if (menu_options->main_menu_dropdown_separator_color) {
        free(menu_options->main_menu_dropdown_separator_color);
        menu_options->main_menu_dropdown_separator_color = NULL;
    }
    if (menu_options->main_menu_dropdown_background_hover_color) {
        free(menu_options->main_menu_dropdown_background_hover_color);
        menu_options->main_menu_dropdown_background_hover_color = NULL;
    }
    if (menu_options->main_menu_dropdown_background_color) {
        free(menu_options->main_menu_dropdown_background_color);
        menu_options->main_menu_dropdown_background_color = NULL;
    }
    if (menu_options->menu_highlight_label_radius) {
        free(menu_options->menu_highlight_label_radius);
        menu_options->menu_highlight_label_radius = NULL;
    }
    if (menu_options->main_menu_typography) {
        typography_free(menu_options->main_menu_typography);
        menu_options->main_menu_typography = NULL;
    }
    free(menu_options);
}

cJSON *menu_options_convertToJSON(menu_options_t *menu_options) {
    cJSON *item = cJSON_CreateObject();

    // menu_options->side_navigation_font_size
    if(menu_options->side_navigation_font_size) {
    if(cJSON_AddStringToObject(item, "sideNavigationFontSize", menu_options->side_navigation_font_size) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->main_menu_dropdown_font_color
    if(menu_options->main_menu_dropdown_font_color) {
    if(cJSON_AddStringToObject(item, "mainMenuDropdownFontColor", menu_options->main_menu_dropdown_font_color) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->main_menu_font_hover_active_color
    if(menu_options->main_menu_font_hover_active_color) {
    if(cJSON_AddStringToObject(item, "mainMenuFontHoverActiveColor", menu_options->main_menu_font_hover_active_color) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->main_menu_dropdown_separator_color
    if(menu_options->main_menu_dropdown_separator_color) {
    if(cJSON_AddStringToObject(item, "mainMenuDropdownSeparatorColor", menu_options->main_menu_dropdown_separator_color) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->main_menu_dropdown_background_hover_color
    if(menu_options->main_menu_dropdown_background_hover_color) {
    if(cJSON_AddStringToObject(item, "mainMenuDropdownBackgroundHoverColor", menu_options->main_menu_dropdown_background_hover_color) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->main_menu_dropdown_background_color
    if(menu_options->main_menu_dropdown_background_color) {
    if(cJSON_AddStringToObject(item, "mainMenuDropdownBackgroundColor", menu_options->main_menu_dropdown_background_color) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->menu_highlight_label_radius
    if(menu_options->menu_highlight_label_radius) {
    if(cJSON_AddStringToObject(item, "menuHighlightLabelRadius", menu_options->menu_highlight_label_radius) == NULL) {
    goto fail; //String
    }
    }


    // menu_options->enable_main_menu_cart_icon
    if(menu_options->enable_main_menu_cart_icon) {
    if(cJSON_AddBoolToObject(item, "enableMainMenuCartIcon", menu_options->enable_main_menu_cart_icon) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_options->enable_main_menu_drop_shadow
    if(menu_options->enable_main_menu_drop_shadow) {
    if(cJSON_AddBoolToObject(item, "enableMainMenuDropShadow", menu_options->enable_main_menu_drop_shadow) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_options->enable_main_menu_search_icon
    if(menu_options->enable_main_menu_search_icon) {
    if(cJSON_AddBoolToObject(item, "enableMainMenuSearchIcon", menu_options->enable_main_menu_search_icon) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_options->enable_main_menu_dropdown_divider
    if(menu_options->enable_main_menu_dropdown_divider) {
    if(cJSON_AddBoolToObject(item, "enableMainMenuDropdownDivider", menu_options->enable_main_menu_dropdown_divider) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_options->enable_main_menu_notifications_icon
    if(menu_options->enable_main_menu_notifications_icon) {
    if(cJSON_AddBoolToObject(item, "enableMainMenuNotificationsIcon", menu_options->enable_main_menu_notifications_icon) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_options->enable_main_menu_icon_circle_borders
    if(menu_options->enable_main_menu_icon_circle_borders) {
    if(cJSON_AddBoolToObject(item, "enableMainMenuIconCircleBorders", menu_options->enable_main_menu_icon_circle_borders) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_options->main_menu_dropdown_width
    if(menu_options->main_menu_dropdown_width) {
    if(cJSON_AddNumberToObject(item, "mainMenuDropdownWidth", menu_options->main_menu_dropdown_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_dropdown_font_size
    if(menu_options->main_menu_dropdown_font_size) {
    if(cJSON_AddNumberToObject(item, "mainMenuDropdownFontSize", menu_options->main_menu_dropdown_font_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_dropdown_item_padding
    if(menu_options->main_menu_dropdown_item_padding) {
    if(cJSON_AddNumberToObject(item, "mainMenuDropdownItemPadding", menu_options->main_menu_dropdown_item_padding) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_dropdown_top_border_size
    if(menu_options->main_menu_dropdown_top_border_size) {
    if(cJSON_AddNumberToObject(item, "mainMenuDropdownTopBorderSize", menu_options->main_menu_dropdown_top_border_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_height
    if(menu_options->main_menu_height) {
    if(cJSON_AddNumberToObject(item, "mainMenuHeight", menu_options->main_menu_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_item_padding
    if(menu_options->main_menu_item_padding) {
    if(cJSON_AddNumberToObject(item, "mainMenuItemPadding", menu_options->main_menu_item_padding) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_highlight_bar_size
    if(menu_options->main_menu_highlight_bar_size) {
    if(cJSON_AddNumberToObject(item, "mainMenuHighlightBarSize", menu_options->main_menu_highlight_bar_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_item_padding_on_mobile
    if(menu_options->main_menu_item_padding_on_mobile) {
    if(cJSON_AddNumberToObject(item, "mainMenuItemPaddingOnMobile", menu_options->main_menu_item_padding_on_mobile) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_highlight_background_color
    if(menu_options->main_menu_highlight_background_color) {
    if(cJSON_AddNumberToObject(item, "mainMenuHighlightBackgroundColor", menu_options->main_menu_highlight_background_color) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_options->main_menu_typography
    if(menu_options->main_menu_typography) {
    cJSON *main_menu_typography_local_JSON = typography_convertToJSON(menu_options->main_menu_typography);
    if(main_menu_typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mainMenuTypography", main_menu_typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // menu_options->menu_highlight_style
    if(menu_options->menu_highlight_style != contentservice_menu_options_MENUHIGHLIGHTSTYLE_NULL) {
    if(cJSON_AddStringToObject(item, "menuHighlightStyle", menu_highlight_stylemenu_options_ToString(menu_options->menu_highlight_style)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // menu_options->main_menu_search_layout
    if(menu_options->main_menu_search_layout != contentservice_menu_options_MAINMENUSEARCHLAYOUT_NULL) {
    if(cJSON_AddStringToObject(item, "mainMenuSearchLayout", main_menu_search_layoutmenu_options_ToString(menu_options->main_menu_search_layout)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // menu_options->menu_dropdown_animation
    if(menu_options->menu_dropdown_animation != contentservice_menu_options_MENUDROPDOWNANIMATION_NULL) {
    if(cJSON_AddStringToObject(item, "menuDropdownAnimation", menu_dropdown_animationmenu_options_ToString(menu_options->menu_dropdown_animation)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // menu_options->menu_dropdown_indicator
    if(menu_options->menu_dropdown_indicator != contentservice_menu_options_MENUDROPDOWNINDICATOR_NULL) {
    if(cJSON_AddStringToObject(item, "menuDropdownIndicator", menu_dropdown_indicatormenu_options_ToString(menu_options->menu_dropdown_indicator)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

menu_options_t *menu_options_parseFromJSON(cJSON *menu_optionsJSON){

    menu_options_t *menu_options_local_var = NULL;

    // define the local variable for menu_options->main_menu_typography
    typography_t *main_menu_typography_local_nonprim = NULL;

    // menu_options->side_navigation_font_size
    cJSON *side_navigation_font_size = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "sideNavigationFontSize");
    if (side_navigation_font_size) { 
    if(!cJSON_IsString(side_navigation_font_size) && !cJSON_IsNull(side_navigation_font_size))
    {
    goto end; //String
    }
    }

    // menu_options->main_menu_dropdown_font_color
    cJSON *main_menu_dropdown_font_color = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownFontColor");
    if (main_menu_dropdown_font_color) { 
    if(!cJSON_IsString(main_menu_dropdown_font_color) && !cJSON_IsNull(main_menu_dropdown_font_color))
    {
    goto end; //String
    }
    }

    // menu_options->main_menu_font_hover_active_color
    cJSON *main_menu_font_hover_active_color = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuFontHoverActiveColor");
    if (main_menu_font_hover_active_color) { 
    if(!cJSON_IsString(main_menu_font_hover_active_color) && !cJSON_IsNull(main_menu_font_hover_active_color))
    {
    goto end; //String
    }
    }

    // menu_options->main_menu_dropdown_separator_color
    cJSON *main_menu_dropdown_separator_color = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownSeparatorColor");
    if (main_menu_dropdown_separator_color) { 
    if(!cJSON_IsString(main_menu_dropdown_separator_color) && !cJSON_IsNull(main_menu_dropdown_separator_color))
    {
    goto end; //String
    }
    }

    // menu_options->main_menu_dropdown_background_hover_color
    cJSON *main_menu_dropdown_background_hover_color = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownBackgroundHoverColor");
    if (main_menu_dropdown_background_hover_color) { 
    if(!cJSON_IsString(main_menu_dropdown_background_hover_color) && !cJSON_IsNull(main_menu_dropdown_background_hover_color))
    {
    goto end; //String
    }
    }

    // menu_options->main_menu_dropdown_background_color
    cJSON *main_menu_dropdown_background_color = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownBackgroundColor");
    if (main_menu_dropdown_background_color) { 
    if(!cJSON_IsString(main_menu_dropdown_background_color) && !cJSON_IsNull(main_menu_dropdown_background_color))
    {
    goto end; //String
    }
    }

    // menu_options->menu_highlight_label_radius
    cJSON *menu_highlight_label_radius = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "menuHighlightLabelRadius");
    if (menu_highlight_label_radius) { 
    if(!cJSON_IsString(menu_highlight_label_radius) && !cJSON_IsNull(menu_highlight_label_radius))
    {
    goto end; //String
    }
    }

    // menu_options->enable_main_menu_cart_icon
    cJSON *enable_main_menu_cart_icon = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "enableMainMenuCartIcon");
    if (enable_main_menu_cart_icon) { 
    if(!cJSON_IsBool(enable_main_menu_cart_icon))
    {
    goto end; //Bool
    }
    }

    // menu_options->enable_main_menu_drop_shadow
    cJSON *enable_main_menu_drop_shadow = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "enableMainMenuDropShadow");
    if (enable_main_menu_drop_shadow) { 
    if(!cJSON_IsBool(enable_main_menu_drop_shadow))
    {
    goto end; //Bool
    }
    }

    // menu_options->enable_main_menu_search_icon
    cJSON *enable_main_menu_search_icon = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "enableMainMenuSearchIcon");
    if (enable_main_menu_search_icon) { 
    if(!cJSON_IsBool(enable_main_menu_search_icon))
    {
    goto end; //Bool
    }
    }

    // menu_options->enable_main_menu_dropdown_divider
    cJSON *enable_main_menu_dropdown_divider = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "enableMainMenuDropdownDivider");
    if (enable_main_menu_dropdown_divider) { 
    if(!cJSON_IsBool(enable_main_menu_dropdown_divider))
    {
    goto end; //Bool
    }
    }

    // menu_options->enable_main_menu_notifications_icon
    cJSON *enable_main_menu_notifications_icon = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "enableMainMenuNotificationsIcon");
    if (enable_main_menu_notifications_icon) { 
    if(!cJSON_IsBool(enable_main_menu_notifications_icon))
    {
    goto end; //Bool
    }
    }

    // menu_options->enable_main_menu_icon_circle_borders
    cJSON *enable_main_menu_icon_circle_borders = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "enableMainMenuIconCircleBorders");
    if (enable_main_menu_icon_circle_borders) { 
    if(!cJSON_IsBool(enable_main_menu_icon_circle_borders))
    {
    goto end; //Bool
    }
    }

    // menu_options->main_menu_dropdown_width
    cJSON *main_menu_dropdown_width = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownWidth");
    if (main_menu_dropdown_width) { 
    if(!cJSON_IsNumber(main_menu_dropdown_width))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_dropdown_font_size
    cJSON *main_menu_dropdown_font_size = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownFontSize");
    if (main_menu_dropdown_font_size) { 
    if(!cJSON_IsNumber(main_menu_dropdown_font_size))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_dropdown_item_padding
    cJSON *main_menu_dropdown_item_padding = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownItemPadding");
    if (main_menu_dropdown_item_padding) { 
    if(!cJSON_IsNumber(main_menu_dropdown_item_padding))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_dropdown_top_border_size
    cJSON *main_menu_dropdown_top_border_size = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuDropdownTopBorderSize");
    if (main_menu_dropdown_top_border_size) { 
    if(!cJSON_IsNumber(main_menu_dropdown_top_border_size))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_height
    cJSON *main_menu_height = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuHeight");
    if (main_menu_height) { 
    if(!cJSON_IsNumber(main_menu_height))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_item_padding
    cJSON *main_menu_item_padding = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuItemPadding");
    if (main_menu_item_padding) { 
    if(!cJSON_IsNumber(main_menu_item_padding))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_highlight_bar_size
    cJSON *main_menu_highlight_bar_size = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuHighlightBarSize");
    if (main_menu_highlight_bar_size) { 
    if(!cJSON_IsNumber(main_menu_highlight_bar_size))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_item_padding_on_mobile
    cJSON *main_menu_item_padding_on_mobile = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuItemPaddingOnMobile");
    if (main_menu_item_padding_on_mobile) { 
    if(!cJSON_IsNumber(main_menu_item_padding_on_mobile))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_highlight_background_color
    cJSON *main_menu_highlight_background_color = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuHighlightBackgroundColor");
    if (main_menu_highlight_background_color) { 
    if(!cJSON_IsNumber(main_menu_highlight_background_color))
    {
    goto end; //Numeric
    }
    }

    // menu_options->main_menu_typography
    cJSON *main_menu_typography = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuTypography");
    if (main_menu_typography) { 
    main_menu_typography_local_nonprim = typography_parseFromJSON(main_menu_typography); //nonprimitive
    }

    // menu_options->menu_highlight_style
    cJSON *menu_highlight_style = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "menuHighlightStyle");
    contentservice_menu_options_MENUHIGHLIGHTSTYLE_e menu_highlight_styleVariable;
    if (menu_highlight_style) { 
    if(!cJSON_IsString(menu_highlight_style))
    {
    goto end; //Enum
    }
    menu_highlight_styleVariable = menu_options_menu_highlight_style_FromString(menu_highlight_style->valuestring);
    }

    // menu_options->main_menu_search_layout
    cJSON *main_menu_search_layout = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "mainMenuSearchLayout");
    contentservice_menu_options_MAINMENUSEARCHLAYOUT_e main_menu_search_layoutVariable;
    if (main_menu_search_layout) { 
    if(!cJSON_IsString(main_menu_search_layout))
    {
    goto end; //Enum
    }
    main_menu_search_layoutVariable = menu_options_main_menu_search_layout_FromString(main_menu_search_layout->valuestring);
    }

    // menu_options->menu_dropdown_animation
    cJSON *menu_dropdown_animation = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "menuDropdownAnimation");
    contentservice_menu_options_MENUDROPDOWNANIMATION_e menu_dropdown_animationVariable;
    if (menu_dropdown_animation) { 
    if(!cJSON_IsString(menu_dropdown_animation))
    {
    goto end; //Enum
    }
    menu_dropdown_animationVariable = menu_options_menu_dropdown_animation_FromString(menu_dropdown_animation->valuestring);
    }

    // menu_options->menu_dropdown_indicator
    cJSON *menu_dropdown_indicator = cJSON_GetObjectItemCaseSensitive(menu_optionsJSON, "menuDropdownIndicator");
    contentservice_menu_options_MENUDROPDOWNINDICATOR_e menu_dropdown_indicatorVariable;
    if (menu_dropdown_indicator) { 
    if(!cJSON_IsString(menu_dropdown_indicator))
    {
    goto end; //Enum
    }
    menu_dropdown_indicatorVariable = menu_options_menu_dropdown_indicator_FromString(menu_dropdown_indicator->valuestring);
    }


    menu_options_local_var = menu_options_create (
        side_navigation_font_size && !cJSON_IsNull(side_navigation_font_size) ? strdup(side_navigation_font_size->valuestring) : NULL,
        main_menu_dropdown_font_color && !cJSON_IsNull(main_menu_dropdown_font_color) ? strdup(main_menu_dropdown_font_color->valuestring) : NULL,
        main_menu_font_hover_active_color && !cJSON_IsNull(main_menu_font_hover_active_color) ? strdup(main_menu_font_hover_active_color->valuestring) : NULL,
        main_menu_dropdown_separator_color && !cJSON_IsNull(main_menu_dropdown_separator_color) ? strdup(main_menu_dropdown_separator_color->valuestring) : NULL,
        main_menu_dropdown_background_hover_color && !cJSON_IsNull(main_menu_dropdown_background_hover_color) ? strdup(main_menu_dropdown_background_hover_color->valuestring) : NULL,
        main_menu_dropdown_background_color && !cJSON_IsNull(main_menu_dropdown_background_color) ? strdup(main_menu_dropdown_background_color->valuestring) : NULL,
        menu_highlight_label_radius && !cJSON_IsNull(menu_highlight_label_radius) ? strdup(menu_highlight_label_radius->valuestring) : NULL,
        enable_main_menu_cart_icon ? enable_main_menu_cart_icon->valueint : 0,
        enable_main_menu_drop_shadow ? enable_main_menu_drop_shadow->valueint : 0,
        enable_main_menu_search_icon ? enable_main_menu_search_icon->valueint : 0,
        enable_main_menu_dropdown_divider ? enable_main_menu_dropdown_divider->valueint : 0,
        enable_main_menu_notifications_icon ? enable_main_menu_notifications_icon->valueint : 0,
        enable_main_menu_icon_circle_borders ? enable_main_menu_icon_circle_borders->valueint : 0,
        main_menu_dropdown_width ? main_menu_dropdown_width->valuedouble : 0,
        main_menu_dropdown_font_size ? main_menu_dropdown_font_size->valuedouble : 0,
        main_menu_dropdown_item_padding ? main_menu_dropdown_item_padding->valuedouble : 0,
        main_menu_dropdown_top_border_size ? main_menu_dropdown_top_border_size->valuedouble : 0,
        main_menu_height ? main_menu_height->valuedouble : 0,
        main_menu_item_padding ? main_menu_item_padding->valuedouble : 0,
        main_menu_highlight_bar_size ? main_menu_highlight_bar_size->valuedouble : 0,
        main_menu_item_padding_on_mobile ? main_menu_item_padding_on_mobile->valuedouble : 0,
        main_menu_highlight_background_color ? main_menu_highlight_background_color->valuedouble : 0,
        main_menu_typography ? main_menu_typography_local_nonprim : NULL,
        menu_highlight_style ? menu_highlight_styleVariable : contentservice_menu_options_MENUHIGHLIGHTSTYLE_NULL,
        main_menu_search_layout ? main_menu_search_layoutVariable : contentservice_menu_options_MAINMENUSEARCHLAYOUT_NULL,
        menu_dropdown_animation ? menu_dropdown_animationVariable : contentservice_menu_options_MENUDROPDOWNANIMATION_NULL,
        menu_dropdown_indicator ? menu_dropdown_indicatorVariable : contentservice_menu_options_MENUDROPDOWNINDICATOR_NULL
        );

    return menu_options_local_var;
end:
    if (main_menu_typography_local_nonprim) {
        typography_free(main_menu_typography_local_nonprim);
        main_menu_typography_local_nonprim = NULL;
    }
    return NULL;

}
