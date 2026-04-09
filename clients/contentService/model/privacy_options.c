#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "privacy_options.h"



privacy_options_t *privacy_options_create(
    char *cookies_notice_message
    ) {
    privacy_options_t *privacy_options_local_var = malloc(sizeof(privacy_options_t));
    if (!privacy_options_local_var) {
        return NULL;
    }
    privacy_options_local_var->cookies_notice_message = cookies_notice_message;

    return privacy_options_local_var;
}


void privacy_options_free(privacy_options_t *privacy_options) {
    if(NULL == privacy_options){
        return ;
    }
    listEntry_t *listEntry;
    if (privacy_options->cookies_notice_message) {
        free(privacy_options->cookies_notice_message);
        privacy_options->cookies_notice_message = NULL;
    }
    free(privacy_options);
}

cJSON *privacy_options_convertToJSON(privacy_options_t *privacy_options) {
    cJSON *item = cJSON_CreateObject();

    // privacy_options->cookies_notice_message
    if(privacy_options->cookies_notice_message) {
    if(cJSON_AddStringToObject(item, "cookiesNoticeMessage", privacy_options->cookies_notice_message) == NULL) {
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

privacy_options_t *privacy_options_parseFromJSON(cJSON *privacy_optionsJSON){

    privacy_options_t *privacy_options_local_var = NULL;

    // privacy_options->cookies_notice_message
    cJSON *cookies_notice_message = cJSON_GetObjectItemCaseSensitive(privacy_optionsJSON, "cookiesNoticeMessage");
    if (cookies_notice_message) { 
    if(!cJSON_IsString(cookies_notice_message) && !cJSON_IsNull(cookies_notice_message))
    {
    goto end; //String
    }
    }


    privacy_options_local_var = privacy_options_create (
        cookies_notice_message && !cJSON_IsNull(cookies_notice_message) ? strdup(cookies_notice_message->valuestring) : NULL
        );

    return privacy_options_local_var;
end:
    return NULL;

}
