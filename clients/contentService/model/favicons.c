#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "favicons.h"



favicons_t *favicons_create(
    char *favicon,
    char *favicon16,
    char *favicon32,
    char *favicon96,
    char *favicon128,
    char *favicon196
    ) {
    favicons_t *favicons_local_var = malloc(sizeof(favicons_t));
    if (!favicons_local_var) {
        return NULL;
    }
    favicons_local_var->favicon = favicon;
    favicons_local_var->favicon16 = favicon16;
    favicons_local_var->favicon32 = favicon32;
    favicons_local_var->favicon96 = favicon96;
    favicons_local_var->favicon128 = favicon128;
    favicons_local_var->favicon196 = favicon196;

    return favicons_local_var;
}


void favicons_free(favicons_t *favicons) {
    if(NULL == favicons){
        return ;
    }
    listEntry_t *listEntry;
    if (favicons->favicon) {
        free(favicons->favicon);
        favicons->favicon = NULL;
    }
    if (favicons->favicon16) {
        free(favicons->favicon16);
        favicons->favicon16 = NULL;
    }
    if (favicons->favicon32) {
        free(favicons->favicon32);
        favicons->favicon32 = NULL;
    }
    if (favicons->favicon96) {
        free(favicons->favicon96);
        favicons->favicon96 = NULL;
    }
    if (favicons->favicon128) {
        free(favicons->favicon128);
        favicons->favicon128 = NULL;
    }
    if (favicons->favicon196) {
        free(favicons->favicon196);
        favicons->favicon196 = NULL;
    }
    free(favicons);
}

cJSON *favicons_convertToJSON(favicons_t *favicons) {
    cJSON *item = cJSON_CreateObject();

    // favicons->favicon
    if(favicons->favicon) {
    if(cJSON_AddStringToObject(item, "favicon", favicons->favicon) == NULL) {
    goto fail; //String
    }
    }


    // favicons->favicon16
    if(favicons->favicon16) {
    if(cJSON_AddStringToObject(item, "favicon16", favicons->favicon16) == NULL) {
    goto fail; //String
    }
    }


    // favicons->favicon32
    if(favicons->favicon32) {
    if(cJSON_AddStringToObject(item, "favicon32", favicons->favicon32) == NULL) {
    goto fail; //String
    }
    }


    // favicons->favicon96
    if(favicons->favicon96) {
    if(cJSON_AddStringToObject(item, "favicon96", favicons->favicon96) == NULL) {
    goto fail; //String
    }
    }


    // favicons->favicon128
    if(favicons->favicon128) {
    if(cJSON_AddStringToObject(item, "favicon128", favicons->favicon128) == NULL) {
    goto fail; //String
    }
    }


    // favicons->favicon196
    if(favicons->favicon196) {
    if(cJSON_AddStringToObject(item, "favicon196", favicons->favicon196) == NULL) {
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

favicons_t *favicons_parseFromJSON(cJSON *faviconsJSON){

    favicons_t *favicons_local_var = NULL;

    // favicons->favicon
    cJSON *favicon = cJSON_GetObjectItemCaseSensitive(faviconsJSON, "favicon");
    if (favicon) { 
    if(!cJSON_IsString(favicon) && !cJSON_IsNull(favicon))
    {
    goto end; //String
    }
    }

    // favicons->favicon16
    cJSON *favicon16 = cJSON_GetObjectItemCaseSensitive(faviconsJSON, "favicon16");
    if (favicon16) { 
    if(!cJSON_IsString(favicon16) && !cJSON_IsNull(favicon16))
    {
    goto end; //String
    }
    }

    // favicons->favicon32
    cJSON *favicon32 = cJSON_GetObjectItemCaseSensitive(faviconsJSON, "favicon32");
    if (favicon32) { 
    if(!cJSON_IsString(favicon32) && !cJSON_IsNull(favicon32))
    {
    goto end; //String
    }
    }

    // favicons->favicon96
    cJSON *favicon96 = cJSON_GetObjectItemCaseSensitive(faviconsJSON, "favicon96");
    if (favicon96) { 
    if(!cJSON_IsString(favicon96) && !cJSON_IsNull(favicon96))
    {
    goto end; //String
    }
    }

    // favicons->favicon128
    cJSON *favicon128 = cJSON_GetObjectItemCaseSensitive(faviconsJSON, "favicon128");
    if (favicon128) { 
    if(!cJSON_IsString(favicon128) && !cJSON_IsNull(favicon128))
    {
    goto end; //String
    }
    }

    // favicons->favicon196
    cJSON *favicon196 = cJSON_GetObjectItemCaseSensitive(faviconsJSON, "favicon196");
    if (favicon196) { 
    if(!cJSON_IsString(favicon196) && !cJSON_IsNull(favicon196))
    {
    goto end; //String
    }
    }


    favicons_local_var = favicons_create (
        favicon && !cJSON_IsNull(favicon) ? strdup(favicon->valuestring) : NULL,
        favicon16 && !cJSON_IsNull(favicon16) ? strdup(favicon16->valuestring) : NULL,
        favicon32 && !cJSON_IsNull(favicon32) ? strdup(favicon32->valuestring) : NULL,
        favicon96 && !cJSON_IsNull(favicon96) ? strdup(favicon96->valuestring) : NULL,
        favicon128 && !cJSON_IsNull(favicon128) ? strdup(favicon128->valuestring) : NULL,
        favicon196 && !cJSON_IsNull(favicon196) ? strdup(favicon196->valuestring) : NULL
        );

    return favicons_local_var;
end:
    return NULL;

}
