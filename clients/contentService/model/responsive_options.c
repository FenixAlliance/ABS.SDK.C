#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "responsive_options.h"



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
    ) {
    responsive_options_t *responsive_options_local_var = malloc(sizeof(responsive_options_t));
    if (!responsive_options_local_var) {
        return NULL;
    }
    responsive_options_local_var->enable_responsive = enable_responsive;
    responsive_options_local_var->enable_mobile_zoom = enable_mobile_zoom;
    responsive_options_local_var->grid_responsive_breakpoint = grid_responsive_breakpoint;
    responsive_options_local_var->header_responsive_breakpoint = header_responsive_breakpoint;
    responsive_options_local_var->content_responsive_breakpoint = content_responsive_breakpoint;
    responsive_options_local_var->sidebar_responsive_breakpoint = sidebar_responsive_breakpoint;
    responsive_options_local_var->element_responsive_breakpoint_sm = element_responsive_breakpoint_sm;
    responsive_options_local_var->element_responsive_breakpoint_md = element_responsive_breakpoint_md;
    responsive_options_local_var->element_responsive_breakpoint_lg = element_responsive_breakpoint_lg;
    responsive_options_local_var->responsive_min_font_size_factor = responsive_min_font_size_factor;
    responsive_options_local_var->typography_responsive_sensitivity = typography_responsive_sensitivity;

    return responsive_options_local_var;
}


void responsive_options_free(responsive_options_t *responsive_options) {
    if(NULL == responsive_options){
        return ;
    }
    listEntry_t *listEntry;
    free(responsive_options);
}

