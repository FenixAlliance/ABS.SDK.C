#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_status.h"



response_status_t *response_status_create(
    int success,
    error_t *error,
    char *correlation_id,
    char *utc_timestamp
    ) {
    response_status_t *response_status_local_var = malloc(sizeof(response_status_t));
    if (!response_status_local_var) {
        return NULL;
    }
    response_status_local_var->success = success;
    response_status_local_var->error = error;
    response_status_local_var->correlation_id = correlation_id;
    response_status_local_var->utc_timestamp = utc_timestamp;

    return response_status_local_var;
}


void response_status_free(response_status_t *response_status) {
    if(NULL == response_status){
        return ;
    }
    listEntry_t *listEntry;
    if (response_status->error) {
        error_free(response_status->error);
        response_status->error = NULL;
    }
    if (response_status->correlation_id) {
        free(response_status->correlation_id);
        response_status->correlation_id = NULL;
    }
    if (response_status->utc_timestamp) {
        free(response_status->utc_timestamp);
        response_status->utc_timestamp = NULL;
    }
    free(response_status);
}

cJSON *response_status_convertToJSON(response_status_t *response_status) {
    cJSON *item = cJSON_CreateObject();

    // response_status->success
    if(response_status->success) {
    if(cJSON_AddBoolToObject(item, "success", response_status->success) == NULL) {
    goto fail; //Bool
    }
    }


    // response_status->error
    if(response_status->error) {
    cJSON *error_local_JSON = error_convertToJSON(response_status->error);
    if(error_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "error", error_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_status->correlation_id
    if(response_status->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationID", response_status->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // response_status->utc_timestamp
    if(response_status->utc_timestamp) {
    if(cJSON_AddStringToObject(item, "utcTimestamp", response_status->utc_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

response_status_t *response_status_parseFromJSON(cJSON *response_statusJSON){

    response_status_t *response_status_local_var = NULL;

    // define the local variable for response_status->error
    error_t *error_local_nonprim = NULL;

    // response_status->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(response_statusJSON, "success");
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // response_status->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(response_statusJSON, "error");
    if (error) { 
    error_local_nonprim = error_parseFromJSON(error); //nonprimitive
    }

    // response_status->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(response_statusJSON, "correlationID");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // response_status->utc_timestamp
    cJSON *utc_timestamp = cJSON_GetObjectItemCaseSensitive(response_statusJSON, "utcTimestamp");
    if (utc_timestamp) { 
    if(!cJSON_IsString(utc_timestamp) && !cJSON_IsNull(utc_timestamp))
    {
    goto end; //DateTime
    }
    }


    response_status_local_var = response_status_create (
        success ? success->valueint : 0,
        error ? error_local_nonprim : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        utc_timestamp && !cJSON_IsNull(utc_timestamp) ? strdup(utc_timestamp->valuestring) : NULL
        );

    return response_status_local_var;
end:
    if (error_local_nonprim) {
        error_free(error_local_nonprim);
        error_local_nonprim = NULL;
    }
    return NULL;

}
