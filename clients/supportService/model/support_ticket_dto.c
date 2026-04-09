#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_dto.h"



support_ticket_dto_t *support_ticket_dto_create(
    char *id,
    char *timestamp,
    char *description,
    char *account_holder_id,
    char *contact_id,
    char *business_id,
    char *business_profile_record_id,
    char *support_ticket_type_id,
    char *support_entitlement_id,
    char *support_priority_id
    ) {
    support_ticket_dto_t *support_ticket_dto_local_var = malloc(sizeof(support_ticket_dto_t));
    if (!support_ticket_dto_local_var) {
        return NULL;
    }
    support_ticket_dto_local_var->id = id;
    support_ticket_dto_local_var->timestamp = timestamp;
    support_ticket_dto_local_var->description = description;
    support_ticket_dto_local_var->account_holder_id = account_holder_id;
    support_ticket_dto_local_var->contact_id = contact_id;
    support_ticket_dto_local_var->business_id = business_id;
    support_ticket_dto_local_var->business_profile_record_id = business_profile_record_id;
    support_ticket_dto_local_var->support_ticket_type_id = support_ticket_type_id;
    support_ticket_dto_local_var->support_entitlement_id = support_entitlement_id;
    support_ticket_dto_local_var->support_priority_id = support_priority_id;

    return support_ticket_dto_local_var;
}


void support_ticket_dto_free(support_ticket_dto_t *support_ticket_dto) {
    if(NULL == support_ticket_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_ticket_dto->id) {
        free(support_ticket_dto->id);
        support_ticket_dto->id = NULL;
    }
    if (support_ticket_dto->timestamp) {
        free(support_ticket_dto->timestamp);
        support_ticket_dto->timestamp = NULL;
    }
    if (support_ticket_dto->description) {
        free(support_ticket_dto->description);
        support_ticket_dto->description = NULL;
    }
    if (support_ticket_dto->account_holder_id) {
        free(support_ticket_dto->account_holder_id);
        support_ticket_dto->account_holder_id = NULL;
    }
    if (support_ticket_dto->contact_id) {
        free(support_ticket_dto->contact_id);
        support_ticket_dto->contact_id = NULL;
    }
    if (support_ticket_dto->business_id) {
        free(support_ticket_dto->business_id);
        support_ticket_dto->business_id = NULL;
    }
    if (support_ticket_dto->business_profile_record_id) {
        free(support_ticket_dto->business_profile_record_id);
        support_ticket_dto->business_profile_record_id = NULL;
    }
    if (support_ticket_dto->support_ticket_type_id) {
        free(support_ticket_dto->support_ticket_type_id);
        support_ticket_dto->support_ticket_type_id = NULL;
    }
    if (support_ticket_dto->support_entitlement_id) {
        free(support_ticket_dto->support_entitlement_id);
        support_ticket_dto->support_entitlement_id = NULL;
    }
    if (support_ticket_dto->support_priority_id) {
        free(support_ticket_dto->support_priority_id);
        support_ticket_dto->support_priority_id = NULL;
    }
    free(support_ticket_dto);
}

cJSON *support_ticket_dto_convertToJSON(support_ticket_dto_t *support_ticket_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_ticket_dto->id
    if(support_ticket_dto->id) {
    if(cJSON_AddStringToObject(item, "id", support_ticket_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->timestamp
    if(support_ticket_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_ticket_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_ticket_dto->description
    if(support_ticket_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_ticket_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->account_holder_id
    if(support_ticket_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderID", support_ticket_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->contact_id
    if(support_ticket_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactID", support_ticket_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->business_id
    if(support_ticket_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", support_ticket_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->business_profile_record_id
    if(support_ticket_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", support_ticket_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_ticket_type_id
    if(support_ticket_dto->support_ticket_type_id) {
    if(cJSON_AddStringToObject(item, "supportTicketTypeID", support_ticket_dto->support_ticket_type_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_entitlement_id
    if(support_ticket_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementID", support_ticket_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_priority_id
    if(support_ticket_dto->support_priority_id) {
    if(cJSON_AddStringToObject(item, "supportPriorityID", support_ticket_dto->support_priority_id) == NULL) {
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

support_ticket_dto_t *support_ticket_dto_parseFromJSON(cJSON *support_ticket_dtoJSON){

    support_ticket_dto_t *support_ticket_dto_local_var = NULL;

    // support_ticket_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_ticket_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "accountHolderID");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "contactID");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->support_ticket_type_id
    cJSON *support_ticket_type_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportTicketTypeID");
    if (support_ticket_type_id) { 
    if(!cJSON_IsString(support_ticket_type_id) && !cJSON_IsNull(support_ticket_type_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportEntitlementID");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->support_priority_id
    cJSON *support_priority_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportPriorityID");
    if (support_priority_id) { 
    if(!cJSON_IsString(support_priority_id) && !cJSON_IsNull(support_priority_id))
    {
    goto end; //String
    }
    }


    support_ticket_dto_local_var = support_ticket_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        support_ticket_type_id && !cJSON_IsNull(support_ticket_type_id) ? strdup(support_ticket_type_id->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        support_priority_id && !cJSON_IsNull(support_priority_id) ? strdup(support_priority_id->valuestring) : NULL
        );

    return support_ticket_dto_local_var;
end:
    return NULL;

}
