#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_method_create_dto.h"



payment_method_create_dto_t *payment_method_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    payment_method_create_dto_t *payment_method_create_dto_local_var = malloc(sizeof(payment_method_create_dto_t));
    if (!payment_method_create_dto_local_var) {
        return NULL;
    }
    payment_method_create_dto_local_var->id = id;
    payment_method_create_dto_local_var->timestamp = timestamp;
    payment_method_create_dto_local_var->name = name;
    payment_method_create_dto_local_var->description = description;
    payment_method_create_dto_local_var->tenant_id = tenant_id;
    payment_method_create_dto_local_var->enrollment_id = enrollment_id;

    return payment_method_create_dto_local_var;
}


void payment_method_create_dto_free(payment_method_create_dto_t *payment_method_create_dto) {
    if(NULL == payment_method_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_method_create_dto->id) {
        free(payment_method_create_dto->id);
        payment_method_create_dto->id = NULL;
    }
    if (payment_method_create_dto->timestamp) {
        free(payment_method_create_dto->timestamp);
        payment_method_create_dto->timestamp = NULL;
    }
    if (payment_method_create_dto->name) {
        free(payment_method_create_dto->name);
        payment_method_create_dto->name = NULL;
    }
    if (payment_method_create_dto->description) {
        free(payment_method_create_dto->description);
        payment_method_create_dto->description = NULL;
    }
    if (payment_method_create_dto->tenant_id) {
        free(payment_method_create_dto->tenant_id);
        payment_method_create_dto->tenant_id = NULL;
    }
    if (payment_method_create_dto->enrollment_id) {
        free(payment_method_create_dto->enrollment_id);
        payment_method_create_dto->enrollment_id = NULL;
    }
    free(payment_method_create_dto);
}

cJSON *payment_method_create_dto_convertToJSON(payment_method_create_dto_t *payment_method_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_method_create_dto->id
    if(payment_method_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_method_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_method_create_dto->timestamp
    if(payment_method_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_method_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_method_create_dto->name
    if (!payment_method_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", payment_method_create_dto->name) == NULL) {
    goto fail; //String
    }


    // payment_method_create_dto->description
    if(payment_method_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payment_method_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payment_method_create_dto->tenant_id
    if(payment_method_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", payment_method_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_method_create_dto->enrollment_id
    if(payment_method_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", payment_method_create_dto->enrollment_id) == NULL) {
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

payment_method_create_dto_t *payment_method_create_dto_parseFromJSON(cJSON *payment_method_create_dtoJSON){

    payment_method_create_dto_t *payment_method_create_dto_local_var = NULL;

    // payment_method_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_method_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_method_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_method_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_method_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(payment_method_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // payment_method_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_method_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payment_method_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(payment_method_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // payment_method_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(payment_method_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    payment_method_create_dto_local_var = payment_method_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return payment_method_create_dto_local_var;
end:
    return NULL;

}
