#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_year_dto.h"



fiscal_year_dto_t *fiscal_year_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int _default,
    char *tenant_id,
    char *enrollment_id,
    char *fiscal_authority_id,
    char *end_date,
    char *start_date
    ) {
    fiscal_year_dto_t *fiscal_year_dto_local_var = malloc(sizeof(fiscal_year_dto_t));
    if (!fiscal_year_dto_local_var) {
        return NULL;
    }
    fiscal_year_dto_local_var->id = id;
    fiscal_year_dto_local_var->timestamp = timestamp;
    fiscal_year_dto_local_var->name = name;
    fiscal_year_dto_local_var->description = description;
    fiscal_year_dto_local_var->_default = _default;
    fiscal_year_dto_local_var->tenant_id = tenant_id;
    fiscal_year_dto_local_var->enrollment_id = enrollment_id;
    fiscal_year_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    fiscal_year_dto_local_var->end_date = end_date;
    fiscal_year_dto_local_var->start_date = start_date;

    return fiscal_year_dto_local_var;
}


void fiscal_year_dto_free(fiscal_year_dto_t *fiscal_year_dto) {
    if(NULL == fiscal_year_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_year_dto->id) {
        free(fiscal_year_dto->id);
        fiscal_year_dto->id = NULL;
    }
    if (fiscal_year_dto->timestamp) {
        free(fiscal_year_dto->timestamp);
        fiscal_year_dto->timestamp = NULL;
    }
    if (fiscal_year_dto->name) {
        free(fiscal_year_dto->name);
        fiscal_year_dto->name = NULL;
    }
    if (fiscal_year_dto->description) {
        free(fiscal_year_dto->description);
        fiscal_year_dto->description = NULL;
    }
    if (fiscal_year_dto->tenant_id) {
        free(fiscal_year_dto->tenant_id);
        fiscal_year_dto->tenant_id = NULL;
    }
    if (fiscal_year_dto->enrollment_id) {
        free(fiscal_year_dto->enrollment_id);
        fiscal_year_dto->enrollment_id = NULL;
    }
    if (fiscal_year_dto->fiscal_authority_id) {
        free(fiscal_year_dto->fiscal_authority_id);
        fiscal_year_dto->fiscal_authority_id = NULL;
    }
    if (fiscal_year_dto->end_date) {
        free(fiscal_year_dto->end_date);
        fiscal_year_dto->end_date = NULL;
    }
    if (fiscal_year_dto->start_date) {
        free(fiscal_year_dto->start_date);
        fiscal_year_dto->start_date = NULL;
    }
    free(fiscal_year_dto);
}

cJSON *fiscal_year_dto_convertToJSON(fiscal_year_dto_t *fiscal_year_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_year_dto->id
    if(fiscal_year_dto->id) {
    if(cJSON_AddStringToObject(item, "id", fiscal_year_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_dto->timestamp
    if(fiscal_year_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_year_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_year_dto->name
    if(fiscal_year_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_year_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_dto->description
    if(fiscal_year_dto->description) {
    if(cJSON_AddStringToObject(item, "description", fiscal_year_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_dto->_default
    if(fiscal_year_dto->_default) {
    if(cJSON_AddBoolToObject(item, "default", fiscal_year_dto->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // fiscal_year_dto->tenant_id
    if(fiscal_year_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", fiscal_year_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_dto->enrollment_id
    if(fiscal_year_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", fiscal_year_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_dto->fiscal_authority_id
    if(fiscal_year_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", fiscal_year_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_dto->end_date
    if(fiscal_year_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", fiscal_year_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_year_dto->start_date
    if(fiscal_year_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", fiscal_year_dto->start_date) == NULL) {
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

fiscal_year_dto_t *fiscal_year_dto_parseFromJSON(cJSON *fiscal_year_dtoJSON){

    fiscal_year_dto_t *fiscal_year_dto_local_var = NULL;

    // fiscal_year_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // fiscal_year_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_year_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_year_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // fiscal_year_dto->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "default");
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // fiscal_year_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // fiscal_year_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // fiscal_year_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }

    // fiscal_year_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_year_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(fiscal_year_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }


    fiscal_year_dto_local_var = fiscal_year_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        _default ? _default->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL
        );

    return fiscal_year_dto_local_var;
end:
    return NULL;

}
