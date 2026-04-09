#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_ledger_dto.h"



update_ledger_dto_t *update_ledger_dto_create(
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id,
    char *ledger_type_id
    ) {
    update_ledger_dto_t *update_ledger_dto_local_var = malloc(sizeof(update_ledger_dto_t));
    if (!update_ledger_dto_local_var) {
        return NULL;
    }
    update_ledger_dto_local_var->name = name;
    update_ledger_dto_local_var->description = description;
    update_ledger_dto_local_var->tenant_id = tenant_id;
    update_ledger_dto_local_var->enrollment_id = enrollment_id;
    update_ledger_dto_local_var->ledger_type_id = ledger_type_id;

    return update_ledger_dto_local_var;
}


void update_ledger_dto_free(update_ledger_dto_t *update_ledger_dto) {
    if(NULL == update_ledger_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (update_ledger_dto->name) {
        free(update_ledger_dto->name);
        update_ledger_dto->name = NULL;
    }
    if (update_ledger_dto->description) {
        free(update_ledger_dto->description);
        update_ledger_dto->description = NULL;
    }
    if (update_ledger_dto->tenant_id) {
        free(update_ledger_dto->tenant_id);
        update_ledger_dto->tenant_id = NULL;
    }
    if (update_ledger_dto->enrollment_id) {
        free(update_ledger_dto->enrollment_id);
        update_ledger_dto->enrollment_id = NULL;
    }
    if (update_ledger_dto->ledger_type_id) {
        free(update_ledger_dto->ledger_type_id);
        update_ledger_dto->ledger_type_id = NULL;
    }
    free(update_ledger_dto);
}

cJSON *update_ledger_dto_convertToJSON(update_ledger_dto_t *update_ledger_dto) {
    cJSON *item = cJSON_CreateObject();

    // update_ledger_dto->name
    if(update_ledger_dto->name) {
    if(cJSON_AddStringToObject(item, "name", update_ledger_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // update_ledger_dto->description
    if(update_ledger_dto->description) {
    if(cJSON_AddStringToObject(item, "description", update_ledger_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // update_ledger_dto->tenant_id
    if(update_ledger_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", update_ledger_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // update_ledger_dto->enrollment_id
    if(update_ledger_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", update_ledger_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // update_ledger_dto->ledger_type_id
    if(update_ledger_dto->ledger_type_id) {
    if(cJSON_AddStringToObject(item, "ledgerTypeId", update_ledger_dto->ledger_type_id) == NULL) {
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

update_ledger_dto_t *update_ledger_dto_parseFromJSON(cJSON *update_ledger_dtoJSON){

    update_ledger_dto_t *update_ledger_dto_local_var = NULL;

    // update_ledger_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(update_ledger_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // update_ledger_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(update_ledger_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // update_ledger_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(update_ledger_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // update_ledger_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(update_ledger_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // update_ledger_dto->ledger_type_id
    cJSON *ledger_type_id = cJSON_GetObjectItemCaseSensitive(update_ledger_dtoJSON, "ledgerTypeId");
    if (ledger_type_id) { 
    if(!cJSON_IsString(ledger_type_id) && !cJSON_IsNull(ledger_type_id))
    {
    goto end; //String
    }
    }


    update_ledger_dto_local_var = update_ledger_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        ledger_type_id && !cJSON_IsNull(ledger_type_id) ? strdup(ledger_type_id->valuestring) : NULL
        );

    return update_ledger_dto_local_var;
end:
    return NULL;

}
