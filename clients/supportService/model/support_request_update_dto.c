#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_request_update_dto.h"



support_request_update_dto_t *support_request_update_dto_create(
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *support_entitlement_id
    ) {
    support_request_update_dto_t *support_request_update_dto_local_var = malloc(sizeof(support_request_update_dto_t));
    if (!support_request_update_dto_local_var) {
        return NULL;
    }
    support_request_update_dto_local_var->title = title;
    support_request_update_dto_local_var->description = description;
    support_request_update_dto_local_var->approved = approved;
    support_request_update_dto_local_var->approved_timestamp = approved_timestamp;
    support_request_update_dto_local_var->support_entitlement_id = support_entitlement_id;

    return support_request_update_dto_local_var;
}


void support_request_update_dto_free(support_request_update_dto_t *support_request_update_dto) {
    if(NULL == support_request_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_request_update_dto->title) {
        free(support_request_update_dto->title);
        support_request_update_dto->title = NULL;
    }
    if (support_request_update_dto->description) {
        free(support_request_update_dto->description);
        support_request_update_dto->description = NULL;
    }
    if (support_request_update_dto->approved_timestamp) {
        free(support_request_update_dto->approved_timestamp);
        support_request_update_dto->approved_timestamp = NULL;
    }
    if (support_request_update_dto->support_entitlement_id) {
        free(support_request_update_dto->support_entitlement_id);
        support_request_update_dto->support_entitlement_id = NULL;
    }
    free(support_request_update_dto);
}

cJSON *support_request_update_dto_convertToJSON(support_request_update_dto_t *support_request_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_request_update_dto->title
    if(support_request_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_request_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_request_update_dto->description
    if(support_request_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_request_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_request_update_dto->approved
    if(support_request_update_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", support_request_update_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_update_dto->approved_timestamp
    if(support_request_update_dto->approved_timestamp) {
    if(cJSON_AddStringToObject(item, "approvedTimestamp", support_request_update_dto->approved_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_request_update_dto->support_entitlement_id
    if(support_request_update_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementID", support_request_update_dto->support_entitlement_id) == NULL) {
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

support_request_update_dto_t *support_request_update_dto_parseFromJSON(cJSON *support_request_update_dtoJSON){

    support_request_update_dto_t *support_request_update_dto_local_var = NULL;

    // support_request_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_request_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_request_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_request_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // support_request_update_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(support_request_update_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // support_request_update_dto->approved_timestamp
    cJSON *approved_timestamp = cJSON_GetObjectItemCaseSensitive(support_request_update_dtoJSON, "approvedTimestamp");
    if (approved_timestamp) { 
    if(!cJSON_IsString(approved_timestamp) && !cJSON_IsNull(approved_timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_request_update_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(support_request_update_dtoJSON, "supportEntitlementID");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }


    support_request_update_dto_local_var = support_request_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        approved ? approved->valueint : 0,
        approved_timestamp && !cJSON_IsNull(approved_timestamp) ? strdup(approved_timestamp->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL
        );

    return support_request_update_dto_local_var;
end:
    return NULL;

}
