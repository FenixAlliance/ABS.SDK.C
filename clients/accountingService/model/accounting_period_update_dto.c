#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_period_update_dto.h"



accounting_period_update_dto_t *accounting_period_update_dto_create(
    char *name,
    char *tenant_id,
    char *enrollment_id,
    char *date_start,
    char *date_end
    ) {
    accounting_period_update_dto_t *accounting_period_update_dto_local_var = malloc(sizeof(accounting_period_update_dto_t));
    if (!accounting_period_update_dto_local_var) {
        return NULL;
    }
    accounting_period_update_dto_local_var->name = name;
    accounting_period_update_dto_local_var->tenant_id = tenant_id;
    accounting_period_update_dto_local_var->enrollment_id = enrollment_id;
    accounting_period_update_dto_local_var->date_start = date_start;
    accounting_period_update_dto_local_var->date_end = date_end;

    return accounting_period_update_dto_local_var;
}


void accounting_period_update_dto_free(accounting_period_update_dto_t *accounting_period_update_dto) {
    if(NULL == accounting_period_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_period_update_dto->name) {
        free(accounting_period_update_dto->name);
        accounting_period_update_dto->name = NULL;
    }
    if (accounting_period_update_dto->tenant_id) {
        free(accounting_period_update_dto->tenant_id);
        accounting_period_update_dto->tenant_id = NULL;
    }
    if (accounting_period_update_dto->enrollment_id) {
        free(accounting_period_update_dto->enrollment_id);
        accounting_period_update_dto->enrollment_id = NULL;
    }
    if (accounting_period_update_dto->date_start) {
        free(accounting_period_update_dto->date_start);
        accounting_period_update_dto->date_start = NULL;
    }
    if (accounting_period_update_dto->date_end) {
        free(accounting_period_update_dto->date_end);
        accounting_period_update_dto->date_end = NULL;
    }
    free(accounting_period_update_dto);
}

cJSON *accounting_period_update_dto_convertToJSON(accounting_period_update_dto_t *accounting_period_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // accounting_period_update_dto->name
    if(accounting_period_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", accounting_period_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_update_dto->tenant_id
    if(accounting_period_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", accounting_period_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_update_dto->enrollment_id
    if(accounting_period_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", accounting_period_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_update_dto->date_start
    if(accounting_period_update_dto->date_start) {
    if(cJSON_AddStringToObject(item, "dateStart", accounting_period_update_dto->date_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_period_update_dto->date_end
    if(accounting_period_update_dto->date_end) {
    if(cJSON_AddStringToObject(item, "dateEnd", accounting_period_update_dto->date_end) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

accounting_period_update_dto_t *accounting_period_update_dto_parseFromJSON(cJSON *accounting_period_update_dtoJSON){

    accounting_period_update_dto_t *accounting_period_update_dto_local_var = NULL;

    // accounting_period_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(accounting_period_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // accounting_period_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(accounting_period_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // accounting_period_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(accounting_period_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // accounting_period_update_dto->date_start
    cJSON *date_start = cJSON_GetObjectItemCaseSensitive(accounting_period_update_dtoJSON, "dateStart");
    if (date_start) { 
    if(!cJSON_IsString(date_start) && !cJSON_IsNull(date_start))
    {
    goto end; //DateTime
    }
    }

    // accounting_period_update_dto->date_end
    cJSON *date_end = cJSON_GetObjectItemCaseSensitive(accounting_period_update_dtoJSON, "dateEnd");
    if (date_end) { 
    if(!cJSON_IsString(date_end) && !cJSON_IsNull(date_end))
    {
    goto end; //DateTime
    }
    }


    accounting_period_update_dto_local_var = accounting_period_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        date_start && !cJSON_IsNull(date_start) ? strdup(date_start->valuestring) : NULL,
        date_end && !cJSON_IsNull(date_end) ? strdup(date_end->valuestring) : NULL
        );

    return accounting_period_update_dto_local_var;
end:
    return NULL;

}
