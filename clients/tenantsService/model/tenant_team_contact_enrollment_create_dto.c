#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_team_contact_enrollment_create_dto.h"



tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *business_team_id,
    char *contact_id
    ) {
    tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto_local_var = malloc(sizeof(tenant_team_contact_enrollment_create_dto_t));
    if (!tenant_team_contact_enrollment_create_dto_local_var) {
        return NULL;
    }
    tenant_team_contact_enrollment_create_dto_local_var->id = id;
    tenant_team_contact_enrollment_create_dto_local_var->timestamp = timestamp;
    tenant_team_contact_enrollment_create_dto_local_var->business_id = business_id;
    tenant_team_contact_enrollment_create_dto_local_var->business_profile_record_id = business_profile_record_id;
    tenant_team_contact_enrollment_create_dto_local_var->business_team_id = business_team_id;
    tenant_team_contact_enrollment_create_dto_local_var->contact_id = contact_id;

    return tenant_team_contact_enrollment_create_dto_local_var;
}


void tenant_team_contact_enrollment_create_dto_free(tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto) {
    if(NULL == tenant_team_contact_enrollment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_team_contact_enrollment_create_dto->id) {
        free(tenant_team_contact_enrollment_create_dto->id);
        tenant_team_contact_enrollment_create_dto->id = NULL;
    }
    if (tenant_team_contact_enrollment_create_dto->timestamp) {
        free(tenant_team_contact_enrollment_create_dto->timestamp);
        tenant_team_contact_enrollment_create_dto->timestamp = NULL;
    }
    if (tenant_team_contact_enrollment_create_dto->business_id) {
        free(tenant_team_contact_enrollment_create_dto->business_id);
        tenant_team_contact_enrollment_create_dto->business_id = NULL;
    }
    if (tenant_team_contact_enrollment_create_dto->business_profile_record_id) {
        free(tenant_team_contact_enrollment_create_dto->business_profile_record_id);
        tenant_team_contact_enrollment_create_dto->business_profile_record_id = NULL;
    }
    if (tenant_team_contact_enrollment_create_dto->business_team_id) {
        free(tenant_team_contact_enrollment_create_dto->business_team_id);
        tenant_team_contact_enrollment_create_dto->business_team_id = NULL;
    }
    if (tenant_team_contact_enrollment_create_dto->contact_id) {
        free(tenant_team_contact_enrollment_create_dto->contact_id);
        tenant_team_contact_enrollment_create_dto->contact_id = NULL;
    }
    free(tenant_team_contact_enrollment_create_dto);
}

cJSON *tenant_team_contact_enrollment_create_dto_convertToJSON(tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_team_contact_enrollment_create_dto->id
    if(tenant_team_contact_enrollment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_team_contact_enrollment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_contact_enrollment_create_dto->timestamp
    if(tenant_team_contact_enrollment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_team_contact_enrollment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_team_contact_enrollment_create_dto->business_id
    if (!tenant_team_contact_enrollment_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", tenant_team_contact_enrollment_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // tenant_team_contact_enrollment_create_dto->business_profile_record_id
    if (!tenant_team_contact_enrollment_create_dto->business_profile_record_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_team_contact_enrollment_create_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }


    // tenant_team_contact_enrollment_create_dto->business_team_id
    if (!tenant_team_contact_enrollment_create_dto->business_team_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessTeamID", tenant_team_contact_enrollment_create_dto->business_team_id) == NULL) {
    goto fail; //String
    }


    // tenant_team_contact_enrollment_create_dto->contact_id
    if (!tenant_team_contact_enrollment_create_dto->contact_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "contactID", tenant_team_contact_enrollment_create_dto->contact_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto_parseFromJSON(cJSON *tenant_team_contact_enrollment_create_dtoJSON){

    tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto_local_var = NULL;

    // tenant_team_contact_enrollment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_team_contact_enrollment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_team_contact_enrollment_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // tenant_team_contact_enrollment_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_create_dtoJSON, "businessProfileRecordID");
    if (!business_profile_record_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_profile_record_id))
    {
    goto end; //String
    }

    // tenant_team_contact_enrollment_create_dto->business_team_id
    cJSON *business_team_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_create_dtoJSON, "businessTeamID");
    if (!business_team_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_team_id))
    {
    goto end; //String
    }

    // tenant_team_contact_enrollment_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_create_dtoJSON, "contactID");
    if (!contact_id) {
        goto end;
    }

    
    if(!cJSON_IsString(contact_id))
    {
    goto end; //String
    }


    tenant_team_contact_enrollment_create_dto_local_var = tenant_team_contact_enrollment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(business_id->valuestring),
        strdup(business_profile_record_id->valuestring),
        strdup(business_team_id->valuestring),
        strdup(contact_id->valuestring)
        );

    return tenant_team_contact_enrollment_create_dto_local_var;
end:
    return NULL;

}
