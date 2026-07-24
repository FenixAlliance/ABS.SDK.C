#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_relation_dto.h"



contact_relation_dto_t *contact_relation_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *contact_name,
    char *related_contact_id,
    char *related_contact_name,
    char *contact_relation_type_id,
    char *contact_relation_type_name,
    char *qualified_name,
    char *tenant_id
    ) {
    contact_relation_dto_t *contact_relation_dto_local_var = malloc(sizeof(contact_relation_dto_t));
    if (!contact_relation_dto_local_var) {
        return NULL;
    }
    contact_relation_dto_local_var->id = id;
    contact_relation_dto_local_var->timestamp = timestamp;
    contact_relation_dto_local_var->contact_id = contact_id;
    contact_relation_dto_local_var->contact_name = contact_name;
    contact_relation_dto_local_var->related_contact_id = related_contact_id;
    contact_relation_dto_local_var->related_contact_name = related_contact_name;
    contact_relation_dto_local_var->contact_relation_type_id = contact_relation_type_id;
    contact_relation_dto_local_var->contact_relation_type_name = contact_relation_type_name;
    contact_relation_dto_local_var->qualified_name = qualified_name;
    contact_relation_dto_local_var->tenant_id = tenant_id;

    return contact_relation_dto_local_var;
}


void contact_relation_dto_free(contact_relation_dto_t *contact_relation_dto) {
    if(NULL == contact_relation_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_relation_dto->id) {
        free(contact_relation_dto->id);
        contact_relation_dto->id = NULL;
    }
    if (contact_relation_dto->timestamp) {
        free(contact_relation_dto->timestamp);
        contact_relation_dto->timestamp = NULL;
    }
    if (contact_relation_dto->contact_id) {
        free(contact_relation_dto->contact_id);
        contact_relation_dto->contact_id = NULL;
    }
    if (contact_relation_dto->contact_name) {
        free(contact_relation_dto->contact_name);
        contact_relation_dto->contact_name = NULL;
    }
    if (contact_relation_dto->related_contact_id) {
        free(contact_relation_dto->related_contact_id);
        contact_relation_dto->related_contact_id = NULL;
    }
    if (contact_relation_dto->related_contact_name) {
        free(contact_relation_dto->related_contact_name);
        contact_relation_dto->related_contact_name = NULL;
    }
    if (contact_relation_dto->contact_relation_type_id) {
        free(contact_relation_dto->contact_relation_type_id);
        contact_relation_dto->contact_relation_type_id = NULL;
    }
    if (contact_relation_dto->contact_relation_type_name) {
        free(contact_relation_dto->contact_relation_type_name);
        contact_relation_dto->contact_relation_type_name = NULL;
    }
    if (contact_relation_dto->qualified_name) {
        free(contact_relation_dto->qualified_name);
        contact_relation_dto->qualified_name = NULL;
    }
    if (contact_relation_dto->tenant_id) {
        free(contact_relation_dto->tenant_id);
        contact_relation_dto->tenant_id = NULL;
    }
    free(contact_relation_dto);
}

cJSON *contact_relation_dto_convertToJSON(contact_relation_dto_t *contact_relation_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_relation_dto->id
    if(contact_relation_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contact_relation_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->timestamp
    if(contact_relation_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contact_relation_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_relation_dto->contact_id
    if(contact_relation_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", contact_relation_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->contact_name
    if(contact_relation_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", contact_relation_dto->contact_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->related_contact_id
    if(contact_relation_dto->related_contact_id) {
    if(cJSON_AddStringToObject(item, "relatedContactId", contact_relation_dto->related_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->related_contact_name
    if(contact_relation_dto->related_contact_name) {
    if(cJSON_AddStringToObject(item, "relatedContactName", contact_relation_dto->related_contact_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->contact_relation_type_id
    if(contact_relation_dto->contact_relation_type_id) {
    if(cJSON_AddStringToObject(item, "contactRelationTypeId", contact_relation_dto->contact_relation_type_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->contact_relation_type_name
    if(contact_relation_dto->contact_relation_type_name) {
    if(cJSON_AddStringToObject(item, "contactRelationTypeName", contact_relation_dto->contact_relation_type_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->qualified_name
    if(contact_relation_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", contact_relation_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_relation_dto->tenant_id
    if(contact_relation_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", contact_relation_dto->tenant_id) == NULL) {
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

contact_relation_dto_t *contact_relation_dto_parseFromJSON(cJSON *contact_relation_dtoJSON){

    contact_relation_dto_t *contact_relation_dto_local_var = NULL;

    // contact_relation_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contact_relation_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->related_contact_id
    cJSON *related_contact_id = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "relatedContactId");
    if (related_contact_id) { 
    if(!cJSON_IsString(related_contact_id) && !cJSON_IsNull(related_contact_id))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->related_contact_name
    cJSON *related_contact_name = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "relatedContactName");
    if (related_contact_name) { 
    if(!cJSON_IsString(related_contact_name) && !cJSON_IsNull(related_contact_name))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->contact_relation_type_id
    cJSON *contact_relation_type_id = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "contactRelationTypeId");
    if (contact_relation_type_id) { 
    if(!cJSON_IsString(contact_relation_type_id) && !cJSON_IsNull(contact_relation_type_id))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->contact_relation_type_name
    cJSON *contact_relation_type_name = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "contactRelationTypeName");
    if (contact_relation_type_name) { 
    if(!cJSON_IsString(contact_relation_type_name) && !cJSON_IsNull(contact_relation_type_name))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // contact_relation_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(contact_relation_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    contact_relation_dto_local_var = contact_relation_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL,
        related_contact_id && !cJSON_IsNull(related_contact_id) ? strdup(related_contact_id->valuestring) : NULL,
        related_contact_name && !cJSON_IsNull(related_contact_name) ? strdup(related_contact_name->valuestring) : NULL,
        contact_relation_type_id && !cJSON_IsNull(contact_relation_type_id) ? strdup(contact_relation_type_id->valuestring) : NULL,
        contact_relation_type_name && !cJSON_IsNull(contact_relation_type_name) ? strdup(contact_relation_type_name->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return contact_relation_dto_local_var;
end:
    return NULL;

}
