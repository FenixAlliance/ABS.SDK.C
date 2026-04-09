#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_permission_update_dto.h"



security_permission_update_dto_t *security_permission_update_dto_create(
    char *name,
    char *description
    ) {
    security_permission_update_dto_t *security_permission_update_dto_local_var = malloc(sizeof(security_permission_update_dto_t));
    if (!security_permission_update_dto_local_var) {
        return NULL;
    }
    security_permission_update_dto_local_var->name = name;
    security_permission_update_dto_local_var->description = description;

    return security_permission_update_dto_local_var;
}


void security_permission_update_dto_free(security_permission_update_dto_t *security_permission_update_dto) {
    if(NULL == security_permission_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (security_permission_update_dto->name) {
        free(security_permission_update_dto->name);
        security_permission_update_dto->name = NULL;
    }
    if (security_permission_update_dto->description) {
        free(security_permission_update_dto->description);
        security_permission_update_dto->description = NULL;
    }
    free(security_permission_update_dto);
}

cJSON *security_permission_update_dto_convertToJSON(security_permission_update_dto_t *security_permission_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // security_permission_update_dto->name
    if (!security_permission_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", security_permission_update_dto->name) == NULL) {
    goto fail; //String
    }


    // security_permission_update_dto->description
    if(security_permission_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", security_permission_update_dto->description) == NULL) {
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

security_permission_update_dto_t *security_permission_update_dto_parseFromJSON(cJSON *security_permission_update_dtoJSON){

    security_permission_update_dto_t *security_permission_update_dto_local_var = NULL;

    // security_permission_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(security_permission_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // security_permission_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(security_permission_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    security_permission_update_dto_local_var = security_permission_update_dto_create (
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return security_permission_update_dto_local_var;
end:
    return NULL;

}
