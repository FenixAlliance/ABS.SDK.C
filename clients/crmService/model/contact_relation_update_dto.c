#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_relation_update_dto.h"



contact_relation_update_dto_t *contact_relation_update_dto_create(
    char *contact_id,
    char *related_contact_id,
    char *contact_relation_type_id
    ) {
    contact_relation_update_dto_t *contact_relation_update_dto_local_var = malloc(sizeof(contact_relation_update_dto_t));
    if (!contact_relation_update_dto_local_var) {
        return NULL;
    }
    contact_relation_update_dto_local_var->contact_id = contact_id;
    contact_relation_update_dto_local_var->related_contact_id = related_contact_id;
    contact_relation_update_dto_local_var->contact_relation_type_id = contact_relation_type_id;

    return contact_relation_update_dto_local_var;
}


void contact_relation_update_dto_free(contact_relation_update_dto_t *contact_relation_update_dto) {
    if(NULL == contact_relation_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_relation_update_dto->contact_id) {
        free(contact_relation_update_dto->contact_id);
        contact_relation_update_dto->contact_id = NULL;
    }
    if (contact_relation_update_dto->related_contact_id) {
        free(contact_relation_update_dto->related_contact_id);
        contact_relation_update_dto->related_contact_id = NULL;
    }
    if (contact_relation_update_dto->contact_relation_type_id) {
        free(contact_relation_update_dto->contact_relation_type_id);
        contact_relation_update_dto->contact_relation_type_id = NULL;
    }
    free(contact_relation_update_dto);
}

cJSON *contact_relation_update_dto_convertToJSON(contact_relation_update_dto_t *contact_relation_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_relation_update_dto->contact_id
    if(contact_relation_update_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", contact_relation_update_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_update_dto->related_contact_id
    if(contact_relation_update_dto->related_contact_id) {
    if(cJSON_AddStringToObject(item, "relatedContactId", contact_relation_update_dto->related_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_update_dto->contact_relation_type_id
    if(contact_relation_update_dto->contact_relation_type_id) {
    if(cJSON_AddStringToObject(item, "contactRelationTypeId", contact_relation_update_dto->contact_relation_type_id) == NULL) {
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

contact_relation_update_dto_t *contact_relation_update_dto_parseFromJSON(cJSON *contact_relation_update_dtoJSON){

    contact_relation_update_dto_t *contact_relation_update_dto_local_var = NULL;

    // contact_relation_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(contact_relation_update_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // contact_relation_update_dto->related_contact_id
    cJSON *related_contact_id = cJSON_GetObjectItemCaseSensitive(contact_relation_update_dtoJSON, "relatedContactId");
    if (related_contact_id) { 
    if(!cJSON_IsString(related_contact_id) && !cJSON_IsNull(related_contact_id))
    {
    goto end; //String
    }
    }

    // contact_relation_update_dto->contact_relation_type_id
    cJSON *contact_relation_type_id = cJSON_GetObjectItemCaseSensitive(contact_relation_update_dtoJSON, "contactRelationTypeId");
    if (contact_relation_type_id) { 
    if(!cJSON_IsString(contact_relation_type_id) && !cJSON_IsNull(contact_relation_type_id))
    {
    goto end; //String
    }
    }


    contact_relation_update_dto_local_var = contact_relation_update_dto_create (
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        related_contact_id && !cJSON_IsNull(related_contact_id) ? strdup(related_contact_id->valuestring) : NULL,
        contact_relation_type_id && !cJSON_IsNull(contact_relation_type_id) ? strdup(contact_relation_type_id->valuestring) : NULL
        );

    return contact_relation_update_dto_local_var;
end:
    return NULL;

}
