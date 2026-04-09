#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "typography_options.h"



typography_options_t *typography_options_create(
    typography_t *body_typography,
    typography_t *headers_typography,
    list_t *custom_fonts
    ) {
    typography_options_t *typography_options_local_var = malloc(sizeof(typography_options_t));
    if (!typography_options_local_var) {
        return NULL;
    }
    typography_options_local_var->body_typography = body_typography;
    typography_options_local_var->headers_typography = headers_typography;
    typography_options_local_var->custom_fonts = custom_fonts;

    return typography_options_local_var;
}


void typography_options_free(typography_options_t *typography_options) {
    if(NULL == typography_options){
        return ;
    }
    listEntry_t *listEntry;
    if (typography_options->body_typography) {
        typography_free(typography_options->body_typography);
        typography_options->body_typography = NULL;
    }
    if (typography_options->headers_typography) {
        typography_free(typography_options->headers_typography);
        typography_options->headers_typography = NULL;
    }
    if (typography_options->custom_fonts) {
        list_ForEach(listEntry, typography_options->custom_fonts) {
            custom_font_free(listEntry->data);
        }
        list_freeList(typography_options->custom_fonts);
        typography_options->custom_fonts = NULL;
    }
    free(typography_options);
}

cJSON *typography_options_convertToJSON(typography_options_t *typography_options) {
    cJSON *item = cJSON_CreateObject();

    // typography_options->body_typography
    if(typography_options->body_typography) {
    cJSON *body_typography_local_JSON = typography_convertToJSON(typography_options->body_typography);
    if(body_typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bodyTypography", body_typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // typography_options->headers_typography
    if(typography_options->headers_typography) {
    cJSON *headers_typography_local_JSON = typography_convertToJSON(typography_options->headers_typography);
    if(headers_typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "headersTypography", headers_typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // typography_options->custom_fonts
    if(typography_options->custom_fonts) {
    cJSON *custom_fonts = cJSON_AddArrayToObject(item, "customFonts");
    if(custom_fonts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_fontsListEntry;
    if (typography_options->custom_fonts) {
    list_ForEach(custom_fontsListEntry, typography_options->custom_fonts) {
    cJSON *itemLocal = custom_font_convertToJSON(custom_fontsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_fonts, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

typography_options_t *typography_options_parseFromJSON(cJSON *typography_optionsJSON){

    typography_options_t *typography_options_local_var = NULL;

    // define the local variable for typography_options->body_typography
    typography_t *body_typography_local_nonprim = NULL;

    // define the local variable for typography_options->headers_typography
    typography_t *headers_typography_local_nonprim = NULL;

    // define the local list for typography_options->custom_fonts
    list_t *custom_fontsList = NULL;

    // typography_options->body_typography
    cJSON *body_typography = cJSON_GetObjectItemCaseSensitive(typography_optionsJSON, "bodyTypography");
    if (body_typography) { 
    body_typography_local_nonprim = typography_parseFromJSON(body_typography); //nonprimitive
    }

    // typography_options->headers_typography
    cJSON *headers_typography = cJSON_GetObjectItemCaseSensitive(typography_optionsJSON, "headersTypography");
    if (headers_typography) { 
    headers_typography_local_nonprim = typography_parseFromJSON(headers_typography); //nonprimitive
    }

    // typography_options->custom_fonts
    cJSON *custom_fonts = cJSON_GetObjectItemCaseSensitive(typography_optionsJSON, "customFonts");
    if (custom_fonts) { 
    cJSON *custom_fonts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(custom_fonts)){
        goto end; //nonprimitive container
    }

    custom_fontsList = list_createList();

    cJSON_ArrayForEach(custom_fonts_local_nonprimitive,custom_fonts )
    {
        if(!cJSON_IsObject(custom_fonts_local_nonprimitive)){
            goto end;
        }
        custom_font_t *custom_fontsItem = custom_font_parseFromJSON(custom_fonts_local_nonprimitive);

        list_addElement(custom_fontsList, custom_fontsItem);
    }
    }


    typography_options_local_var = typography_options_create (
        body_typography ? body_typography_local_nonprim : NULL,
        headers_typography ? headers_typography_local_nonprim : NULL,
        custom_fonts ? custom_fontsList : NULL
        );

    return typography_options_local_var;
end:
    if (body_typography_local_nonprim) {
        typography_free(body_typography_local_nonprim);
        body_typography_local_nonprim = NULL;
    }
    if (headers_typography_local_nonprim) {
        typography_free(headers_typography_local_nonprim);
        headers_typography_local_nonprim = NULL;
    }
    if (custom_fontsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, custom_fontsList) {
            custom_font_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(custom_fontsList);
        custom_fontsList = NULL;
    }
    return NULL;

}
