#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_authority_dto.h"



fiscal_authority_dto_t *fiscal_authority_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id,
    char *country_id,
    char *logo_url,
    char *web_url
    ) {
    fiscal_authority_dto_t *fiscal_authority_dto_local_var = malloc(sizeof(fiscal_authority_dto_t));
    if (!fiscal_authority_dto_local_var) {
        return NULL;
    }
    fiscal_authority_dto_local_var->id = id;
    fiscal_authority_dto_local_var->timestamp = timestamp;
    fiscal_authority_dto_local_var->name = name;
    fiscal_authority_dto_local_var->description = description;
    fiscal_authority_dto_local_var->tenant_id = tenant_id;
    fiscal_authority_dto_local_var->enrollment_id = enrollment_id;
    fiscal_authority_dto_local_var->country_id = country_id;
    fiscal_authority_dto_local_var->logo_url = logo_url;
    fiscal_authority_dto_local_var->web_url = web_url;

    return fiscal_authority_dto_local_var;
}


void fiscal_authority_dto_free(fiscal_authority_dto_t *fiscal_authority_dto) {
    if(NULL == fiscal_authority_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_authority_dto->id) {
        free(fiscal_authority_dto->id);
        fiscal_authority_dto->id = NULL;
    }
    if (fiscal_authority_dto->timestamp) {
        free(fiscal_authority_dto->timestamp);
        fiscal_authority_dto->timestamp = NULL;
    }
    if (fiscal_authority_dto->name) {
        free(fiscal_authority_dto->name);
        fiscal_authority_dto->name = NULL;
    }
    if (fiscal_authority_dto->description) {
        free(fiscal_authority_dto->description);
        fiscal_authority_dto->description = NULL;
    }
    if (fiscal_authority_dto->tenant_id) {
        free(fiscal_authority_dto->tenant_id);
        fiscal_authority_dto->tenant_id = NULL;
    }
    if (fiscal_authority_dto->enrollment_id) {
        free(fiscal_authority_dto->enrollment_id);
        fiscal_authority_dto->enrollment_id = NULL;
    }
    if (fiscal_authority_dto->country_id) {
        free(fiscal_authority_dto->country_id);
        fiscal_authority_dto->country_id = NULL;
    }
    if (fiscal_authority_dto->logo_url) {
        free(fiscal_authority_dto->logo_url);
        fiscal_authority_dto->logo_url = NULL;
    }
    if (fiscal_authority_dto->web_url) {
        free(fiscal_authority_dto->web_url);
        fiscal_authority_dto->web_url = NULL;
    }
    free(fiscal_authority_dto);
}

cJSON *fiscal_authority_dto_convertToJSON(fiscal_authority_dto_t *fiscal_authority_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_authority_dto->id
    if(fiscal_authority_dto->id) {
    if(cJSON_AddStringToObject(item, "id", fiscal_authority_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->timestamp
    if(fiscal_authority_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_authority_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_authority_dto->name
    if(fiscal_authority_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_authority_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->description
    if(fiscal_authority_dto->description) {
    if(cJSON_AddStringToObject(item, "description", fiscal_authority_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->tenant_id
    if(fiscal_authority_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", fiscal_authority_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->enrollment_id
    if(fiscal_authority_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", fiscal_authority_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->country_id
    if(fiscal_authority_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", fiscal_authority_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->logo_url
    if(fiscal_authority_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoUrl", fiscal_authority_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_authority_dto->web_url
    if(fiscal_authority_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", fiscal_authority_dto->web_url) == NULL) {
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

fiscal_authority_dto_t *fiscal_authority_dto_parseFromJSON(cJSON *fiscal_authority_dtoJSON){

    fiscal_authority_dto_t *fiscal_authority_dto_local_var = NULL;

    // fiscal_authority_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_authority_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "logoUrl");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // fiscal_authority_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(fiscal_authority_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }


    fiscal_authority_dto_local_var = fiscal_authority_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL
        );

    return fiscal_authority_dto_local_var;
end:
    return NULL;

}