cJSON *responsive_options_convertToJSON(responsive_options_t *responsive_options) {
    cJSON *item = cJSON_CreateObject();

    // responsive_options->enable_responsive
    if(responsive_options->enable_responsive) {
    if(cJSON_AddBoolToObject(item, "enableResponsive", responsive_options->enable_responsive) == NULL) {
    goto fail; //Bool
    }
    }


    // responsive_options->enable_mobile_zoom
    if(responsive_options->enable_mobile_zoom) {
    if(cJSON_AddBoolToObject(item, "enableMobileZoom", responsive_options->enable_mobile_zoom) == NULL) {
    goto fail; //Bool
    }
    }


    // responsive_options->grid_responsive_breakpoint
    if(responsive_options->grid_responsive_breakpoint) {
    if(cJSON_AddBoolToObject(item, "gridResponsiveBreakpoint", responsive_options->grid_responsive_breakpoint) == NULL) {
    goto fail; //Bool
    }
    }


    // responsive_options->header_responsive_breakpoint
    if(responsive_options->header_responsive_breakpoint) {
    if(cJSON_AddBoolToObject(item, "headerResponsiveBreakpoint", responsive_options->header_responsive_breakpoint) == NULL) {
    goto fail; //Bool
    }
    }


    // responsive_options->content_responsive_breakpoint
    if(responsive_options->content_responsive_breakpoint) {
    if(cJSON_AddBoolToObject(item, "contentResponsiveBreakpoint", responsive_options->content_responsive_breakpoint) == NULL) {
    goto fail; //Bool
    }
    }


    // responsive_options->sidebar_responsive_breakpoint
    if(responsive_options->sidebar_responsive_breakpoint) {
    if(cJSON_AddBoolToObject(item, "sidebarResponsiveBreakpoint", responsive_options->sidebar_responsive_breakpoint) == NULL) {
    goto fail; //Bool
    }
    }


    // responsive_options->element_responsive_breakpoint_sm
    if(responsive_options->element_responsive_breakpoint_sm) {
    if(cJSON_AddNumberToObject(item, "elementResponsiveBreakpointSm", responsive_options->element_responsive_breakpoint_sm) == NULL) {
    goto fail; //Numeric
    }
    }


    // responsive_options->element_responsive_breakpoint_md
    if(responsive_options->element_responsive_breakpoint_md) {
    if(cJSON_AddNumberToObject(item, "elementResponsiveBreakpointMd", responsive_options->element_responsive_breakpoint_md) == NULL) {
    goto fail; //Numeric
    }
    }


    // responsive_options->element_responsive_breakpoint_lg
    if(responsive_options->element_responsive_breakpoint_lg) {
    if(cJSON_AddNumberToObject(item, "elementResponsiveBreakpointLg", responsive_options->element_responsive_breakpoint_lg) == NULL) {
    goto fail; //Numeric
    }
    }


    // responsive_options->responsive_min_font_size_factor
    if(responsive_options->responsive_min_font_size_factor) {
    if(cJSON_AddNumberToObject(item, "responsiveMinFontSizeFactor", responsive_options->responsive_min_font_size_factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // responsive_options->typography_responsive_sensitivity
    if(responsive_options->typography_responsive_sensitivity) {
    if(cJSON_AddNumberToObject(item, "typographyResponsiveSensitivity", responsive_options->typography_responsive_sensitivity) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

responsive_options_t *responsive_options_parseFromJSON(cJSON *responsive_optionsJSON){

    responsive_options_t *responsive_options_local_var = NULL;

    // responsive_options->enable_responsive
    cJSON *enable_responsive = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "enableResponsive");
    if (enable_responsive) { 
    if(!cJSON_IsBool(enable_responsive))
    {
    goto end; //Bool
    }
    }

    // responsive_options->enable_mobile_zoom
    cJSON *enable_mobile_zoom = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "enableMobileZoom");
    if (enable_mobile_zoom) { 
    if(!cJSON_IsBool(enable_mobile_zoom))
    {
    goto end; //Bool
    }
    }

    // responsive_options->grid_responsive_breakpoint
    cJSON *grid_responsive_breakpoint = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "gridResponsiveBreakpoint");
    if (grid_responsive_breakpoint) { 
    if(!cJSON_IsBool(grid_responsive_breakpoint))
    {
    goto end; //Bool
    }
    }

    // responsive_options->header_responsive_breakpoint
    cJSON *header_responsive_breakpoint = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "headerResponsiveBreakpoint");
    if (header_responsive_breakpoint) { 
    if(!cJSON_IsBool(header_responsive_breakpoint))
    {
    goto end; //Bool
    }
    }

    // responsive_options->content_responsive_breakpoint
    cJSON *content_responsive_breakpoint = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "contentResponsiveBreakpoint");
    if (content_responsive_breakpoint) { 
    if(!cJSON_IsBool(content_responsive_breakpoint))
    {
    goto end; //Bool
    }
    }

    // responsive_options->sidebar_responsive_breakpoint
    cJSON *sidebar_responsive_breakpoint = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "sidebarResponsiveBreakpoint");
    if (sidebar_responsive_breakpoint) { 
    if(!cJSON_IsBool(sidebar_responsive_breakpoint))
    {
    goto end; //Bool
    }
    }

    // responsive_options->element_responsive_breakpoint_sm
    cJSON *element_responsive_breakpoint_sm = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "elementResponsiveBreakpointSm");
    if (element_responsive_breakpoint_sm) { 
    if(!cJSON_IsNumber(element_responsive_breakpoint_sm))
    {
    goto end; //Numeric
    }
    }

    // responsive_options->element_responsive_breakpoint_md
    cJSON *element_responsive_breakpoint_md = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "elementResponsiveBreakpointMd");
    if (element_responsive_breakpoint_md) { 
    if(!cJSON_IsNumber(element_responsive_breakpoint_md))
    {
    goto end; //Numeric
    }
    }

    // responsive_options->element_responsive_breakpoint_lg
    cJSON *element_responsive_breakpoint_lg = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "elementResponsiveBreakpointLg");
    if (element_responsive_breakpoint_lg) { 
    if(!cJSON_IsNumber(element_responsive_breakpoint_lg))
    {
    goto end; //Numeric
    }
    }

    // responsive_options->responsive_min_font_size_factor
    cJSON *responsive_min_font_size_factor = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "responsiveMinFontSizeFactor");
    if (responsive_min_font_size_factor) { 
    if(!cJSON_IsNumber(responsive_min_font_size_factor))
    {
    goto end; //Numeric
    }
    }

    // responsive_options->typography_responsive_sensitivity
    cJSON *typography_responsive_sensitivity = cJSON_GetObjectItemCaseSensitive(responsive_optionsJSON, "typographyResponsiveSensitivity");
    if (typography_responsive_sensitivity) { 
    if(!cJSON_IsNumber(typography_responsive_sensitivity))
    {
    goto end; //Numeric
    }
    }


    responsive_options_local_var = responsive_options_create (
        enable_responsive ? enable_responsive->valueint : 0,
        enable_mobile_zoom ? enable_mobile_zoom->valueint : 0,
        grid_responsive_breakpoint ? grid_responsive_breakpoint->valueint : 0,
        header_responsive_breakpoint ? header_responsive_breakpoint->valueint : 0,
        content_responsive_breakpoint ? content_responsive_breakpoint->valueint : 0,
        sidebar_responsive_breakpoint ? sidebar_responsive_breakpoint->valueint : 0,
        element_responsive_breakpoint_sm ? element_responsive_breakpoint_sm->valuedouble : 0,
        element_responsive_breakpoint_md ? element_responsive_breakpoint_md->valuedouble : 0,
        element_responsive_breakpoint_lg ? element_responsive_breakpoint_lg->valuedouble : 0,
        responsive_min_font_size_factor ? responsive_min_font_size_factor->valuedouble : 0,
        typography_responsive_sensitivity ? typography_responsive_sensitivity->valuedouble : 0
        );

    return responsive_options_local_var;
end:
    return NULL;

}
