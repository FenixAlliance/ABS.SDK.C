#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_grant_dto.h"



module_grant_dto_t *module_grant_dto_create(
    char *module,
    char *expires_at,
    char *granted_at_utc,
    char *granted_by,
    char *note
    ) {
    module_grant_dto_t *module_grant_dto_local_var = malloc(sizeof(module_grant_dto_t));
    if (!module_grant_dto_local_var) {
        return NULL;
    }
    module_grant_dto_local_var->module = module;
    module_grant_dto_local_var->expires_at = expires_at;
    module_grant_dto_local_var->granted_at_utc = granted_at_utc;
    module_grant_dto_local_var->granted_by = granted_by;
    module_grant_dto_local_var->note = note;

    return module_grant_dto_local_var;
}


void module_grant_dto_free(module_grant_dto_t *module_grant_dto) {
    if(NULL == module_grant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (module_grant_dto->module) {
        free(module_grant_dto->module);
        module_grant_dto->module = NULL;
    }
    if (module_grant_dto->expires_at) {
        free(module_grant_dto->expires_at);
        module_grant_dto->expires_at = NULL;
    }
    if (module_grant_dto->granted_at_utc) {
        free(module_grant_dto->granted_at_utc);
        module_grant_dto->granted_at_utc = NULL;
    }
    if (module_grant_dto->granted_by) {
        free(module_grant_dto->granted_by);
        module_grant_dto->granted_by = NULL;
    }
    if (module_grant_dto->note) {
        free(module_grant_dto->note);
        module_grant_dto->note = NULL;
    }
    free(module_grant_dto);
}

cJSON *module_grant_dto_convertToJSON(module_grant_dto_t *module_grant_dto) {
    cJSON *item = cJSON_CreateObject();

    // module_grant_dto->module
    if(module_grant_dto->module) {
    if(cJSON_AddStringToObject(item, "module", module_grant_dto->module) == NULL) {
    goto fail; //String
    }
    }


    // module_grant_dto->expires_at
    if(module_grant_dto->expires_at) {
    if(cJSON_AddStringToObject(item, "expiresAt", module_grant_dto->expires_at) == NULL) {
    goto fail; //Date-Time
    }
    }


    // module_grant_dto->granted_at_utc
    if(module_grant_dto->granted_at_utc) {
    if(cJSON_AddStringToObject(item, "grantedAtUtc", module_grant_dto->granted_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // module_grant_dto->granted_by
    if(module_grant_dto->granted_by) {
    if(cJSON_AddStringToObject(item, "grantedBy", module_grant_dto->granted_by) == NULL) {
    goto fail; //String
    }
    }


    // module_grant_dto->note
    if(module_grant_dto->note) {
    if(cJSON_AddStringToObject(item, "note", module_grant_dto->note) == NULL) {
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

module_grant_dto_t *module_grant_dto_parseFromJSON(cJSON *module_grant_dtoJSON){

    module_grant_dto_t *module_grant_dto_local_var = NULL;

    // module_grant_dto->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(module_grant_dtoJSON, "module");
    if (module) { 
    if(!cJSON_IsString(module) && !cJSON_IsNull(module))
    {
    goto end; //String
    }
    }

    // module_grant_dto->expires_at
    cJSON *expires_at = cJSON_GetObjectItemCaseSensitive(module_grant_dtoJSON, "expiresAt");
    if (expires_at) { 
    if(!cJSON_IsString(expires_at) && !cJSON_IsNull(expires_at))
    {
    goto end; //DateTime
    }
    }

    // module_grant_dto->granted_at_utc
    cJSON *granted_at_utc = cJSON_GetObjectItemCaseSensitive(module_grant_dtoJSON, "grantedAtUtc");
    if (granted_at_utc) { 
    if(!cJSON_IsString(granted_at_utc) && !cJSON_IsNull(granted_at_utc))
    {
    goto end; //DateTime
    }
    }

    // module_grant_dto->granted_by
    cJSON *granted_by = cJSON_GetObjectItemCaseSensitive(module_grant_dtoJSON, "grantedBy");
    if (granted_by) { 
    if(!cJSON_IsString(granted_by) && !cJSON_IsNull(granted_by))
    {
    goto end; //String
    }
    }

    // module_grant_dto->note
    cJSON *note = cJSON_GetObjectItemCaseSensitive(module_grant_dtoJSON, "note");
    if (note) { 
    if(!cJSON_IsString(note) && !cJSON_IsNull(note))
    {
    goto end; //String
    }
    }


    module_grant_dto_local_var = module_grant_dto_create (
        module && !cJSON_IsNull(module) ? strdup(module->valuestring) : NULL,
        expires_at && !cJSON_IsNull(expires_at) ? strdup(expires_at->valuestring) : NULL,
        granted_at_utc && !cJSON_IsNull(granted_at_utc) ? strdup(granted_at_utc->valuestring) : NULL,
        granted_by && !cJSON_IsNull(granted_by) ? strdup(granted_by->valuestring) : NULL,
        note && !cJSON_IsNull(note) ? strdup(note->valuestring) : NULL
        );

    return module_grant_dto_local_var;
end:
    return NULL;

}
