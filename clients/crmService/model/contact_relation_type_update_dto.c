#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_relation_type_update_dto.h"



contact_relation_type_update_dto_t *contact_relation_type_update_dto_create(
    char *name,
    char *back_name,
    char *description
    ) {
    contact_relation_type_update_dto_t *contact_relation_type_update_dto_local_var = malloc(sizeof(contact_relation_type_update_dto_t));
    if (!contact_relation_type_update_dto_local_var) {
        return NULL;
    }
    contact_relation_type_update_dto_local_var->name = name;
    contact_relation_type_update_dto_local_var->back_name = back_name;
    contact_relation_type_update_dto_local_var->description = description;

    return contact_relation_type_update_dto_local_var;
}


void contact_relation_type_update_dto_free(contact_relation_type_update_dto_t *contact_relation_type_update_dto) {
    if(NULL == contact_relation_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_relation_type_update_dto->name) {
        free(contact_relation_type_update_dto->name);
        contact_relation_type_update_dto->name = NULL;
    }
    if (contact_relation_type_update_dto->back_name) {
        free(contact_relation_type_update_dto->back_name);
        contact_relation_type_update_dto->back_name = NULL;
    }
    if (contact_relation_type_update_dto->description) {
        free(contact_relation_type_update_dto->description);
        contact_relation_type_update_dto->description = NULL;
    }
    free(contact_relation_type_update_dto);
}

cJSON *contact_relation_type_update_dto_convertToJSON(contact_relation_type_update_dto_t *contact_relation_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_relation_type_update_dto->name
    if (!contact_relation_type_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", contact_relation_type_update_dto->name) == NULL) {
    goto fail; //String
    }


    // contact_relation_type_update_dto->back_name
    if(contact_relation_type_update_dto->back_name) {
    if(cJSON_AddStringToObject(item, "backName", contact_relation_type_update_dto->back_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_type_update_dto->description
    if(contact_relation_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", contact_relation_type_update_dto->description) == NULL) {
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

contact_relation_type_update_dto_t *contact_relation_type_update_dto_parseFromJSON(cJSON *contact_relation_type_update_dtoJSON){

    contact_relation_type_update_dto_t *contact_relation_type_update_dto_local_var = NULL;

    // contact_relation_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(contact_relation_type_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // contact_relation_type_update_dto->back_name
    cJSON *back_name = cJSON_GetObjectItemCaseSensitive(contact_relation_type_update_dtoJSON, "backName");
    if (back_name) { 
    if(!cJSON_IsString(back_name) && !cJSON_IsNull(back_name))
    {
    goto end; //String
    }
    }

    // contact_relation_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(contact_relation_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    contact_relation_type_update_dto_local_var = contact_relation_type_update_dto_create (
        strdup(name->valuestring),
        back_name && !cJSON_IsNull(back_name) ? strdup(back_name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return contact_relation_type_update_dto_local_var;
end:
    return NULL;

}
