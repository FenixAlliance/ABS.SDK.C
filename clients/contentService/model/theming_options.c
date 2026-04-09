#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "theming_options.h"



theming_options_t *theming_options_create(
    int dark_styling,
    char *theme_name,
    char *default_layout,
    char *theme_assembly
    ) {
    theming_options_t *theming_options_local_var = malloc(sizeof(theming_options_t));
    if (!theming_options_local_var) {
        return NULL;
    }
    theming_options_local_var->dark_styling = dark_styling;
    theming_options_local_var->theme_name = theme_name;
    theming_options_local_var->default_layout = default_layout;
    theming_options_local_var->theme_assembly = theme_assembly;

    return theming_options_local_var;
}


void theming_options_free(theming_options_t *theming_options) {
    if(NULL == theming_options){
        return ;
    }
    listEntry_t *listEntry;
    if (theming_options->theme_name) {
        free(theming_options->theme_name);
        theming_options->theme_name = NULL;
    }
    if (theming_options->default_layout) {
        free(theming_options->default_layout);
        theming_options->default_layout = NULL;
    }
    if (theming_options->theme_assembly) {
        free(theming_options->theme_assembly);
        theming_options->theme_assembly = NULL;
    }
    free(theming_options);
}

cJSON *theming_options_convertToJSON(theming_options_t *theming_options) {
    cJSON *item = cJSON_CreateObject();

    // theming_options->dark_styling
    if(theming_options->dark_styling) {
    if(cJSON_AddBoolToObject(item, "darkStyling", theming_options->dark_styling) == NULL) {
    goto fail; //Bool
    }
    }


    // theming_options->theme_name
    if(theming_options->theme_name) {
    if(cJSON_AddStringToObject(item, "themeName", theming_options->theme_name) == NULL) {
    goto fail; //String
    }
    }


    // theming_options->default_layout
    if(theming_options->default_layout) {
    if(cJSON_AddStringToObject(item, "defaultLayout", theming_options->default_layout) == NULL) {
    goto fail; //String
    }
    }


    // theming_options->theme_assembly
    if(theming_options->theme_assembly) {
    if(cJSON_AddStringToObject(item, "themeAssembly", theming_options->theme_assembly) == NULL) {
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

theming_options_t *theming_options_parseFromJSON(cJSON *theming_optionsJSON){

    theming_options_t *theming_options_local_var = NULL;

    // theming_options->dark_styling
    cJSON *dark_styling = cJSON_GetObjectItemCaseSensitive(theming_optionsJSON, "darkStyling");
    if (dark_styling) { 
    if(!cJSON_IsBool(dark_styling))
    {
    goto end; //Bool
    }
    }

    // theming_options->theme_name
    cJSON *theme_name = cJSON_GetObjectItemCaseSensitive(theming_optionsJSON, "themeName");
    if (theme_name) { 
    if(!cJSON_IsString(theme_name) && !cJSON_IsNull(theme_name))
    {
    goto end; //String
    }
    }

    // theming_options->default_layout
    cJSON *default_layout = cJSON_GetObjectItemCaseSensitive(theming_optionsJSON, "defaultLayout");
    if (default_layout) { 
    if(!cJSON_IsString(default_layout) && !cJSON_IsNull(default_layout))
    {
    goto end; //String
    }
    }

    // theming_options->theme_assembly
    cJSON *theme_assembly = cJSON_GetObjectItemCaseSensitive(theming_optionsJSON, "themeAssembly");
    if (theme_assembly) { 
    if(!cJSON_IsString(theme_assembly) && !cJSON_IsNull(theme_assembly))
    {
    goto end; //String
    }
    }


    theming_options_local_var = theming_options_create (
        dark_styling ? dark_styling->valueint : 0,
        theme_name && !cJSON_IsNull(theme_name) ? strdup(theme_name->valuestring) : NULL,
        default_layout && !cJSON_IsNull(default_layout) ? strdup(default_layout->valuestring) : NULL,
        theme_assembly && !cJSON_IsNull(theme_assembly) ? strdup(theme_assembly->valuestring) : NULL
        );

    return theming_options_local_var;
end:
    return NULL;

}
