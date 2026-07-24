#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts_group_create_dto.h"



contacts_group_create_dto_t *contacts_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    contacts_group_create_dto_t *contacts_group_create_dto_local_var = malloc(sizeof(contacts_group_create_dto_t));
    if (!contacts_group_create_dto_local_var) {
        return NULL;
    }
    contacts_group_create_dto_local_var->id = id;
    contacts_group_create_dto_local_var->timestamp = timestamp;
    contacts_group_create_dto_local_var->name = name;
    contacts_group_create_dto_local_var->description = description;

    return contacts_group_create_dto_local_var;
}


void contacts_group_create_dto_free(contacts_group_create_dto_t *contacts_group_create_dto) {
    if(NULL == contacts_group_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts_group_create_dto->id) {
        free(contacts_group_create_dto->id);
        contacts_group_create_dto->id = NULL;
    }
    if (contacts_group_create_dto->timestamp) {
        free(contacts_group_create_dto->timestamp);
        contacts_group_create_dto->timestamp = NULL;
    }
    if (contacts_group_create_dto->name) {
        free(contacts_group_create_dto->name);
        contacts_group_create_dto->name = NULL;
    }
    if (contacts_group_create_dto->description) {
        free(contacts_group_create_dto->description);
        contacts_group_create_dto->description = NULL;
    }
    free(contacts_group_create_dto);
}

cJSON *contacts_group_create_dto_convertToJSON(contacts_group_create_dto_t *contacts_group_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // contacts_group_create_dto->id
    if(contacts_group_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contacts_group_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_create_dto->timestamp
    if(contacts_group_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contacts_group_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contacts_group_create_dto->name
    if (!contacts_group_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", contacts_group_create_dto->name) == NULL) {
    goto fail; //String
    }


    // contacts_group_create_dto->description
    if(contacts_group_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", contacts_group_create_dto->description) == NULL) {
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

contacts_group_create_dto_t *contacts_group_create_dto_parseFromJSON(cJSON *contacts_group_create_dtoJSON){

    contacts_group_create_dto_t *contacts_group_create_dto_local_var = NULL;

    // contacts_group_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contacts_group_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contacts_group_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contacts_group_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contacts_group_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(contacts_group_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // contacts_group_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(contacts_group_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    contacts_group_create_dto_local_var = contacts_group_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return contacts_group_create_dto_local_var;
end:
    return NULL;

}
