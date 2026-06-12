#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_dto.h"


char* support_ticket_dto_support_ticket_status_ToString(supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_status) {
    char* support_ticket_statusArray[] =  { "NULL", "New", "OpenAndWaitingForAgent", "OpenAndWaitingForCustomer", "Closed" };
    return support_ticket_statusArray[support_ticket_status];
}

supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_dto_support_ticket_status_FromString(char* support_ticket_status){
    int stringToReturn = 0;
    char *support_ticket_statusArray[] =  { "NULL", "New", "OpenAndWaitingForAgent", "OpenAndWaitingForCustomer", "Closed" };
    size_t sizeofArray = sizeof(support_ticket_statusArray) / sizeof(support_ticket_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(support_ticket_status, support_ticket_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

support_ticket_dto_t *support_ticket_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_status,
    char *user_id,
    char *contact_id,
    char *tenant_id,
    char *enrollment_id,
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
    support_ticket_dto_local_var->title = title;
    support_ticket_dto_local_var->description = description;
    support_ticket_dto_local_var->support_ticket_status = support_ticket_status;
    support_ticket_dto_local_var->user_id = user_id;
    support_ticket_dto_local_var->contact_id = contact_id;
    support_ticket_dto_local_var->tenant_id = tenant_id;
    support_ticket_dto_local_var->enrollment_id = enrollment_id;
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
    if (support_ticket_dto->title) {
        free(support_ticket_dto->title);
        support_ticket_dto->title = NULL;
    }
    if (support_ticket_dto->description) {
        free(support_ticket_dto->description);
        support_ticket_dto->description = NULL;
    }
    if (support_ticket_dto->user_id) {
        free(support_ticket_dto->user_id);
        support_ticket_dto->user_id = NULL;
    }
    if (support_ticket_dto->contact_id) {
        free(support_ticket_dto->contact_id);
        support_ticket_dto->contact_id = NULL;
    }
    if (support_ticket_dto->tenant_id) {
        free(support_ticket_dto->tenant_id);
        support_ticket_dto->tenant_id = NULL;
    }
    if (support_ticket_dto->enrollment_id) {
        free(support_ticket_dto->enrollment_id);
        support_ticket_dto->enrollment_id = NULL;
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


    // support_ticket_dto->title
    if(support_ticket_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_ticket_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->description
    if(support_ticket_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_ticket_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_ticket_status
    if(support_ticket_dto->support_ticket_status != supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "supportTicketStatus", support_ticket_statussupport_ticket_dto_ToString(support_ticket_dto->support_ticket_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // support_ticket_dto->user_id
    if(support_ticket_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", support_ticket_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->contact_id
    if(support_ticket_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", support_ticket_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->tenant_id
    if(support_ticket_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", support_ticket_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->enrollment_id
    if(support_ticket_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", support_ticket_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_ticket_type_id
    if(support_ticket_dto->support_ticket_type_id) {
    if(cJSON_AddStringToObject(item, "supportTicketTypeId", support_ticket_dto->support_ticket_type_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_entitlement_id
    if(support_ticket_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementId", support_ticket_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_dto->support_priority_id
    if(support_ticket_dto->support_priority_id) {
    if(cJSON_AddStringToObject(item, "supportPriorityId", support_ticket_dto->support_priority_id) == NULL) {
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

    // support_ticket_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
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

    // support_ticket_dto->support_ticket_status
    cJSON *support_ticket_status = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportTicketStatus");
    supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_statusVariable;
    if (support_ticket_status) { 
    if(!cJSON_IsString(support_ticket_status))
    {
    goto end; //Enum
    }
    support_ticket_statusVariable = support_ticket_dto_support_ticket_status_FromString(support_ticket_status->valuestring);
    }

    // support_ticket_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->support_ticket_type_id
    cJSON *support_ticket_type_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportTicketTypeId");
    if (support_ticket_type_id) { 
    if(!cJSON_IsString(support_ticket_type_id) && !cJSON_IsNull(support_ticket_type_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportEntitlementId");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // support_ticket_dto->support_priority_id
    cJSON *support_priority_id = cJSON_GetObjectItemCaseSensitive(support_ticket_dtoJSON, "supportPriorityId");
    if (support_priority_id) { 
    if(!cJSON_IsString(support_priority_id) && !cJSON_IsNull(support_priority_id))
    {
    goto end; //String
    }
    }


    support_ticket_dto_local_var = support_ticket_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        support_ticket_status ? support_ticket_statusVariable : supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        support_ticket_type_id && !cJSON_IsNull(support_ticket_type_id) ? strdup(support_ticket_type_id->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        support_priority_id && !cJSON_IsNull(support_priority_id) ? strdup(support_priority_id->valuestring) : NULL
        );

    return support_ticket_dto_local_var;
end:
    return NULL;

}
