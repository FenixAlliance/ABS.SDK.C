#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_update_dto.h"



payroll_update_dto_t *payroll_update_dto_create(
    char *payroll_period_id
    ) {
    payroll_update_dto_t *payroll_update_dto_local_var = malloc(sizeof(payroll_update_dto_t));
    if (!payroll_update_dto_local_var) {
        return NULL;
    }
    payroll_update_dto_local_var->payroll_period_id = payroll_period_id;

    return payroll_update_dto_local_var;
}


void payroll_update_dto_free(payroll_update_dto_t *payroll_update_dto) {
    if(NULL == payroll_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_update_dto->payroll_period_id) {
        free(payroll_update_dto->payroll_period_id);
        payroll_update_dto->payroll_period_id = NULL;
    }
    free(payroll_update_dto);
}

cJSON *payroll_update_dto_convertToJSON(payroll_update_dto_t *payroll_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // payroll_update_dto->payroll_period_id
    if(payroll_update_dto->payroll_period_id) {
    if(cJSON_AddStringToObject(item, "payrollPeriodId", payroll_update_dto->payroll_period_id) == NULL) {
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

payroll_update_dto_t *payroll_update_dto_parseFromJSON(cJSON *payroll_update_dtoJSON){

    payroll_update_dto_t *payroll_update_dto_local_var = NULL;

    // payroll_update_dto->payroll_period_id
    cJSON *payroll_period_id = cJSON_GetObjectItemCaseSensitive(payroll_update_dtoJSON, "payrollPeriodId");
    if (payroll_period_id) { 
    if(!cJSON_IsString(payroll_period_id) && !cJSON_IsNull(payroll_period_id))
    {
    goto end; //String
    }
    }


    payroll_update_dto_local_var = payroll_update_dto_create (
        payroll_period_id && !cJSON_IsNull(payroll_period_id) ? strdup(payroll_period_id->valuestring) : NULL
        );

    return payroll_update_dto_local_var;
end:
    return NULL;

}
