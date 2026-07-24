#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_email_update_dto.h"



contact_email_update_dto_t *contact_email_update_dto_create(
    char *address,
    char *label,
    int is_primary
    ) {
    contact_email_update_dto_t *contact_email_update_dto_local_var = malloc(sizeof(contact_email_update_dto_t));
    if (!contact_email_update_dto_local_var) {
        return NULL;
    }
    contact_email_update_dto_local_var->address = address;
    contact_email_update_dto_local_var->label = label;
    contact_email_update_dto_local_var->is_primary = is_primary;

    return contact_email_update_dto_local_var;
}


void contact_email_update_dto_free(contact_email_update_dto_t *contact_email_update_dto) {
    if(NULL == contact_email_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_email_update_dto->address) {
        free(contact_email_update_dto->address);
        contact_email_update_dto->address = NULL;
    }
    if (contact_email_update_dto->label) {
        free(contact_email_update_dto->label);
        contact_email_update_dto->label = NULL;
    }
    free(contact_email_update_dto);
}

cJSON *contact_email_update_dto_convertToJSON(contact_email_update_dto_t *contact_email_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_email_update_dto->address
    if(contact_email_update_dto->address) {
    if(cJSON_AddStringToObject(item, "address", contact_email_update_dto->address) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_update_dto->label
    if(contact_email_update_dto->label) {
    if(cJSON_AddStringToObject(item, "label", contact_email_update_dto->label) == NULL) {
    goto fail; //String
    }
    }


    // contact_email_update_dto->is_primary
    if(contact_email_update_dto->is_primary) {
    if(cJSON_AddBoolToObject(item, "isPrimary", contact_email_update_dto->is_primary) == NULL) {
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

contact_email_update_dto_t *contact_email_update_dto_parseFromJSON(cJSON *contact_email_update_dtoJSON){

    contact_email_update_dto_t *contact_email_update_dto_local_var = NULL;

    // contact_email_update_dto->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(contact_email_update_dtoJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // contact_email_update_dto->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(contact_email_update_dtoJSON, "label");
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // contact_email_update_dto->is_primary
    cJSON *is_primary = cJSON_GetObjectItemCaseSensitive(contact_email_update_dtoJSON, "isPrimary");
    if (is_primary) { 
    if(!cJSON_IsBool(is_primary))
    {
    goto end; //Bool
    }
    }


    contact_email_update_dto_local_var = contact_email_update_dto_create (
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        is_primary ? is_primary->valueint : 0
        );

    return contact_email_update_dto_local_var;
end:
    return NULL;

}
