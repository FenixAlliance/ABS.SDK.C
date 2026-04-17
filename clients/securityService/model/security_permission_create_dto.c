#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_permission_create_dto.h"



security_permission_create_dto_t *security_permission_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    security_permission_create_dto_t *security_permission_create_dto_local_var = malloc(sizeof(security_permission_create_dto_t));
    if (!security_permission_create_dto_local_var) {
        return NULL;
    }
    security_permission_create_dto_local_var->id = id;
    security_permission_create_dto_local_var->timestamp = timestamp;
    security_permission_create_dto_local_var->name = name;
    security_permission_create_dto_local_var->description = description;

    return security_permission_create_dto_local_var;
}


void security_permission_create_dto_free(security_permission_create_dto_t *security_permission_create_dto) {
    if(NULL == security_permission_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (security_permission_create_dto->id) {
        free(security_permission_create_dto->id);
        security_permission_create_dto->id = NULL;
    }
    if (security_permission_create_dto->timestamp) {
        free(security_permission_create_dto->timestamp);
        security_permission_create_dto->timestamp = NULL;
    }
    if (security_permission_create_dto->name) {
        free(security_permission_create_dto->name);
        security_permission_create_dto->name = NULL;
    }
    if (security_permission_create_dto->description) {
        free(security_permission_create_dto->description);
        security_permission_create_dto->description = NULL;
    }
    free(security_permission_create_dto);
}

cJSON *security_permission_create_dto_convertToJSON(security_permission_create_dto_t *security_permission_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // security_permission_create_dto->id
    if(security_permission_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", security_permission_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_create_dto->timestamp
    if(security_permission_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", security_permission_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // security_permission_create_dto->name
    if (!security_permission_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", security_permission_create_dto->name) == NULL) {
    goto fail; //String
    }


    // security_permission_create_dto->description
    if(security_permission_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", security_permission_create_dto->description) == NULL) {
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

security_permission_create_dto_t *security_permission_create_dto_parseFromJSON(cJSON *security_permission_create_dtoJSON){

    security_permission_create_dto_t *security_permission_create_dto_local_var = NULL;

    // security_permission_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(security_permission_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // security_permission_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(security_permission_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // security_permission_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(security_permission_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // security_permission_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(security_permission_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    security_permission_create_dto_local_var = security_permission_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return security_permission_create_dto_local_var;
end:
    return NULL;

}
