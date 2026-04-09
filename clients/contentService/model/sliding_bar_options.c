#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sliding_bar_options.h"


char* sliding_bar_options_position_ToString(contentservice_sliding_bar_options_POSITION_e position) {
    char* positionArray[] =  { "NULL", "Bottom", "Right", "Left", "Top" };
    return positionArray[position];
}

contentservice_sliding_bar_options_POSITION_e sliding_bar_options_position_FromString(char* position){
    int stringToReturn = 0;
    char *positionArray[] =  { "NULL", "Bottom", "Right", "Left", "Top" };
    size_t sizeofArray = sizeof(positionArray) / sizeof(positionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(position, positionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* sliding_bar_options_content_alignment_ToString(contentservice_sliding_bar_options_CONTENTALIGNMENT_e content_alignment) {
    char* content_alignmentArray[] =  { "NULL", "Center", "Right", "Left" };
    return content_alignmentArray[content_alignment];
}

contentservice_sliding_bar_options_CONTENTALIGNMENT_e sliding_bar_options_content_alignment_FromString(char* content_alignment){
    int stringToReturn = 0;
    char *content_alignmentArray[] =  { "NULL", "Center", "Right", "Left" };
    size_t sizeofArray = sizeof(content_alignmentArray) / sizeof(content_alignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(content_alignment, content_alignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

sliding_bar_options_t *sliding_bar_options_create(
    contentservice_sliding_bar_options_POSITION_e position,
    padding_t *content_padding,
    contentservice_sliding_bar_options_CONTENTALIGNMENT_e content_alignment,
    int columns_count,
    int enable_sticky,
    int open_on_page_load,
    int enable_on_mobile,
    int enable_on_desktop
    ) {
    sliding_bar_options_t *sliding_bar_options_local_var = malloc(sizeof(sliding_bar_options_t));
    if (!sliding_bar_options_local_var) {
        return NULL;
    }
    sliding_bar_options_local_var->position = position;
    sliding_bar_options_local_var->content_padding = content_padding;
    sliding_bar_options_local_var->content_alignment = content_alignment;
    sliding_bar_options_local_var->columns_count = columns_count;
    sliding_bar_options_local_var->enable_sticky = enable_sticky;
    sliding_bar_options_local_var->open_on_page_load = open_on_page_load;
    sliding_bar_options_local_var->enable_on_mobile = enable_on_mobile;
    sliding_bar_options_local_var->enable_on_desktop = enable_on_desktop;

    return sliding_bar_options_local_var;
}


void sliding_bar_options_free(sliding_bar_options_t *sliding_bar_options) {
    if(NULL == sliding_bar_options){
        return ;
    }
    listEntry_t *listEntry;
    if (sliding_bar_options->content_padding) {
        padding_free(sliding_bar_options->content_padding);
        sliding_bar_options->content_padding = NULL;
    }
    free(sliding_bar_options);
}

cJSON *sliding_bar_options_convertToJSON(sliding_bar_options_t *sliding_bar_options) {
    cJSON *item = cJSON_CreateObject();

    // sliding_bar_options->position
    if(sliding_bar_options->position != contentservice_sliding_bar_options_POSITION_NULL) {
    if(cJSON_AddStringToObject(item, "position", positionsliding_bar_options_ToString(sliding_bar_options->position)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // sliding_bar_options->content_padding
    if(sliding_bar_options->content_padding) {
    cJSON *content_padding_local_JSON = padding_convertToJSON(sliding_bar_options->content_padding);
    if(content_padding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contentPadding", content_padding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // sliding_bar_options->content_alignment
    if(sliding_bar_options->content_alignment != contentservice_sliding_bar_options_CONTENTALIGNMENT_NULL) {
    if(cJSON_AddStringToObject(item, "contentAlignment", content_alignmentsliding_bar_options_ToString(sliding_bar_options->content_alignment)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // sliding_bar_options->columns_count
    if(sliding_bar_options->columns_count) {
    if(cJSON_AddNumberToObject(item, "columnsCount", sliding_bar_options->columns_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // sliding_bar_options->enable_sticky
    if(sliding_bar_options->enable_sticky) {
    if(cJSON_AddBoolToObject(item, "enableSticky", sliding_bar_options->enable_sticky) == NULL) {
    goto fail; //Bool
    }
    }


    // sliding_bar_options->open_on_page_load
    if(sliding_bar_options->open_on_page_load) {
    if(cJSON_AddBoolToObject(item, "openOnPageLoad", sliding_bar_options->open_on_page_load) == NULL) {
    goto fail; //Bool
    }
    }


    // sliding_bar_options->enable_on_mobile
    if(sliding_bar_options->enable_on_mobile) {
    if(cJSON_AddBoolToObject(item, "enableOnMobile", sliding_bar_options->enable_on_mobile) == NULL) {
    goto fail; //Bool
    }
    }


    // sliding_bar_options->enable_on_desktop
    if(sliding_bar_options->enable_on_desktop) {
    if(cJSON_AddBoolToObject(item, "enableOnDesktop", sliding_bar_options->enable_on_desktop) == NULL) {
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

sliding_bar_options_t *sliding_bar_options_parseFromJSON(cJSON *sliding_bar_optionsJSON){

    sliding_bar_options_t *sliding_bar_options_local_var = NULL;

    // define the local variable for sliding_bar_options->content_padding
    padding_t *content_padding_local_nonprim = NULL;

    // sliding_bar_options->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "position");
    contentservice_sliding_bar_options_POSITION_e positionVariable;
    if (position) { 
    if(!cJSON_IsString(position))
    {
    goto end; //Enum
    }
    positionVariable = sliding_bar_options_position_FromString(position->valuestring);
    }

    // sliding_bar_options->content_padding
    cJSON *content_padding = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "contentPadding");
    if (content_padding) { 
    content_padding_local_nonprim = padding_parseFromJSON(content_padding); //nonprimitive
    }

    // sliding_bar_options->content_alignment
    cJSON *content_alignment = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "contentAlignment");
    contentservice_sliding_bar_options_CONTENTALIGNMENT_e content_alignmentVariable;
    if (content_alignment) { 
    if(!cJSON_IsString(content_alignment))
    {
    goto end; //Enum
    }
    content_alignmentVariable = sliding_bar_options_content_alignment_FromString(content_alignment->valuestring);
    }

    // sliding_bar_options->columns_count
    cJSON *columns_count = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "columnsCount");
    if (columns_count) { 
    if(!cJSON_IsNumber(columns_count))
    {
    goto end; //Numeric
    }
    }

    // sliding_bar_options->enable_sticky
    cJSON *enable_sticky = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "enableSticky");
    if (enable_sticky) { 
    if(!cJSON_IsBool(enable_sticky))
    {
    goto end; //Bool
    }
    }

    // sliding_bar_options->open_on_page_load
    cJSON *open_on_page_load = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "openOnPageLoad");
    if (open_on_page_load) { 
    if(!cJSON_IsBool(open_on_page_load))
    {
    goto end; //Bool
    }
    }

    // sliding_bar_options->enable_on_mobile
    cJSON *enable_on_mobile = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "enableOnMobile");
    if (enable_on_mobile) { 
    if(!cJSON_IsBool(enable_on_mobile))
    {
    goto end; //Bool
    }
    }

    // sliding_bar_options->enable_on_desktop
    cJSON *enable_on_desktop = cJSON_GetObjectItemCaseSensitive(sliding_bar_optionsJSON, "enableOnDesktop");
    if (enable_on_desktop) { 
    if(!cJSON_IsBool(enable_on_desktop))
    {
    goto end; //Bool
    }
    }


    sliding_bar_options_local_var = sliding_bar_options_create (
        position ? positionVariable : contentservice_sliding_bar_options_POSITION_NULL,
        content_padding ? content_padding_local_nonprim : NULL,
        content_alignment ? content_alignmentVariable : contentservice_sliding_bar_options_CONTENTALIGNMENT_NULL,
        columns_count ? columns_count->valuedouble : 0,
        enable_sticky ? enable_sticky->valueint : 0,
        open_on_page_load ? open_on_page_load->valueint : 0,
        enable_on_mobile ? enable_on_mobile->valueint : 0,
        enable_on_desktop ? enable_on_desktop->valueint : 0
        );

    return sliding_bar_options_local_var;
end:
    if (content_padding_local_nonprim) {
        padding_free(content_padding_local_nonprim);
        content_padding_local_nonprim = NULL;
    }
    return NULL;

}
