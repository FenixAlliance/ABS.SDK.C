#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_analytics.h"



google_analytics_t *google_analytics_create(
    int enable,
    char *tracking_code
    ) {
    google_analytics_t *google_analytics_local_var = malloc(sizeof(google_analytics_t));
    if (!google_analytics_local_var) {
        return NULL;
    }
    google_analytics_local_var->enable = enable;
    google_analytics_local_var->tracking_code = tracking_code;

    return google_analytics_local_var;
}


void google_analytics_free(google_analytics_t *google_analytics) {
    if(NULL == google_analytics){
        return ;
    }
    listEntry_t *listEntry;
    if (google_analytics->tracking_code) {
        free(google_analytics->tracking_code);
        google_analytics->tracking_code = NULL;
    }
    free(google_analytics);
}

cJSON *google_analytics_convertToJSON(google_analytics_t *google_analytics) {
    cJSON *item = cJSON_CreateObject();

    // google_analytics->enable
    if(google_analytics->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_analytics->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_analytics->tracking_code
    if(google_analytics->tracking_code) {
    if(cJSON_AddStringToObject(item, "trackingCode", google_analytics->tracking_code) == NULL) {
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

google_analytics_t *google_analytics_parseFromJSON(cJSON *google_analyticsJSON){

    google_analytics_t *google_analytics_local_var = NULL;

    // google_analytics->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_analyticsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_analytics->tracking_code
    cJSON *tracking_code = cJSON_GetObjectItemCaseSensitive(google_analyticsJSON, "trackingCode");
    if (tracking_code) { 
    if(!cJSON_IsString(tracking_code) && !cJSON_IsNull(tracking_code))
    {
    goto end; //String
    }
    }


    google_analytics_local_var = google_analytics_create (
        enable ? enable->valueint : 0,
        tracking_code && !cJSON_IsNull(tracking_code) ? strdup(tracking_code->valuestring) : NULL
        );

    return google_analytics_local_var;
end:
    return NULL;

}
