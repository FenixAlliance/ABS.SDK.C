#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licensing_certificate_dto.h"



licensing_certificate_dto_t *licensing_certificate_dto_create(
    char *id,
    char *timestamp,
    char *type,
    int expired,
    int disabled,
    char *public_key,
    char *tenant_id,
    char *contact_id,
    char *user_id,
    char *enrollment_id
    ) {
    licensing_certificate_dto_t *licensing_certificate_dto_local_var = malloc(sizeof(licensing_certificate_dto_t));
    if (!licensing_certificate_dto_local_var) {
        return NULL;
    }
    licensing_certificate_dto_local_var->id = id;
    licensing_certificate_dto_local_var->timestamp = timestamp;
    licensing_certificate_dto_local_var->type = type;
    licensing_certificate_dto_local_var->expired = expired;
    licensing_certificate_dto_local_var->disabled = disabled;
    licensing_certificate_dto_local_var->public_key = public_key;
    licensing_certificate_dto_local_var->tenant_id = tenant_id;
    licensing_certificate_dto_local_var->contact_id = contact_id;
    licensing_certificate_dto_local_var->user_id = user_id;
    licensing_certificate_dto_local_var->enrollment_id = enrollment_id;

    return licensing_certificate_dto_local_var;
}


void licensing_certificate_dto_free(licensing_certificate_dto_t *licensing_certificate_dto) {
    if(NULL == licensing_certificate_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (licensing_certificate_dto->id) {
        free(licensing_certificate_dto->id);
        licensing_certificate_dto->id = NULL;
    }
    if (licensing_certificate_dto->timestamp) {
        free(licensing_certificate_dto->timestamp);
        licensing_certificate_dto->timestamp = NULL;
    }
    if (licensing_certificate_dto->type) {
        free(licensing_certificate_dto->type);
        licensing_certificate_dto->type = NULL;
    }
    if (licensing_certificate_dto->public_key) {
        free(licensing_certificate_dto->public_key);
        licensing_certificate_dto->public_key = NULL;
    }
    if (licensing_certificate_dto->tenant_id) {
        free(licensing_certificate_dto->tenant_id);
        licensing_certificate_dto->tenant_id = NULL;
    }
    if (licensing_certificate_dto->contact_id) {
        free(licensing_certificate_dto->contact_id);
        licensing_certificate_dto->contact_id = NULL;
    }
    if (licensing_certificate_dto->user_id) {
        free(licensing_certificate_dto->user_id);
        licensing_certificate_dto->user_id = NULL;
    }
    if (licensing_certificate_dto->enrollment_id) {
        free(licensing_certificate_dto->enrollment_id);
        licensing_certificate_dto->enrollment_id = NULL;
    }
    free(licensing_certificate_dto);
}

cJSON *licensing_certificate_dto_convertToJSON(licensing_certificate_dto_t *licensing_certificate_dto) {
    cJSON *item = cJSON_CreateObject();

    // licensing_certificate_dto->id
    if(licensing_certificate_dto->id) {
    if(cJSON_AddStringToObject(item, "id", licensing_certificate_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto->timestamp
    if(licensing_certificate_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", licensing_certificate_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // licensing_certificate_dto->type
    if(licensing_certificate_dto->type) {
    if(cJSON_AddStringToObject(item, "type", licensing_certificate_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto->expired
    if(licensing_certificate_dto->expired) {
    if(cJSON_AddBoolToObject(item, "expired", licensing_certificate_dto->expired) == NULL) {
    goto fail; //Bool
    }
    }


    // licensing_certificate_dto->disabled
    if(licensing_certificate_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", licensing_certificate_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // licensing_certificate_dto->public_key
    if(licensing_certificate_dto->public_key) {
    if(cJSON_AddStringToObject(item, "publicKey", licensing_certificate_dto->public_key) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto->tenant_id
    if(licensing_certificate_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", licensing_certificate_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto->contact_id
    if(licensing_certificate_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", licensing_certificate_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto->user_id
    if(licensing_certificate_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", licensing_certificate_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto->enrollment_id
    if(licensing_certificate_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", licensing_certificate_dto->enrollment_id) == NULL) {
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

licensing_certificate_dto_t *licensing_certificate_dto_parseFromJSON(cJSON *licensing_certificate_dtoJSON){

    licensing_certificate_dto_t *licensing_certificate_dto_local_var = NULL;

    // licensing_certificate_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // licensing_certificate_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto->expired
    cJSON *expired = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "expired");
    if (expired) { 
    if(!cJSON_IsBool(expired))
    {
    goto end; //Bool
    }
    }

    // licensing_certificate_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // licensing_certificate_dto->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "publicKey");
    if (public_key) { 
    if(!cJSON_IsString(public_key) && !cJSON_IsNull(public_key))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    licensing_certificate_dto_local_var = licensing_certificate_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        expired ? expired->valueint : 0,
        disabled ? disabled->valueint : 0,
        public_key && !cJSON_IsNull(public_key) ? strdup(public_key->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return licensing_certificate_dto_local_var;
end:
    return NULL;

}
