#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_options.h"



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
    ) {
    branding_options_t *branding_options_local_var = malloc(sizeof(branding_options_t));
    if (!branding_options_local_var) {
        return NULL;
    }
    branding_options_local_var->default_lang = default_lang;
    branding_options_local_var->primary_color = primary_color;
    branding_options_local_var->secondary_color = secondary_color;
    branding_options_local_var->header_logo = header_logo;
    branding_options_local_var->footer_logo = footer_logo;
    branding_options_local_var->favicons = favicons;
    branding_options_local_var->apple_icon = apple_icon;
    branding_options_local_var->ms_app_tile = ms_app_tile;
    branding_options_local_var->dashboard = dashboard;
    branding_options_local_var->studio = studio;

    return branding_options_local_var;
}


void branding_options_free(branding_options_t *branding_options) {
    if(NULL == branding_options){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_options->default_lang) {
        free(branding_options->default_lang);
        branding_options->default_lang = NULL;
    }
    if (branding_options->primary_color) {
        free(branding_options->primary_color);
        branding_options->primary_color = NULL;
    }
    if (branding_options->secondary_color) {
        free(branding_options->secondary_color);
        branding_options->secondary_color = NULL;
    }
    if (branding_options->header_logo) {
        logo_free(branding_options->header_logo);
        branding_options->header_logo = NULL;
    }
    if (branding_options->footer_logo) {
        logo_free(branding_options->footer_logo);
        branding_options->footer_logo = NULL;
    }
    if (branding_options->favicons) {
        favicons_free(branding_options->favicons);
        branding_options->favicons = NULL;
    }
    if (branding_options->apple_icon) {
        apple_icons_free(branding_options->apple_icon);
        branding_options->apple_icon = NULL;
    }
    if (branding_options->ms_app_tile) {
        ms_app_tile_free(branding_options->ms_app_tile);
        branding_options->ms_app_tile = NULL;
    }
    if (branding_options->dashboard) {
        dashboard_options_free(branding_options->dashboard);
        branding_options->dashboard = NULL;
    }
    if (branding_options->studio) {
        studio_options_free(branding_options->studio);
        branding_options->studio = NULL;
    }
    free(branding_options);
}

