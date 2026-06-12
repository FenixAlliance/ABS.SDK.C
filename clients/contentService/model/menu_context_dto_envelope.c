#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "menu_context_dto_envelope.h"



menu_context_dto_envelope_t *menu_context_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    menu_context_dto_t *result
    ) {
    menu_context_dto_envelope_t *menu_context_dto_envelope_local_var = malloc(sizeof(menu_context_dto_envelope_t));
    if (!menu_context_dto_envelope_local_var) {
        return NULL;
    }
    menu_context_dto_envelope_local_var->is_success = is_success;
    menu_context_dto_envelope_local_var->error_message = error_message;
    menu_context_dto_envelope_local_var->correlation_id = correlation_id;
    menu_context_dto_envelope_local_var->timestamp = timestamp;
    menu_context_dto_envelope_local_var->activity_id = activity_id;
    menu_context_dto_envelope_local_var->result = result;

    return menu_context_dto_envelope_local_var;
}


void menu_context_dto_envelope_free(menu_context_dto_envelope_t *menu_context_dto_envelope) {
    if(NULL == menu_context_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (menu_context_dto_envelope->error_message) {
        free(menu_context_dto_envelope->error_message);
        menu_context_dto_envelope->error_message = NULL;
    }
    if (menu_context_dto_envelope->correlation_id) {
        free(menu_context_dto_envelope->correlation_id);
        menu_context_dto_envelope->correlation_id = NULL;
    }
    if (menu_context_dto_envelope->timestamp) {
        free(menu_context_dto_envelope->timestamp);
        menu_context_dto_envelope->timestamp = NULL;
    }
    if (menu_context_dto_envelope->activity_id) {
        free(menu_context_dto_envelope->activity_id);
        menu_context_dto_envelope->activity_id = NULL;
    }
    if (menu_context_dto_envelope->result) {
        menu_context_dto_free(menu_context_dto_envelope->result);
        menu_context_dto_envelope->result = NULL;
    }
    free(menu_context_dto_envelope);
}

cJSON *menu_context_dto_envelope_convertToJSON(menu_context_dto_envelope_t *menu_context_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // menu_context_dto_envelope->is_success
    if(menu_context_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", menu_context_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_context_dto_envelope->error_message
    if(menu_context_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", menu_context_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_dto_envelope->correlation_id
    if(menu_context_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", menu_context_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_dto_envelope->timestamp
    if(menu_context_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", menu_context_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // menu_context_dto_envelope->activity_id
    if(menu_context_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", menu_context_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_dto_envelope->result
    if(menu_context_dto_envelope->result) {
    cJSON *result_local_JSON = menu_context_dto_convertToJSON(menu_context_dto_envelope->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
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

menu_context_dto_envelope_t *menu_context_dto_envelope_parseFromJSON(cJSON *menu_context_dto_envelopeJSON){

    menu_context_dto_envelope_t *menu_context_dto_envelope_local_var = NULL;

    // define the local variable for menu_context_dto_envelope->result
    menu_context_dto_t *result_local_nonprim = NULL;

    // menu_context_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(menu_context_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // menu_context_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(menu_context_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // menu_context_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(menu_context_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // menu_context_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(menu_context_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // menu_context_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(menu_context_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // menu_context_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(menu_context_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = menu_context_dto_parseFromJSON(result); //nonprimitive
    }


    menu_context_dto_envelope_local_var = menu_context_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return menu_context_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        menu_context_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
