#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_team_contact_enrollment_update_dto.h"



tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto_create(
    char *business_team_id,
    char *contact_id
    ) {
    tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto_local_var = malloc(sizeof(tenant_team_contact_enrollment_update_dto_t));
    if (!tenant_team_contact_enrollment_update_dto_local_var) {
        return NULL;
    }
    tenant_team_contact_enrollment_update_dto_local_var->business_team_id = business_team_id;
    tenant_team_contact_enrollment_update_dto_local_var->contact_id = contact_id;

    return tenant_team_contact_enrollment_update_dto_local_var;
}


void tenant_team_contact_enrollment_update_dto_free(tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto) {
    if(NULL == tenant_team_contact_enrollment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_team_contact_enrollment_update_dto->business_team_id) {
        free(tenant_team_contact_enrollment_update_dto->business_team_id);
        tenant_team_contact_enrollment_update_dto->business_team_id = NULL;
    }
    if (tenant_team_contact_enrollment_update_dto->contact_id) {
        free(tenant_team_contact_enrollment_update_dto->contact_id);
        tenant_team_contact_enrollment_update_dto->contact_id = NULL;
    }
    free(tenant_team_contact_enrollment_update_dto);
}

cJSON *tenant_team_contact_enrollment_update_dto_convertToJSON(tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_team_contact_enrollment_update_dto->business_team_id
    if(tenant_team_contact_enrollment_update_dto->business_team_id) {
    if(cJSON_AddStringToObject(item, "businessTeamID", tenant_team_contact_enrollment_update_dto->business_team_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_contact_enrollment_update_dto->contact_id
    if(tenant_team_contact_enrollment_update_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactID", tenant_team_contact_enrollment_update_dto->contact_id) == NULL) {
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

tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto_parseFromJSON(cJSON *tenant_team_contact_enrollment_update_dtoJSON){

    tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto_local_var = NULL;

    // tenant_team_contact_enrollment_update_dto->business_team_id
    cJSON *business_team_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_update_dtoJSON, "businessTeamID");
    if (business_team_id) { 
    if(!cJSON_IsString(business_team_id) && !cJSON_IsNull(business_team_id))
    {
    goto end; //String
    }
    }

    // tenant_team_contact_enrollment_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(tenant_team_contact_enrollment_update_dtoJSON, "contactID");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    tenant_team_contact_enrollment_update_dto_local_var = tenant_team_contact_enrollment_update_dto_create (
        business_team_id && !cJSON_IsNull(business_team_id) ? strdup(business_team_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return tenant_team_contact_enrollment_update_dto_local_var;
end:
    return NULL;

}
