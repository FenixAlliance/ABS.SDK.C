#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "color_scheme.h"



color_scheme_t *color_scheme_create(
    char *color0,
    char *color1,
    char *color2,
    char *color3,
    char *color4,
    char *color5,
    char *color6,
    char *color7,
    char *color8,
    char *color9
    ) {
    color_scheme_t *color_scheme_local_var = malloc(sizeof(color_scheme_t));
    if (!color_scheme_local_var) {
        return NULL;
    }
    color_scheme_local_var->color0 = color0;
    color_scheme_local_var->color1 = color1;
    color_scheme_local_var->color2 = color2;
    color_scheme_local_var->color3 = color3;
    color_scheme_local_var->color4 = color4;
    color_scheme_local_var->color5 = color5;
    color_scheme_local_var->color6 = color6;
    color_scheme_local_var->color7 = color7;
    color_scheme_local_var->color8 = color8;
    color_scheme_local_var->color9 = color9;

    return color_scheme_local_var;
}


void color_scheme_free(color_scheme_t *color_scheme) {
    if(NULL == color_scheme){
        return ;
    }
    listEntry_t *listEntry;
    if (color_scheme->color0) {
        free(color_scheme->color0);
        color_scheme->color0 = NULL;
    }
    if (color_scheme->color1) {
        free(color_scheme->color1);
        color_scheme->color1 = NULL;
    }
    if (color_scheme->color2) {
        free(color_scheme->color2);
        color_scheme->color2 = NULL;
    }
    if (color_scheme->color3) {
        free(color_scheme->color3);
        color_scheme->color3 = NULL;
    }
    if (color_scheme->color4) {
        free(color_scheme->color4);
        color_scheme->color4 = NULL;
    }
    if (color_scheme->color5) {
        free(color_scheme->color5);
        color_scheme->color5 = NULL;
    }
    if (color_scheme->color6) {
        free(color_scheme->color6);
        color_scheme->color6 = NULL;
    }
    if (color_scheme->color7) {
        free(color_scheme->color7);
        color_scheme->color7 = NULL;
    }
    if (color_scheme->color8) {
        free(color_scheme->color8);
        color_scheme->color8 = NULL;
    }
    if (color_scheme->color9) {
        free(color_scheme->color9);
        color_scheme->color9 = NULL;
    }
    free(color_scheme);
}

cJSON *color_scheme_convertToJSON(color_scheme_t *color_scheme) {
    cJSON *item = cJSON_CreateObject();

    // color_scheme->color0
    if(color_scheme->color0) {
    if(cJSON_AddStringToObject(item, "color0", color_scheme->color0) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color1
    if(color_scheme->color1) {
    if(cJSON_AddStringToObject(item, "color1", color_scheme->color1) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color2
    if(color_scheme->color2) {
    if(cJSON_AddStringToObject(item, "color2", color_scheme->color2) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color3
    if(color_scheme->color3) {
    if(cJSON_AddStringToObject(item, "color3", color_scheme->color3) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color4
    if(color_scheme->color4) {
    if(cJSON_AddStringToObject(item, "color4", color_scheme->color4) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color5
    if(color_scheme->color5) {
    if(cJSON_AddStringToObject(item, "color5", color_scheme->color5) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color6
    if(color_scheme->color6) {
    if(cJSON_AddStringToObject(item, "color6", color_scheme->color6) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color7
    if(color_scheme->color7) {
    if(cJSON_AddStringToObject(item, "color7", color_scheme->color7) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color8
    if(color_scheme->color8) {
    if(cJSON_AddStringToObject(item, "color8", color_scheme->color8) == NULL) {
    goto fail; //String
    }
    }


    // color_scheme->color9
    if(color_scheme->color9) {
    if(cJSON_AddStringToObject(item, "color9", color_scheme->color9) == NULL) {
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

color_scheme_t *color_scheme_parseFromJSON(cJSON *color_schemeJSON){

    color_scheme_t *color_scheme_local_var = NULL;

    // color_scheme->color0
    cJSON *color0 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color0");
    if (color0) { 
    if(!cJSON_IsString(color0) && !cJSON_IsNull(color0))
    {
    goto end; //String
    }
    }

    // color_scheme->color1
    cJSON *color1 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color1");
    if (color1) { 
    if(!cJSON_IsString(color1) && !cJSON_IsNull(color1))
    {
    goto end; //String
    }
    }

    // color_scheme->color2
    cJSON *color2 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color2");
    if (color2) { 
    if(!cJSON_IsString(color2) && !cJSON_IsNull(color2))
    {
    goto end; //String
    }
    }

    // color_scheme->color3
    cJSON *color3 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color3");
    if (color3) { 
    if(!cJSON_IsString(color3) && !cJSON_IsNull(color3))
    {
    goto end; //String
    }
    }

    // color_scheme->color4
    cJSON *color4 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color4");
    if (color4) { 
    if(!cJSON_IsString(color4) && !cJSON_IsNull(color4))
    {
    goto end; //String
    }
    }

    // color_scheme->color5
    cJSON *color5 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color5");
    if (color5) { 
    if(!cJSON_IsString(color5) && !cJSON_IsNull(color5))
    {
    goto end; //String
    }
    }

    // color_scheme->color6
    cJSON *color6 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color6");
    if (color6) { 
    if(!cJSON_IsString(color6) && !cJSON_IsNull(color6))
    {
    goto end; //String
    }
    }

    // color_scheme->color7
    cJSON *color7 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color7");
    if (color7) { 
    if(!cJSON_IsString(color7) && !cJSON_IsNull(color7))
    {
    goto end; //String
    }
    }

    // color_scheme->color8
    cJSON *color8 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color8");
    if (color8) { 
    if(!cJSON_IsString(color8) && !cJSON_IsNull(color8))
    {
    goto end; //String
    }
    }

    // color_scheme->color9
    cJSON *color9 = cJSON_GetObjectItemCaseSensitive(color_schemeJSON, "color9");
    if (color9) { 
    if(!cJSON_IsString(color9) && !cJSON_IsNull(color9))
    {
    goto end; //String
    }
    }


    color_scheme_local_var = color_scheme_create (
        color0 && !cJSON_IsNull(color0) ? strdup(color0->valuestring) : NULL,
        color1 && !cJSON_IsNull(color1) ? strdup(color1->valuestring) : NULL,
        color2 && !cJSON_IsNull(color2) ? strdup(color2->valuestring) : NULL,
        color3 && !cJSON_IsNull(color3) ? strdup(color3->valuestring) : NULL,
        color4 && !cJSON_IsNull(color4) ? strdup(color4->valuestring) : NULL,
        color5 && !cJSON_IsNull(color5) ? strdup(color5->valuestring) : NULL,
        color6 && !cJSON_IsNull(color6) ? strdup(color6->valuestring) : NULL,
        color7 && !cJSON_IsNull(color7) ? strdup(color7->valuestring) : NULL,
        color8 && !cJSON_IsNull(color8) ? strdup(color8->valuestring) : NULL,
        color9 && !cJSON_IsNull(color9) ? strdup(color9->valuestring) : NULL
        );

    return color_scheme_local_var;
end:
    return NULL;

}
