#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ms_app_tile.h"



ms_app_tile_t *ms_app_tile_create(
    char *color,
    char *logo,
    char *logo_square,
    char *logo144,
    char *logo150,
    char *logo310,
    char *logo310_w,
    char *logo70
    ) {
    ms_app_tile_t *ms_app_tile_local_var = malloc(sizeof(ms_app_tile_t));
    if (!ms_app_tile_local_var) {
        return NULL;
    }
    ms_app_tile_local_var->color = color;
    ms_app_tile_local_var->logo = logo;
    ms_app_tile_local_var->logo_square = logo_square;
    ms_app_tile_local_var->logo144 = logo144;
    ms_app_tile_local_var->logo150 = logo150;
    ms_app_tile_local_var->logo310 = logo310;
    ms_app_tile_local_var->logo310_w = logo310_w;
    ms_app_tile_local_var->logo70 = logo70;

    return ms_app_tile_local_var;
}


void ms_app_tile_free(ms_app_tile_t *ms_app_tile) {
    if(NULL == ms_app_tile){
        return ;
    }
    listEntry_t *listEntry;
    if (ms_app_tile->color) {
        free(ms_app_tile->color);
        ms_app_tile->color = NULL;
    }
    if (ms_app_tile->logo) {
        free(ms_app_tile->logo);
        ms_app_tile->logo = NULL;
    }
    if (ms_app_tile->logo_square) {
        free(ms_app_tile->logo_square);
        ms_app_tile->logo_square = NULL;
    }
    if (ms_app_tile->logo144) {
        free(ms_app_tile->logo144);
        ms_app_tile->logo144 = NULL;
    }
    if (ms_app_tile->logo150) {
        free(ms_app_tile->logo150);
        ms_app_tile->logo150 = NULL;
    }
    if (ms_app_tile->logo310) {
        free(ms_app_tile->logo310);
        ms_app_tile->logo310 = NULL;
    }
    if (ms_app_tile->logo310_w) {
        free(ms_app_tile->logo310_w);
        ms_app_tile->logo310_w = NULL;
    }
    if (ms_app_tile->logo70) {
        free(ms_app_tile->logo70);
        ms_app_tile->logo70 = NULL;
    }
    free(ms_app_tile);
}

cJSON *ms_app_tile_convertToJSON(ms_app_tile_t *ms_app_tile) {
    cJSON *item = cJSON_CreateObject();

    // ms_app_tile->color
    if(ms_app_tile->color) {
    if(cJSON_AddStringToObject(item, "color", ms_app_tile->color) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo
    if(ms_app_tile->logo) {
    if(cJSON_AddStringToObject(item, "logo", ms_app_tile->logo) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo_square
    if(ms_app_tile->logo_square) {
    if(cJSON_AddStringToObject(item, "logoSquare", ms_app_tile->logo_square) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo144
    if(ms_app_tile->logo144) {
    if(cJSON_AddStringToObject(item, "logo144", ms_app_tile->logo144) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo150
    if(ms_app_tile->logo150) {
    if(cJSON_AddStringToObject(item, "logo150", ms_app_tile->logo150) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo310
    if(ms_app_tile->logo310) {
    if(cJSON_AddStringToObject(item, "logo310", ms_app_tile->logo310) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo310_w
    if(ms_app_tile->logo310_w) {
    if(cJSON_AddStringToObject(item, "logo310W", ms_app_tile->logo310_w) == NULL) {
    goto fail; //String
    }
    }


    // ms_app_tile->logo70
    if(ms_app_tile->logo70) {
    if(cJSON_AddStringToObject(item, "logo70", ms_app_tile->logo70) == NULL) {
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

ms_app_tile_t *ms_app_tile_parseFromJSON(cJSON *ms_app_tileJSON){

    ms_app_tile_t *ms_app_tile_local_var = NULL;

    // ms_app_tile->color
    cJSON *color = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "color");
    if (color) { 
    if(!cJSON_IsString(color) && !cJSON_IsNull(color))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo_square
    cJSON *logo_square = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logoSquare");
    if (logo_square) { 
    if(!cJSON_IsString(logo_square) && !cJSON_IsNull(logo_square))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo144
    cJSON *logo144 = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logo144");
    if (logo144) { 
    if(!cJSON_IsString(logo144) && !cJSON_IsNull(logo144))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo150
    cJSON *logo150 = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logo150");
    if (logo150) { 
    if(!cJSON_IsString(logo150) && !cJSON_IsNull(logo150))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo310
    cJSON *logo310 = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logo310");
    if (logo310) { 
    if(!cJSON_IsString(logo310) && !cJSON_IsNull(logo310))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo310_w
    cJSON *logo310_w = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logo310W");
    if (logo310_w) { 
    if(!cJSON_IsString(logo310_w) && !cJSON_IsNull(logo310_w))
    {
    goto end; //String
    }
    }

    // ms_app_tile->logo70
    cJSON *logo70 = cJSON_GetObjectItemCaseSensitive(ms_app_tileJSON, "logo70");
    if (logo70) { 
    if(!cJSON_IsString(logo70) && !cJSON_IsNull(logo70))
    {
    goto end; //String
    }
    }


    ms_app_tile_local_var = ms_app_tile_create (
        color && !cJSON_IsNull(color) ? strdup(color->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        logo_square && !cJSON_IsNull(logo_square) ? strdup(logo_square->valuestring) : NULL,
        logo144 && !cJSON_IsNull(logo144) ? strdup(logo144->valuestring) : NULL,
        logo150 && !cJSON_IsNull(logo150) ? strdup(logo150->valuestring) : NULL,
        logo310 && !cJSON_IsNull(logo310) ? strdup(logo310->valuestring) : NULL,
        logo310_w && !cJSON_IsNull(logo310_w) ? strdup(logo310_w->valuestring) : NULL,
        logo70 && !cJSON_IsNull(logo70) ? strdup(logo70->valuestring) : NULL
        );

    return ms_app_tile_local_var;
end:
    return NULL;

}
