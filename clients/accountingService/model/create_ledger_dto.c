#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_ledger_dto.h"



create_ledger_dto_t *create_ledger_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *date_time,
    char *tenant_id,
    char *enrollment_id,
    char *ledger_type_id
    ) {
    create_ledger_dto_t *create_ledger_dto_local_var = malloc(sizeof(create_ledger_dto_t));
    if (!create_ledger_dto_local_var) {
        return NULL;
    }
    create_ledger_dto_local_var->id = id;
    create_ledger_dto_local_var->timestamp = timestamp;
    create_ledger_dto_local_var->name = name;
    create_ledger_dto_local_var->description = description;
    create_ledger_dto_local_var->date_time = date_time;
    create_ledger_dto_local_var->tenant_id = tenant_id;
    create_ledger_dto_local_var->enrollment_id = enrollment_id;
    create_ledger_dto_local_var->ledger_type_id = ledger_type_id;

    return create_ledger_dto_local_var;
}


void create_ledger_dto_free(create_ledger_dto_t *create_ledger_dto) {
    if(NULL == create_ledger_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (create_ledger_dto->id) {
        free(create_ledger_dto->id);
        create_ledger_dto->id = NULL;
    }
    if (create_ledger_dto->timestamp) {
        free(create_ledger_dto->timestamp);
        create_ledger_dto->timestamp = NULL;
    }
    if (create_ledger_dto->name) {
        free(create_ledger_dto->name);
        create_ledger_dto->name = NULL;
    }
    if (create_ledger_dto->description) {
        free(create_ledger_dto->description);
        create_ledger_dto->description = NULL;
    }
    if (create_ledger_dto->date_time) {
        free(create_ledger_dto->date_time);
        create_ledger_dto->date_time = NULL;
    }
    if (create_ledger_dto->tenant_id) {
        free(create_ledger_dto->tenant_id);
        create_ledger_dto->tenant_id = NULL;
    }
    if (create_ledger_dto->enrollment_id) {
        free(create_ledger_dto->enrollment_id);
        create_ledger_dto->enrollment_id = NULL;
    }
    if (create_ledger_dto->ledger_type_id) {
        free(create_ledger_dto->ledger_type_id);
        create_ledger_dto->ledger_type_id = NULL;
    }
    free(create_ledger_dto);
}

cJSON *create_ledger_dto_convertToJSON(create_ledger_dto_t *create_ledger_dto) {
    cJSON *item = cJSON_CreateObject();

    // create_ledger_dto->id
    if(create_ledger_dto->id) {
    if(cJSON_AddStringToObject(item, "id", create_ledger_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // create_ledger_dto->timestamp
    if(create_ledger_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", create_ledger_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // create_ledger_dto->name
    if(create_ledger_dto->name) {
    if(cJSON_AddStringToObject(item, "name", create_ledger_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // create_ledger_dto->description
    if(create_ledger_dto->description) {
    if(cJSON_AddStringToObject(item, "description", create_ledger_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // create_ledger_dto->date_time
    if(create_ledger_dto->date_time) {
    if(cJSON_AddStringToObject(item, "dateTime", create_ledger_dto->date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // create_ledger_dto->tenant_id
    if(create_ledger_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", create_ledger_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // create_ledger_dto->enrollment_id
    if(create_ledger_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", create_ledger_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // create_ledger_dto->ledger_type_id
    if(create_ledger_dto->ledger_type_id) {
    if(cJSON_AddStringToObject(item, "ledgerTypeId", create_ledger_dto->ledger_type_id) == NULL) {
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

create_ledger_dto_t *create_ledger_dto_parseFromJSON(cJSON *create_ledger_dtoJSON){

    create_ledger_dto_t *create_ledger_dto_local_var = NULL;

    // create_ledger_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // create_ledger_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // create_ledger_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // create_ledger_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // create_ledger_dto->date_time
    cJSON *date_time = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "dateTime");
    if (date_time) { 
    if(!cJSON_IsString(date_time) && !cJSON_IsNull(date_time))
    {
    goto end; //DateTime
    }
    }

    // create_ledger_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // create_ledger_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // create_ledger_dto->ledger_type_id
    cJSON *ledger_type_id = cJSON_GetObjectItemCaseSensitive(create_ledger_dtoJSON, "ledgerTypeId");
    if (ledger_type_id) { 
    if(!cJSON_IsString(ledger_type_id) && !cJSON_IsNull(ledger_type_id))
    {
    goto end; //String
    }
    }


    create_ledger_dto_local_var = create_ledger_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        date_time && !cJSON_IsNull(date_time) ? strdup(date_time->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        ledger_type_id && !cJSON_IsNull(ledger_type_id) ? strdup(ledger_type_id->valuestring) : NULL
        );

    return create_ledger_dto_local_var;
end:
    return NULL;

}