cJSON *branding_options_convertToJSON(branding_options_t *branding_options) {
    cJSON *item = cJSON_CreateObject();

    // branding_options->default_lang
    if(branding_options->default_lang) {
    if(cJSON_AddStringToObject(item, "defaultLang", branding_options->default_lang) == NULL) {
    goto fail; //String
    }
    }


    // branding_options->primary_color
    if(branding_options->primary_color) {
    if(cJSON_AddStringToObject(item, "primaryColor", branding_options->primary_color) == NULL) {
    goto fail; //String
    }
    }


    // branding_options->secondary_color
    if(branding_options->secondary_color) {
    if(cJSON_AddStringToObject(item, "secondaryColor", branding_options->secondary_color) == NULL) {
    goto fail; //String
    }
    }


    // branding_options->header_logo
    if(branding_options->header_logo) {
    cJSON *header_logo_local_JSON = logo_convertToJSON(branding_options->header_logo);
    if(header_logo_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "headerLogo", header_logo_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_options->footer_logo
    if(branding_options->footer_logo) {
    cJSON *footer_logo_local_JSON = logo_convertToJSON(branding_options->footer_logo);
    if(footer_logo_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "footerLogo", footer_logo_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_options->favicons
    if(branding_options->favicons) {
    cJSON *favicons_local_JSON = favicons_convertToJSON(branding_options->favicons);
    if(favicons_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "favicons", favicons_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_options->apple_icon
    if(branding_options->apple_icon) {
    cJSON *apple_icon_local_JSON = apple_icons_convertToJSON(branding_options->apple_icon);
    if(apple_icon_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "appleIcon", apple_icon_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_options->ms_app_tile
    if(branding_options->ms_app_tile) {
    cJSON *ms_app_tile_local_JSON = ms_app_tile_convertToJSON(branding_options->ms_app_tile);
    if(ms_app_tile_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "msAppTile", ms_app_tile_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_options->dashboard
    if(branding_options->dashboard) {
    cJSON *dashboard_local_JSON = dashboard_options_convertToJSON(branding_options->dashboard);
    if(dashboard_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dashboard", dashboard_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_options->studio
    if(branding_options->studio) {
    cJSON *studio_local_JSON = studio_options_convertToJSON(branding_options->studio);
    if(studio_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "studio", studio_local_JSON);
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

branding_options_t *branding_options_parseFromJSON(cJSON *branding_optionsJSON){

    branding_options_t *branding_options_local_var = NULL;

    // define the local variable for branding_options->header_logo
    logo_t *header_logo_local_nonprim = NULL;

    // define the local variable for branding_options->footer_logo
    logo_t *footer_logo_local_nonprim = NULL;

    // define the local variable for branding_options->favicons
    favicons_t *favicons_local_nonprim = NULL;

    // define the local variable for branding_options->apple_icon
    apple_icons_t *apple_icon_local_nonprim = NULL;

    // define the local variable for branding_options->ms_app_tile
    ms_app_tile_t *ms_app_tile_local_nonprim = NULL;

    // define the local variable for branding_options->dashboard
    dashboard_options_t *dashboard_local_nonprim = NULL;

    // define the local variable for branding_options->studio
    studio_options_t *studio_local_nonprim = NULL;

    // branding_options->default_lang
    cJSON *default_lang = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "defaultLang");
    if (default_lang) { 
    if(!cJSON_IsString(default_lang) && !cJSON_IsNull(default_lang))
    {
    goto end; //String
    }
    }

    // branding_options->primary_color
    cJSON *primary_color = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "primaryColor");
    if (primary_color) { 
    if(!cJSON_IsString(primary_color) && !cJSON_IsNull(primary_color))
    {
    goto end; //String
    }
    }

    // branding_options->secondary_color
    cJSON *secondary_color = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "secondaryColor");
    if (secondary_color) { 
    if(!cJSON_IsString(secondary_color) && !cJSON_IsNull(secondary_color))
    {
    goto end; //String
    }
    }

    // branding_options->header_logo
    cJSON *header_logo = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "headerLogo");
    if (header_logo) { 
    header_logo_local_nonprim = logo_parseFromJSON(header_logo); //nonprimitive
    }

    // branding_options->footer_logo
    cJSON *footer_logo = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "footerLogo");
    if (footer_logo) { 
    footer_logo_local_nonprim = logo_parseFromJSON(footer_logo); //nonprimitive
    }

    // branding_options->favicons
    cJSON *favicons = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "favicons");
    if (favicons) { 
    favicons_local_nonprim = favicons_parseFromJSON(favicons); //nonprimitive
    }

    // branding_options->apple_icon
    cJSON *apple_icon = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "appleIcon");
    if (apple_icon) { 
    apple_icon_local_nonprim = apple_icons_parseFromJSON(apple_icon); //nonprimitive
    }

    // branding_options->ms_app_tile
    cJSON *ms_app_tile = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "msAppTile");
    if (ms_app_tile) { 
    ms_app_tile_local_nonprim = ms_app_tile_parseFromJSON(ms_app_tile); //nonprimitive
    }

    // branding_options->dashboard
    cJSON *dashboard = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "dashboard");
    if (dashboard) { 
    dashboard_local_nonprim = dashboard_options_parseFromJSON(dashboard); //nonprimitive
    }

    // branding_options->studio
    cJSON *studio = cJSON_GetObjectItemCaseSensitive(branding_optionsJSON, "studio");
    if (studio) { 
    studio_local_nonprim = studio_options_parseFromJSON(studio); //nonprimitive
    }


    branding_options_local_var = branding_options_create (
        default_lang && !cJSON_IsNull(default_lang) ? strdup(default_lang->valuestring) : NULL,
        primary_color && !cJSON_IsNull(primary_color) ? strdup(primary_color->valuestring) : NULL,
        secondary_color && !cJSON_IsNull(secondary_color) ? strdup(secondary_color->valuestring) : NULL,
        header_logo ? header_logo_local_nonprim : NULL,
        footer_logo ? footer_logo_local_nonprim : NULL,
        favicons ? favicons_local_nonprim : NULL,
        apple_icon ? apple_icon_local_nonprim : NULL,
        ms_app_tile ? ms_app_tile_local_nonprim : NULL,
        dashboard ? dashboard_local_nonprim : NULL,
        studio ? studio_local_nonprim : NULL
        );

    return branding_options_local_var;
end:
    if (header_logo_local_nonprim) {
        logo_free(header_logo_local_nonprim);
        header_logo_local_nonprim = NULL;
    }
    if (footer_logo_local_nonprim) {
        logo_free(footer_logo_local_nonprim);
        footer_logo_local_nonprim = NULL;
    }
    if (favicons_local_nonprim) {
        favicons_free(favicons_local_nonprim);
        favicons_local_nonprim = NULL;
    }
    if (apple_icon_local_nonprim) {
        apple_icons_free(apple_icon_local_nonprim);
        apple_icon_local_nonprim = NULL;
    }
    if (ms_app_tile_local_nonprim) {
        ms_app_tile_free(ms_app_tile_local_nonprim);
        ms_app_tile_local_nonprim = NULL;
    }
    if (dashboard_local_nonprim) {
        dashboard_options_free(dashboard_local_nonprim);
        dashboard_local_nonprim = NULL;
    }
    if (studio_local_nonprim) {
        studio_options_free(studio_local_nonprim);
        studio_local_nonprim = NULL;
    }
    return NULL;

}
