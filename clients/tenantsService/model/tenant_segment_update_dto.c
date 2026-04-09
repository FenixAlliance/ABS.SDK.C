#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_segment_update_dto.h"



tenant_segment_update_dto_t *tenant_segment_update_dto_create(
    char *revenue,
    double min_employees,
    double max_employees
    ) {
    tenant_segment_update_dto_t *tenant_segment_update_dto_local_var = malloc(sizeof(tenant_segment_update_dto_t));
    if (!tenant_segment_update_dto_local_var) {
        return NULL;
    }
    tenant_segment_update_dto_local_var->revenue = revenue;
    tenant_segment_update_dto_local_var->min_employees = min_employees;
    tenant_segment_update_dto_local_var->max_employees = max_employees;

    return tenant_segment_update_dto_local_var;
}


void tenant_segment_update_dto_free(tenant_segment_update_dto_t *tenant_segment_update_dto) {
    if(NULL == tenant_segment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_segment_update_dto->revenue) {
        free(tenant_segment_update_dto->revenue);
        tenant_segment_update_dto->revenue = NULL;
    }
    free(tenant_segment_update_dto);
}

cJSON *tenant_segment_update_dto_convertToJSON(tenant_segment_update_dto_t *tenant_segment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_segment_update_dto->revenue
    if(tenant_segment_update_dto->revenue) {
    if(cJSON_AddStringToObject(item, "revenue", tenant_segment_update_dto->revenue) == NULL) {
    goto fail; //String
    }
    }


    // tenant_segment_update_dto->min_employees
    if(tenant_segment_update_dto->min_employees) {
    if(cJSON_AddNumberToObject(item, "minEmployees", tenant_segment_update_dto->min_employees) == NULL) {
    goto fail; //Numeric
    }
    }


    // tenant_segment_update_dto->max_employees
    if(tenant_segment_update_dto->max_employees) {
    if(cJSON_AddNumberToObject(item, "maxEmployees", tenant_segment_update_dto->max_employees) == NULL) {
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

tenant_segment_update_dto_t *tenant_segment_update_dto_parseFromJSON(cJSON *tenant_segment_update_dtoJSON){

    tenant_segment_update_dto_t *tenant_segment_update_dto_local_var = NULL;

    // tenant_segment_update_dto->revenue
    cJSON *revenue = cJSON_GetObjectItemCaseSensitive(tenant_segment_update_dtoJSON, "revenue");
    if (revenue) { 
    if(!cJSON_IsString(revenue) && !cJSON_IsNull(revenue))
    {
    goto end; //String
    }
    }

    // tenant_segment_update_dto->min_employees
    cJSON *min_employees = cJSON_GetObjectItemCaseSensitive(tenant_segment_update_dtoJSON, "minEmployees");
    if (min_employees) { 
    if(!cJSON_IsNumber(min_employees))
    {
    goto end; //Numeric
    }
    }

    // tenant_segment_update_dto->max_employees
    cJSON *max_employees = cJSON_GetObjectItemCaseSensitive(tenant_segment_update_dtoJSON, "maxEmployees");
    if (max_employees) { 
    if(!cJSON_IsNumber(max_employees))
    {
    goto end; //Numeric
    }
    }


    tenant_segment_update_dto_local_var = tenant_segment_update_dto_create (
        revenue && !cJSON_IsNull(revenue) ? strdup(revenue->valuestring) : NULL,
        min_employees ? min_employees->valuedouble : 0,
        max_employees ? max_employees->valuedouble : 0
        );

    return tenant_segment_update_dto_local_var;
end:
    return NULL;

}
