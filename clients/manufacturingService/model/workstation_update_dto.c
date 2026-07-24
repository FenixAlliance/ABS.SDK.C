#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "workstation_update_dto.h"



workstation_update_dto_t *workstation_update_dto_create(
    char *code,
    char *type,
    char *description,
    char *location_id
    ) {
    workstation_update_dto_t *workstation_update_dto_local_var = malloc(sizeof(workstation_update_dto_t));
    if (!workstation_update_dto_local_var) {
        return NULL;
    }
    workstation_update_dto_local_var->code = code;
    workstation_update_dto_local_var->type = type;
    workstation_update_dto_local_var->description = description;
    workstation_update_dto_local_var->location_id = location_id;

    return workstation_update_dto_local_var;
}


void workstation_update_dto_free(workstation_update_dto_t *workstation_update_dto) {
    if(NULL == workstation_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (workstation_update_dto->code) {
        free(workstation_update_dto->code);
        workstation_update_dto->code = NULL;
    }
    if (workstation_update_dto->type) {
        free(workstation_update_dto->type);
        workstation_update_dto->type = NULL;
    }
    if (workstation_update_dto->description) {
        free(workstation_update_dto->description);
        workstation_update_dto->description = NULL;
    }
    if (workstation_update_dto->location_id) {
        free(workstation_update_dto->location_id);
        workstation_update_dto->location_id = NULL;
    }
    free(workstation_update_dto);
}

cJSON *workstation_update_dto_convertToJSON(workstation_update_dto_t *workstation_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // workstation_update_dto->code
    if(workstation_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", workstation_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // workstation_update_dto->type
    if(workstation_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", workstation_update_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // workstation_update_dto->description
    if(workstation_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", workstation_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // workstation_update_dto->location_id
    if(workstation_update_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", workstation_update_dto->location_id) == NULL) {
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

workstation_update_dto_t *workstation_update_dto_parseFromJSON(cJSON *workstation_update_dtoJSON){

    workstation_update_dto_t *workstation_update_dto_local_var = NULL;

    // workstation_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(workstation_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // workstation_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(workstation_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // workstation_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(workstation_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // workstation_update_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(workstation_update_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }


    workstation_update_dto_local_var = workstation_update_dto_create (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL
        );

    return workstation_update_dto_local_var;
end:
    return NULL;

}
