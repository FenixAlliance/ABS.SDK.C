#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts_group_update_dto.h"



contacts_group_update_dto_t *contacts_group_update_dto_create(
    char *name,
    char *description
    ) {
    contacts_group_update_dto_t *contacts_group_update_dto_local_var = malloc(sizeof(contacts_group_update_dto_t));
    if (!contacts_group_update_dto_local_var) {
        return NULL;
    }
    contacts_group_update_dto_local_var->name = name;
    contacts_group_update_dto_local_var->description = description;

    return contacts_group_update_dto_local_var;
}


void contacts_group_update_dto_free(contacts_group_update_dto_t *contacts_group_update_dto) {
    if(NULL == contacts_group_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts_group_update_dto->name) {
        free(contacts_group_update_dto->name);
        contacts_group_update_dto->name = NULL;
    }
    if (contacts_group_update_dto->description) {
        free(contacts_group_update_dto->description);
        contacts_group_update_dto->description = NULL;
    }
    free(contacts_group_update_dto);
}

cJSON *contacts_group_update_dto_convertToJSON(contacts_group_update_dto_t *contacts_group_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // contacts_group_update_dto->name
    if (!contacts_group_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", contacts_group_update_dto->name) == NULL) {
    goto fail; //String
    }


    // contacts_group_update_dto->description
    if(contacts_group_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", contacts_group_update_dto->description) == NULL) {
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

contacts_group_update_dto_t *contacts_group_update_dto_parseFromJSON(cJSON *contacts_group_update_dtoJSON){

    contacts_group_update_dto_t *contacts_group_update_dto_local_var = NULL;

    // contacts_group_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(contacts_group_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // contacts_group_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(contacts_group_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    contacts_group_update_dto_local_var = contacts_group_update_dto_create (
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return contacts_group_update_dto_local_var;
end:
    return NULL;

}
