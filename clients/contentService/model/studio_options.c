#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "studio_options.h"



studio_options_t *studio_options_create(
    char *logo,
    char *logo_dark,
    char *icon,
    char *icon_dark,
    char *favicon,
    char *logo_mobile,
    char *logo_mobile_dark
    ) {
    studio_options_t *studio_options_local_var = malloc(sizeof(studio_options_t));
    if (!studio_options_local_var) {
        return NULL;
    }
    studio_options_local_var->logo = logo;
    studio_options_local_var->logo_dark = logo_dark;
    studio_options_local_var->icon = icon;
    studio_options_local_var->icon_dark = icon_dark;
    studio_options_local_var->favicon = favicon;
    studio_options_local_var->logo_mobile = logo_mobile;
    studio_options_local_var->logo_mobile_dark = logo_mobile_dark;

    return studio_options_local_var;
}


void studio_options_free(studio_options_t *studio_options) {
    if(NULL == studio_options){
        return ;
    }
    listEntry_t *listEntry;
    if (studio_options->logo) {
        free(studio_options->logo);
        studio_options->logo = NULL;
    }
    if (studio_options->logo_dark) {
        free(studio_options->logo_dark);
        studio_options->logo_dark = NULL;
    }
    if (studio_options->icon) {
        free(studio_options->icon);
        studio_options->icon = NULL;
    }
    if (studio_options->icon_dark) {
        free(studio_options->icon_dark);
        studio_options->icon_dark = NULL;
    }
    if (studio_options->favicon) {
        free(studio_options->favicon);
        studio_options->favicon = NULL;
    }
    if (studio_options->logo_mobile) {
        free(studio_options->logo_mobile);
        studio_options->logo_mobile = NULL;
    }
    if (studio_options->logo_mobile_dark) {
        free(studio_options->logo_mobile_dark);
        studio_options->logo_mobile_dark = NULL;
    }
    free(studio_options);
}

cJSON *studio_options_convertToJSON(studio_options_t *studio_options) {
    cJSON *item = cJSON_CreateObject();

    // studio_options->logo
    if(studio_options->logo) {
    if(cJSON_AddStringToObject(item, "logo", studio_options->logo) == NULL) {
    goto fail; //String
    }
    }


    // studio_options->logo_dark
    if(studio_options->logo_dark) {
    if(cJSON_AddStringToObject(item, "logoDark", studio_options->logo_dark) == NULL) {
    goto fail; //String
    }
    }


    // studio_options->icon
    if(studio_options->icon) {
    if(cJSON_AddStringToObject(item, "icon", studio_options->icon) == NULL) {
    goto fail; //String
    }
    }


    // studio_options->icon_dark
    if(studio_options->icon_dark) {
    if(cJSON_AddStringToObject(item, "iconDark", studio_options->icon_dark) == NULL) {
    goto fail; //String
    }
    }


    // studio_options->favicon
    if(studio_options->favicon) {
    if(cJSON_AddStringToObject(item, "favicon", studio_options->favicon) == NULL) {
    goto fail; //String
    }
    }


    // studio_options->logo_mobile
    if(studio_options->logo_mobile) {
    if(cJSON_AddStringToObject(item, "logoMobile", studio_options->logo_mobile) == NULL) {
    goto fail; //String
    }
    }


    // studio_options->logo_mobile_dark
    if(studio_options->logo_mobile_dark) {
    if(cJSON_AddStringToObject(item, "logoMobileDark", studio_options->logo_mobile_dark) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

studio_options_t *studio_options_parseFromJSON(cJSON *studio_optionsJSON){

    studio_options_t *studio_options_local_var = NULL;

    // studio_options->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // studio_options->logo_dark
    cJSON *logo_dark = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "logoDark");
    if (logo_dark) { 
    if(!cJSON_IsString(logo_dark) && !cJSON_IsNull(logo_dark))
    {
    goto end; //String
    }
    }

    // studio_options->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // studio_options->icon_dark
    cJSON *icon_dark = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "iconDark");
    if (icon_dark) { 
    if(!cJSON_IsString(icon_dark) && !cJSON_IsNull(icon_dark))
    {
    goto end; //String
    }
    }

    // studio_options->favicon
    cJSON *favicon = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "favicon");
    if (favicon) { 
    if(!cJSON_IsString(favicon) && !cJSON_IsNull(favicon))
    {
    goto end; //String
    }
    }

    // studio_options->logo_mobile
    cJSON *logo_mobile = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "logoMobile");
    if (logo_mobile) { 
    if(!cJSON_IsString(logo_mobile) && !cJSON_IsNull(logo_mobile))
    {
    goto end; //String
    }
    }

    // studio_options->logo_mobile_dark
    cJSON *logo_mobile_dark = cJSON_GetObjectItemCaseSensitive(studio_optionsJSON, "logoMobileDark");
    if (logo_mobile_dark) { 
    if(!cJSON_IsString(logo_mobile_dark) && !cJSON_IsNull(logo_mobile_dark))
    {
    goto end; //String
    }
    }


    studio_options_local_var = studio_options_create (
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        logo_dark && !cJSON_IsNull(logo_dark) ? strdup(logo_dark->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_dark && !cJSON_IsNull(icon_dark) ? strdup(icon_dark->valuestring) : NULL,
        favicon && !cJSON_IsNull(favicon) ? strdup(favicon->valuestring) : NULL,
        logo_mobile && !cJSON_IsNull(logo_mobile) ? strdup(logo_mobile->valuestring) : NULL,
        logo_mobile_dark && !cJSON_IsNull(logo_mobile_dark) ? strdup(logo_mobile_dark->valuestring) : NULL
        );

    return studio_options_local_var;
end:
    return NULL;

}
