#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_size_update_dto.h"



tenant_size_update_dto_t *tenant_size_update_dto_create(
    int employee_low_range_value,
    int employee_high_range_value
    ) {
    tenant_size_update_dto_t *tenant_size_update_dto_local_var = malloc(sizeof(tenant_size_update_dto_t));
    if (!tenant_size_update_dto_local_var) {
        return NULL;
    }
    tenant_size_update_dto_local_var->employee_low_range_value = employee_low_range_value;
    tenant_size_update_dto_local_var->employee_high_range_value = employee_high_range_value;

    return tenant_size_update_dto_local_var;
}


void tenant_size_update_dto_free(tenant_size_update_dto_t *tenant_size_update_dto) {
    if(NULL == tenant_size_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    free(tenant_size_update_dto);
}

cJSON *tenant_size_update_dto_convertToJSON(tenant_size_update_dto_t *tenant_size_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_size_update_dto->employee_low_range_value
    if(tenant_size_update_dto->employee_low_range_value) {
    if(cJSON_AddNumberToObject(item, "employeeLowRangeValue", tenant_size_update_dto->employee_low_range_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // tenant_size_update_dto->employee_high_range_value
    if(tenant_size_update_dto->employee_high_range_value) {
    if(cJSON_AddNumberToObject(item, "employeeHighRangeValue", tenant_size_update_dto->employee_high_range_value) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tenant_size_update_dto_t *tenant_size_update_dto_parseFromJSON(cJSON *tenant_size_update_dtoJSON){

    tenant_size_update_dto_t *tenant_size_update_dto_local_var = NULL;

    // tenant_size_update_dto->employee_low_range_value
    cJSON *employee_low_range_value = cJSON_GetObjectItemCaseSensitive(tenant_size_update_dtoJSON, "employeeLowRangeValue");
    if (employee_low_range_value) { 
    if(!cJSON_IsNumber(employee_low_range_value))
    {
    goto end; //Numeric
    }
    }

    // tenant_size_update_dto->employee_high_range_value
    cJSON *employee_high_range_value = cJSON_GetObjectItemCaseSensitive(tenant_size_update_dtoJSON, "employeeHighRangeValue");
    if (employee_high_range_value) { 
    if(!cJSON_IsNumber(employee_high_range_value))
    {
    goto end; //Numeric
    }
    }


    tenant_size_update_dto_local_var = tenant_size_update_dto_create (
        employee_low_range_value ? employee_low_range_value->valuedouble : 0,
        employee_high_range_value ? employee_high_range_value->valuedouble : 0
        );

    return tenant_size_update_dto_local_var;
end:
    return NULL;

}
