#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_font.h"



custom_font_t *custom_font_create(
    char *name,
    char *wof_f2,
    char *woff,
    char *ttf,
    char *eot,
    char *svg
    ) {
    custom_font_t *custom_font_local_var = malloc(sizeof(custom_font_t));
    if (!custom_font_local_var) {
        return NULL;
    }
    custom_font_local_var->name = name;
    custom_font_local_var->wof_f2 = wof_f2;
    custom_font_local_var->woff = woff;
    custom_font_local_var->ttf = ttf;
    custom_font_local_var->eot = eot;
    custom_font_local_var->svg = svg;

    return custom_font_local_var;
}


void custom_font_free(custom_font_t *custom_font) {
    if(NULL == custom_font){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_font->name) {
        free(custom_font->name);
        custom_font->name = NULL;
    }
    if (custom_font->wof_f2) {
        free(custom_font->wof_f2);
        custom_font->wof_f2 = NULL;
    }
    if (custom_font->woff) {
        free(custom_font->woff);
        custom_font->woff = NULL;
    }
    if (custom_font->ttf) {
        free(custom_font->ttf);
        custom_font->ttf = NULL;
    }
    if (custom_font->eot) {
        free(custom_font->eot);
        custom_font->eot = NULL;
    }
    if (custom_font->svg) {
        free(custom_font->svg);
        custom_font->svg = NULL;
    }
    free(custom_font);
}

cJSON *custom_font_convertToJSON(custom_font_t *custom_font) {
    cJSON *item = cJSON_CreateObject();

    // custom_font->name
    if(custom_font->name) {
    if(cJSON_AddStringToObject(item, "name", custom_font->name) == NULL) {
    goto fail; //String
    }
    }


    // custom_font->wof_f2
    if(custom_font->wof_f2) {
    if(cJSON_AddStringToObject(item, "wofF2", custom_font->wof_f2) == NULL) {
    goto fail; //String
    }
    }


    // custom_font->woff
    if(custom_font->woff) {
    if(cJSON_AddStringToObject(item, "woff", custom_font->woff) == NULL) {
    goto fail; //String
    }
    }


    // custom_font->ttf
    if(custom_font->ttf) {
    if(cJSON_AddStringToObject(item, "ttf", custom_font->ttf) == NULL) {
    goto fail; //String
    }
    }


    // custom_font->eot
    if(custom_font->eot) {
    if(cJSON_AddStringToObject(item, "eot", custom_font->eot) == NULL) {
    goto fail; //String
    }
    }


    // custom_font->svg
    if(custom_font->svg) {
    if(cJSON_AddStringToObject(item, "svg", custom_font->svg) == NULL) {
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

custom_font_t *custom_font_parseFromJSON(cJSON *custom_fontJSON){

    custom_font_t *custom_font_local_var = NULL;

    // custom_font->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(custom_fontJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // custom_font->wof_f2
    cJSON *wof_f2 = cJSON_GetObjectItemCaseSensitive(custom_fontJSON, "wofF2");
    if (wof_f2) { 
    if(!cJSON_IsString(wof_f2) && !cJSON_IsNull(wof_f2))
    {
    goto end; //String
    }
    }

    // custom_font->woff
    cJSON *woff = cJSON_GetObjectItemCaseSensitive(custom_fontJSON, "woff");
    if (woff) { 
    if(!cJSON_IsString(woff) && !cJSON_IsNull(woff))
    {
    goto end; //String
    }
    }

    // custom_font->ttf
    cJSON *ttf = cJSON_GetObjectItemCaseSensitive(custom_fontJSON, "ttf");
    if (ttf) { 
    if(!cJSON_IsString(ttf) && !cJSON_IsNull(ttf))
    {
    goto end; //String
    }
    }

    // custom_font->eot
    cJSON *eot = cJSON_GetObjectItemCaseSensitive(custom_fontJSON, "eot");
    if (eot) { 
    if(!cJSON_IsString(eot) && !cJSON_IsNull(eot))
    {
    goto end; //String
    }
    }

    // custom_font->svg
    cJSON *svg = cJSON_GetObjectItemCaseSensitive(custom_fontJSON, "svg");
    if (svg) { 
    if(!cJSON_IsString(svg) && !cJSON_IsNull(svg))
    {
    goto end; //String
    }
    }


    custom_font_local_var = custom_font_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        wof_f2 && !cJSON_IsNull(wof_f2) ? strdup(wof_f2->valuestring) : NULL,
        woff && !cJSON_IsNull(woff) ? strdup(woff->valuestring) : NULL,
        ttf && !cJSON_IsNull(ttf) ? strdup(ttf->valuestring) : NULL,
        eot && !cJSON_IsNull(eot) ? strdup(eot->valuestring) : NULL,
        svg && !cJSON_IsNull(svg) ? strdup(svg->valuestring) : NULL
        );

    return custom_font_local_var;
end:
    return NULL;

}
