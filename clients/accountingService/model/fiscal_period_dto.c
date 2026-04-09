#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_period_dto.h"



fiscal_period_dto_t *fiscal_period_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *from_date,
    char *to_date,
    char *tenant_id,
    char *enrollment_id,
    char *fiscal_year_id
    ) {
    fiscal_period_dto_t *fiscal_period_dto_local_var = malloc(sizeof(fiscal_period_dto_t));
    if (!fiscal_period_dto_local_var) {
        return NULL;
    }
    fiscal_period_dto_local_var->id = id;
    fiscal_period_dto_local_var->timestamp = timestamp;
    fiscal_period_dto_local_var->name = name;
    fiscal_period_dto_local_var->from_date = from_date;
    fiscal_period_dto_local_var->to_date = to_date;
    fiscal_period_dto_local_var->tenant_id = tenant_id;
    fiscal_period_dto_local_var->enrollment_id = enrollment_id;
    fiscal_period_dto_local_var->fiscal_year_id = fiscal_year_id;

    return fiscal_period_dto_local_var;
}


void fiscal_period_dto_free(fiscal_period_dto_t *fiscal_period_dto) {
    if(NULL == fiscal_period_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_period_dto->id) {
        free(fiscal_period_dto->id);
        fiscal_period_dto->id = NULL;
    }
    if (fiscal_period_dto->timestamp) {
        free(fiscal_period_dto->timestamp);
        fiscal_period_dto->timestamp = NULL;
    }
    if (fiscal_period_dto->name) {
        free(fiscal_period_dto->name);
        fiscal_period_dto->name = NULL;
    }
    if (fiscal_period_dto->from_date) {
        free(fiscal_period_dto->from_date);
        fiscal_period_dto->from_date = NULL;
    }
    if (fiscal_period_dto->to_date) {
        free(fiscal_period_dto->to_date);
        fiscal_period_dto->to_date = NULL;
    }
    if (fiscal_period_dto->tenant_id) {
        free(fiscal_period_dto->tenant_id);
        fiscal_period_dto->tenant_id = NULL;
    }
    if (fiscal_period_dto->enrollment_id) {
        free(fiscal_period_dto->enrollment_id);
        fiscal_period_dto->enrollment_id = NULL;
    }
    if (fiscal_period_dto->fiscal_year_id) {
        free(fiscal_period_dto->fiscal_year_id);
        fiscal_period_dto->fiscal_year_id = NULL;
    }
    free(fiscal_period_dto);
}

cJSON *fiscal_period_dto_convertToJSON(fiscal_period_dto_t *fiscal_period_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_period_dto->id
    if(fiscal_period_dto->id) {
    if(cJSON_AddStringToObject(item, "id", fiscal_period_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto->timestamp
    if(fiscal_period_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_period_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_period_dto->name
    if(fiscal_period_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_period_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto->from_date
    if(fiscal_period_dto->from_date) {
    if(cJSON_AddStringToObject(item, "fromDate", fiscal_period_dto->from_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_period_dto->to_date
    if(fiscal_period_dto->to_date) {
    if(cJSON_AddStringToObject(item, "toDate", fiscal_period_dto->to_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_period_dto->tenant_id
    if(fiscal_period_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", fiscal_period_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto->enrollment_id
    if(fiscal_period_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", fiscal_period_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto->fiscal_year_id
    if(fiscal_period_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", fiscal_period_dto->fiscal_year_id) == NULL) {
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

fiscal_period_dto_t *fiscal_period_dto_parseFromJSON(cJSON *fiscal_period_dtoJSON){

    fiscal_period_dto_t *fiscal_period_dto_local_var = NULL;

    // fiscal_period_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_period_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto->from_date
    cJSON *from_date = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "fromDate");
    if (from_date) { 
    if(!cJSON_IsString(from_date) && !cJSON_IsNull(from_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_period_dto->to_date
    cJSON *to_date = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "toDate");
    if (to_date) { 
    if(!cJSON_IsString(to_date) && !cJSON_IsNull(to_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_period_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(fiscal_period_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }


    fiscal_period_dto_local_var = fiscal_period_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        from_date && !cJSON_IsNull(from_date) ? strdup(from_date->valuestring) : NULL,
        to_date && !cJSON_IsNull(to_date) ? strdup(to_date->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL
        );

    return fiscal_period_dto_local_var;
end:
    return NULL;

}
