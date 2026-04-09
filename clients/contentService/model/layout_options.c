#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "layout_options.h"


char* layout_options_layout_ToString(contentservice_layout_options_LAYOUT_e layout) {
    char* layoutArray[] =  { "NULL", "Boxed", "Wide" };
    return layoutArray[layout];
}

contentservice_layout_options_LAYOUT_e layout_options_layout_FromString(char* layout){
    int stringToReturn = 0;
    char *layoutArray[] =  { "NULL", "Boxed", "Wide" };
    size_t sizeofArray = sizeof(layoutArray) / sizeof(layoutArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(layout, layoutArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

layout_options_t *layout_options_create(
    char *single_sidebar_width,
    char *single_sidebar_gutter,
    char *dial_sidebar_width1,
    char *dial_sidebar_width2,
    char *dial_sidebar_gutter,
    char *full_width_content_padding,
    char *page_content_padding_bottom,
    char *page_content_padding_top,
    char *site_width,
    contentservice_layout_options_LAYOUT_e layout
    ) {
    layout_options_t *layout_options_local_var = malloc(sizeof(layout_options_t));
    if (!layout_options_local_var) {
        return NULL;
    }
    layout_options_local_var->single_sidebar_width = single_sidebar_width;
    layout_options_local_var->single_sidebar_gutter = single_sidebar_gutter;
    layout_options_local_var->dial_sidebar_width1 = dial_sidebar_width1;
    layout_options_local_var->dial_sidebar_width2 = dial_sidebar_width2;
    layout_options_local_var->dial_sidebar_gutter = dial_sidebar_gutter;
    layout_options_local_var->full_width_content_padding = full_width_content_padding;
    layout_options_local_var->page_content_padding_bottom = page_content_padding_bottom;
    layout_options_local_var->page_content_padding_top = page_content_padding_top;
    layout_options_local_var->site_width = site_width;
    layout_options_local_var->layout = layout;

    return layout_options_local_var;
}


void layout_options_free(layout_options_t *layout_options) {
    if(NULL == layout_options){
        return ;
    }
    listEntry_t *listEntry;
    if (layout_options->single_sidebar_width) {
        free(layout_options->single_sidebar_width);
        layout_options->single_sidebar_width = NULL;
    }
    if (layout_options->single_sidebar_gutter) {
        free(layout_options->single_sidebar_gutter);
        layout_options->single_sidebar_gutter = NULL;
    }
    if (layout_options->dial_sidebar_width1) {
        free(layout_options->dial_sidebar_width1);
        layout_options->dial_sidebar_width1 = NULL;
    }
    if (layout_options->dial_sidebar_width2) {
        free(layout_options->dial_sidebar_width2);
        layout_options->dial_sidebar_width2 = NULL;
    }
    if (layout_options->dial_sidebar_gutter) {
        free(layout_options->dial_sidebar_gutter);
        layout_options->dial_sidebar_gutter = NULL;
    }
    if (layout_options->full_width_content_padding) {
        free(layout_options->full_width_content_padding);
        layout_options->full_width_content_padding = NULL;
    }
    if (layout_options->page_content_padding_bottom) {
        free(layout_options->page_content_padding_bottom);
        layout_options->page_content_padding_bottom = NULL;
    }
    if (layout_options->page_content_padding_top) {
        free(layout_options->page_content_padding_top);
        layout_options->page_content_padding_top = NULL;
    }
    if (layout_options->site_width) {
        free(layout_options->site_width);
        layout_options->site_width = NULL;
    }
    free(layout_options);
}

cJSON *layout_options_convertToJSON(layout_options_t *layout_options) {
    cJSON *item = cJSON_CreateObject();

    // layout_options->single_sidebar_width
    if(layout_options->single_sidebar_width) {
    if(cJSON_AddStringToObject(item, "singleSidebarWidth", layout_options->single_sidebar_width) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->single_sidebar_gutter
    if(layout_options->single_sidebar_gutter) {
    if(cJSON_AddStringToObject(item, "singleSidebarGutter", layout_options->single_sidebar_gutter) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->dial_sidebar_width1
    if(layout_options->dial_sidebar_width1) {
    if(cJSON_AddStringToObject(item, "dialSidebarWidth1", layout_options->dial_sidebar_width1) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->dial_sidebar_width2
    if(layout_options->dial_sidebar_width2) {
    if(cJSON_AddStringToObject(item, "dialSidebarWidth2", layout_options->dial_sidebar_width2) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->dial_sidebar_gutter
    if(layout_options->dial_sidebar_gutter) {
    if(cJSON_AddStringToObject(item, "dialSidebarGutter", layout_options->dial_sidebar_gutter) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->full_width_content_padding
    if(layout_options->full_width_content_padding) {
    if(cJSON_AddStringToObject(item, "fullWidthContentPadding", layout_options->full_width_content_padding) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->page_content_padding_bottom
    if(layout_options->page_content_padding_bottom) {
    if(cJSON_AddStringToObject(item, "pageContentPaddingBottom", layout_options->page_content_padding_bottom) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->page_content_padding_top
    if(layout_options->page_content_padding_top) {
    if(cJSON_AddStringToObject(item, "pageContentPaddingTop", layout_options->page_content_padding_top) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->site_width
    if(layout_options->site_width) {
    if(cJSON_AddStringToObject(item, "siteWidth", layout_options->site_width) == NULL) {
    goto fail; //String
    }
    }


    // layout_options->layout
    if(layout_options->layout != contentservice_layout_options_LAYOUT_NULL) {
    if(cJSON_AddStringToObject(item, "layout", layoutlayout_options_ToString(layout_options->layout)) == NULL)
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

layout_options_t *layout_options_parseFromJSON(cJSON *layout_optionsJSON){

    layout_options_t *layout_options_local_var = NULL;

    // layout_options->single_sidebar_width
    cJSON *single_sidebar_width = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "singleSidebarWidth");
    if (single_sidebar_width) { 
    if(!cJSON_IsString(single_sidebar_width) && !cJSON_IsNull(single_sidebar_width))
    {
    goto end; //String
    }
    }

    // layout_options->single_sidebar_gutter
    cJSON *single_sidebar_gutter = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "singleSidebarGutter");
    if (single_sidebar_gutter) { 
    if(!cJSON_IsString(single_sidebar_gutter) && !cJSON_IsNull(single_sidebar_gutter))
    {
    goto end; //String
    }
    }

    // layout_options->dial_sidebar_width1
    cJSON *dial_sidebar_width1 = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "dialSidebarWidth1");
    if (dial_sidebar_width1) { 
    if(!cJSON_IsString(dial_sidebar_width1) && !cJSON_IsNull(dial_sidebar_width1))
    {
    goto end; //String
    }
    }

    // layout_options->dial_sidebar_width2
    cJSON *dial_sidebar_width2 = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "dialSidebarWidth2");
    if (dial_sidebar_width2) { 
    if(!cJSON_IsString(dial_sidebar_width2) && !cJSON_IsNull(dial_sidebar_width2))
    {
    goto end; //String
    }
    }

    // layout_options->dial_sidebar_gutter
    cJSON *dial_sidebar_gutter = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "dialSidebarGutter");
    if (dial_sidebar_gutter) { 
    if(!cJSON_IsString(dial_sidebar_gutter) && !cJSON_IsNull(dial_sidebar_gutter))
    {
    goto end; //String
    }
    }

    // layout_options->full_width_content_padding
    cJSON *full_width_content_padding = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "fullWidthContentPadding");
    if (full_width_content_padding) { 
    if(!cJSON_IsString(full_width_content_padding) && !cJSON_IsNull(full_width_content_padding))
    {
    goto end; //String
    }
    }

    // layout_options->page_content_padding_bottom
    cJSON *page_content_padding_bottom = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "pageContentPaddingBottom");
    if (page_content_padding_bottom) { 
    if(!cJSON_IsString(page_content_padding_bottom) && !cJSON_IsNull(page_content_padding_bottom))
    {
    goto end; //String
    }
    }

    // layout_options->page_content_padding_top
    cJSON *page_content_padding_top = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "pageContentPaddingTop");
    if (page_content_padding_top) { 
    if(!cJSON_IsString(page_content_padding_top) && !cJSON_IsNull(page_content_padding_top))
    {
    goto end; //String
    }
    }

    // layout_options->site_width
    cJSON *site_width = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "siteWidth");
    if (site_width) { 
    if(!cJSON_IsString(site_width) && !cJSON_IsNull(site_width))
    {
    goto end; //String
    }
    }

    // layout_options->layout
    cJSON *layout = cJSON_GetObjectItemCaseSensitive(layout_optionsJSON, "layout");
    contentservice_layout_options_LAYOUT_e layoutVariable;
    if (layout) { 
    if(!cJSON_IsString(layout))
    {
    goto end; //Enum
    }
    layoutVariable = layout_options_layout_FromString(layout->valuestring);
    }


    layout_options_local_var = layout_options_create (
        single_sidebar_width && !cJSON_IsNull(single_sidebar_width) ? strdup(single_sidebar_width->valuestring) : NULL,
        single_sidebar_gutter && !cJSON_IsNull(single_sidebar_gutter) ? strdup(single_sidebar_gutter->valuestring) : NULL,
        dial_sidebar_width1 && !cJSON_IsNull(dial_sidebar_width1) ? strdup(dial_sidebar_width1->valuestring) : NULL,
        dial_sidebar_width2 && !cJSON_IsNull(dial_sidebar_width2) ? strdup(dial_sidebar_width2->valuestring) : NULL,
        dial_sidebar_gutter && !cJSON_IsNull(dial_sidebar_gutter) ? strdup(dial_sidebar_gutter->valuestring) : NULL,
        full_width_content_padding && !cJSON_IsNull(full_width_content_padding) ? strdup(full_width_content_padding->valuestring) : NULL,
        page_content_padding_bottom && !cJSON_IsNull(page_content_padding_bottom) ? strdup(page_content_padding_bottom->valuestring) : NULL,
        page_content_padding_top && !cJSON_IsNull(page_content_padding_top) ? strdup(page_content_padding_top->valuestring) : NULL,
        site_width && !cJSON_IsNull(site_width) ? strdup(site_width->valuestring) : NULL,
        layout ? layoutVariable : contentservice_layout_options_LAYOUT_NULL
        );

    return layout_options_local_var;
end:
    return NULL;

}
