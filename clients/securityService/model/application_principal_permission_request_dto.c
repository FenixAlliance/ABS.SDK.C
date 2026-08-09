#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "application_principal_permission_request_dto.h"



application_principal_permission_request_dto_t *application_principal_permission_request_dto_create(
    char *permission
    ) {
    application_principal_permission_request_dto_t *application_principal_permission_request_dto_local_var = malloc(sizeof(application_principal_permission_request_dto_t));
    if (!application_principal_permission_request_dto_local_var) {
        return NULL;
    }
    application_principal_permission_request_dto_local_var->permission = permission;

    return application_principal_permission_request_dto_local_var;
}


void application_principal_permission_request_dto_free(application_principal_permission_request_dto_t *application_principal_permission_request_dto) {
    if(NULL == application_principal_permission_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (application_principal_permission_request_dto->permission) {
        free(application_principal_permission_request_dto->permission);
        application_principal_permission_request_dto->permission = NULL;
    }
    free(application_principal_permission_request_dto);
}

cJSON *application_principal_permission_request_dto_convertToJSON(application_principal_permission_request_dto_t *application_principal_permission_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // application_principal_permission_request_dto->permission
    if (!application_principal_permission_request_dto->permission) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "permission", application_principal_permission_request_dto->permission) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

application_principal_permission_request_dto_t *application_principal_permission_request_dto_parseFromJSON(cJSON *application_principal_permission_request_dtoJSON){

    application_principal_permission_request_dto_t *application_principal_permission_request_dto_local_var = NULL;

    // application_principal_permission_request_dto->permission
    cJSON *permission = cJSON_GetObjectItemCaseSensitive(application_principal_permission_request_dtoJSON, "permission");
    if (!permission) {
        goto end;
    }

    
    if(!cJSON_IsString(permission))
    {
    goto end; //String
    }


    application_principal_permission_request_dto_local_var = application_principal_permission_request_dto_create (
        strdup(permission->valuestring)
        );

    return application_principal_permission_request_dto_local_var;
end:
    return NULL;

}
