#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_certificate_dto.h"



security_certificate_dto_t *security_certificate_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *expire_period,
    int expired,
    int disabled,
    char *business_id,
    char *csr
    ) {
    security_certificate_dto_t *security_certificate_dto_local_var = malloc(sizeof(security_certificate_dto_t));
    if (!security_certificate_dto_local_var) {
        return NULL;
    }
    security_certificate_dto_local_var->id = id;
    security_certificate_dto_local_var->timestamp = timestamp;
    security_certificate_dto_local_var->type = type;
    security_certificate_dto_local_var->expire_period = expire_period;
    security_certificate_dto_local_var->expired = expired;
    security_certificate_dto_local_var->disabled = disabled;
    security_certificate_dto_local_var->business_id = business_id;
    security_certificate_dto_local_var->csr = csr;

    return security_certificate_dto_local_var;
}


void security_certificate_dto_free(security_certificate_dto_t *security_certificate_dto) {
    if(NULL == security_certificate_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (security_certificate_dto->id) {
        free(security_certificate_dto->id);
        security_certificate_dto->id = NULL;
    }
    if (security_certificate_dto->timestamp) {
        free(security_certificate_dto->timestamp);
        security_certificate_dto->timestamp = NULL;
    }
    if (security_certificate_dto->type) {
        free(security_certificate_dto->type);
        security_certificate_dto->type = NULL;
    }
    if (security_certificate_dto->expire_period) {
        free(security_certificate_dto->expire_period);
        security_certificate_dto->expire_period = NULL;
    }
    if (security_certificate_dto->business_id) {
        free(security_certificate_dto->business_id);
        security_certificate_dto->business_id = NULL;
    }
    if (security_certificate_dto->csr) {
        free(security_certificate_dto->csr);
        security_certificate_dto->csr = NULL;
    }
    free(security_certificate_dto);
}

cJSON *security_certificate_dto_convertToJSON(security_certificate_dto_t *security_certificate_dto) {
    cJSON *item = cJSON_CreateObject();

    // security_certificate_dto->id
    if(security_certificate_dto->id) {
    if(cJSON_AddStringToObject(item, "id", security_certificate_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // security_certificate_dto->timestamp
    if(security_certificate_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", security_certificate_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // security_certificate_dto->type
    if(security_certificate_dto->type) {
    if(cJSON_AddStringToObject(item, "type", security_certificate_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // security_certificate_dto->expire_period
    if(security_certificate_dto->expire_period) {
    if(cJSON_AddStringToObject(item, "expirePeriod", security_certificate_dto->expire_period) == NULL) {
    goto fail; //String
    }
    }


    // security_certificate_dto->expired
    if(security_certificate_dto->expired) {
    if(cJSON_AddBoolToObject(item, "expired", security_certificate_dto->expired) == NULL) {
    goto fail; //Bool
    }
    }


    // security_certificate_dto->disabled
    if(security_certificate_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", security_certificate_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // security_certificate_dto->business_id
    if(security_certificate_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", security_certificate_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // security_certificate_dto->csr
    if(security_certificate_dto->csr) {
    if(cJSON_AddStringToObject(item, "csr", security_certificate_dto->csr) == NULL) {
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

security_certificate_dto_t *security_certificate_dto_parseFromJSON(cJSON *security_certificate_dtoJSON){

    security_certificate_dto_t *security_certificate_dto_local_var = NULL;

    // security_certificate_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // security_certificate_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // security_certificate_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // security_certificate_dto->expire_period
    cJSON *expire_period = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "expirePeriod");
    if (expire_period) { 
    if(!cJSON_IsString(expire_period) && !cJSON_IsNull(expire_period))
    {
    goto end; //String
    }
    }

    // security_certificate_dto->expired
    cJSON *expired = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "expired");
    if (expired) { 
    if(!cJSON_IsBool(expired))
    {
    goto end; //Bool
    }
    }

    // security_certificate_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // security_certificate_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // security_certificate_dto->csr
    cJSON *csr = cJSON_GetObjectItemCaseSensitive(security_certificate_dtoJSON, "csr");
    if (csr) { 
    if(!cJSON_IsString(csr) && !cJSON_IsNull(csr))
    {
    goto end; //String
    }
    }


    security_certificate_dto_local_var = security_certificate_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        expire_period && !cJSON_IsNull(expire_period) ? strdup(expire_period->valuestring) : NULL,
        expired ? expired->valueint : 0,
        disabled ? disabled->valueint : 0,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        csr && !cJSON_IsNull(csr) ? strdup(csr->valuestring) : NULL
        );

    return security_certificate_dto_local_var;
end:
    return NULL;

}
