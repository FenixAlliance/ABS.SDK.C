#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_source_dto.h"



contact_source_dto_t *contact_source_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id
    ) {
    contact_source_dto_t *contact_source_dto_local_var = malloc(sizeof(contact_source_dto_t));
    if (!contact_source_dto_local_var) {
        return NULL;
    }
    contact_source_dto_local_var->id = id;
    contact_source_dto_local_var->timestamp = timestamp;
    contact_source_dto_local_var->name = name;
    contact_source_dto_local_var->description = description;
    contact_source_dto_local_var->tenant_id = tenant_id;

    return contact_source_dto_local_var;
}


void contact_source_dto_free(contact_source_dto_t *contact_source_dto) {
    if(NULL == contact_source_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_source_dto->id) {
        free(contact_source_dto->id);
        contact_source_dto->id = NULL;
    }
    if (contact_source_dto->timestamp) {
        free(contact_source_dto->timestamp);
        contact_source_dto->timestamp = NULL;
    }
    if (contact_source_dto->name) {
        free(contact_source_dto->name);
        contact_source_dto->name = NULL;
    }
    if (contact_source_dto->description) {
        free(contact_source_dto->description);
        contact_source_dto->description = NULL;
    }
    if (contact_source_dto->tenant_id) {
        free(contact_source_dto->tenant_id);
        contact_source_dto->tenant_id = NULL;
    }
    free(contact_source_dto);
}

cJSON *contact_source_dto_convertToJSON(contact_source_dto_t *contact_source_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_source_dto->id
    if(contact_source_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contact_source_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto->timestamp
    if(contact_source_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contact_source_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_source_dto->name
    if(contact_source_dto->name) {
    if(cJSON_AddStringToObject(item, "name", contact_source_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto->description
    if(contact_source_dto->description) {
    if(cJSON_AddStringToObject(item, "description", contact_source_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // contact_source_dto->tenant_id
    if(contact_source_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", contact_source_dto->tenant_id) == NULL) {
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

contact_source_dto_t *contact_source_dto_parseFromJSON(cJSON *contact_source_dtoJSON){

    contact_source_dto_t *contact_source_dto_local_var = NULL;

    // contact_source_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contact_source_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contact_source_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contact_source_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contact_source_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(contact_source_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // contact_source_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(contact_source_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // contact_source_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(contact_source_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    contact_source_dto_local_var = contact_source_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return contact_source_dto_local_var;
end:
    return NULL;

}
