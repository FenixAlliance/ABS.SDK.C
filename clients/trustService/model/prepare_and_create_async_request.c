#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_and_create_async_request.h"


char* prepare_and_create_async_request_routing_mode_ToString(trustservice_prepare_and_create_async_request_ROUTINGMODE_e routing_mode) {
    char* routing_modeArray[] =  { "NULL", "Parallel", "Sequential" };
    return routing_modeArray[routing_mode];
}

trustservice_prepare_and_create_async_request_ROUTINGMODE_e prepare_and_create_async_request_routing_mode_FromString(char* routing_mode){
    int stringToReturn = 0;
    char *routing_modeArray[] =  { "NULL", "Parallel", "Sequential" };
    size_t sizeofArray = sizeof(routing_modeArray) / sizeof(routing_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(routing_mode, routing_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

prepare_and_create_async_request_t *prepare_and_create_async_request_create(
    binary_t* file,
    char *title,
    char *contact_id,
    trustservice_prepare_and_create_async_request_ROUTINGMODE_e routing_mode,
    char *expires_at_utc,
    char *message,
    char *correlation_id,
    char *external_reference,
    char *signers
    ) {
    prepare_and_create_async_request_t *prepare_and_create_async_request_local_var = malloc(sizeof(prepare_and_create_async_request_t));
    if (!prepare_and_create_async_request_local_var) {
        return NULL;
    }
    prepare_and_create_async_request_local_var->file = file;
    prepare_and_create_async_request_local_var->title = title;
    prepare_and_create_async_request_local_var->contact_id = contact_id;
    prepare_and_create_async_request_local_var->routing_mode = routing_mode;
    prepare_and_create_async_request_local_var->expires_at_utc = expires_at_utc;
    prepare_and_create_async_request_local_var->message = message;
    prepare_and_create_async_request_local_var->correlation_id = correlation_id;
    prepare_and_create_async_request_local_var->external_reference = external_reference;
    prepare_and_create_async_request_local_var->signers = signers;

    return prepare_and_create_async_request_local_var;
}


void prepare_and_create_async_request_free(prepare_and_create_async_request_t *prepare_and_create_async_request) {
    if(NULL == prepare_and_create_async_request){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_and_create_async_request->file) {
        free(prepare_and_create_async_request->file->data);
        prepare_and_create_async_request->file = NULL;
    }
    if (prepare_and_create_async_request->title) {
        free(prepare_and_create_async_request->title);
        prepare_and_create_async_request->title = NULL;
    }
    if (prepare_and_create_async_request->contact_id) {
        free(prepare_and_create_async_request->contact_id);
        prepare_and_create_async_request->contact_id = NULL;
    }
    if (prepare_and_create_async_request->expires_at_utc) {
        free(prepare_and_create_async_request->expires_at_utc);
        prepare_and_create_async_request->expires_at_utc = NULL;
    }
    if (prepare_and_create_async_request->message) {
        free(prepare_and_create_async_request->message);
        prepare_and_create_async_request->message = NULL;
    }
    if (prepare_and_create_async_request->correlation_id) {
        free(prepare_and_create_async_request->correlation_id);
        prepare_and_create_async_request->correlation_id = NULL;
    }
    if (prepare_and_create_async_request->external_reference) {
        free(prepare_and_create_async_request->external_reference);
        prepare_and_create_async_request->external_reference = NULL;
    }
    if (prepare_and_create_async_request->signers) {
        free(prepare_and_create_async_request->signers);
        prepare_and_create_async_request->signers = NULL;
    }
    free(prepare_and_create_async_request);
}

cJSON *prepare_and_create_async_request_convertToJSON(prepare_and_create_async_request_t *prepare_and_create_async_request) {
    cJSON *item = cJSON_CreateObject();

    // prepare_and_create_async_request->file
    if(prepare_and_create_async_request->file) {
    char* encoded_str_file = base64encode(prepare_and_create_async_request->file->data,prepare_and_create_async_request->file->len);
    if(cJSON_AddStringToObject(item, "file", encoded_str_file) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_file);
    }


    // prepare_and_create_async_request->title
    if(prepare_and_create_async_request->title) {
    if(cJSON_AddStringToObject(item, "title", prepare_and_create_async_request->title) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_create_async_request->contact_id
    if(prepare_and_create_async_request->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", prepare_and_create_async_request->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_create_async_request->routing_mode
    if(prepare_and_create_async_request->routing_mode != trustservice_prepare_and_create_async_request_ROUTINGMODE_NULL) {
    if(cJSON_AddStringToObject(item, "routingMode", routing_modeprepare_and_create_async_request_ToString(prepare_and_create_async_request->routing_mode)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // prepare_and_create_async_request->expires_at_utc
    if(prepare_and_create_async_request->expires_at_utc) {
    if(cJSON_AddStringToObject(item, "expiresAtUtc", prepare_and_create_async_request->expires_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // prepare_and_create_async_request->message
    if(prepare_and_create_async_request->message) {
    if(cJSON_AddStringToObject(item, "message", prepare_and_create_async_request->message) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_create_async_request->correlation_id
    if(prepare_and_create_async_request->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", prepare_and_create_async_request->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_create_async_request->external_reference
    if(prepare_and_create_async_request->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", prepare_and_create_async_request->external_reference) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_create_async_request->signers
    if(prepare_and_create_async_request->signers) {
    if(cJSON_AddStringToObject(item, "signers", prepare_and_create_async_request->signers) == NULL) {
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

prepare_and_create_async_request_t *prepare_and_create_async_request_parseFromJSON(cJSON *prepare_and_create_async_requestJSON){

    prepare_and_create_async_request_t *prepare_and_create_async_request_local_var = NULL;

    // prepare_and_create_async_request->file
    cJSON *file = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "file");
    binary_t* decoded_str_file = malloc(sizeof(struct binary_t));
    if (file) { 
    if(!cJSON_IsString(file))
    {
    goto end; //Binary
    }
    decoded_str_file->data = base64decode(file->valuestring, strlen(file->valuestring), &decoded_str_file->len);
    if (!decoded_str_file->data) {
        goto end;
    }
    }

    // prepare_and_create_async_request->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // prepare_and_create_async_request->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // prepare_and_create_async_request->routing_mode
    cJSON *routing_mode = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "routingMode");
    trustservice_prepare_and_create_async_request_ROUTINGMODE_e routing_modeVariable;
    if (routing_mode) { 
    if(!cJSON_IsString(routing_mode))
    {
    goto end; //Enum
    }
    routing_modeVariable = prepare_and_create_async_request_routing_mode_FromString(routing_mode->valuestring);
    }

    // prepare_and_create_async_request->expires_at_utc
    cJSON *expires_at_utc = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "expiresAtUtc");
    if (expires_at_utc) { 
    if(!cJSON_IsString(expires_at_utc) && !cJSON_IsNull(expires_at_utc))
    {
    goto end; //DateTime
    }
    }

    // prepare_and_create_async_request->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // prepare_and_create_async_request->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // prepare_and_create_async_request->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }

    // prepare_and_create_async_request->signers
    cJSON *signers = cJSON_GetObjectItemCaseSensitive(prepare_and_create_async_requestJSON, "signers");
    if (signers) { 
    if(!cJSON_IsString(signers) && !cJSON_IsNull(signers))
    {
    goto end; //String
    }
    }


    prepare_and_create_async_request_local_var = prepare_and_create_async_request_create (
        file ? decoded_str_file : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        routing_mode ? routing_modeVariable : trustservice_prepare_and_create_async_request_ROUTINGMODE_NULL,
        expires_at_utc && !cJSON_IsNull(expires_at_utc) ? strdup(expires_at_utc->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL,
        signers && !cJSON_IsNull(signers) ? strdup(signers->valuestring) : NULL
        );

    return prepare_and_create_async_request_local_var;
end:
    return NULL;

}
