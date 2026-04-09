#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "color_options.h"


char* color_options_primary_skin_ToString(contentservice_color_options_PRIMARYSKIN_e primary_skin) {
    char* primary_skinArray[] =  { "NULL", "Dark", "Light" };
    return primary_skinArray[primary_skin];
}

contentservice_color_options_PRIMARYSKIN_e color_options_primary_skin_FromString(char* primary_skin){
    int stringToReturn = 0;
    char *primary_skinArray[] =  { "NULL", "Dark", "Light" };
    size_t sizeofArray = sizeof(primary_skinArray) / sizeof(primary_skinArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(primary_skin, primary_skinArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

color_options_t *color_options_create(
    contentservice_color_options_PRIMARYSKIN_e primary_skin,
    char *primary_color,
    char *secondary_color,
    color_scheme_t *color_scheme
    ) {
    color_options_t *color_options_local_var = malloc(sizeof(color_options_t));
    if (!color_options_local_var) {
        return NULL;
    }
    color_options_local_var->primary_skin = primary_skin;
    color_options_local_var->primary_color = primary_color;
    color_options_local_var->secondary_color = secondary_color;
    color_options_local_var->color_scheme = color_scheme;

    return color_options_local_var;
}


void color_options_free(color_options_t *color_options) {
    if(NULL == color_options){
        return ;
    }
    listEntry_t *listEntry;
    if (color_options->primary_color) {
        free(color_options->primary_color);
        color_options->primary_color = NULL;
    }
    if (color_options->secondary_color) {
        free(color_options->secondary_color);
        color_options->secondary_color = NULL;
    }
    if (color_options->color_scheme) {
        color_scheme_free(color_options->color_scheme);
        color_options->color_scheme = NULL;
    }
    free(color_options);
}

cJSON *color_options_convertToJSON(color_options_t *color_options) {
    cJSON *item = cJSON_CreateObject();

    // color_options->primary_skin
    if(color_options->primary_skin != contentservice_color_options_PRIMARYSKIN_NULL) {
    if(cJSON_AddStringToObject(item, "primarySkin", primary_skincolor_options_ToString(color_options->primary_skin)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // color_options->primary_color
    if(color_options->primary_color) {
    if(cJSON_AddStringToObject(item, "primaryColor", color_options->primary_color) == NULL) {
    goto fail; //String
    }
    }


    // color_options->secondary_color
    if(color_options->secondary_color) {
    if(cJSON_AddStringToObject(item, "secondaryColor", color_options->secondary_color) == NULL) {
    goto fail; //String
    }
    }


    // color_options->color_scheme
    if(color_options->color_scheme) {
    cJSON *color_scheme_local_JSON = color_scheme_convertToJSON(color_options->color_scheme);
    if(color_scheme_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "colorScheme", color_scheme_local_JSON);
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

color_options_t *color_options_parseFromJSON(cJSON *color_optionsJSON){

    color_options_t *color_options_local_var = NULL;

    // define the local variable for color_options->color_scheme
    color_scheme_t *color_scheme_local_nonprim = NULL;

    // color_options->primary_skin
    cJSON *primary_skin = cJSON_GetObjectItemCaseSensitive(color_optionsJSON, "primarySkin");
    contentservice_color_options_PRIMARYSKIN_e primary_skinVariable;
    if (primary_skin) { 
    if(!cJSON_IsString(primary_skin))
    {
    goto end; //Enum
    }
    primary_skinVariable = color_options_primary_skin_FromString(primary_skin->valuestring);
    }

    // color_options->primary_color
    cJSON *primary_color = cJSON_GetObjectItemCaseSensitive(color_optionsJSON, "primaryColor");
    if (primary_color) { 
    if(!cJSON_IsString(primary_color) && !cJSON_IsNull(primary_color))
    {
    goto end; //String
    }
    }

    // color_options->secondary_color
    cJSON *secondary_color = cJSON_GetObjectItemCaseSensitive(color_optionsJSON, "secondaryColor");
    if (secondary_color) { 
    if(!cJSON_IsString(secondary_color) && !cJSON_IsNull(secondary_color))
    {
    goto end; //String
    }
    }

    // color_options->color_scheme
    cJSON *color_scheme = cJSON_GetObjectItemCaseSensitive(color_optionsJSON, "colorScheme");
    if (color_scheme) { 
    color_scheme_local_nonprim = color_scheme_parseFromJSON(color_scheme); //nonprimitive
    }


    color_options_local_var = color_options_create (
        primary_skin ? primary_skinVariable : contentservice_color_options_PRIMARYSKIN_NULL,
        primary_color && !cJSON_IsNull(primary_color) ? strdup(primary_color->valuestring) : NULL,
        secondary_color && !cJSON_IsNull(secondary_color) ? strdup(secondary_color->valuestring) : NULL,
        color_scheme ? color_scheme_local_nonprim : NULL
        );

    return color_options_local_var;
end:
    if (color_scheme_local_nonprim) {
        color_scheme_free(color_scheme_local_nonprim);
        color_scheme_local_nonprim = NULL;
    }
    return NULL;

}
