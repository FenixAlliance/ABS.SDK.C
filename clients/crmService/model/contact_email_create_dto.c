#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_email_create_dto.h"



contact_email_create_dto_t *contact_email_create_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *address,
    char *label,
    int is_primary
    ) {
    contact_email_create_dto_t *contact_email_create_dto_local_var = malloc(sizeof(contact_email_create_dto_t));
    if (!contact_email_create_dto_local_var) {
        return NULL;
    }
    contact_email_create_dto_local_var->id = id;
    contact_email_create_dto_local_var->timestamp = timestamp;
    contact_email_create_dto_local_var->contact_id = contact_id;
    contact_email_create_dto_local_var->address = address;
    contact_email_create_dto_local_var->label = label;
    contact_email_create_dto_local_var->is_primary = is_primary;

    return contact_email_create_dto_local_var;
}


void contact_email_create_dto_free(contact_email_create_dto_t *contact_email_create_dto) {
    if(NULL == contact_email_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_email_create_dto->id) {
        free(contact_email_create_dto->id);
        contact_email_create_dto->id = NULL;
    }
    if (contact_email_create_dto->timestamp) {
        free(contact_email_create_dto->timestamp);
        contact_email_create_dto->timestamp = NULL;
    }
    if (contact_email_create_dto->contact_id) {
        free(contact_email_create_dto->contact_id);
        contact_email_create_dto->contact_id = NULL;
    }
    if (contact_email_create_dto->address) {
        free(contact_email_create_dto->address);
        contact_email_create_dto->address = NULL;
    }
    if (contact_email_create_dto->label) {
        free(contact_email_create_dto->label);
        contact_email_create_dto->label = NULL;
    }
    free(contact_email_create_dto);
}

cJSON *contact_email_create_dto_convertToJSON(contact_email_create_dto_t *contact_email_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_email_create_dto->id
    if(contact_email_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contact_email_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_create_dto->timestamp
    if(contact_email_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contact_email_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_email_create_dto->contact_id
    if(contact_email_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", contact_email_create_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_create_dto->address
    if(contact_email_create_dto->address) {
    if(cJSON_AddStringToObject(item, "address", contact_email_create_dto->address) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_create_dto->label
    if(contact_email_create_dto->label) {
    if(cJSON_AddStringToObject(item, "label", contact_email_create_dto->label) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_create_dto->is_primary
    if(contact_email_create_dto->is_primary) {
    if(cJSON_AddBoolToObject(item, "isPrimary", contact_email_create_dto->is_primary) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contact_email_create_dto_t *contact_email_create_dto_parseFromJSON(cJSON *contact_email_create_dtoJSON){

    contact_email_create_dto_t *contact_email_create_dto_local_var = NULL;

    // contact_email_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contact_email_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contact_email_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contact_email_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contact_email_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(contact_email_create_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // contact_email_create_dto->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(contact_email_create_dtoJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // contact_email_create_dto->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(contact_email_create_dtoJSON, "label");
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // contact_email_create_dto->is_primary
    cJSON *is_primary = cJSON_GetObjectItemCaseSensitive(contact_email_create_dtoJSON, "isPrimary");
    if (is_primary) { 
    if(!cJSON_IsBool(is_primary))
    {
    goto end; //Bool
    }
    }


    contact_email_create_dto_local_var = contact_email_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        is_primary ? is_primary->valueint : 0
        );

    return contact_email_create_dto_local_var;
end:
    return NULL;

}
