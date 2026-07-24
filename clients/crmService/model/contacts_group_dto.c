#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts_group_dto.h"



contacts_group_dto_t *contacts_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    contacts_group_dto_t *contacts_group_dto_local_var = malloc(sizeof(contacts_group_dto_t));
    if (!contacts_group_dto_local_var) {
        return NULL;
    }
    contacts_group_dto_local_var->id = id;
    contacts_group_dto_local_var->timestamp = timestamp;
    contacts_group_dto_local_var->name = name;
    contacts_group_dto_local_var->description = description;
    contacts_group_dto_local_var->tenant_id = tenant_id;
    contacts_group_dto_local_var->enrollment_id = enrollment_id;

    return contacts_group_dto_local_var;
}


void contacts_group_dto_free(contacts_group_dto_t *contacts_group_dto) {
    if(NULL == contacts_group_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts_group_dto->id) {
        free(contacts_group_dto->id);
        contacts_group_dto->id = NULL;
    }
    if (contacts_group_dto->timestamp) {
        free(contacts_group_dto->timestamp);
        contacts_group_dto->timestamp = NULL;
    }
    if (contacts_group_dto->name) {
        free(contacts_group_dto->name);
        contacts_group_dto->name = NULL;
    }
    if (contacts_group_dto->description) {
        free(contacts_group_dto->description);
        contacts_group_dto->description = NULL;
    }
    if (contacts_group_dto->tenant_id) {
        free(contacts_group_dto->tenant_id);
        contacts_group_dto->tenant_id = NULL;
    }
    if (contacts_group_dto->enrollment_id) {
        free(contacts_group_dto->enrollment_id);
        contacts_group_dto->enrollment_id = NULL;
    }
    free(contacts_group_dto);
}

cJSON *contacts_group_dto_convertToJSON(contacts_group_dto_t *contacts_group_dto) {
    cJSON *item = cJSON_CreateObject();

    // contacts_group_dto->id
    if(contacts_group_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contacts_group_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto->timestamp
    if(contacts_group_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contacts_group_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contacts_group_dto->name
    if(contacts_group_dto->name) {
    if(cJSON_AddStringToObject(item, "name", contacts_group_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto->description
    if(contacts_group_dto->description) {
    if(cJSON_AddStringToObject(item, "description", contacts_group_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto->tenant_id
    if(contacts_group_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", contacts_group_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // contacts_group_dto->enrollment_id
    if(contacts_group_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", contacts_group_dto->enrollment_id) == NULL) {
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

contacts_group_dto_t *contacts_group_dto_parseFromJSON(cJSON *contacts_group_dtoJSON){

    contacts_group_dto_t *contacts_group_dto_local_var = NULL;

    // contacts_group_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contacts_group_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contacts_group_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contacts_group_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contacts_group_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(contacts_group_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // contacts_group_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(contacts_group_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // contacts_group_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(contacts_group_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // contacts_group_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(contacts_group_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    contacts_group_dto_local_var = contacts_group_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return contacts_group_dto_local_var;
end:
    return NULL;

}
