#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_category_create_dto.h"



transaction_category_create_dto_t *transaction_category_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *enrollment_id,
    char *tenant_id
    ) {
    transaction_category_create_dto_t *transaction_category_create_dto_local_var = malloc(sizeof(transaction_category_create_dto_t));
    if (!transaction_category_create_dto_local_var) {
        return NULL;
    }
    transaction_category_create_dto_local_var->id = id;
    transaction_category_create_dto_local_var->timestamp = timestamp;
    transaction_category_create_dto_local_var->name = name;
    transaction_category_create_dto_local_var->description = description;
    transaction_category_create_dto_local_var->enrollment_id = enrollment_id;
    transaction_category_create_dto_local_var->tenant_id = tenant_id;

    return transaction_category_create_dto_local_var;
}


void transaction_category_create_dto_free(transaction_category_create_dto_t *transaction_category_create_dto) {
    if(NULL == transaction_category_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_category_create_dto->id) {
        free(transaction_category_create_dto->id);
        transaction_category_create_dto->id = NULL;
    }
    if (transaction_category_create_dto->timestamp) {
        free(transaction_category_create_dto->timestamp);
        transaction_category_create_dto->timestamp = NULL;
    }
    if (transaction_category_create_dto->name) {
        free(transaction_category_create_dto->name);
        transaction_category_create_dto->name = NULL;
    }
    if (transaction_category_create_dto->description) {
        free(transaction_category_create_dto->description);
        transaction_category_create_dto->description = NULL;
    }
    if (transaction_category_create_dto->enrollment_id) {
        free(transaction_category_create_dto->enrollment_id);
        transaction_category_create_dto->enrollment_id = NULL;
    }
    if (transaction_category_create_dto->tenant_id) {
        free(transaction_category_create_dto->tenant_id);
        transaction_category_create_dto->tenant_id = NULL;
    }
    free(transaction_category_create_dto);
}

cJSON *transaction_category_create_dto_convertToJSON(transaction_category_create_dto_t *transaction_category_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // transaction_category_create_dto->id
    if(transaction_category_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", transaction_category_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_create_dto->timestamp
    if(transaction_category_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", transaction_category_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // transaction_category_create_dto->name
    if(transaction_category_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", transaction_category_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_create_dto->description
    if(transaction_category_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", transaction_category_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_create_dto->enrollment_id
    if(transaction_category_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", transaction_category_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_create_dto->tenant_id
    if(transaction_category_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", transaction_category_create_dto->tenant_id) == NULL) {
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

transaction_category_create_dto_t *transaction_category_create_dto_parseFromJSON(cJSON *transaction_category_create_dtoJSON){

    transaction_category_create_dto_t *transaction_category_create_dto_local_var = NULL;

    // transaction_category_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(transaction_category_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // transaction_category_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(transaction_category_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // transaction_category_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(transaction_category_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // transaction_category_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(transaction_category_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // transaction_category_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(transaction_category_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // transaction_category_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(transaction_category_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    transaction_category_create_dto_local_var = transaction_category_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return transaction_category_create_dto_local_var;
end:
    return NULL;

}
