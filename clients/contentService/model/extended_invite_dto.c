#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_invite_dto.h"



extended_invite_dto_t *extended_invite_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    int revoked,
    int redeemed,
    char *redeemed_timestamp,
    char *user_email,
    char *creator_enrollment_id,
    char *related_enrollment_id,
    tenant_dto_t *tenant
    ) {
    extended_invite_dto_t *extended_invite_dto_local_var = malloc(sizeof(extended_invite_dto_t));
    if (!extended_invite_dto_local_var) {
        return NULL;
    }
    extended_invite_dto_local_var->id = id;
    extended_invite_dto_local_var->timestamp = timestamp;
    extended_invite_dto_local_var->tenant_id = tenant_id;
    extended_invite_dto_local_var->revoked = revoked;
    extended_invite_dto_local_var->redeemed = redeemed;
    extended_invite_dto_local_var->redeemed_timestamp = redeemed_timestamp;
    extended_invite_dto_local_var->user_email = user_email;
    extended_invite_dto_local_var->creator_enrollment_id = creator_enrollment_id;
    extended_invite_dto_local_var->related_enrollment_id = related_enrollment_id;
    extended_invite_dto_local_var->tenant = tenant;

    return extended_invite_dto_local_var;
}


void extended_invite_dto_free(extended_invite_dto_t *extended_invite_dto) {
    if(NULL == extended_invite_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_invite_dto->id) {
        free(extended_invite_dto->id);
        extended_invite_dto->id = NULL;
    }
    if (extended_invite_dto->timestamp) {
        free(extended_invite_dto->timestamp);
        extended_invite_dto->timestamp = NULL;
    }
    if (extended_invite_dto->tenant_id) {
        free(extended_invite_dto->tenant_id);
        extended_invite_dto->tenant_id = NULL;
    }
    if (extended_invite_dto->redeemed_timestamp) {
        free(extended_invite_dto->redeemed_timestamp);
        extended_invite_dto->redeemed_timestamp = NULL;
    }
    if (extended_invite_dto->user_email) {
        free(extended_invite_dto->user_email);
        extended_invite_dto->user_email = NULL;
    }
    if (extended_invite_dto->creator_enrollment_id) {
        free(extended_invite_dto->creator_enrollment_id);
        extended_invite_dto->creator_enrollment_id = NULL;
    }
    if (extended_invite_dto->related_enrollment_id) {
        free(extended_invite_dto->related_enrollment_id);
        extended_invite_dto->related_enrollment_id = NULL;
    }
    if (extended_invite_dto->tenant) {
        tenant_dto_free(extended_invite_dto->tenant);
        extended_invite_dto->tenant = NULL;
    }
    free(extended_invite_dto);
}

cJSON *extended_invite_dto_convertToJSON(extended_invite_dto_t *extended_invite_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_invite_dto->id
    if(extended_invite_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_invite_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invite_dto->timestamp
    if(extended_invite_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_invite_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_invite_dto->tenant_id
    if(extended_invite_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_invite_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invite_dto->revoked
    if(extended_invite_dto->revoked) {
    if(cJSON_AddBoolToObject(item, "revoked", extended_invite_dto->revoked) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_invite_dto->redeemed
    if(extended_invite_dto->redeemed) {
    if(cJSON_AddBoolToObject(item, "redeemed", extended_invite_dto->redeemed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_invite_dto->redeemed_timestamp
    if(extended_invite_dto->redeemed_timestamp) {
    if(cJSON_AddStringToObject(item, "redeemedTimestamp", extended_invite_dto->redeemed_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_invite_dto->user_email
    if(extended_invite_dto->user_email) {
    if(cJSON_AddStringToObject(item, "userEmail", extended_invite_dto->user_email) == NULL) {
    goto fail; //String
    }
    }


    // extended_invite_dto->creator_enrollment_id
    if(extended_invite_dto->creator_enrollment_id) {
    if(cJSON_AddStringToObject(item, "creatorEnrollmentId", extended_invite_dto->creator_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invite_dto->related_enrollment_id
    if(extended_invite_dto->related_enrollment_id) {
    if(cJSON_AddStringToObject(item, "relatedEnrollmentId", extended_invite_dto->related_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invite_dto->tenant
    if(extended_invite_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_invite_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

extended_invite_dto_t *extended_invite_dto_parseFromJSON(cJSON *extended_invite_dtoJSON){

    extended_invite_dto_t *extended_invite_dto_local_var = NULL;

    // define the local variable for extended_invite_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // extended_invite_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_invite_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_invite_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_invite_dto->revoked
    cJSON *revoked = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "revoked");
    if (revoked) { 
    if(!cJSON_IsBool(revoked))
    {
    goto end; //Bool
    }
    }

    // extended_invite_dto->redeemed
    cJSON *redeemed = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "redeemed");
    if (redeemed) { 
    if(!cJSON_IsBool(redeemed))
    {
    goto end; //Bool
    }
    }

    // extended_invite_dto->redeemed_timestamp
    cJSON *redeemed_timestamp = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "redeemedTimestamp");
    if (redeemed_timestamp) { 
    if(!cJSON_IsString(redeemed_timestamp) && !cJSON_IsNull(redeemed_timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_invite_dto->user_email
    cJSON *user_email = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "userEmail");
    if (user_email) { 
    if(!cJSON_IsString(user_email) && !cJSON_IsNull(user_email))
    {
    goto end; //String
    }
    }

    // extended_invite_dto->creator_enrollment_id
    cJSON *creator_enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "creatorEnrollmentId");
    if (creator_enrollment_id) { 
    if(!cJSON_IsString(creator_enrollment_id) && !cJSON_IsNull(creator_enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_invite_dto->related_enrollment_id
    cJSON *related_enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "relatedEnrollmentId");
    if (related_enrollment_id) { 
    if(!cJSON_IsString(related_enrollment_id) && !cJSON_IsNull(related_enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_invite_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_invite_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }


    extended_invite_dto_local_var = extended_invite_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        revoked ? revoked->valueint : 0,
        redeemed ? redeemed->valueint : 0,
        redeemed_timestamp && !cJSON_IsNull(redeemed_timestamp) ? strdup(redeemed_timestamp->valuestring) : NULL,
        user_email && !cJSON_IsNull(user_email) ? strdup(user_email->valuestring) : NULL,
        creator_enrollment_id && !cJSON_IsNull(creator_enrollment_id) ? strdup(creator_enrollment_id->valuestring) : NULL,
        related_enrollment_id && !cJSON_IsNull(related_enrollment_id) ? strdup(related_enrollment_id->valuestring) : NULL,
        tenant ? tenant_local_nonprim : NULL
        );

    return extended_invite_dto_local_var;
end:
    if (tenant_local_nonprim) {
        tenant_dto_free(tenant_local_nonprim);
        tenant_local_nonprim = NULL;
    }
    return NULL;

}
