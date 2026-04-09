#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "background.h"


char* background_bg_repeat_ToString(contentservice_background_BGREPEAT_e bg_repeat) {
    char* bg_repeatArray[] =  { "NULL", "All", "Horizontally", "Vertically", "NoRepeat" };
    return bg_repeatArray[bg_repeat];
}

contentservice_background_BGREPEAT_e background_bg_repeat_FromString(char* bg_repeat){
    int stringToReturn = 0;
    char *bg_repeatArray[] =  { "NULL", "All", "Horizontally", "Vertically", "NoRepeat" };
    size_t sizeofArray = sizeof(bg_repeatArray) / sizeof(bg_repeatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(bg_repeat, bg_repeatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* background_bg_position_ToString(contentservice_background_BGPOSITION_e bg_position) {
    char* bg_positionArray[] =  { "NULL", "TopLeft", "TopRight", "TopCenter", "CenterLeft", "CenterRight", "CenterCenter", "BottomLeft", "BottomRight", "BottomCenter" };
    return bg_positionArray[bg_position];
}

contentservice_background_BGPOSITION_e background_bg_position_FromString(char* bg_position){
    int stringToReturn = 0;
    char *bg_positionArray[] =  { "NULL", "TopLeft", "TopRight", "TopCenter", "CenterLeft", "CenterRight", "CenterCenter", "BottomLeft", "BottomRight", "BottomCenter" };
    size_t sizeofArray = sizeof(bg_positionArray) / sizeof(bg_positionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(bg_position, bg_positionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

background_t *background_create(
    contentservice_background_BGREPEAT_e bg_repeat,
    contentservice_background_BGPOSITION_e bg_position,
    char *background_color,
    char *background_image_url,
    int enable_full_width_background_image
    ) {
    background_t *background_local_var = malloc(sizeof(background_t));
    if (!background_local_var) {
        return NULL;
    }
    background_local_var->bg_repeat = bg_repeat;
    background_local_var->bg_position = bg_position;
    background_local_var->background_color = background_color;
    background_local_var->background_image_url = background_image_url;
    background_local_var->enable_full_width_background_image = enable_full_width_background_image;

    return background_local_var;
}


void background_free(background_t *background) {
    if(NULL == background){
        return ;
    }
    listEntry_t *listEntry;
    if (background->background_color) {
        free(background->background_color);
        background->background_color = NULL;
    }
    if (background->background_image_url) {
        free(background->background_image_url);
        background->background_image_url = NULL;
    }
    free(background);
}

cJSON *background_convertToJSON(background_t *background) {
    cJSON *item = cJSON_CreateObject();

    // background->bg_repeat
    if(background->bg_repeat != contentservice_background_BGREPEAT_NULL) {
    if(cJSON_AddStringToObject(item, "bgRepeat", bg_repeatbackground_ToString(background->bg_repeat)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // background->bg_position
    if(background->bg_position != contentservice_background_BGPOSITION_NULL) {
    if(cJSON_AddStringToObject(item, "bgPosition", bg_positionbackground_ToString(background->bg_position)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // background->background_color
    if(background->background_color) {
    if(cJSON_AddStringToObject(item, "backgroundColor", background->background_color) == NULL) {
    goto fail; //String
    }
    }


    // background->background_image_url
    if(background->background_image_url) {
    if(cJSON_AddStringToObject(item, "backgroundImageUrl", background->background_image_url) == NULL) {
    goto fail; //String
    }
    }


    // background->enable_full_width_background_image
    if(background->enable_full_width_background_image) {
    if(cJSON_AddBoolToObject(item, "enableFullWidthBackgroundImage", background->enable_full_width_background_image) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

background_t *background_parseFromJSON(cJSON *backgroundJSON){

    background_t *background_local_var = NULL;

    // background->bg_repeat
    cJSON *bg_repeat = cJSON_GetObjectItemCaseSensitive(backgroundJSON, "bgRepeat");
    contentservice_background_BGREPEAT_e bg_repeatVariable;
    if (bg_repeat) { 
    if(!cJSON_IsString(bg_repeat))
    {
    goto end; //Enum
    }
    bg_repeatVariable = background_bg_repeat_FromString(bg_repeat->valuestring);
    }

    // background->bg_position
    cJSON *bg_position = cJSON_GetObjectItemCaseSensitive(backgroundJSON, "bgPosition");
    contentservice_background_BGPOSITION_e bg_positionVariable;
    if (bg_position) { 
    if(!cJSON_IsString(bg_position))
    {
    goto end; //Enum
    }
    bg_positionVariable = background_bg_position_FromString(bg_position->valuestring);
    }

    // background->background_color
    cJSON *background_color = cJSON_GetObjectItemCaseSensitive(backgroundJSON, "backgroundColor");
    if (background_color) { 
    if(!cJSON_IsString(background_color) && !cJSON_IsNull(background_color))
    {
    goto end; //String
    }
    }

    // background->background_image_url
    cJSON *background_image_url = cJSON_GetObjectItemCaseSensitive(backgroundJSON, "backgroundImageUrl");
    if (background_image_url) { 
    if(!cJSON_IsString(background_image_url) && !cJSON_IsNull(background_image_url))
    {
    goto end; //String
    }
    }

    // background->enable_full_width_background_image
    cJSON *enable_full_width_background_image = cJSON_GetObjectItemCaseSensitive(backgroundJSON, "enableFullWidthBackgroundImage");
    if (enable_full_width_background_image) { 
    if(!cJSON_IsBool(enable_full_width_background_image))
    {
    goto end; //Bool
    }
    }


    background_local_var = background_create (
        bg_repeat ? bg_repeatVariable : contentservice_background_BGREPEAT_NULL,
        bg_position ? bg_positionVariable : contentservice_background_BGPOSITION_NULL,
        background_color && !cJSON_IsNull(background_color) ? strdup(background_color->valuestring) : NULL,
        background_image_url && !cJSON_IsNull(background_image_url) ? strdup(background_image_url->valuestring) : NULL,
        enable_full_width_background_image ? enable_full_width_background_image->valueint : 0
        );

    return background_local_var;
end:
    return NULL;

}
