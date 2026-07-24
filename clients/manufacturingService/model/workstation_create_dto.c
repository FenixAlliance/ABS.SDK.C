#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "workstation_create_dto.h"



workstation_create_dto_t *workstation_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *type,
    char *description,
    char *location_id
    ) {
    workstation_create_dto_t *workstation_create_dto_local_var = malloc(sizeof(workstation_create_dto_t));
    if (!workstation_create_dto_local_var) {
        return NULL;
    }
    workstation_create_dto_local_var->id = id;
    workstation_create_dto_local_var->timestamp = timestamp;
    workstation_create_dto_local_var->code = code;
    workstation_create_dto_local_var->type = type;
    workstation_create_dto_local_var->description = description;
    workstation_create_dto_local_var->location_id = location_id;

    return workstation_create_dto_local_var;
}


void workstation_create_dto_free(workstation_create_dto_t *workstation_create_dto) {
    if(NULL == workstation_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (workstation_create_dto->id) {
        free(workstation_create_dto->id);
        workstation_create_dto->id = NULL;
    }
    if (workstation_create_dto->timestamp) {
        free(workstation_create_dto->timestamp);
        workstation_create_dto->timestamp = NULL;
    }
    if (workstation_create_dto->code) {
        free(workstation_create_dto->code);
        workstation_create_dto->code = NULL;
    }
    if (workstation_create_dto->type) {
        free(workstation_create_dto->type);
        workstation_create_dto->type = NULL;
    }
    if (workstation_create_dto->description) {
        free(workstation_create_dto->description);
        workstation_create_dto->description = NULL;
    }
    if (workstation_create_dto->location_id) {
        free(workstation_create_dto->location_id);
        workstation_create_dto->location_id = NULL;
    }
    free(workstation_create_dto);
}

cJSON *workstation_create_dto_convertToJSON(workstation_create_dto_t *workstation_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // workstation_create_dto->id
    if(workstation_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", workstation_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // workstation_create_dto->timestamp
    if(workstation_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", workstation_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // workstation_create_dto->code
    if (!workstation_create_dto->code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "code", workstation_create_dto->code) == NULL) {
    goto fail; //String
    }


    // workstation_create_dto->type
    if(workstation_create_dto->type) {
    if(cJSON_AddStringToObject(item, "type", workstation_create_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // workstation_create_dto->description
    if(workstation_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", workstation_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // workstation_create_dto->location_id
    if(workstation_create_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", workstation_create_dto->location_id) == NULL) {
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

workstation_create_dto_t *workstation_create_dto_parseFromJSON(cJSON *workstation_create_dtoJSON){

    workstation_create_dto_t *workstation_create_dto_local_var = NULL;

    // workstation_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(workstation_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // workstation_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(workstation_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // workstation_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(workstation_create_dtoJSON, "code");
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }

    // workstation_create_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(workstation_create_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // workstation_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(workstation_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // workstation_create_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(workstation_create_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }


    workstation_create_dto_local_var = workstation_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(code->valuestring),
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL
        );

    return workstation_create_dto_local_var;
end:
    return NULL;

}
