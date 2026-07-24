#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_email_dto.h"



contact_email_dto_t *contact_email_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *tenant_id,
    char *enrollment_id,
    char *address,
    char *label,
    int is_primary,
    int is_verified,
    char *verified_timestamp,
    contact_dto_t *contact
    ) {
    contact_email_dto_t *contact_email_dto_local_var = malloc(sizeof(contact_email_dto_t));
    if (!contact_email_dto_local_var) {
        return NULL;
    }
    contact_email_dto_local_var->id = id;
    contact_email_dto_local_var->timestamp = timestamp;
    contact_email_dto_local_var->contact_id = contact_id;
    contact_email_dto_local_var->tenant_id = tenant_id;
    contact_email_dto_local_var->enrollment_id = enrollment_id;
    contact_email_dto_local_var->address = address;
    contact_email_dto_local_var->label = label;
    contact_email_dto_local_var->is_primary = is_primary;
    contact_email_dto_local_var->is_verified = is_verified;
    contact_email_dto_local_var->verified_timestamp = verified_timestamp;
    contact_email_dto_local_var->contact = contact;

    return contact_email_dto_local_var;
}


void contact_email_dto_free(contact_email_dto_t *contact_email_dto) {
    if(NULL == contact_email_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_email_dto->id) {
        free(contact_email_dto->id);
        contact_email_dto->id = NULL;
    }
    if (contact_email_dto->timestamp) {
        free(contact_email_dto->timestamp);
        contact_email_dto->timestamp = NULL;
    }
    if (contact_email_dto->contact_id) {
        free(contact_email_dto->contact_id);
        contact_email_dto->contact_id = NULL;
    }
    if (contact_email_dto->tenant_id) {
        free(contact_email_dto->tenant_id);
        contact_email_dto->tenant_id = NULL;
    }
    if (contact_email_dto->enrollment_id) {
        free(contact_email_dto->enrollment_id);
        contact_email_dto->enrollment_id = NULL;
    }
    if (contact_email_dto->address) {
        free(contact_email_dto->address);
        contact_email_dto->address = NULL;
    }
    if (contact_email_dto->label) {
        free(contact_email_dto->label);
        contact_email_dto->label = NULL;
    }
    if (contact_email_dto->verified_timestamp) {
        free(contact_email_dto->verified_timestamp);
        contact_email_dto->verified_timestamp = NULL;
    }
    if (contact_email_dto->contact) {
        contact_dto_free(contact_email_dto->contact);
        contact_email_dto->contact = NULL;
    }
    free(contact_email_dto);
}

cJSON *contact_email_dto_convertToJSON(contact_email_dto_t *contact_email_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_email_dto->id
    if(contact_email_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contact_email_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_dto->timestamp
    if(contact_email_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contact_email_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_email_dto->contact_id
    if(contact_email_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", contact_email_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_dto->tenant_id
    if(contact_email_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", contact_email_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_dto->enrollment_id
    if(contact_email_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", contact_email_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_dto->address
    if(contact_email_dto->address) {
    if(cJSON_AddStringToObject(item, "address", contact_email_dto->address) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_dto->label
    if(contact_email_dto->label) {
    if(cJSON_AddStringToObject(item, "label", contact_email_dto->label) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_dto->is_primary
    if(contact_email_dto->is_primary) {
    if(cJSON_AddBoolToObject(item, "isPrimary", contact_email_dto->is_primary) == NULL) {
    goto fail; //Bool
    }
    }


    // contact_email_dto->is_verified
    if(contact_email_dto->is_verified) {
    if(cJSON_AddBoolToObject(item, "isVerified", contact_email_dto->is_verified) == NULL) {
    goto fail; //Bool
    }
    }


    // contact_email_dto->verified_timestamp
    if(contact_email_dto->verified_timestamp) {
    if(cJSON_AddStringToObject(item, "verifiedTimestamp", contact_email_dto->verified_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_email_dto->contact
    if(contact_email_dto->contact) {
    cJSON *contact_local_JSON = contact_dto_convertToJSON(contact_email_dto->contact);
    if(contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contact", contact_local_JSON);
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

contact_email_dto_t *contact_email_dto_parseFromJSON(cJSON *contact_email_dtoJSON){

    contact_email_dto_t *contact_email_dto_local_var = NULL;

    // define the local variable for contact_email_dto->contact
    contact_dto_t *contact_local_nonprim = NULL;

    // contact_email_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contact_email_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contact_email_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // contact_email_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // contact_email_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // contact_email_dto->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // contact_email_dto->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "label");
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // contact_email_dto->is_primary
    cJSON *is_primary = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "isPrimary");
    if (is_primary) { 
    if(!cJSON_IsBool(is_primary))
    {
    goto end; //Bool
    }
    }

    // contact_email_dto->is_verified
    cJSON *is_verified = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "isVerified");
    if (is_verified) { 
    if(!cJSON_IsBool(is_verified))
    {
    goto end; //Bool
    }
    }

    // contact_email_dto->verified_timestamp
    cJSON *verified_timestamp = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "verifiedTimestamp");
    if (verified_timestamp) { 
    if(!cJSON_IsString(verified_timestamp) && !cJSON_IsNull(verified_timestamp))
    {
    goto end; //DateTime
    }
    }

    // contact_email_dto->contact
    cJSON *contact = cJSON_GetObjectItemCaseSensitive(contact_email_dtoJSON, "contact");
    if (contact) { 
    contact_local_nonprim = contact_dto_parseFromJSON(contact); //nonprimitive
    }


    contact_email_dto_local_var = contact_email_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        is_primary ? is_primary->valueint : 0,
        is_verified ? is_verified->valueint : 0,
        verified_timestamp && !cJSON_IsNull(verified_timestamp) ? strdup(verified_timestamp->valuestring) : NULL,
        contact ? contact_local_nonprim : NULL
        );

    return contact_email_dto_local_var;
end:
    if (contact_local_nonprim) {
        contact_dto_free(contact_local_nonprim);
        contact_local_nonprim = NULL;
    }
    return NULL;

}
