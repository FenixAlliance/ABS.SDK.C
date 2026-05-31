#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_update_dto.h"



salary_update_dto_t *salary_update_dto_create(
    double amount,
    char *currency_id,
    char *employee_profile_id
    ) {
    salary_update_dto_t *salary_update_dto_local_var = malloc(sizeof(salary_update_dto_t));
    if (!salary_update_dto_local_var) {
        return NULL;
    }
    salary_update_dto_local_var->amount = amount;
    salary_update_dto_local_var->currency_id = currency_id;
    salary_update_dto_local_var->employee_profile_id = employee_profile_id;

    return salary_update_dto_local_var;
}


void salary_update_dto_free(salary_update_dto_t *salary_update_dto) {
    if(NULL == salary_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (salary_update_dto->currency_id) {
        free(salary_update_dto->currency_id);
        salary_update_dto->currency_id = NULL;
    }
    if (salary_update_dto->employee_profile_id) {
        free(salary_update_dto->employee_profile_id);
        salary_update_dto->employee_profile_id = NULL;
    }
    free(salary_update_dto);
}

cJSON *salary_update_dto_convertToJSON(salary_update_dto_t *salary_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // salary_update_dto->amount
    if(salary_update_dto->amount) {
    if(cJSON_AddNumberToObject(item, "amount", salary_update_dto->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // salary_update_dto->currency_id
    if(salary_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", salary_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_update_dto->employee_profile_id
    if(salary_update_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", salary_update_dto->employee_profile_id) == NULL) {
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

salary_update_dto_t *salary_update_dto_parseFromJSON(cJSON *salary_update_dtoJSON){

    salary_update_dto_t *salary_update_dto_local_var = NULL;

    // salary_update_dto->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(salary_update_dtoJSON, "amount");
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // salary_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(salary_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // salary_update_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(salary_update_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }


    salary_update_dto_local_var = salary_update_dto_create (
        amount ? amount->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL
        );

    return salary_update_dto_local_var;
end:
    return NULL;

}
