#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_mode_dto.h"



payment_mode_dto_t *payment_mode_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    payment_mode_dto_t *payment_mode_dto_local_var = malloc(sizeof(payment_mode_dto_t));
    if (!payment_mode_dto_local_var) {
        return NULL;
    }
    payment_mode_dto_local_var->id = id;
    payment_mode_dto_local_var->timestamp = timestamp;
    payment_mode_dto_local_var->name = name;
    payment_mode_dto_local_var->description = description;
    payment_mode_dto_local_var->tenant_id = tenant_id;
    payment_mode_dto_local_var->enrollment_id = enrollment_id;

    return payment_mode_dto_local_var;
}


void payment_mode_dto_free(payment_mode_dto_t *payment_mode_dto) {
    if(NULL == payment_mode_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_mode_dto->id) {
        free(payment_mode_dto->id);
        payment_mode_dto->id = NULL;
    }
    if (payment_mode_dto->timestamp) {
        free(payment_mode_dto->timestamp);
        payment_mode_dto->timestamp = NULL;
    }
    if (payment_mode_dto->name) {
        free(payment_mode_dto->name);
        payment_mode_dto->name = NULL;
    }
    if (payment_mode_dto->description) {
        free(payment_mode_dto->description);
        payment_mode_dto->description = NULL;
    }
    if (payment_mode_dto->tenant_id) {
        free(payment_mode_dto->tenant_id);
        payment_mode_dto->tenant_id = NULL;
    }
    if (payment_mode_dto->enrollment_id) {
        free(payment_mode_dto->enrollment_id);
        payment_mode_dto->enrollment_id = NULL;
    }
    free(payment_mode_dto);
}

cJSON *payment_mode_dto_convertToJSON(payment_mode_dto_t *payment_mode_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_mode_dto->id
    if(payment_mode_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_mode_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto->timestamp
    if(payment_mode_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_mode_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_mode_dto->name
    if(payment_mode_dto->name) {
    if(cJSON_AddStringToObject(item, "name", payment_mode_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto->description
    if(payment_mode_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payment_mode_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto->tenant_id
    if(payment_mode_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", payment_mode_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto->enrollment_id
    if(payment_mode_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", payment_mode_dto->enrollment_id) == NULL) {
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

payment_mode_dto_t *payment_mode_dto_parseFromJSON(cJSON *payment_mode_dtoJSON){

    payment_mode_dto_t *payment_mode_dto_local_var = NULL;

    // payment_mode_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_mode_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_mode_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_mode_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_mode_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(payment_mode_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // payment_mode_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_mode_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payment_mode_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(payment_mode_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // payment_mode_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(payment_mode_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    payment_mode_dto_local_var = payment_mode_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return payment_mode_dto_local_var;
end:
    return NULL;

}
