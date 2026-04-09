#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_type_dto_envelope.h"



journal_type_dto_envelope_t *journal_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    journal_type_dto_t *result
    ) {
    journal_type_dto_envelope_t *journal_type_dto_envelope_local_var = malloc(sizeof(journal_type_dto_envelope_t));
    if (!journal_type_dto_envelope_local_var) {
        return NULL;
    }
    journal_type_dto_envelope_local_var->is_success = is_success;
    journal_type_dto_envelope_local_var->error_message = error_message;
    journal_type_dto_envelope_local_var->correlation_id = correlation_id;
    journal_type_dto_envelope_local_var->timestamp = timestamp;
    journal_type_dto_envelope_local_var->activity_id = activity_id;
    journal_type_dto_envelope_local_var->result = result;

    return journal_type_dto_envelope_local_var;
}


void journal_type_dto_envelope_free(journal_type_dto_envelope_t *journal_type_dto_envelope) {
    if(NULL == journal_type_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_type_dto_envelope->error_message) {
        free(journal_type_dto_envelope->error_message);
        journal_type_dto_envelope->error_message = NULL;
    }
    if (journal_type_dto_envelope->correlation_id) {
        free(journal_type_dto_envelope->correlation_id);
        journal_type_dto_envelope->correlation_id = NULL;
    }
    if (journal_type_dto_envelope->timestamp) {
        free(journal_type_dto_envelope->timestamp);
        journal_type_dto_envelope->timestamp = NULL;
    }
    if (journal_type_dto_envelope->activity_id) {
        free(journal_type_dto_envelope->activity_id);
        journal_type_dto_envelope->activity_id = NULL;
    }
    if (journal_type_dto_envelope->result) {
        journal_type_dto_free(journal_type_dto_envelope->result);
        journal_type_dto_envelope->result = NULL;
    }
    free(journal_type_dto_envelope);
}

cJSON *journal_type_dto_envelope_convertToJSON(journal_type_dto_envelope_t *journal_type_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // journal_type_dto_envelope->is_success
    if(journal_type_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", journal_type_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_type_dto_envelope->error_message
    if(journal_type_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", journal_type_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_envelope->correlation_id
    if(journal_type_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", journal_type_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_envelope->timestamp
    if(journal_type_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_type_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_type_dto_envelope->activity_id
    if(journal_type_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", journal_type_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto_envelope->result
    if(journal_type_dto_envelope->result) {
    cJSON *result_local_JSON = journal_type_dto_convertToJSON(journal_type_dto_envelope->result);
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

journal_type_dto_envelope_t *journal_type_dto_envelope_parseFromJSON(cJSON *journal_type_dto_envelopeJSON){

    journal_type_dto_envelope_t *journal_type_dto_envelope_local_var = NULL;

    // define the local variable for journal_type_dto_envelope->result
    journal_type_dto_t *result_local_nonprim = NULL;

    // journal_type_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(journal_type_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // journal_type_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(journal_type_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // journal_type_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(journal_type_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // journal_type_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_type_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_type_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(journal_type_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // journal_type_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(journal_type_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = journal_type_dto_parseFromJSON(result); //nonprimitive
    }


    journal_type_dto_envelope_local_var = journal_type_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return journal_type_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        journal_type_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
