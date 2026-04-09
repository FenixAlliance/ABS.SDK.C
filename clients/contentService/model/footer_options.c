#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "footer_options.h"


char* footer_options_widget_divider_ToString(contentservice_footer_options_WIDGETDIVIDER_e widget_divider) {
    char* widget_dividerArray[] =  { "NULL", "None", "Solid", "Dotted", "Double", "Groove", "Ridge" };
    return widget_dividerArray[widget_divider];
}

contentservice_footer_options_WIDGETDIVIDER_e footer_options_widget_divider_FromString(char* widget_divider){
    int stringToReturn = 0;
    char *widget_dividerArray[] =  { "NULL", "None", "Solid", "Dotted", "Double", "Groove", "Ridge" };
    size_t sizeofArray = sizeof(widget_dividerArray) / sizeof(widget_dividerArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(widget_divider, widget_dividerArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    footer_options_t *footer_options_local_var = malloc(sizeof(footer_options_t));
    if (!footer_options_local_var) {
        return NULL;
    }
    footer_options_local_var->number_of_columns = number_of_columns;
    footer_options_local_var->enable_widgets = enable_widgets;
    footer_options_local_var->enable_copyright_bar = enable_copyright_bar;
    footer_options_local_var->center_widgets_content = center_widgets_content;
    footer_options_local_var->center_copyright_content = center_copyright_content;
    footer_options_local_var->enable_vertical_widget_divider_line = enable_vertical_widget_divider_line;
    footer_options_local_var->vertical_widget_divider_line_size = vertical_widget_divider_line_size;
    footer_options_local_var->copyright_text = copyright_text;
    footer_options_local_var->copyright_background_color = copyright_background_color;
    footer_options_local_var->border_size = border_size;
    footer_options_local_var->border_color = border_color;
    footer_options_local_var->widget_divider_color = widget_divider_color;
    footer_options_local_var->widget_divider = widget_divider;
    footer_options_local_var->copyright_padding = copyright_padding;
    footer_options_local_var->widgets_area_padding = widgets_area_padding;
    footer_options_local_var->footer_area_padding = footer_area_padding;
    footer_options_local_var->footer_background = footer_background;
    footer_options_local_var->copyright_background = copyright_background;
    footer_options_local_var->headings_typography = headings_typography;
    footer_options_local_var->widgets_typography = widgets_typography;
    footer_options_local_var->copyright_typography = copyright_typography;

    return footer_options_local_var;
}


void footer_options_free(footer_options_t *footer_options) {
    if(NULL == footer_options){
        return ;
    }
    listEntry_t *listEntry;
    if (footer_options->copyright_text) {
        free(footer_options->copyright_text);
        footer_options->copyright_text = NULL;
    }
    if (footer_options->copyright_background_color) {
        free(footer_options->copyright_background_color);
        footer_options->copyright_background_color = NULL;
    }
    if (footer_options->border_color) {
        free(footer_options->border_color);
        footer_options->border_color = NULL;
    }
    if (footer_options->widget_divider_color) {
        free(footer_options->widget_divider_color);
        footer_options->widget_divider_color = NULL;
    }
    if (footer_options->copyright_padding) {
        padding_free(footer_options->copyright_padding);
        footer_options->copyright_padding = NULL;
    }
    if (footer_options->widgets_area_padding) {
        padding_free(footer_options->widgets_area_padding);
        footer_options->widgets_area_padding = NULL;
    }
    if (footer_options->footer_area_padding) {
        padding_free(footer_options->footer_area_padding);
        footer_options->footer_area_padding = NULL;
    }
    if (footer_options->footer_background) {
        background_free(footer_options->footer_background);
        footer_options->footer_background = NULL;
    }
    if (footer_options->copyright_background) {
        background_free(footer_options->copyright_background);
        footer_options->copyright_background = NULL;
    }
    if (footer_options->headings_typography) {
        typography_free(footer_options->headings_typography);
        footer_options->headings_typography = NULL;
    }
    if (footer_options->widgets_typography) {
        typography_free(footer_options->widgets_typography);
        footer_options->widgets_typography = NULL;
    }
    if (footer_options->copyright_typography) {
        typography_free(footer_options->copyright_typography);
        footer_options->copyright_typography = NULL;
    }
    free(footer_options);
}

cJSON *footer_options_convertToJSON(footer_options_t *footer_options) {
    cJSON *item = cJSON_CreateObject();

    // footer_options->number_of_columns
    if(footer_options->number_of_columns) {
    if(cJSON_AddNumberToObject(item, "numberOfColumns", footer_options->number_of_columns) == NULL) {
    goto fail; //Numeric
    }
    }


    // footer_options->enable_widgets
    if(footer_options->enable_widgets) {
    if(cJSON_AddBoolToObject(item, "enableWidgets", footer_options->enable_widgets) == NULL) {
    goto fail; //Bool
    }
    }


    // footer_options->enable_copyright_bar
    if(footer_options->enable_copyright_bar) {
    if(cJSON_AddBoolToObject(item, "enableCopyrightBar", footer_options->enable_copyright_bar) == NULL) {
    goto fail; //Bool
    }
    }


    // footer_options->center_widgets_content
    if(footer_options->center_widgets_content) {
    if(cJSON_AddBoolToObject(item, "centerWidgetsContent", footer_options->center_widgets_content) == NULL) {
    goto fail; //Bool
    }
    }


    // footer_options->center_copyright_content
    if(footer_options->center_copyright_content) {
    if(cJSON_AddBoolToObject(item, "centerCopyrightContent", footer_options->center_copyright_content) == NULL) {
    goto fail; //Bool
    }
    }


    // footer_options->enable_vertical_widget_divider_line
    if(footer_options->enable_vertical_widget_divider_line) {
    if(cJSON_AddBoolToObject(item, "enableVerticalWidgetDividerLine", footer_options->enable_vertical_widget_divider_line) == NULL) {
    goto fail; //Bool
    }
    }


    // footer_options->vertical_widget_divider_line_size
    if(footer_options->vertical_widget_divider_line_size) {
    if(cJSON_AddNumberToObject(item, "verticalWidgetDividerLineSize", footer_options->vertical_widget_divider_line_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // footer_options->copyright_text
    if(footer_options->copyright_text) {
    if(cJSON_AddStringToObject(item, "copyrightText", footer_options->copyright_text) == NULL) {
    goto fail; //String
    }
    }


    // footer_options->copyright_background_color
    if(footer_options->copyright_background_color) {
    if(cJSON_AddStringToObject(item, "copyrightBackgroundColor", footer_options->copyright_background_color) == NULL) {
    goto fail; //String
    }
    }


    // footer_options->border_size
    if(footer_options->border_size) {
    if(cJSON_AddNumberToObject(item, "borderSize", footer_options->border_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // footer_options->border_color
    if(footer_options->border_color) {
    if(cJSON_AddStringToObject(item, "borderColor", footer_options->border_color) == NULL) {
    goto fail; //String
    }
    }


    // footer_options->widget_divider_color
    if(footer_options->widget_divider_color) {
    if(cJSON_AddStringToObject(item, "widgetDividerColor", footer_options->widget_divider_color) == NULL) {
    goto fail; //String
    }
    }


    // footer_options->widget_divider
    if(footer_options->widget_divider != contentservice_footer_options_WIDGETDIVIDER_NULL) {
    if(cJSON_AddStringToObject(item, "widgetDivider", widget_dividerfooter_options_ToString(footer_options->widget_divider)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // footer_options->copyright_padding
    if(footer_options->copyright_padding) {
    cJSON *copyright_padding_local_JSON = padding_convertToJSON(footer_options->copyright_padding);
    if(copyright_padding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "copyrightPadding", copyright_padding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->widgets_area_padding
    if(footer_options->widgets_area_padding) {
    cJSON *widgets_area_padding_local_JSON = padding_convertToJSON(footer_options->widgets_area_padding);
    if(widgets_area_padding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "widgetsAreaPadding", widgets_area_padding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->footer_area_padding
    if(footer_options->footer_area_padding) {
    cJSON *footer_area_padding_local_JSON = padding_convertToJSON(footer_options->footer_area_padding);
    if(footer_area_padding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "footerAreaPadding", footer_area_padding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->footer_background
    if(footer_options->footer_background) {
    cJSON *footer_background_local_JSON = background_convertToJSON(footer_options->footer_background);
    if(footer_background_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "footerBackground", footer_background_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->copyright_background
    if(footer_options->copyright_background) {
    cJSON *copyright_background_local_JSON = background_convertToJSON(footer_options->copyright_background);
    if(copyright_background_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "copyrightBackground", copyright_background_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->headings_typography
    if(footer_options->headings_typography) {
    cJSON *headings_typography_local_JSON = typography_convertToJSON(footer_options->headings_typography);
    if(headings_typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "headingsTypography", headings_typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->widgets_typography
    if(footer_options->widgets_typography) {
    cJSON *widgets_typography_local_JSON = typography_convertToJSON(footer_options->widgets_typography);
    if(widgets_typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "widgetsTypography", widgets_typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // footer_options->copyright_typography
    if(footer_options->copyright_typography) {
    cJSON *copyright_typography_local_JSON = typography_convertToJSON(footer_options->copyright_typography);
    if(copyright_typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "copyrightTypography", copyright_typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

footer_options_t *footer_options_parseFromJSON(cJSON *footer_optionsJSON){

    footer_options_t *footer_options_local_var = NULL;

    // define the local variable for footer_options->copyright_padding
    padding_t *copyright_padding_local_nonprim = NULL;

    // define the local variable for footer_options->widgets_area_padding
    padding_t *widgets_area_padding_local_nonprim = NULL;

    // define the local variable for footer_options->footer_area_padding
    padding_t *footer_area_padding_local_nonprim = NULL;

    // define the local variable for footer_options->footer_background
    background_t *footer_background_local_nonprim = NULL;

    // define the local variable for footer_options->copyright_background
    background_t *copyright_background_local_nonprim = NULL;

    // define the local variable for footer_options->headings_typography
    typography_t *headings_typography_local_nonprim = NULL;

    // define the local variable for footer_options->widgets_typography
    typography_t *widgets_typography_local_nonprim = NULL;

    // define the local variable for footer_options->copyright_typography
    typography_t *copyright_typography_local_nonprim = NULL;

    // footer_options->number_of_columns
    cJSON *number_of_columns = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "numberOfColumns");
    if (number_of_columns) { 
    if(!cJSON_IsNumber(number_of_columns))
    {
    goto end; //Numeric
    }
    }

    // footer_options->enable_widgets
    cJSON *enable_widgets = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "enableWidgets");
    if (enable_widgets) { 
    if(!cJSON_IsBool(enable_widgets))
    {
    goto end; //Bool
    }
    }

    // footer_options->enable_copyright_bar
    cJSON *enable_copyright_bar = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "enableCopyrightBar");
    if (enable_copyright_bar) { 
    if(!cJSON_IsBool(enable_copyright_bar))
    {
    goto end; //Bool
    }
    }

    // footer_options->center_widgets_content
    cJSON *center_widgets_content = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "centerWidgetsContent");
    if (center_widgets_content) { 
    if(!cJSON_IsBool(center_widgets_content))
    {
    goto end; //Bool
    }
    }

    // footer_options->center_copyright_content
    cJSON *center_copyright_content = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "centerCopyrightContent");
    if (center_copyright_content) { 
    if(!cJSON_IsBool(center_copyright_content))
    {
    goto end; //Bool
    }
    }

    // footer_options->enable_vertical_widget_divider_line
    cJSON *enable_vertical_widget_divider_line = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "enableVerticalWidgetDividerLine");
    if (enable_vertical_widget_divider_line) { 
    if(!cJSON_IsBool(enable_vertical_widget_divider_line))
    {
    goto end; //Bool
    }
    }

    // footer_options->vertical_widget_divider_line_size
    cJSON *vertical_widget_divider_line_size = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "verticalWidgetDividerLineSize");
    if (vertical_widget_divider_line_size) { 
    if(!cJSON_IsNumber(vertical_widget_divider_line_size))
    {
    goto end; //Numeric
    }
    }

    // footer_options->copyright_text
    cJSON *copyright_text = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "copyrightText");
    if (copyright_text) { 
    if(!cJSON_IsString(copyright_text) && !cJSON_IsNull(copyright_text))
    {
    goto end; //String
    }
    }

    // footer_options->copyright_background_color
    cJSON *copyright_background_color = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "copyrightBackgroundColor");
    if (copyright_background_color) { 
    if(!cJSON_IsString(copyright_background_color) && !cJSON_IsNull(copyright_background_color))
    {
    goto end; //String
    }
    }

    // footer_options->border_size
    cJSON *border_size = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "borderSize");
    if (border_size) { 
    if(!cJSON_IsNumber(border_size))
    {
    goto end; //Numeric
    }
    }

    // footer_options->border_color
    cJSON *border_color = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "borderColor");
    if (border_color) { 
    if(!cJSON_IsString(border_color) && !cJSON_IsNull(border_color))
    {
    goto end; //String
    }
    }

    // footer_options->widget_divider_color
    cJSON *widget_divider_color = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "widgetDividerColor");
    if (widget_divider_color) { 
    if(!cJSON_IsString(widget_divider_color) && !cJSON_IsNull(widget_divider_color))
    {
    goto end; //String
    }
    }

    // footer_options->widget_divider
    cJSON *widget_divider = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "widgetDivider");
    contentservice_footer_options_WIDGETDIVIDER_e widget_dividerVariable;
    if (widget_divider) { 
    if(!cJSON_IsString(widget_divider))
    {
    goto end; //Enum
    }
    widget_dividerVariable = footer_options_widget_divider_FromString(widget_divider->valuestring);
    }

    // footer_options->copyright_padding
    cJSON *copyright_padding = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "copyrightPadding");
    if (copyright_padding) { 
    copyright_padding_local_nonprim = padding_parseFromJSON(copyright_padding); //nonprimitive
    }

    // footer_options->widgets_area_padding
    cJSON *widgets_area_padding = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "widgetsAreaPadding");
    if (widgets_area_padding) { 
    widgets_area_padding_local_nonprim = padding_parseFromJSON(widgets_area_padding); //nonprimitive
    }

    // footer_options->footer_area_padding
    cJSON *footer_area_padding = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "footerAreaPadding");
    if (footer_area_padding) { 
    footer_area_padding_local_nonprim = padding_parseFromJSON(footer_area_padding); //nonprimitive
    }

    // footer_options->footer_background
    cJSON *footer_background = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "footerBackground");
    if (footer_background) { 
    footer_background_local_nonprim = background_parseFromJSON(footer_background); //nonprimitive
    }

    // footer_options->copyright_background
    cJSON *copyright_background = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "copyrightBackground");
    if (copyright_background) { 
    copyright_background_local_nonprim = background_parseFromJSON(copyright_background); //nonprimitive
    }

    // footer_options->headings_typography
    cJSON *headings_typography = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "headingsTypography");
    if (headings_typography) { 
    headings_typography_local_nonprim = typography_parseFromJSON(headings_typography); //nonprimitive
    }

    // footer_options->widgets_typography
    cJSON *widgets_typography = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "widgetsTypography");
    if (widgets_typography) { 
    widgets_typography_local_nonprim = typography_parseFromJSON(widgets_typography); //nonprimitive
    }

    // footer_options->copyright_typography
    cJSON *copyright_typography = cJSON_GetObjectItemCaseSensitive(footer_optionsJSON, "copyrightTypography");
    if (copyright_typography) { 
    copyright_typography_local_nonprim = typography_parseFromJSON(copyright_typography); //nonprimitive
    }


    footer_options_local_var = footer_options_create (
        number_of_columns ? number_of_columns->valuedouble : 0,
        enable_widgets ? enable_widgets->valueint : 0,
        enable_copyright_bar ? enable_copyright_bar->valueint : 0,
        center_widgets_content ? center_widgets_content->valueint : 0,
        center_copyright_content ? center_copyright_content->valueint : 0,
        enable_vertical_widget_divider_line ? enable_vertical_widget_divider_line->valueint : 0,
        vertical_widget_divider_line_size ? vertical_widget_divider_line_size->valuedouble : 0,
        copyright_text && !cJSON_IsNull(copyright_text) ? strdup(copyright_text->valuestring) : NULL,
        copyright_background_color && !cJSON_IsNull(copyright_background_color) ? strdup(copyright_background_color->valuestring) : NULL,
        border_size ? border_size->valuedouble : 0,
        border_color && !cJSON_IsNull(border_color) ? strdup(border_color->valuestring) : NULL,
        widget_divider_color && !cJSON_IsNull(widget_divider_color) ? strdup(widget_divider_color->valuestring) : NULL,
        widget_divider ? widget_dividerVariable : contentservice_footer_options_WIDGETDIVIDER_NULL,
        copyright_padding ? copyright_padding_local_nonprim : NULL,
        widgets_area_padding ? widgets_area_padding_local_nonprim : NULL,
        footer_area_padding ? footer_area_padding_local_nonprim : NULL,
        footer_background ? footer_background_local_nonprim : NULL,
        copyright_background ? copyright_background_local_nonprim : NULL,
        headings_typography ? headings_typography_local_nonprim : NULL,
        widgets_typography ? widgets_typography_local_nonprim : NULL,
        copyright_typography ? copyright_typography_local_nonprim : NULL
        );

    return footer_options_local_var;
end:
    if (copyright_padding_local_nonprim) {
        padding_free(copyright_padding_local_nonprim);
        copyright_padding_local_nonprim = NULL;
    }
    if (widgets_area_padding_local_nonprim) {
        padding_free(widgets_area_padding_local_nonprim);
        widgets_area_padding_local_nonprim = NULL;
    }
    if (footer_area_padding_local_nonprim) {
        padding_free(footer_area_padding_local_nonprim);
        footer_area_padding_local_nonprim = NULL;
    }
    if (footer_background_local_nonprim) {
        background_free(footer_background_local_nonprim);
        footer_background_local_nonprim = NULL;
    }
    if (copyright_background_local_nonprim) {
        background_free(copyright_background_local_nonprim);
        copyright_background_local_nonprim = NULL;
    }
    if (headings_typography_local_nonprim) {
        typography_free(headings_typography_local_nonprim);
        headings_typography_local_nonprim = NULL;
    }
    if (widgets_typography_local_nonprim) {
        typography_free(widgets_typography_local_nonprim);
        widgets_typography_local_nonprim = NULL;
    }
    if (copyright_typography_local_nonprim) {
        typography_free(copyright_typography_local_nonprim);
        copyright_typography_local_nonprim = NULL;
    }
    return NULL;

}
