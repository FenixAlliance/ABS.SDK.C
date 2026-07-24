#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_source_update_dto.h"



contact_source_update_dto_t *contact_source_update_dto_create(
    char *name,
    char *description
    ) {
    contact_source_update_dto_t *contact_source_update_dto_local_var = malloc(sizeof(contact_source_update_dto_t));
    if (!contact_source_update_dto_local_var) {
        return NULL;
    }
    contact_source_update_dto_local_var->name = name;
    contact_source_update_dto_local_var->description = description;

    return contact_source_update_dto_local_var;
}


void contact_source_update_dto_free(contact_source_update_dto_t *contact_source_update_dto) {
    if(NULL == contact_source_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_source_update_dto->name) {
        free(contact_source_update_dto->name);
        contact_source_update_dto->name = NULL;
    }
    if (contact_source_update_dto->description) {
        free(contact_source_update_dto->description);
        contact_source_update_dto->description = NULL;
    }
    free(contact_source_update_dto);
}

cJSON *contact_source_update_dto_convertToJSON(contact_source_update_dto_t *contact_source_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_source_update_dto->name
    if (!contact_source_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", contact_source_update_dto->name) == NULL) {
    goto fail; //String
    }


    // contact_source_update_dto->description
    if(contact_source_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", contact_source_update_dto->description) == NULL) {
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

contact_source_update_dto_t *contact_source_update_dto_parseFromJSON(cJSON *contact_source_update_dtoJSON){

    contact_source_update_dto_t *contact_source_update_dto_local_var = NULL;

    // contact_source_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(contact_source_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // contact_source_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(contact_source_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    contact_source_update_dto_local_var = contact_source_update_dto_create (
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return contact_source_update_dto_local_var;
end:
    return NULL;

}
