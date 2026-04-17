#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_responsibility_create_dto.h"



fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *fiscal_authority_id
    ) {
    fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto_local_var = malloc(sizeof(fiscal_responsibility_create_dto_t));
    if (!fiscal_responsibility_create_dto_local_var) {
        return NULL;
    }
    fiscal_responsibility_create_dto_local_var->id = id;
    fiscal_responsibility_create_dto_local_var->timestamp = timestamp;
    fiscal_responsibility_create_dto_local_var->code = code;
    fiscal_responsibility_create_dto_local_var->name = name;
    fiscal_responsibility_create_dto_local_var->fiscal_authority_id = fiscal_authority_id;

    return fiscal_responsibility_create_dto_local_var;
}


void fiscal_responsibility_create_dto_free(fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto) {
    if(NULL == fiscal_responsibility_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_responsibility_create_dto->id) {
        free(fiscal_responsibility_create_dto->id);
        fiscal_responsibility_create_dto->id = NULL;
    }
    if (fiscal_responsibility_create_dto->timestamp) {
        free(fiscal_responsibility_create_dto->timestamp);
        fiscal_responsibility_create_dto->timestamp = NULL;
    }
    if (fiscal_responsibility_create_dto->code) {
        free(fiscal_responsibility_create_dto->code);
        fiscal_responsibility_create_dto->code = NULL;
    }
    if (fiscal_responsibility_create_dto->name) {
        free(fiscal_responsibility_create_dto->name);
        fiscal_responsibility_create_dto->name = NULL;
    }
    if (fiscal_responsibility_create_dto->fiscal_authority_id) {
        free(fiscal_responsibility_create_dto->fiscal_authority_id);
        fiscal_responsibility_create_dto->fiscal_authority_id = NULL;
    }
    free(fiscal_responsibility_create_dto);
}

cJSON *fiscal_responsibility_create_dto_convertToJSON(fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_responsibility_create_dto->id
    if(fiscal_responsibility_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", fiscal_responsibility_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_create_dto->timestamp
    if(fiscal_responsibility_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_responsibility_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_responsibility_create_dto->code
    if(fiscal_responsibility_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", fiscal_responsibility_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_create_dto->name
    if(fiscal_responsibility_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_responsibility_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_create_dto->fiscal_authority_id
    if(fiscal_responsibility_create_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", fiscal_responsibility_create_dto->fiscal_authority_id) == NULL) {
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

fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto_parseFromJSON(cJSON *fiscal_responsibility_create_dtoJSON){

    fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto_local_var = NULL;

    // fiscal_responsibility_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_responsibility_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_create_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_create_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }


    fiscal_responsibility_create_dto_local_var = fiscal_responsibility_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL
        );

    return fiscal_responsibility_create_dto_local_var;
end:
    return NULL;

}
