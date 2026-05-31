#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_create_dto.h"



salary_create_dto_t *salary_create_dto_create(
    char *id,
    char *timestamp,
    double amount,
    char *currency_id,
    char *employee_profile_id
    ) {
    salary_create_dto_t *salary_create_dto_local_var = malloc(sizeof(salary_create_dto_t));
    if (!salary_create_dto_local_var) {
        return NULL;
    }
    salary_create_dto_local_var->id = id;
    salary_create_dto_local_var->timestamp = timestamp;
    salary_create_dto_local_var->amount = amount;
    salary_create_dto_local_var->currency_id = currency_id;
    salary_create_dto_local_var->employee_profile_id = employee_profile_id;

    return salary_create_dto_local_var;
}


void salary_create_dto_free(salary_create_dto_t *salary_create_dto) {
    if(NULL == salary_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (salary_create_dto->id) {
        free(salary_create_dto->id);
        salary_create_dto->id = NULL;
    }
    if (salary_create_dto->timestamp) {
        free(salary_create_dto->timestamp);
        salary_create_dto->timestamp = NULL;
    }
    if (salary_create_dto->currency_id) {
        free(salary_create_dto->currency_id);
        salary_create_dto->currency_id = NULL;
    }
    if (salary_create_dto->employee_profile_id) {
        free(salary_create_dto->employee_profile_id);
        salary_create_dto->employee_profile_id = NULL;
    }
    free(salary_create_dto);
}

cJSON *salary_create_dto_convertToJSON(salary_create_dto_t *salary_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // salary_create_dto->id
    if(salary_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", salary_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // salary_create_dto->timestamp
    if(salary_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", salary_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // salary_create_dto->amount
    if (!salary_create_dto->amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "amount", salary_create_dto->amount) == NULL) {
    goto fail; //Numeric
    }


    // salary_create_dto->currency_id
    if (!salary_create_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", salary_create_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // salary_create_dto->employee_profile_id
    if (!salary_create_dto->employee_profile_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "employeeProfileId", salary_create_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

salary_create_dto_t *salary_create_dto_parseFromJSON(cJSON *salary_create_dtoJSON){

    salary_create_dto_t *salary_create_dto_local_var = NULL;

    // salary_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(salary_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // salary_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(salary_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // salary_create_dto->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(salary_create_dtoJSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }

    // salary_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(salary_create_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // salary_create_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(salary_create_dtoJSON, "employeeProfileId");
    if (!employee_profile_id) {
        goto end;
    }

    
    if(!cJSON_IsString(employee_profile_id))
    {
    goto end; //String
    }


    salary_create_dto_local_var = salary_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        amount->valuedouble,
        strdup(currency_id->valuestring),
        strdup(employee_profile_id->valuestring)
        );

    return salary_create_dto_local_var;
end:
    return NULL;

}
