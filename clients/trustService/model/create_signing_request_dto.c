#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_signing_request_dto.h"


char* create_signing_request_dto_routing_mode_ToString(trustservice_create_signing_request_dto_ROUTINGMODE_e routing_mode) {
    char* routing_modeArray[] =  { "NULL", "Parallel", "Sequential" };
    return routing_modeArray[routing_mode];
}

trustservice_create_signing_request_dto_ROUTINGMODE_e create_signing_request_dto_routing_mode_FromString(char* routing_mode){
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

create_signing_request_dto_t *create_signing_request_dto_create(
    trustservice_create_signing_request_dto_ROUTINGMODE_e routing_mode,
    char *expires_at_utc,
    char *message,
    char *correlation_id,
    char *external_reference
    ) {
    create_signing_request_dto_t *create_signing_request_dto_local_var = malloc(sizeof(create_signing_request_dto_t));
    if (!create_signing_request_dto_local_var) {
        return NULL;
    }
    create_signing_request_dto_local_var->routing_mode = routing_mode;
    create_signing_request_dto_local_var->expires_at_utc = expires_at_utc;
    create_signing_request_dto_local_var->message = message;
    create_signing_request_dto_local_var->correlation_id = correlation_id;
    create_signing_request_dto_local_var->external_reference = external_reference;

    return create_signing_request_dto_local_var;
}


void create_signing_request_dto_free(create_signing_request_dto_t *create_signing_request_dto) {
    if(NULL == create_signing_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (create_signing_request_dto->expires_at_utc) {
        free(create_signing_request_dto->expires_at_utc);
        create_signing_request_dto->expires_at_utc = NULL;
    }
    if (create_signing_request_dto->message) {
        free(create_signing_request_dto->message);
        create_signing_request_dto->message = NULL;
    }
    if (create_signing_request_dto->correlation_id) {
        free(create_signing_request_dto->correlation_id);
        create_signing_request_dto->correlation_id = NULL;
    }
    if (create_signing_request_dto->external_reference) {
        free(create_signing_request_dto->external_reference);
        create_signing_request_dto->external_reference = NULL;
    }
    free(create_signing_request_dto);
}

cJSON *create_signing_request_dto_convertToJSON(create_signing_request_dto_t *create_signing_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // create_signing_request_dto->routing_mode
    if(create_signing_request_dto->routing_mode != trustservice_create_signing_request_dto_ROUTINGMODE_NULL) {
    if(cJSON_AddStringToObject(item, "routingMode", routing_modecreate_signing_request_dto_ToString(create_signing_request_dto->routing_mode)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // create_signing_request_dto->expires_at_utc
    if(create_signing_request_dto->expires_at_utc) {
    if(cJSON_AddStringToObject(item, "expiresAtUtc", create_signing_request_dto->expires_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // create_signing_request_dto->message
    if(create_signing_request_dto->message) {
    if(cJSON_AddStringToObject(item, "message", create_signing_request_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // create_signing_request_dto->correlation_id
    if(create_signing_request_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", create_signing_request_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // create_signing_request_dto->external_reference
    if(create_signing_request_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", create_signing_request_dto->external_reference) == NULL) {
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

create_signing_request_dto_t *create_signing_request_dto_parseFromJSON(cJSON *create_signing_request_dtoJSON){

    create_signing_request_dto_t *create_signing_request_dto_local_var = NULL;

    // create_signing_request_dto->routing_mode
    cJSON *routing_mode = cJSON_GetObjectItemCaseSensitive(create_signing_request_dtoJSON, "routingMode");
    trustservice_create_signing_request_dto_ROUTINGMODE_e routing_modeVariable;
    if (routing_mode) { 
    if(!cJSON_IsString(routing_mode))
    {
    goto end; //Enum
    }
    routing_modeVariable = create_signing_request_dto_routing_mode_FromString(routing_mode->valuestring);
    }

    // create_signing_request_dto->expires_at_utc
    cJSON *expires_at_utc = cJSON_GetObjectItemCaseSensitive(create_signing_request_dtoJSON, "expiresAtUtc");
    if (expires_at_utc) { 
    if(!cJSON_IsString(expires_at_utc) && !cJSON_IsNull(expires_at_utc))
    {
    goto end; //DateTime
    }
    }

    // create_signing_request_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(create_signing_request_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // create_signing_request_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(create_signing_request_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // create_signing_request_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(create_signing_request_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }


    create_signing_request_dto_local_var = create_signing_request_dto_create (
        routing_mode ? routing_modeVariable : trustservice_create_signing_request_dto_ROUTINGMODE_NULL,
        expires_at_utc && !cJSON_IsNull(expires_at_utc) ? strdup(expires_at_utc->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL
        );

    return create_signing_request_dto_local_var;
end:
    return NULL;

}
