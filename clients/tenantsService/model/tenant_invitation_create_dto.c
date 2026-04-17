#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_invitation_create_dto.h"



tenant_invitation_create_dto_t *tenant_invitation_create_dto_create(
    char *id,
    char *timestamp,
    char *user_email
    ) {
    tenant_invitation_create_dto_t *tenant_invitation_create_dto_local_var = malloc(sizeof(tenant_invitation_create_dto_t));
    if (!tenant_invitation_create_dto_local_var) {
        return NULL;
    }
    tenant_invitation_create_dto_local_var->id = id;
    tenant_invitation_create_dto_local_var->timestamp = timestamp;
    tenant_invitation_create_dto_local_var->user_email = user_email;

    return tenant_invitation_create_dto_local_var;
}


void tenant_invitation_create_dto_free(tenant_invitation_create_dto_t *tenant_invitation_create_dto) {
    if(NULL == tenant_invitation_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_invitation_create_dto->id) {
        free(tenant_invitation_create_dto->id);
        tenant_invitation_create_dto->id = NULL;
    }
    if (tenant_invitation_create_dto->timestamp) {
        free(tenant_invitation_create_dto->timestamp);
        tenant_invitation_create_dto->timestamp = NULL;
    }
    if (tenant_invitation_create_dto->user_email) {
        free(tenant_invitation_create_dto->user_email);
        tenant_invitation_create_dto->user_email = NULL;
    }
    free(tenant_invitation_create_dto);
}

cJSON *tenant_invitation_create_dto_convertToJSON(tenant_invitation_create_dto_t *tenant_invitation_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_invitation_create_dto->id
    if(tenant_invitation_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_invitation_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_create_dto->timestamp
    if(tenant_invitation_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_invitation_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_invitation_create_dto->user_email
    if (!tenant_invitation_create_dto->user_email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "userEmail", tenant_invitation_create_dto->user_email) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tenant_invitation_create_dto_t *tenant_invitation_create_dto_parseFromJSON(cJSON *tenant_invitation_create_dtoJSON){

    tenant_invitation_create_dto_t *tenant_invitation_create_dto_local_var = NULL;

    // tenant_invitation_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_invitation_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_invitation_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_invitation_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_invitation_create_dto->user_email
    cJSON *user_email = cJSON_GetObjectItemCaseSensitive(tenant_invitation_create_dtoJSON, "userEmail");
    if (!user_email) {
        goto end;
    }

    
    if(!cJSON_IsString(user_email))
    {
    goto end; //String
    }


    tenant_invitation_create_dto_local_var = tenant_invitation_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(user_email->valuestring)
        );

    return tenant_invitation_create_dto_local_var;
end:
    return NULL;

}
