#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_type_dto.h"



journal_type_dto_t *journal_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id
    ) {
    journal_type_dto_t *journal_type_dto_local_var = malloc(sizeof(journal_type_dto_t));
    if (!journal_type_dto_local_var) {
        return NULL;
    }
    journal_type_dto_local_var->id = id;
    journal_type_dto_local_var->timestamp = timestamp;
    journal_type_dto_local_var->name = name;
    journal_type_dto_local_var->tenant_id = tenant_id;
    journal_type_dto_local_var->enrollment_id = enrollment_id;

    return journal_type_dto_local_var;
}


void journal_type_dto_free(journal_type_dto_t *journal_type_dto) {
    if(NULL == journal_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_type_dto->id) {
        free(journal_type_dto->id);
        journal_type_dto->id = NULL;
    }
    if (journal_type_dto->timestamp) {
        free(journal_type_dto->timestamp);
        journal_type_dto->timestamp = NULL;
    }
    if (journal_type_dto->name) {
        free(journal_type_dto->name);
        journal_type_dto->name = NULL;
    }
    if (journal_type_dto->tenant_id) {
        free(journal_type_dto->tenant_id);
        journal_type_dto->tenant_id = NULL;
    }
    if (journal_type_dto->enrollment_id) {
        free(journal_type_dto->enrollment_id);
        journal_type_dto->enrollment_id = NULL;
    }
    free(journal_type_dto);
}

cJSON *journal_type_dto_convertToJSON(journal_type_dto_t *journal_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_type_dto->id
    if(journal_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", journal_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto->timestamp
    if(journal_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_type_dto->name
    if(journal_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", journal_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto->tenant_id
    if(journal_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", journal_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_type_dto->enrollment_id
    if(journal_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", journal_type_dto->enrollment_id) == NULL) {
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

journal_type_dto_t *journal_type_dto_parseFromJSON(cJSON *journal_type_dtoJSON){

    journal_type_dto_t *journal_type_dto_local_var = NULL;

    // journal_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(journal_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // journal_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(journal_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // journal_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(journal_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // journal_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(journal_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    journal_type_dto_local_var = journal_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return journal_type_dto_local_var;
end:
    return NULL;

}
