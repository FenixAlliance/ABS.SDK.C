#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_offer_dto_list_envelope.h"



job_offer_dto_list_envelope_t *job_offer_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    job_offer_dto_list_envelope_t *job_offer_dto_list_envelope_local_var = malloc(sizeof(job_offer_dto_list_envelope_t));
    if (!job_offer_dto_list_envelope_local_var) {
        return NULL;
    }
    job_offer_dto_list_envelope_local_var->is_success = is_success;
    job_offer_dto_list_envelope_local_var->error_message = error_message;
    job_offer_dto_list_envelope_local_var->correlation_id = correlation_id;
    job_offer_dto_list_envelope_local_var->timestamp = timestamp;
    job_offer_dto_list_envelope_local_var->activity_id = activity_id;
    job_offer_dto_list_envelope_local_var->result = result;

    return job_offer_dto_list_envelope_local_var;
}


void job_offer_dto_list_envelope_free(job_offer_dto_list_envelope_t *job_offer_dto_list_envelope) {
    if(NULL == job_offer_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (job_offer_dto_list_envelope->error_message) {
        free(job_offer_dto_list_envelope->error_message);
        job_offer_dto_list_envelope->error_message = NULL;
    }
    if (job_offer_dto_list_envelope->correlation_id) {
        free(job_offer_dto_list_envelope->correlation_id);
        job_offer_dto_list_envelope->correlation_id = NULL;
    }
    if (job_offer_dto_list_envelope->timestamp) {
        free(job_offer_dto_list_envelope->timestamp);
        job_offer_dto_list_envelope->timestamp = NULL;
    }
    if (job_offer_dto_list_envelope->activity_id) {
        free(job_offer_dto_list_envelope->activity_id);
        job_offer_dto_list_envelope->activity_id = NULL;
    }
    if (job_offer_dto_list_envelope->result) {
        list_ForEach(listEntry, job_offer_dto_list_envelope->result) {
            job_offer_dto_free(listEntry->data);
        }
        list_freeList(job_offer_dto_list_envelope->result);
        job_offer_dto_list_envelope->result = NULL;
    }
    free(job_offer_dto_list_envelope);
}

cJSON *job_offer_dto_list_envelope_convertToJSON(job_offer_dto_list_envelope_t *job_offer_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // job_offer_dto_list_envelope->is_success
    if(job_offer_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", job_offer_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // job_offer_dto_list_envelope->error_message
    if(job_offer_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", job_offer_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_dto_list_envelope->correlation_id
    if(job_offer_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", job_offer_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_dto_list_envelope->timestamp
    if(job_offer_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_offer_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_offer_dto_list_envelope->activity_id
    if(job_offer_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", job_offer_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_dto_list_envelope->result
    if(job_offer_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (job_offer_dto_list_envelope->result) {
    list_ForEach(resultListEntry, job_offer_dto_list_envelope->result) {
    cJSON *itemLocal = job_offer_dto_convertToJSON(resultListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(result, itemLocal);
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

job_offer_dto_list_envelope_t *job_offer_dto_list_envelope_parseFromJSON(cJSON *job_offer_dto_list_envelopeJSON){

    job_offer_dto_list_envelope_t *job_offer_dto_list_envelope_local_var = NULL;

    // define the local list for job_offer_dto_list_envelope->result
    list_t *resultList = NULL;

    // job_offer_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(job_offer_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // job_offer_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(job_offer_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // job_offer_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(job_offer_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // job_offer_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_offer_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // job_offer_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(job_offer_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // job_offer_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(job_offer_dto_list_envelopeJSON, "result");
    if (result) { 
    cJSON *result_local_nonprimitive = NULL;
    if(!cJSON_IsArray(result)){
        goto end; //nonprimitive container
    }

    resultList = list_createList();

    cJSON_ArrayForEach(result_local_nonprimitive,result )
    {
        if(!cJSON_IsObject(result_local_nonprimitive)){
            goto end;
        }
        job_offer_dto_t *resultItem = job_offer_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    job_offer_dto_list_envelope_local_var = job_offer_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return job_offer_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            job_offer_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
