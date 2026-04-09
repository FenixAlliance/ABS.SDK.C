#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_segment_dto.h"



tenant_segment_dto_t *tenant_segment_dto_create(
    char *id,
    char *timestamp,
    char *revenue,
    double min_employees,
    double max_employees
    ) {
    tenant_segment_dto_t *tenant_segment_dto_local_var = malloc(sizeof(tenant_segment_dto_t));
    if (!tenant_segment_dto_local_var) {
        return NULL;
    }
    tenant_segment_dto_local_var->id = id;
    tenant_segment_dto_local_var->timestamp = timestamp;
    tenant_segment_dto_local_var->revenue = revenue;
    tenant_segment_dto_local_var->min_employees = min_employees;
    tenant_segment_dto_local_var->max_employees = max_employees;

    return tenant_segment_dto_local_var;
}


void tenant_segment_dto_free(tenant_segment_dto_t *tenant_segment_dto) {
    if(NULL == tenant_segment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_segment_dto->id) {
        free(tenant_segment_dto->id);
        tenant_segment_dto->id = NULL;
    }
    if (tenant_segment_dto->timestamp) {
        free(tenant_segment_dto->timestamp);
        tenant_segment_dto->timestamp = NULL;
    }
    if (tenant_segment_dto->revenue) {
        free(tenant_segment_dto->revenue);
        tenant_segment_dto->revenue = NULL;
    }
    free(tenant_segment_dto);
}

cJSON *tenant_segment_dto_convertToJSON(tenant_segment_dto_t *tenant_segment_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_segment_dto->id
    if(tenant_segment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_segment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_segment_dto->timestamp
    if(tenant_segment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_segment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_segment_dto->revenue
    if(tenant_segment_dto->revenue) {
    if(cJSON_AddStringToObject(item, "revenue", tenant_segment_dto->revenue) == NULL) {
    goto fail; //String
    }
    }


    // tenant_segment_dto->min_employees
    if(tenant_segment_dto->min_employees) {
    if(cJSON_AddNumberToObject(item, "minEmployees", tenant_segment_dto->min_employees) == NULL) {
    goto fail; //Numeric
    }
    }


    // tenant_segment_dto->max_employees
    if(tenant_segment_dto->max_employees) {
    if(cJSON_AddNumberToObject(item, "maxEmployees", tenant_segment_dto->max_employees) == NULL) {
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

tenant_segment_dto_t *tenant_segment_dto_parseFromJSON(cJSON *tenant_segment_dtoJSON){

    tenant_segment_dto_t *tenant_segment_dto_local_var = NULL;

    // tenant_segment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_segment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_segment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_segment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_segment_dto->revenue
    cJSON *revenue = cJSON_GetObjectItemCaseSensitive(tenant_segment_dtoJSON, "revenue");
    if (revenue) { 
    if(!cJSON_IsString(revenue) && !cJSON_IsNull(revenue))
    {
    goto end; //String
    }
    }

    // tenant_segment_dto->min_employees
    cJSON *min_employees = cJSON_GetObjectItemCaseSensitive(tenant_segment_dtoJSON, "minEmployees");
    if (min_employees) { 
    if(!cJSON_IsNumber(min_employees))
    {
    goto end; //Numeric
    }
    }

    // tenant_segment_dto->max_employees
    cJSON *max_employees = cJSON_GetObjectItemCaseSensitive(tenant_segment_dtoJSON, "maxEmployees");
    if (max_employees) { 
    if(!cJSON_IsNumber(max_employees))
    {
    goto end; //Numeric
    }
    }


    tenant_segment_dto_local_var = tenant_segment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        revenue && !cJSON_IsNull(revenue) ? strdup(revenue->valuestring) : NULL,
        min_employees ? min_employees->valuedouble : 0,
        max_employees ? max_employees->valuedouble : 0
        );

    return tenant_segment_dto_local_var;
end:
    return NULL;

}
