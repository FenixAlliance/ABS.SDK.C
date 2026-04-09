#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_team_contact_enrollment_dto.h"



tenant_team_contact_enrollment_dto_t *tenant_team_contact_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *team_id,
    char *tenant_id,
    char *enrollment_id,
    char *contact_id
    ) {
    tenant_team_contact_enrollment_dto_t *tenant_team_contact_enrollment_dto_local_var = malloc(sizeof(tenant_team_contact_enrollment_dto_t));
    if (!tenant_team_contact_enrollment_dto_local_var) {
        return NULL;
    }
    tenant_team_contact_enrollment_dto_local_var->id = id;
    tenant_team_contact_enrollment_dto_local_var->timestamp = timestamp;
    tenant_team_contact_enrollment_dto_local_var->team_id = team_id;
    tenant_team_contact_enrollment_dto_local_var->tenant_id = tenant_id;
    tenant_team_contact_enrollment_dto_local_var->enrollment_id = enrollment_id;
    tenant_team_contact_enrollment_dto_local_var->contact_id = contact_id;

    return tenant_team_contact_enrollment_dto_local_var;
}


void tenant_team_contact_enrollment_dto_free(tenant_team_contact_enrollment_dto_t *tenant_team_contact_enrollment_dto) {
    if(NULL == tenant_team_contact_enrollment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_team_contact_enrollment_dto->id) {
        free(tenant_team_contact_enrollment_dto->id);
        tenant_team_contact_enrollment_dto->id = NULL;
    }
    if (tenant_team_contact_enrollment_dto->timestamp) {
        free(tenant_team_contact_enrollment_dto->timestamp);
        tenant_team_contact_enrollment_dto->timestamp = NULL;
    }
    if (tenant_team_contact_enrollment_dto->team_id) {
        free(tenant_team_contact_enrollment_dto->team_id);
        tenant_team_contact_enrollment_dto->team_id = NULL;
    }
    if (tenant_team_contact_enrollment_dto->tenant_id) {
        free(tenant_team_contact_enrollment_dto->tenant_id);
        tenant_team_contact_enrollment_dto->tenant_id = NULL;
    }
    if (tenant_team_contact_enrollment_dto->enrollment_id) {
        free(tenant_team_contact_enrollment_dto->enrollment_id);
        tenant_team_contact_enrollment_dto->enrollment_id = NULL;
    }
    if (tenant_team_contact_enrollment_dto->contact_id) {
        free(tenant_team_contact_enrollment_dto->contact_id);
        tenant_team_contact_enrollment_dto->contact_id = NULL;
    }
    free(tenant_team_contact_enrollment_dto);
}

cJSON *tenant_team_contact_enrollment_dto_convertToJSON(tenant_team_contact_enrollment_dto_t *tenant_team_contact_enrollment_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_team_contact_enrollment_dto->id
    if(tenant_team_contact_enrollment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_team_contact_enrollment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_contact_enrollment_dto->timestamp
    if(tenant_team_contact_enrollment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_team_contact_enrollment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_team_contact_enrollment_dto->team_id
    if(tenant_team_contact_enrollment_dto->team_id) {
    if(cJSON_AddStringToObject(item, "teamId", tenant_team_contact_enrollment_dto->team_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_contact_enrollment_dto->tenant_id
    if(tenant_team_contact_enrollment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", tenant_team_contact_enrollment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_contact_enrollment_dto->enrollment_id
    if(tenant_team_contact_enrollment_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", tenant_team_contact_enrollment_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_contact_enrollment_dto->contact_id
    if(tenant_team_contact_enrollment_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactID", tenant_team_contact_enrollment_dto->contact_id) == NULL) {
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

tenant_team_contact_enrollment_dto_t *tenant_team_contact_enrollment_dto_parseFromJSON(cJSON *tenant_team_contact_enrollment_dtoJSON){

    tenant_team_contact_enrollment_dto_t *tenant_team_contact_enrollment_dto_local_var = NULL;

    // tenant_team_contact_enrollment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_team_contact_enrollment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_team_contact_enrollment_dto->team_id
    cJSON *team_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_dtoJSON, "teamId");
    if (team_id) { 
    if(!cJSON_IsString(team_id) && !cJSON_IsNull(team_id))
    {
    goto end; //String
    }
    }

    // tenant_team_contact_enrollment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // tenant_team_contact_enrollment_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // tenant_team_contact_enrollment_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_dtoJSON, "contactID");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    tenant_team_contact_enrollment_dto_local_var = tenant_team_contact_enrollment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        team_id && !cJSON_IsNull(team_id) ? strdup(team_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return tenant_team_contact_enrollment_dto_local_var;
end:
    return NULL;

}
