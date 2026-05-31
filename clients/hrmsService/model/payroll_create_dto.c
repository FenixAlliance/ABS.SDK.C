#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_create_dto.h"



payroll_create_dto_t *payroll_create_dto_create(
    char *id,
    char *timestamp,
    char *payroll_period_id
    ) {
    payroll_create_dto_t *payroll_create_dto_local_var = malloc(sizeof(payroll_create_dto_t));
    if (!payroll_create_dto_local_var) {
        return NULL;
    }
    payroll_create_dto_local_var->id = id;
    payroll_create_dto_local_var->timestamp = timestamp;
    payroll_create_dto_local_var->payroll_period_id = payroll_period_id;

    return payroll_create_dto_local_var;
}


void payroll_create_dto_free(payroll_create_dto_t *payroll_create_dto) {
    if(NULL == payroll_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_create_dto->id) {
        free(payroll_create_dto->id);
        payroll_create_dto->id = NULL;
    }
    if (payroll_create_dto->timestamp) {
        free(payroll_create_dto->timestamp);
        payroll_create_dto->timestamp = NULL;
    }
    if (payroll_create_dto->payroll_period_id) {
        free(payroll_create_dto->payroll_period_id);
        payroll_create_dto->payroll_period_id = NULL;
    }
    free(payroll_create_dto);
}

cJSON *payroll_create_dto_convertToJSON(payroll_create_dto_t *payroll_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // payroll_create_dto->id
    if(payroll_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payroll_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_create_dto->timestamp
    if(payroll_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payroll_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_create_dto->payroll_period_id
    if (!payroll_create_dto->payroll_period_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "payrollPeriodId", payroll_create_dto->payroll_period_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payroll_create_dto_t *payroll_create_dto_parseFromJSON(cJSON *payroll_create_dtoJSON){

    payroll_create_dto_t *payroll_create_dto_local_var = NULL;

    // payroll_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payroll_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payroll_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payroll_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payroll_create_dto->payroll_period_id
    cJSON *payroll_period_id = cJSON_GetObjectItemCaseSensitive(payroll_create_dtoJSON, "payrollPeriodId");
    if (!payroll_period_id) {
        goto end;
    }

    
    if(!cJSON_IsString(payroll_period_id))
    {
    goto end; //String
    }


    payroll_create_dto_local_var = payroll_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(payroll_period_id->valuestring)
        );

    return payroll_create_dto_local_var;
end:
    return NULL;

}
