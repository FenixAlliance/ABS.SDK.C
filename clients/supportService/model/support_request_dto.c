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
    char *business_id,
    char *business_profile_record_id,
    char *support_entitlement_id,
    char *contact_id,
    char *account_holder_id
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
    support_request_dto_local_var->business_id = business_id;
    support_request_dto_local_var->business_profile_record_id = business_profile_record_id;
    support_request_dto_local_var->support_entitlement_id = support_entitlement_id;
    support_request_dto_local_var->contact_id = contact_id;
    support_request_dto_local_var->account_holder_id = account_holder_id;

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
    if (support_request_dto->business_id) {
        free(support_request_dto->business_id);
        support_request_dto->business_id = NULL;
    }
    if (support_request_dto->business_profile_record_id) {
        free(support_request_dto->business_profile_record_id);
        support_request_dto->business_profile_record_id = NULL;
    }
    if (support_request_dto->support_entitlement_id) {
        free(support_request_dto->support_entitlement_id);
        support_request_dto->support_entitlement_id = NULL;
    }
    if (support_request_dto->contact_id) {
        free(support_request_dto->contact_id);
        support_request_dto->contact_id = NULL;
    }
    if (support_request_dto->account_holder_id) {
        free(support_request_dto->account_holder_id);
        support_request_dto->account_holder_id = NULL;
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


    // support_request_dto->business_id
    if(support_request_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", support_request_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->business_profile_record_id
    if(support_request_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", support_request_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->support_entitlement_id
    if(support_request_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementID", support_request_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->contact_id
    if(support_request_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactID", support_request_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_dto->account_holder_id
    if(support_request_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderID", support_request_dto->account_holder_id) == NULL) {
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

    // support_request_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "supportEntitlementID");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "contactID");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // support_request_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(support_request_dtoJSON, "accountHolderID");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
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
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL
        );

    return support_request_dto_local_var;
end:
    return NULL;

}
