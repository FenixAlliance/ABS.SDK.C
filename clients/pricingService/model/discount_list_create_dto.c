#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_list_create_dto.h"



discount_list_create_dto_t *discount_list_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    discount_list_create_dto_t *discount_list_create_dto_local_var = malloc(sizeof(discount_list_create_dto_t));
    if (!discount_list_create_dto_local_var) {
        return NULL;
    }
    discount_list_create_dto_local_var->id = id;
    discount_list_create_dto_local_var->timestamp = timestamp;
    discount_list_create_dto_local_var->name = name;
    discount_list_create_dto_local_var->currency_id = currency_id;
    discount_list_create_dto_local_var->tenant_id = tenant_id;
    discount_list_create_dto_local_var->enrollment_id = enrollment_id;

    return discount_list_create_dto_local_var;
}


void discount_list_create_dto_free(discount_list_create_dto_t *discount_list_create_dto) {
    if(NULL == discount_list_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_list_create_dto->id) {
        free(discount_list_create_dto->id);
        discount_list_create_dto->id = NULL;
    }
    if (discount_list_create_dto->timestamp) {
        free(discount_list_create_dto->timestamp);
        discount_list_create_dto->timestamp = NULL;
    }
    if (discount_list_create_dto->name) {
        free(discount_list_create_dto->name);
        discount_list_create_dto->name = NULL;
    }
    if (discount_list_create_dto->currency_id) {
        free(discount_list_create_dto->currency_id);
        discount_list_create_dto->currency_id = NULL;
    }
    if (discount_list_create_dto->tenant_id) {
        free(discount_list_create_dto->tenant_id);
        discount_list_create_dto->tenant_id = NULL;
    }
    if (discount_list_create_dto->enrollment_id) {
        free(discount_list_create_dto->enrollment_id);
        discount_list_create_dto->enrollment_id = NULL;
    }
    free(discount_list_create_dto);
}

cJSON *discount_list_create_dto_convertToJSON(discount_list_create_dto_t *discount_list_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // discount_list_create_dto->id
    if(discount_list_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", discount_list_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_create_dto->timestamp
    if(discount_list_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", discount_list_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // discount_list_create_dto->name
    if(discount_list_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", discount_list_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_create_dto->currency_id
    if(discount_list_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", discount_list_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_create_dto->tenant_id
    if(discount_list_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", discount_list_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_create_dto->enrollment_id
    if(discount_list_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", discount_list_create_dto->enrollment_id) == NULL) {
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

discount_list_create_dto_t *discount_list_create_dto_parseFromJSON(cJSON *discount_list_create_dtoJSON){

    discount_list_create_dto_t *discount_list_create_dto_local_var = NULL;

    // discount_list_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(discount_list_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // discount_list_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(discount_list_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // discount_list_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(discount_list_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // discount_list_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(discount_list_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // discount_list_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(discount_list_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // discount_list_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(discount_list_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    discount_list_create_dto_local_var = discount_list_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return discount_list_create_dto_local_var;
end:
    return NULL;

}
