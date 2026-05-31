#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_title_dto.h"



job_title_dto_t *job_title_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    double gross_pay,
    double net_salary,
    char *currency_id,
    char *country_id,
    char *country_state_id,
    char *city_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    job_title_dto_t *job_title_dto_local_var = malloc(sizeof(job_title_dto_t));
    if (!job_title_dto_local_var) {
        return NULL;
    }
    job_title_dto_local_var->id = id;
    job_title_dto_local_var->timestamp = timestamp;
    job_title_dto_local_var->title = title;
    job_title_dto_local_var->description = description;
    job_title_dto_local_var->gross_pay = gross_pay;
    job_title_dto_local_var->net_salary = net_salary;
    job_title_dto_local_var->currency_id = currency_id;
    job_title_dto_local_var->country_id = country_id;
    job_title_dto_local_var->country_state_id = country_state_id;
    job_title_dto_local_var->city_id = city_id;
    job_title_dto_local_var->tenant_id = tenant_id;
    job_title_dto_local_var->enrollment_id = enrollment_id;

    return job_title_dto_local_var;
}


void job_title_dto_free(job_title_dto_t *job_title_dto) {
    if(NULL == job_title_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_title_dto->id) {
        free(job_title_dto->id);
        job_title_dto->id = NULL;
    }
    if (job_title_dto->timestamp) {
        free(job_title_dto->timestamp);
        job_title_dto->timestamp = NULL;
    }
    if (job_title_dto->title) {
        free(job_title_dto->title);
        job_title_dto->title = NULL;
    }
    if (job_title_dto->description) {
        free(job_title_dto->description);
        job_title_dto->description = NULL;
    }
    if (job_title_dto->currency_id) {
        free(job_title_dto->currency_id);
        job_title_dto->currency_id = NULL;
    }
    if (job_title_dto->country_id) {
        free(job_title_dto->country_id);
        job_title_dto->country_id = NULL;
    }
    if (job_title_dto->country_state_id) {
        free(job_title_dto->country_state_id);
        job_title_dto->country_state_id = NULL;
    }
    if (job_title_dto->city_id) {
        free(job_title_dto->city_id);
        job_title_dto->city_id = NULL;
    }
    if (job_title_dto->tenant_id) {
        free(job_title_dto->tenant_id);
        job_title_dto->tenant_id = NULL;
    }
    if (job_title_dto->enrollment_id) {
        free(job_title_dto->enrollment_id);
        job_title_dto->enrollment_id = NULL;
    }
    free(job_title_dto);
}

cJSON *job_title_dto_convertToJSON(job_title_dto_t *job_title_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_title_dto->id
    if(job_title_dto->id) {
    if(cJSON_AddStringToObject(item, "id", job_title_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->timestamp
    if(job_title_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_title_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_title_dto->title
    if(job_title_dto->title) {
    if(cJSON_AddStringToObject(item, "title", job_title_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->description
    if(job_title_dto->description) {
    if(cJSON_AddStringToObject(item, "description", job_title_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->gross_pay
    if(job_title_dto->gross_pay) {
    if(cJSON_AddNumberToObject(item, "grossPay", job_title_dto->gross_pay) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_title_dto->net_salary
    if(job_title_dto->net_salary) {
    if(cJSON_AddNumberToObject(item, "netSalary", job_title_dto->net_salary) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_title_dto->currency_id
    if(job_title_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", job_title_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->country_id
    if(job_title_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", job_title_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->country_state_id
    if(job_title_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateId", job_title_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->city_id
    if(job_title_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", job_title_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->tenant_id
    if(job_title_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", job_title_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // job_title_dto->enrollment_id
    if(job_title_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", job_title_dto->enrollment_id) == NULL) {
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

job_title_dto_t *job_title_dto_parseFromJSON(cJSON *job_title_dtoJSON){

    job_title_dto_t *job_title_dto_local_var = NULL;

    // job_title_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // job_title_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // job_title_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // job_title_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // job_title_dto->gross_pay
    cJSON *gross_pay = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "grossPay");
    if (gross_pay) { 
    if(!cJSON_IsNumber(gross_pay))
    {
    goto end; //Numeric
    }
    }

    // job_title_dto->net_salary
    cJSON *net_salary = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "netSalary");
    if (net_salary) { 
    if(!cJSON_IsNumber(net_salary))
    {
    goto end; //Numeric
    }
    }

    // job_title_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // job_title_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // job_title_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "countryStateId");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // job_title_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // job_title_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // job_title_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(job_title_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    job_title_dto_local_var = job_title_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        gross_pay ? gross_pay->valuedouble : 0,
        net_salary ? net_salary->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        country_state_id && !cJSON_IsNull(country_state_id) ? strdup(country_state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return job_title_dto_local_var;
end:
    return NULL;

}
