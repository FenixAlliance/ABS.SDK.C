#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_invitation_dto.h"



tenant_invitation_dto_t *tenant_invitation_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    int revoked,
    int redeemed,
    char *redeemed_timestamp,
    char *user_email,
    char *creator_enrollment_id,
    char *related_enrollment_id
    ) {
    tenant_invitation_dto_t *tenant_invitation_dto_local_var = malloc(sizeof(tenant_invitation_dto_t));
    if (!tenant_invitation_dto_local_var) {
        return NULL;
    }
    tenant_invitation_dto_local_var->id = id;
    tenant_invitation_dto_local_var->timestamp = timestamp;
    tenant_invitation_dto_local_var->tenant_id = tenant_id;
    tenant_invitation_dto_local_var->revoked = revoked;
    tenant_invitation_dto_local_var->redeemed = redeemed;
    tenant_invitation_dto_local_var->redeemed_timestamp = redeemed_timestamp;
    tenant_invitation_dto_local_var->user_email = user_email;
    tenant_invitation_dto_local_var->creator_enrollment_id = creator_enrollment_id;
    tenant_invitation_dto_local_var->related_enrollment_id = related_enrollment_id;

    return tenant_invitation_dto_local_var;
}


void tenant_invitation_dto_free(tenant_invitation_dto_t *tenant_invitation_dto) {
    if(NULL == tenant_invitation_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_invitation_dto->id) {
        free(tenant_invitation_dto->id);
        tenant_invitation_dto->id = NULL;
    }
    if (tenant_invitation_dto->timestamp) {
        free(tenant_invitation_dto->timestamp);
        tenant_invitation_dto->timestamp = NULL;
    }
    if (tenant_invitation_dto->tenant_id) {
        free(tenant_invitation_dto->tenant_id);
        tenant_invitation_dto->tenant_id = NULL;
    }
    if (tenant_invitation_dto->redeemed_timestamp) {
        free(tenant_invitation_dto->redeemed_timestamp);
        tenant_invitation_dto->redeemed_timestamp = NULL;
    }
    if (tenant_invitation_dto->user_email) {
        free(tenant_invitation_dto->user_email);
        tenant_invitation_dto->user_email = NULL;
    }
    if (tenant_invitation_dto->creator_enrollment_id) {
        free(tenant_invitation_dto->creator_enrollment_id);
        tenant_invitation_dto->creator_enrollment_id = NULL;
    }
    if (tenant_invitation_dto->related_enrollment_id) {
        free(tenant_invitation_dto->related_enrollment_id);
        tenant_invitation_dto->related_enrollment_id = NULL;
    }
    free(tenant_invitation_dto);
}

cJSON *tenant_invitation_dto_convertToJSON(tenant_invitation_dto_t *tenant_invitation_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_invitation_dto->id
    if(tenant_invitation_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_invitation_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto->timestamp
    if(tenant_invitation_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_invitation_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_invitation_dto->tenant_id
    if(tenant_invitation_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", tenant_invitation_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto->revoked
    if(tenant_invitation_dto->revoked) {
    if(cJSON_AddBoolToObject(item, "revoked", tenant_invitation_dto->revoked) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_invitation_dto->redeemed
    if(tenant_invitation_dto->redeemed) {
    if(cJSON_AddBoolToObject(item, "redeemed", tenant_invitation_dto->redeemed) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_invitation_dto->redeemed_timestamp
    if(tenant_invitation_dto->redeemed_timestamp) {
    if(cJSON_AddStringToObject(item, "redeemedTimestamp", tenant_invitation_dto->redeemed_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_invitation_dto->user_email
    if(tenant_invitation_dto->user_email) {
    if(cJSON_AddStringToObject(item, "userEmail", tenant_invitation_dto->user_email) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto->creator_enrollment_id
    if(tenant_invitation_dto->creator_enrollment_id) {
    if(cJSON_AddStringToObject(item, "creatorEnrollmentId", tenant_invitation_dto->creator_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_invitation_dto->related_enrollment_id
    if(tenant_invitation_dto->related_enrollment_id) {
    if(cJSON_AddStringToObject(item, "relatedEnrollmentId", tenant_invitation_dto->related_enrollment_id) == NULL) {
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

tenant_invitation_dto_t *tenant_invitation_dto_parseFromJSON(cJSON *tenant_invitation_dtoJSON){

    tenant_invitation_dto_t *tenant_invitation_dto_local_var = NULL;

    // tenant_invitation_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_invitation_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto->revoked
    cJSON *revoked = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "revoked");
    if (revoked) { 
    if(!cJSON_IsBool(revoked))
    {
    goto end; //Bool
    }
    }

    // tenant_invitation_dto->redeemed
    cJSON *redeemed = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "redeemed");
    if (redeemed) { 
    if(!cJSON_IsBool(redeemed))
    {
    goto end; //Bool
    }
    }

    // tenant_invitation_dto->redeemed_timestamp
    cJSON *redeemed_timestamp = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "redeemedTimestamp");
    if (redeemed_timestamp) { 
    if(!cJSON_IsString(redeemed_timestamp) && !cJSON_IsNull(redeemed_timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_invitation_dto->user_email
    cJSON *user_email = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "userEmail");
    if (user_email) { 
    if(!cJSON_IsString(user_email) && !cJSON_IsNull(user_email))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto->creator_enrollment_id
    cJSON *creator_enrollment_id = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "creatorEnrollmentId");
    if (creator_enrollment_id) { 
    if(!cJSON_IsString(creator_enrollment_id) && !cJSON_IsNull(creator_enrollment_id))
    {
    goto end; //String
    }
    }

    // tenant_invitation_dto->related_enrollment_id
    cJSON *related_enrollment_id = cJSON_GetObjectItemCaseSensitive(tenant_invitation_dtoJSON, "relatedEnrollmentId");
    if (related_enrollment_id) { 
    if(!cJSON_IsString(related_enrollment_id) && !cJSON_IsNull(related_enrollment_id))
    {
    goto end; //String
    }
    }


    tenant_invitation_dto_local_var = tenant_invitation_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        revoked ? revoked->valueint : 0,
        redeemed ? redeemed->valueint : 0,
        redeemed_timestamp && !cJSON_IsNull(redeemed_timestamp) ? strdup(redeemed_timestamp->valuestring) : NULL,
        user_email && !cJSON_IsNull(user_email) ? strdup(user_email->valuestring) : NULL,
        creator_enrollment_id && !cJSON_IsNull(creator_enrollment_id) ? strdup(creator_enrollment_id->valuestring) : NULL,
        related_enrollment_id && !cJSON_IsNull(related_enrollment_id) ? strdup(related_enrollment_id->valuestring) : NULL
        );

    return tenant_invitation_dto_local_var;
end:
    return NULL;

}
