#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_priority_create_dto.h"



support_ticket_priority_create_dto_t *support_ticket_priority_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *support_entitlement_id
    ) {
    support_ticket_priority_create_dto_t *support_ticket_priority_create_dto_local_var = malloc(sizeof(support_ticket_priority_create_dto_t));
    if (!support_ticket_priority_create_dto_local_var) {
        return NULL;
    }
    support_ticket_priority_create_dto_local_var->id = id;
    support_ticket_priority_create_dto_local_var->timestamp = timestamp;
    support_ticket_priority_create_dto_local_var->title = title;
    support_ticket_priority_create_dto_local_var->description = description;
    support_ticket_priority_create_dto_local_var->support_entitlement_id = support_entitlement_id;

    return support_ticket_priority_create_dto_local_var;
}


void support_ticket_priority_create_dto_free(support_ticket_priority_create_dto_t *support_ticket_priority_create_dto) {
    if(NULL == support_ticket_priority_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_ticket_priority_create_dto->id) {
        free(support_ticket_priority_create_dto->id);
        support_ticket_priority_create_dto->id = NULL;
    }
    if (support_ticket_priority_create_dto->timestamp) {
        free(support_ticket_priority_create_dto->timestamp);
        support_ticket_priority_create_dto->timestamp = NULL;
    }
    if (support_ticket_priority_create_dto->title) {
        free(support_ticket_priority_create_dto->title);
        support_ticket_priority_create_dto->title = NULL;
    }
    if (support_ticket_priority_create_dto->description) {
        free(support_ticket_priority_create_dto->description);
        support_ticket_priority_create_dto->description = NULL;
    }
    if (support_ticket_priority_create_dto->support_entitlement_id) {
        free(support_ticket_priority_create_dto->support_entitlement_id);
        support_ticket_priority_create_dto->support_entitlement_id = NULL;
    }
    free(support_ticket_priority_create_dto);
}

cJSON *support_ticket_priority_create_dto_convertToJSON(support_ticket_priority_create_dto_t *support_ticket_priority_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_ticket_priority_create_dto->id
    if(support_ticket_priority_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", support_ticket_priority_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_priority_create_dto->timestamp
    if(support_ticket_priority_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_ticket_priority_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_ticket_priority_create_dto->title
    if(support_ticket_priority_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_ticket_priority_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_priority_create_dto->description
    if(support_ticket_priority_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_ticket_priority_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_priority_create_dto->support_entitlement_id
    if(support_ticket_priority_create_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementID", support_ticket_priority_create_dto->support_entitlement_id) == NULL) {
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

support_ticket_priority_create_dto_t *support_ticket_priority_create_dto_parseFromJSON(cJSON *support_ticket_priority_create_dtoJSON){

    support_ticket_priority_create_dto_t *support_ticket_priority_create_dto_local_var = NULL;

    // support_ticket_priority_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // support_ticket_priority_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_ticket_priority_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_ticket_priority_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // support_ticket_priority_create_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_create_dtoJSON, "supportEntitlementID");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }


    support_ticket_priority_create_dto_local_var = support_ticket_priority_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL
        );

    return support_ticket_priority_create_dto_local_var;
end:
    return NULL;

}
