#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_dto.h"



salary_dto_t *salary_dto_create(
    char *id,
    char *timestamp,
    double amount,
    char *currency_id,
    char *employee_profile_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    salary_dto_t *salary_dto_local_var = malloc(sizeof(salary_dto_t));
    if (!salary_dto_local_var) {
        return NULL;
    }
    salary_dto_local_var->id = id;
    salary_dto_local_var->timestamp = timestamp;
    salary_dto_local_var->amount = amount;
    salary_dto_local_var->currency_id = currency_id;
    salary_dto_local_var->employee_profile_id = employee_profile_id;
    salary_dto_local_var->tenant_id = tenant_id;
    salary_dto_local_var->enrollment_id = enrollment_id;

    return salary_dto_local_var;
}


void salary_dto_free(salary_dto_t *salary_dto) {
    if(NULL == salary_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (salary_dto->id) {
        free(salary_dto->id);
        salary_dto->id = NULL;
    }
    if (salary_dto->timestamp) {
        free(salary_dto->timestamp);
        salary_dto->timestamp = NULL;
    }
    if (salary_dto->currency_id) {
        free(salary_dto->currency_id);
        salary_dto->currency_id = NULL;
    }
    if (salary_dto->employee_profile_id) {
        free(salary_dto->employee_profile_id);
        salary_dto->employee_profile_id = NULL;
    }
    if (salary_dto->tenant_id) {
        free(salary_dto->tenant_id);
        salary_dto->tenant_id = NULL;
    }
    if (salary_dto->enrollment_id) {
        free(salary_dto->enrollment_id);
        salary_dto->enrollment_id = NULL;
    }
    free(salary_dto);
}

cJSON *salary_dto_convertToJSON(salary_dto_t *salary_dto) {
    cJSON *item = cJSON_CreateObject();

    // salary_dto->id
    if(salary_dto->id) {
    if(cJSON_AddStringToObject(item, "id", salary_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto->timestamp
    if(salary_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", salary_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // salary_dto->amount
    if(salary_dto->amount) {
    if(cJSON_AddNumberToObject(item, "amount", salary_dto->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // salary_dto->currency_id
    if(salary_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", salary_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto->employee_profile_id
    if(salary_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", salary_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto->tenant_id
    if(salary_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", salary_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto->enrollment_id
    if(salary_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", salary_dto->enrollment_id) == NULL) {
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

salary_dto_t *salary_dto_parseFromJSON(cJSON *salary_dtoJSON){

    salary_dto_t *salary_dto_local_var = NULL;

    // salary_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // salary_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // salary_dto->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "amount");
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // salary_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // salary_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }

    // salary_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // salary_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(salary_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    salary_dto_local_var = salary_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return salary_dto_local_var;
end:
    return NULL;

}
