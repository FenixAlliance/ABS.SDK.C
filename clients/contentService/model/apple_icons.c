#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apple_icons.h"



apple_icons_t *apple_icons_create(
    char *the57,
    char *the60,
    char *the72,
    char *the76,
    char *the114,
    char *the120,
    char *the128,
    char *the144,
    char *the152,
    char *the167,
    char *the180
    ) {
    apple_icons_t *apple_icons_local_var = malloc(sizeof(apple_icons_t));
    if (!apple_icons_local_var) {
        return NULL;
    }
    apple_icons_local_var->the57 = the57;
    apple_icons_local_var->the60 = the60;
    apple_icons_local_var->the72 = the72;
    apple_icons_local_var->the76 = the76;
    apple_icons_local_var->the114 = the114;
    apple_icons_local_var->the120 = the120;
    apple_icons_local_var->the128 = the128;
    apple_icons_local_var->the144 = the144;
    apple_icons_local_var->the152 = the152;
    apple_icons_local_var->the167 = the167;
    apple_icons_local_var->the180 = the180;

    return apple_icons_local_var;
}


void apple_icons_free(apple_icons_t *apple_icons) {
    if(NULL == apple_icons){
        return ;
    }
    listEntry_t *listEntry;
    if (apple_icons->the57) {
        free(apple_icons->the57);
        apple_icons->the57 = NULL;
    }
    if (apple_icons->the60) {
        free(apple_icons->the60);
        apple_icons->the60 = NULL;
    }
    if (apple_icons->the72) {
        free(apple_icons->the72);
        apple_icons->the72 = NULL;
    }
    if (apple_icons->the76) {
        free(apple_icons->the76);
        apple_icons->the76 = NULL;
    }
    if (apple_icons->the114) {
        free(apple_icons->the114);
        apple_icons->the114 = NULL;
    }
    if (apple_icons->the120) {
        free(apple_icons->the120);
        apple_icons->the120 = NULL;
    }
    if (apple_icons->the128) {
        free(apple_icons->the128);
        apple_icons->the128 = NULL;
    }
    if (apple_icons->the144) {
        free(apple_icons->the144);
        apple_icons->the144 = NULL;
    }
    if (apple_icons->the152) {
        free(apple_icons->the152);
        apple_icons->the152 = NULL;
    }
    if (apple_icons->the167) {
        free(apple_icons->the167);
        apple_icons->the167 = NULL;
    }
    if (apple_icons->the180) {
        free(apple_icons->the180);
        apple_icons->the180 = NULL;
    }
    free(apple_icons);
}

