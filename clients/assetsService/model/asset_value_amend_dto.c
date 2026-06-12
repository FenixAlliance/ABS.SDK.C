#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_value_amend_dto.h"



asset_value_amend_dto_t *asset_value_amend_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *asset_id,
    char *asset_name,
    double previous_value,
    double new_value,
    double amendment_amount,
    char *reason,
    char *amendment_date,
    char *currency_id
    ) {
    asset_value_amend_dto_t *asset_value_amend_dto_local_var = malloc(sizeof(asset_value_amend_dto_t));
    if (!asset_value_amend_dto_local_var) {
        return NULL;
    }
    asset_value_amend_dto_local_var->id = id;
    asset_value_amend_dto_local_var->timestamp = timestamp;
    asset_value_amend_dto_local_var->tenant_id = tenant_id;
    asset_value_amend_dto_local_var->enrollment_id = enrollment_id;
    asset_value_amend_dto_local_var->asset_id = asset_id;
    asset_value_amend_dto_local_var->asset_name = asset_name;
    asset_value_amend_dto_local_var->previous_value = previous_value;
    asset_value_amend_dto_local_var->new_value = new_value;
    asset_value_amend_dto_local_var->amendment_amount = amendment_amount;
    asset_value_amend_dto_local_var->reason = reason;
    asset_value_amend_dto_local_var->amendment_date = amendment_date;
    asset_value_amend_dto_local_var->currency_id = currency_id;

    return asset_value_amend_dto_local_var;
}


void asset_value_amend_dto_free(asset_value_amend_dto_t *asset_value_amend_dto) {
    if(NULL == asset_value_amend_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_value_amend_dto->id) {
        free(asset_value_amend_dto->id);
        asset_value_amend_dto->id = NULL;
    }
    if (asset_value_amend_dto->timestamp) {
        free(asset_value_amend_dto->timestamp);
        asset_value_amend_dto->timestamp = NULL;
    }
    if (asset_value_amend_dto->tenant_id) {
        free(asset_value_amend_dto->tenant_id);
        asset_value_amend_dto->tenant_id = NULL;
    }
    if (asset_value_amend_dto->enrollment_id) {
        free(asset_value_amend_dto->enrollment_id);
        asset_value_amend_dto->enrollment_id = NULL;
    }
    if (asset_value_amend_dto->asset_id) {
        free(asset_value_amend_dto->asset_id);
        asset_value_amend_dto->asset_id = NULL;
    }
    if (asset_value_amend_dto->asset_name) {
        free(asset_value_amend_dto->asset_name);
        asset_value_amend_dto->asset_name = NULL;
    }
    if (asset_value_amend_dto->reason) {
        free(asset_value_amend_dto->reason);
        asset_value_amend_dto->reason = NULL;
    }
    if (asset_value_amend_dto->amendment_date) {
        free(asset_value_amend_dto->amendment_date);
        asset_value_amend_dto->amendment_date = NULL;
    }
    if (asset_value_amend_dto->currency_id) {
        free(asset_value_amend_dto->currency_id);
        asset_value_amend_dto->currency_id = NULL;
    }
    free(asset_value_amend_dto);
}

cJSON *asset_value_amend_dto_convertToJSON(asset_value_amend_dto_t *asset_value_amend_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_value_amend_dto->id
    if(asset_value_amend_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_value_amend_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->timestamp
    if(asset_value_amend_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_value_amend_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_value_amend_dto->tenant_id
    if(asset_value_amend_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", asset_value_amend_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->enrollment_id
    if(asset_value_amend_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", asset_value_amend_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->asset_id
    if(asset_value_amend_dto->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", asset_value_amend_dto->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->asset_name
    if(asset_value_amend_dto->asset_name) {
    if(cJSON_AddStringToObject(item, "assetName", asset_value_amend_dto->asset_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->previous_value
    if(asset_value_amend_dto->previous_value) {
    if(cJSON_AddNumberToObject(item, "previousValue", asset_value_amend_dto->previous_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_dto->new_value
    if(asset_value_amend_dto->new_value) {
    if(cJSON_AddNumberToObject(item, "newValue", asset_value_amend_dto->new_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_dto->amendment_amount
    if(asset_value_amend_dto->amendment_amount) {
    if(cJSON_AddNumberToObject(item, "amendmentAmount", asset_value_amend_dto->amendment_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_dto->reason
    if(asset_value_amend_dto->reason) {
    if(cJSON_AddStringToObject(item, "reason", asset_value_amend_dto->reason) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->amendment_date
    if(asset_value_amend_dto->amendment_date) {
    if(cJSON_AddStringToObject(item, "amendmentDate", asset_value_amend_dto->amendment_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_value_amend_dto->currency_id
    if(asset_value_amend_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", asset_value_amend_dto->currency_id) == NULL) {
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

asset_value_amend_dto_t *asset_value_amend_dto_parseFromJSON(cJSON *asset_value_amend_dtoJSON){

    asset_value_amend_dto_t *asset_value_amend_dto_local_var = NULL;

    // asset_value_amend_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_value_amend_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "assetId");
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->asset_name
    cJSON *asset_name = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "assetName");
    if (asset_name) { 
    if(!cJSON_IsString(asset_name) && !cJSON_IsNull(asset_name))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->previous_value
    cJSON *previous_value = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "previousValue");
    if (previous_value) { 
    if(!cJSON_IsNumber(previous_value))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_dto->new_value
    cJSON *new_value = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "newValue");
    if (new_value) { 
    if(!cJSON_IsNumber(new_value))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_dto->amendment_amount
    cJSON *amendment_amount = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "amendmentAmount");
    if (amendment_amount) { 
    if(!cJSON_IsNumber(amendment_amount))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_dto->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->amendment_date
    cJSON *amendment_date = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "amendmentDate");
    if (amendment_date) { 
    if(!cJSON_IsString(amendment_date) && !cJSON_IsNull(amendment_date))
    {
    goto end; //DateTime
    }
    }

    // asset_value_amend_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    asset_value_amend_dto_local_var = asset_value_amend_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        asset_name && !cJSON_IsNull(asset_name) ? strdup(asset_name->valuestring) : NULL,
        previous_value ? previous_value->valuedouble : 0,
        new_value ? new_value->valuedouble : 0,
        amendment_amount ? amendment_amount->valuedouble : 0,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        amendment_date && !cJSON_IsNull(amendment_date) ? strdup(amendment_date->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return asset_value_amend_dto_local_var;
end:
    return NULL;

}
