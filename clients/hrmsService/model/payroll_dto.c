#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_dto.h"



payroll_dto_t *payroll_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *payroll_period_id
    ) {
    payroll_dto_t *payroll_dto_local_var = malloc(sizeof(payroll_dto_t));
    if (!payroll_dto_local_var) {
        return NULL;
    }
    payroll_dto_local_var->id = id;
    payroll_dto_local_var->timestamp = timestamp;
    payroll_dto_local_var->tenant_id = tenant_id;
    payroll_dto_local_var->enrollment_id = enrollment_id;
    payroll_dto_local_var->payroll_period_id = payroll_period_id;

    return payroll_dto_local_var;
}


void payroll_dto_free(payroll_dto_t *payroll_dto) {
    if(NULL == payroll_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_dto->id) {
        free(payroll_dto->id);
        payroll_dto->id = NULL;
    }
    if (payroll_dto->timestamp) {
        free(payroll_dto->timestamp);
        payroll_dto->timestamp = NULL;
    }
    if (payroll_dto->tenant_id) {
        free(payroll_dto->tenant_id);
        payroll_dto->tenant_id = NULL;
    }
    if (payroll_dto->enrollment_id) {
        free(payroll_dto->enrollment_id);
        payroll_dto->enrollment_id = NULL;
    }
    if (payroll_dto->payroll_period_id) {
        free(payroll_dto->payroll_period_id);
        payroll_dto->payroll_period_id = NULL;
    }
    free(payroll_dto);
}

cJSON *payroll_dto_convertToJSON(payroll_dto_t *payroll_dto) {
    cJSON *item = cJSON_CreateObject();

    // payroll_dto->id
    if(payroll_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payroll_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto->timestamp
    if(payroll_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payroll_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_dto->tenant_id
    if(payroll_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", payroll_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto->enrollment_id
    if(payroll_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", payroll_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto->payroll_period_id
    if(payroll_dto->payroll_period_id) {
    if(cJSON_AddStringToObject(item, "payrollPeriodId", payroll_dto->payroll_period_id) == NULL) {
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

payroll_dto_t *payroll_dto_parseFromJSON(cJSON *payroll_dtoJSON){

    payroll_dto_t *payroll_dto_local_var = NULL;

    // payroll_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payroll_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payroll_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payroll_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payroll_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(payroll_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // payroll_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(payroll_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // payroll_dto->payroll_period_id
    cJSON *payroll_period_id = cJSON_GetObjectItemCaseSensitive(payroll_dtoJSON, "payrollPeriodId");
    if (payroll_period_id) { 
    if(!cJSON_IsString(payroll_period_id) && !cJSON_IsNull(payroll_period_id))
    {
    goto end; //String
    }
    }


    payroll_dto_local_var = payroll_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        payroll_period_id && !cJSON_IsNull(payroll_period_id) ? strdup(payroll_period_id->valuestring) : NULL
        );

    return payroll_dto_local_var;
end:
    return NULL;

}
