#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header_options.h"


char* header_options_header_layout_ToString(contentservice_header_options_HEADERLAYOUT_e header_layout) {
    char* header_layoutArray[] =  { "NULL", "_01", "_02", "_03", "_04", "_05", "_06" };
    return header_layoutArray[header_layout];
}

contentservice_header_options_HEADERLAYOUT_e header_options_header_layout_FromString(char* header_layout){
    int stringToReturn = 0;
    char *header_layoutArray[] =  { "NULL", "_01", "_02", "_03", "_04", "_05", "_06" };
    size_t sizeofArray = sizeof(header_layoutArray) / sizeof(header_layoutArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(header_layout, header_layoutArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* header_options_header_position_ToString(contentservice_header_options_HEADERPOSITION_e header_position) {
    char* header_positionArray[] =  { "NULL", "Top", "Right", "Center" };
    return header_positionArray[header_position];
}

contentservice_header_options_HEADERPOSITION_e header_options_header_position_FromString(char* header_position){
    int stringToReturn = 0;
    char *header_positionArray[] =  { "NULL", "Top", "Right", "Center" };
    size_t sizeofArray = sizeof(header_positionArray) / sizeof(header_positionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(header_position, header_positionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* header_options_top_header_content_type2_ToString(contentservice_header_options_TOPHEADERCONTENTTYPE2_e top_header_content_type2) {
    char* top_header_content_type2Array[] =  { "NULL", "NavigationMenu", "AccountMenu", "ContactInfo", "SocialLinks", "LeaveEmpty" };
    return top_header_content_type2Array[top_header_content_type2];
}

contentservice_header_options_TOPHEADERCONTENTTYPE2_e header_options_top_header_content_type2_FromString(char* top_header_content_type2){
    int stringToReturn = 0;
    char *top_header_content_type2Array[] =  { "NULL", "NavigationMenu", "AccountMenu", "ContactInfo", "SocialLinks", "LeaveEmpty" };
    size_t sizeofArray = sizeof(top_header_content_type2Array) / sizeof(top_header_content_type2Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(top_header_content_type2, top_header_content_type2Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* header_options_top_header_content_type1_ToString(contentservice_header_options_TOPHEADERCONTENTTYPE1_e top_header_content_type1) {
    char* top_header_content_type1Array[] =  { "NULL", "NavigationMenu", "AccountMenu", "ContactInfo", "SocialLinks", "LeaveEmpty" };
    return top_header_content_type1Array[top_header_content_type1];
}

contentservice_header_options_TOPHEADERCONTENTTYPE1_e header_options_top_header_content_type1_FromString(char* top_header_content_type1){
    int stringToReturn = 0;
    char *top_header_content_type1Array[] =  { "NULL", "NavigationMenu", "AccountMenu", "ContactInfo", "SocialLinks", "LeaveEmpty" };
    size_t sizeofArray = sizeof(top_header_content_type1Array) / sizeof(top_header_content_type1Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(top_header_content_type1, top_header_content_type1Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

header_options_t *header_options_create(
    padding_t *header_padding,
    char *header_background_image_url,
    char *header_background_color,
    char *header_border_color,
    int enable_sticky_header,
    int enable_header_shadow,
    int enable_full_width_header,
    contentservice_header_options_HEADERLAYOUT_e header_layout,
    contentservice_header_options_HEADERPOSITION_e header_position,
    contentservice_header_options_TOPHEADERCONTENTTYPE2_e top_header_content_type2,
    contentservice_header_options_TOPHEADERCONTENTTYPE1_e top_header_content_type1,
    char *top_header_background_color,
    char *top_header_content1,
    char *top_header_content2
    ) {
    header_options_t *header_options_local_var = malloc(sizeof(header_options_t));
    if (!header_options_local_var) {
        return NULL;
    }
    header_options_local_var->header_padding = header_padding;
    header_options_local_var->header_background_image_url = header_background_image_url;
    header_options_local_var->header_background_color = header_background_color;
    header_options_local_var->header_border_color = header_border_color;
    header_options_local_var->enable_sticky_header = enable_sticky_header;
    header_options_local_var->enable_header_shadow = enable_header_shadow;
    header_options_local_var->enable_full_width_header = enable_full_width_header;
    header_options_local_var->header_layout = header_layout;
    header_options_local_var->header_position = header_position;
    header_options_local_var->top_header_content_type2 = top_header_content_type2;
    header_options_local_var->top_header_content_type1 = top_header_content_type1;
    header_options_local_var->top_header_background_color = top_header_background_color;
    header_options_local_var->top_header_content1 = top_header_content1;
    header_options_local_var->top_header_content2 = top_header_content2;

    return header_options_local_var;
}


void header_options_free(header_options_t *header_options) {
    if(NULL == header_options){
        return ;
    }
    listEntry_t *listEntry;
    if (header_options->header_padding) {
        padding_free(header_options->header_padding);
        header_options->header_padding = NULL;
    }
    if (header_options->header_background_image_url) {
        free(header_options->header_background_image_url);
        header_options->header_background_image_url = NULL;
    }
    if (header_options->header_background_color) {
        free(header_options->header_background_color);
        header_options->header_background_color = NULL;
    }
    if (header_options->header_border_color) {
        free(header_options->header_border_color);
        header_options->header_border_color = NULL;
    }
    if (header_options->top_header_background_color) {
        free(header_options->top_header_background_color);
        header_options->top_header_background_color = NULL;
    }
    if (header_options->top_header_content1) {
        free(header_options->top_header_content1);
        header_options->top_header_content1 = NULL;
    }
    if (header_options->top_header_content2) {
        free(header_options->top_header_content2);
        header_options->top_header_content2 = NULL;
    }
    free(header_options);
}

cJSON *header_options_convertToJSON(header_options_t *header_options) {
    cJSON *item = cJSON_CreateObject();

    // header_options->header_padding
    if(header_options->header_padding) {
    cJSON *header_padding_local_JSON = padding_convertToJSON(header_options->header_padding);
    if(header_padding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "headerPadding", header_padding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // header_options->header_background_image_url
    if(header_options->header_background_image_url) {
    if(cJSON_AddStringToObject(item, "headerBackgroundImageURL", header_options->header_background_image_url) == NULL) {
    goto fail; //String
    }
    }


    // header_options->header_background_color
    if(header_options->header_background_color) {
    if(cJSON_AddStringToObject(item, "headerBackgroundColor", header_options->header_background_color) == NULL) {
    goto fail; //String
    }
    }


    // header_options->header_border_color
    if(header_options->header_border_color) {
    if(cJSON_AddStringToObject(item, "headerBorderColor", header_options->header_border_color) == NULL) {
    goto fail; //String
    }
    }


    // header_options->enable_sticky_header
    if(header_options->enable_sticky_header) {
    if(cJSON_AddBoolToObject(item, "enableStickyHeader", header_options->enable_sticky_header) == NULL) {
    goto fail; //Bool
    }
    }


    // header_options->enable_header_shadow
    if(header_options->enable_header_shadow) {
    if(cJSON_AddBoolToObject(item, "enableHeaderShadow", header_options->enable_header_shadow) == NULL) {
    goto fail; //Bool
    }
    }


    // header_options->enable_full_width_header
    if(header_options->enable_full_width_header) {
    if(cJSON_AddBoolToObject(item, "enableFullWidthHeader", header_options->enable_full_width_header) == NULL) {
    goto fail; //Bool
    }
    }


    // header_options->header_layout
    if(header_options->header_layout != contentservice_header_options_HEADERLAYOUT_NULL) {
    if(cJSON_AddStringToObject(item, "headerLayout", header_layoutheader_options_ToString(header_options->header_layout)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // header_options->header_position
    if(header_options->header_position != contentservice_header_options_HEADERPOSITION_NULL) {
    if(cJSON_AddStringToObject(item, "headerPosition", header_positionheader_options_ToString(header_options->header_position)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // header_options->top_header_content_type2
    if(header_options->top_header_content_type2 != contentservice_header_options_TOPHEADERCONTENTTYPE2_NULL) {
    if(cJSON_AddStringToObject(item, "topHeaderContentType2", top_header_content_type2header_options_ToString(header_options->top_header_content_type2)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // header_options->top_header_content_type1
    if(header_options->top_header_content_type1 != contentservice_header_options_TOPHEADERCONTENTTYPE1_NULL) {
    if(cJSON_AddStringToObject(item, "topHeaderContentType1", top_header_content_type1header_options_ToString(header_options->top_header_content_type1)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // header_options->top_header_background_color
    if(header_options->top_header_background_color) {
    if(cJSON_AddStringToObject(item, "topHeaderBackgroundColor", header_options->top_header_background_color) == NULL) {
    goto fail; //String
    }
    }


    // header_options->top_header_content1
    if(header_options->top_header_content1) {
    if(cJSON_AddStringToObject(item, "topHeaderContent1", header_options->top_header_content1) == NULL) {
    goto fail; //String
    }
    }


    // header_options->top_header_content2
    if(header_options->top_header_content2) {
    if(cJSON_AddStringToObject(item, "topHeaderContent2", header_options->top_header_content2) == NULL) {
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

header_options_t *header_options_parseFromJSON(cJSON *header_optionsJSON){

    header_options_t *header_options_local_var = NULL;

    // define the local variable for header_options->header_padding
    padding_t *header_padding_local_nonprim = NULL;

    // header_options->header_padding
    cJSON *header_padding = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "headerPadding");
    if (header_padding) { 
    header_padding_local_nonprim = padding_parseFromJSON(header_padding); //nonprimitive
    }

    // header_options->header_background_image_url
    cJSON *header_background_image_url = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "headerBackgroundImageURL");
    if (header_background_image_url) { 
    if(!cJSON_IsString(header_background_image_url) && !cJSON_IsNull(header_background_image_url))
    {
    goto end; //String
    }
    }

    // header_options->header_background_color
    cJSON *header_background_color = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "headerBackgroundColor");
    if (header_background_color) { 
    if(!cJSON_IsString(header_background_color) && !cJSON_IsNull(header_background_color))
    {
    goto end; //String
    }
    }

    // header_options->header_border_color
    cJSON *header_border_color = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "headerBorderColor");
    if (header_border_color) { 
    if(!cJSON_IsString(header_border_color) && !cJSON_IsNull(header_border_color))
    {
    goto end; //String
    }
    }

    // header_options->enable_sticky_header
    cJSON *enable_sticky_header = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "enableStickyHeader");
    if (enable_sticky_header) { 
    if(!cJSON_IsBool(enable_sticky_header))
    {
    goto end; //Bool
    }
    }

    // header_options->enable_header_shadow
    cJSON *enable_header_shadow = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "enableHeaderShadow");
    if (enable_header_shadow) { 
    if(!cJSON_IsBool(enable_header_shadow))
    {
    goto end; //Bool
    }
    }

    // header_options->enable_full_width_header
    cJSON *enable_full_width_header = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "enableFullWidthHeader");
    if (enable_full_width_header) { 
    if(!cJSON_IsBool(enable_full_width_header))
    {
    goto end; //Bool
    }
    }

    // header_options->header_layout
    cJSON *header_layout = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "headerLayout");
    contentservice_header_options_HEADERLAYOUT_e header_layoutVariable;
    if (header_layout) { 
    if(!cJSON_IsString(header_layout))
    {
    goto end; //Enum
    }
    header_layoutVariable = header_options_header_layout_FromString(header_layout->valuestring);
    }

    // header_options->header_position
    cJSON *header_position = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "headerPosition");
    contentservice_header_options_HEADERPOSITION_e header_positionVariable;
    if (header_position) { 
    if(!cJSON_IsString(header_position))
    {
    goto end; //Enum
    }
    header_positionVariable = header_options_header_position_FromString(header_position->valuestring);
    }

    // header_options->top_header_content_type2
    cJSON *top_header_content_type2 = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "topHeaderContentType2");
    contentservice_header_options_TOPHEADERCONTENTTYPE2_e top_header_content_type2Variable;
    if (top_header_content_type2) { 
    if(!cJSON_IsString(top_header_content_type2))
    {
    goto end; //Enum
    }
    top_header_content_type2Variable = header_options_top_header_content_type2_FromString(top_header_content_type2->valuestring);
    }

    // header_options->top_header_content_type1
    cJSON *top_header_content_type1 = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "topHeaderContentType1");
    contentservice_header_options_TOPHEADERCONTENTTYPE1_e top_header_content_type1Variable;
    if (top_header_content_type1) { 
    if(!cJSON_IsString(top_header_content_type1))
    {
    goto end; //Enum
    }
    top_header_content_type1Variable = header_options_top_header_content_type1_FromString(top_header_content_type1->valuestring);
    }

    // header_options->top_header_background_color
    cJSON *top_header_background_color = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "topHeaderBackgroundColor");
    if (top_header_background_color) { 
    if(!cJSON_IsString(top_header_background_color) && !cJSON_IsNull(top_header_background_color))
    {
    goto end; //String
    }
    }

    // header_options->top_header_content1
    cJSON *top_header_content1 = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "topHeaderContent1");
    if (top_header_content1) { 
    if(!cJSON_IsString(top_header_content1) && !cJSON_IsNull(top_header_content1))
    {
    goto end; //String
    }
    }

    // header_options->top_header_content2
    cJSON *top_header_content2 = cJSON_GetObjectItemCaseSensitive(header_optionsJSON, "topHeaderContent2");
    if (top_header_content2) { 
    if(!cJSON_IsString(top_header_content2) && !cJSON_IsNull(top_header_content2))
    {
    goto end; //String
    }
    }


    header_options_local_var = header_options_create (
        header_padding ? header_padding_local_nonprim : NULL,
        header_background_image_url && !cJSON_IsNull(header_background_image_url) ? strdup(header_background_image_url->valuestring) : NULL,
        header_background_color && !cJSON_IsNull(header_background_color) ? strdup(header_background_color->valuestring) : NULL,
        header_border_color && !cJSON_IsNull(header_border_color) ? strdup(header_border_color->valuestring) : NULL,
        enable_sticky_header ? enable_sticky_header->valueint : 0,
        enable_header_shadow ? enable_header_shadow->valueint : 0,
        enable_full_width_header ? enable_full_width_header->valueint : 0,
        header_layout ? header_layoutVariable : contentservice_header_options_HEADERLAYOUT_NULL,
        header_position ? header_positionVariable : contentservice_header_options_HEADERPOSITION_NULL,
        top_header_content_type2 ? top_header_content_type2Variable : contentservice_header_options_TOPHEADERCONTENTTYPE2_NULL,
        top_header_content_type1 ? top_header_content_type1Variable : contentservice_header_options_TOPHEADERCONTENTTYPE1_NULL,
        top_header_background_color && !cJSON_IsNull(top_header_background_color) ? strdup(top_header_background_color->valuestring) : NULL,
        top_header_content1 && !cJSON_IsNull(top_header_content1) ? strdup(top_header_content1->valuestring) : NULL,
        top_header_content2 && !cJSON_IsNull(top_header_content2) ? strdup(top_header_content2->valuestring) : NULL
        );

    return header_options_local_var;
end:
    if (header_padding_local_nonprim) {
        padding_free(header_padding_local_nonprim);
        header_padding_local_nonprim = NULL;
    }
    return NULL;

}