cJSON *apple_icons_convertToJSON(apple_icons_t *apple_icons) {
    cJSON *item = cJSON_CreateObject();

    // apple_icons->the57
    if(apple_icons->the57) {
    if(cJSON_AddStringToObject(item, "the57", apple_icons->the57) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the60
    if(apple_icons->the60) {
    if(cJSON_AddStringToObject(item, "the60", apple_icons->the60) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the72
    if(apple_icons->the72) {
    if(cJSON_AddStringToObject(item, "the72", apple_icons->the72) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the76
    if(apple_icons->the76) {
    if(cJSON_AddStringToObject(item, "the76", apple_icons->the76) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the114
    if(apple_icons->the114) {
    if(cJSON_AddStringToObject(item, "the114", apple_icons->the114) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the120
    if(apple_icons->the120) {
    if(cJSON_AddStringToObject(item, "the120", apple_icons->the120) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the128
    if(apple_icons->the128) {
    if(cJSON_AddStringToObject(item, "the128", apple_icons->the128) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the144
    if(apple_icons->the144) {
    if(cJSON_AddStringToObject(item, "the144", apple_icons->the144) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the152
    if(apple_icons->the152) {
    if(cJSON_AddStringToObject(item, "the152", apple_icons->the152) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the167
    if(apple_icons->the167) {
    if(cJSON_AddStringToObject(item, "the167", apple_icons->the167) == NULL) {
    goto fail; //String
    }
    }


    // apple_icons->the180
    if(apple_icons->the180) {
    if(cJSON_AddStringToObject(item, "the180", apple_icons->the180) == NULL) {
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

apple_icons_t *apple_icons_parseFromJSON(cJSON *apple_iconsJSON){

    apple_icons_t *apple_icons_local_var = NULL;

    // apple_icons->the57
    cJSON *the57 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the57");
    if (the57) { 
    if(!cJSON_IsString(the57) && !cJSON_IsNull(the57))
    {
    goto end; //String
    }
    }

    // apple_icons->the60
    cJSON *the60 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the60");
    if (the60) { 
    if(!cJSON_IsString(the60) && !cJSON_IsNull(the60))
    {
    goto end; //String
    }
    }

    // apple_icons->the72
    cJSON *the72 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the72");
    if (the72) { 
    if(!cJSON_IsString(the72) && !cJSON_IsNull(the72))
    {
    goto end; //String
    }
    }

    // apple_icons->the76
    cJSON *the76 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the76");
    if (the76) { 
    if(!cJSON_IsString(the76) && !cJSON_IsNull(the76))
    {
    goto end; //String
    }
    }

    // apple_icons->the114
    cJSON *the114 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the114");
    if (the114) { 
    if(!cJSON_IsString(the114) && !cJSON_IsNull(the114))
    {
    goto end; //String
    }
    }

    // apple_icons->the120
    cJSON *the120 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the120");
    if (the120) { 
    if(!cJSON_IsString(the120) && !cJSON_IsNull(the120))
    {
    goto end; //String
    }
    }

    // apple_icons->the128
    cJSON *the128 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the128");
    if (the128) { 
    if(!cJSON_IsString(the128) && !cJSON_IsNull(the128))
    {
    goto end; //String
    }
    }

    // apple_icons->the144
    cJSON *the144 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the144");
    if (the144) { 
    if(!cJSON_IsString(the144) && !cJSON_IsNull(the144))
    {
    goto end; //String
    }
    }

    // apple_icons->the152
    cJSON *the152 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the152");
    if (the152) { 
    if(!cJSON_IsString(the152) && !cJSON_IsNull(the152))
    {
    goto end; //String
    }
    }

    // apple_icons->the167
    cJSON *the167 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the167");
    if (the167) { 
    if(!cJSON_IsString(the167) && !cJSON_IsNull(the167))
    {
    goto end; //String
    }
    }

    // apple_icons->the180
    cJSON *the180 = cJSON_GetObjectItemCaseSensitive(apple_iconsJSON, "the180");
    if (the180) { 
    if(!cJSON_IsString(the180) && !cJSON_IsNull(the180))
    {
    goto end; //String
    }
    }


    apple_icons_local_var = apple_icons_create (
        the57 && !cJSON_IsNull(the57) ? strdup(the57->valuestring) : NULL,
        the60 && !cJSON_IsNull(the60) ? strdup(the60->valuestring) : NULL,
        the72 && !cJSON_IsNull(the72) ? strdup(the72->valuestring) : NULL,
        the76 && !cJSON_IsNull(the76) ? strdup(the76->valuestring) : NULL,
        the114 && !cJSON_IsNull(the114) ? strdup(the114->valuestring) : NULL,
        the120 && !cJSON_IsNull(the120) ? strdup(the120->valuestring) : NULL,
        the128 && !cJSON_IsNull(the128) ? strdup(the128->valuestring) : NULL,
        the144 && !cJSON_IsNull(the144) ? strdup(the144->valuestring) : NULL,
        the152 && !cJSON_IsNull(the152) ? strdup(the152->valuestring) : NULL,
        the167 && !cJSON_IsNull(the167) ? strdup(the167->valuestring) : NULL,
        the180 && !cJSON_IsNull(the180) ? strdup(the180->valuestring) : NULL
        );

    return apple_icons_local_var;
end:
    return NULL;

}
