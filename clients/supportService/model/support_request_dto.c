#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_request_dto.h"



support_request_dto_t *support_request_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *support_entitlement_id,
    char *contact_id,
    char *user_id
    ) {
    support_request_dto_t *support_request_dto_local_var = malloc(sizeof(support_request_dto_t));
    if (!support_request_dto_local_var) {
        return NULL;
    }
    support_request_dto_local_var->id = id;
    support_request_dto_local_var->timestamp = timestamp;
    support_request_dto_local_var->title = title;
    support_request_dto_local_var->description = description;
    support_request_dto_local_var->approved = approved;
    support_request_dto_local_var->approved_timestamp = approved_timestamp;
    support_request_dto_local_var->tenant_id = tenant_id;
    support_request_dto_local_var->enrollment_id = enrollment_id;
    support_request_dto_local_var->support_entitlement_id = support_entitlement_id;
    support_request_dto_local_var->contact_id = contact_id;
    support_request_dto_local_var->user_id = user_id;

    return support_request_dto_local_var;
}


void support_request_dto_free(support_request_dto_t *support_request_dto) {
    if(NULL == support_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_request_dto->id) {
        free(support_request_dto->id);
        support_request_dto->id = NULL;
    }
    if (support_request_dto->timestamp) {
        free(support_request_dto->timestamp);
        support_request_dto->timestamp = NULL;
    }
    if (support_request_dto->title) {
        free(support_request_dto->title);
        support_request_dto->title = NULL;
    }
    if (support_request_dto->description) {
        free(support_request_dto->description);
        support_request_dto->description = NULL;
    }
    if (support_request_dto->approved_timestamp) {
        free(support_request_dto->approved_timestamp);
        support_request_dto->approved_timestamp = NULL;
    }
    if (support_request_dto->tenant_id) {
        free(support_request_dto->tenant_id);
        support_request_dto->tenant_id = NULL;
    }
    if (support_request_dto->enrollment_id) {
        free(support_request_dto->enrollment_id);
        support_request_dto->enrollment_id = NULL;
    }
    if (support_request_dto->support_entitlement_id) {
        free(support_request_dto->support_entitlement_id);
        support_request_dto->support_entitlement_id = NULL;
    }
    if (support_request_dto->contact_id) {
        free(support_request_dto->contact_id);
        support_request_dto->contact_id = NULL;
    }
    if (support_request_dto->user_id) {
        free(support_request_dto->user_id);
        support_request_dto->user_id = NULL;
    }
    free(support_request_dto);
}

cJSON *support_request_dto_convertToJSON(support_request_dto_t *support_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_request_dto->id
    if(support_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", support_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->timestamp
    if(support_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_request_dto->title
    if(support_request_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_request_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->description
    if(support_request_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_request_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->approved
    if(support_request_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", support_request_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_dto->approved_timestamp
    if(support_request_dto->approved_timestamp) {
    if(cJSON_AddStringToObject(item, "approvedTimestamp", support_request_dto->approved_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_request_dto->tenant_id
    if(support_request_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", support_request_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->enrollment_id
    if(support_request_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", support_request_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->support_entitlement_id
    if(support_request_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementId", support_request_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->contact_id
    if(support_request_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", support_request_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->user_id
    if(support_request_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", support_request_dto->user_id) == NULL) {
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

support_request_dto_t *support_request_dto_parseFromJSON(cJSON *support_request_dtoJSON){

    support_request_dto_t *support_request_dto_local_var = NULL;

    // support_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // support_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_request_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_request_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // support_request_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // support_request_dto->approved_timestamp
    cJSON *approved_timestamp = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "approvedTimestamp");
    if (approved_timestamp) { 
    if(!cJSON_IsString(approved_timestamp) && !cJSON_IsNull(approved_timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_request_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "supportEntitlementId");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }


    support_request_dto_local_var = support_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        approved ? approved->valueint : 0,
        approved_timestamp && !cJSON_IsNull(approved_timestamp) ? strdup(approved_timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL
        );

    return support_request_dto_local_var;
end:
    return NULL;

}
