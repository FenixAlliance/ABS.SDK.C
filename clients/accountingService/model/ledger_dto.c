#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ledger_dto.h"



ledger_dto_t *ledger_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *date_time,
    char *tenant_id,
    char *enrollment_id,
    char *ledger_type_id
    ) {
    ledger_dto_t *ledger_dto_local_var = malloc(sizeof(ledger_dto_t));
    if (!ledger_dto_local_var) {
        return NULL;
    }
    ledger_dto_local_var->id = id;
    ledger_dto_local_var->timestamp = timestamp;
    ledger_dto_local_var->name = name;
    ledger_dto_local_var->description = description;
    ledger_dto_local_var->date_time = date_time;
    ledger_dto_local_var->tenant_id = tenant_id;
    ledger_dto_local_var->enrollment_id = enrollment_id;
    ledger_dto_local_var->ledger_type_id = ledger_type_id;

    return ledger_dto_local_var;
}


void ledger_dto_free(ledger_dto_t *ledger_dto) {
    if(NULL == ledger_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (ledger_dto->id) {
        free(ledger_dto->id);
        ledger_dto->id = NULL;
    }
    if (ledger_dto->timestamp) {
        free(ledger_dto->timestamp);
        ledger_dto->timestamp = NULL;
    }
    if (ledger_dto->name) {
        free(ledger_dto->name);
        ledger_dto->name = NULL;
    }
    if (ledger_dto->description) {
        free(ledger_dto->description);
        ledger_dto->description = NULL;
    }
    if (ledger_dto->date_time) {
        free(ledger_dto->date_time);
        ledger_dto->date_time = NULL;
    }
    if (ledger_dto->tenant_id) {
        free(ledger_dto->tenant_id);
        ledger_dto->tenant_id = NULL;
    }
    if (ledger_dto->enrollment_id) {
        free(ledger_dto->enrollment_id);
        ledger_dto->enrollment_id = NULL;
    }
    if (ledger_dto->ledger_type_id) {
        free(ledger_dto->ledger_type_id);
        ledger_dto->ledger_type_id = NULL;
    }
    free(ledger_dto);
}

cJSON *ledger_dto_convertToJSON(ledger_dto_t *ledger_dto) {
    cJSON *item = cJSON_CreateObject();

    // ledger_dto->id
    if(ledger_dto->id) {
    if(cJSON_AddStringToObject(item, "id", ledger_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto->timestamp
    if(ledger_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", ledger_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ledger_dto->name
    if(ledger_dto->name) {
    if(cJSON_AddStringToObject(item, "name", ledger_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto->description
    if(ledger_dto->description) {
    if(cJSON_AddStringToObject(item, "description", ledger_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto->date_time
    if(ledger_dto->date_time) {
    if(cJSON_AddStringToObject(item, "dateTime", ledger_dto->date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ledger_dto->tenant_id
    if(ledger_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", ledger_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto->enrollment_id
    if(ledger_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", ledger_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // ledger_dto->ledger_type_id
    if(ledger_dto->ledger_type_id) {
    if(cJSON_AddStringToObject(item, "ledgerTypeId", ledger_dto->ledger_type_id) == NULL) {
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

ledger_dto_t *ledger_dto_parseFromJSON(cJSON *ledger_dtoJSON){

    ledger_dto_t *ledger_dto_local_var = NULL;

    // ledger_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // ledger_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // ledger_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // ledger_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // ledger_dto->date_time
    cJSON *date_time = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "dateTime");
    if (date_time) { 
    if(!cJSON_IsString(date_time) && !cJSON_IsNull(date_time))
    {
    goto end; //DateTime
    }
    }

    // ledger_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // ledger_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // ledger_dto->ledger_type_id
    cJSON *ledger_type_id = cJSON_GetObjectItemCaseSensitive(ledger_dtoJSON, "ledgerTypeId");
    if (ledger_type_id) { 
    if(!cJSON_IsString(ledger_type_id) && !cJSON_IsNull(ledger_type_id))
    {
    goto end; //String
    }
    }


    ledger_dto_local_var = ledger_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        date_time && !cJSON_IsNull(date_time) ? strdup(date_time->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        ledger_type_id && !cJSON_IsNull(ledger_type_id) ? strdup(ledger_type_id->valuestring) : NULL
        );

    return ledger_dto_local_var;
end:
    return NULL;

}
