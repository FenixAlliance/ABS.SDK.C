#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_year_create_dto.h"



fiscal_year_create_dto_t *fiscal_year_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int closed,
    char *end_date,
    char *start_date,
    char *fiscal_authority_id
    ) {
    fiscal_year_create_dto_t *fiscal_year_create_dto_local_var = malloc(sizeof(fiscal_year_create_dto_t));
    if (!fiscal_year_create_dto_local_var) {
        return NULL;
    }
    fiscal_year_create_dto_local_var->id = id;
    fiscal_year_create_dto_local_var->timestamp = timestamp;
    fiscal_year_create_dto_local_var->name = name;
    fiscal_year_create_dto_local_var->description = description;
    fiscal_year_create_dto_local_var->closed = closed;
    fiscal_year_create_dto_local_var->end_date = end_date;
    fiscal_year_create_dto_local_var->start_date = start_date;
    fiscal_year_create_dto_local_var->fiscal_authority_id = fiscal_authority_id;

    return fiscal_year_create_dto_local_var;
}


void fiscal_year_create_dto_free(fiscal_year_create_dto_t *fiscal_year_create_dto) {
    if(NULL == fiscal_year_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_year_create_dto->id) {
        free(fiscal_year_create_dto->id);
        fiscal_year_create_dto->id = NULL;
    }
    if (fiscal_year_create_dto->timestamp) {
        free(fiscal_year_create_dto->timestamp);
        fiscal_year_create_dto->timestamp = NULL;
    }
    if (fiscal_year_create_dto->name) {
        free(fiscal_year_create_dto->name);
        fiscal_year_create_dto->name = NULL;
    }
    if (fiscal_year_create_dto->description) {
        free(fiscal_year_create_dto->description);
        fiscal_year_create_dto->description = NULL;
    }
    if (fiscal_year_create_dto->end_date) {
        free(fiscal_year_create_dto->end_date);
        fiscal_year_create_dto->end_date = NULL;
    }
    if (fiscal_year_create_dto->start_date) {
        free(fiscal_year_create_dto->start_date);
        fiscal_year_create_dto->start_date = NULL;
    }
    if (fiscal_year_create_dto->fiscal_authority_id) {
        free(fiscal_year_create_dto->fiscal_authority_id);
        fiscal_year_create_dto->fiscal_authority_id = NULL;
    }
    free(fiscal_year_create_dto);
}

cJSON *fiscal_year_create_dto_convertToJSON(fiscal_year_create_dto_t *fiscal_year_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_year_create_dto->id
    if(fiscal_year_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", fiscal_year_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_create_dto->timestamp
    if(fiscal_year_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_year_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_year_create_dto->name
    if(fiscal_year_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_year_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_create_dto->description
    if(fiscal_year_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", fiscal_year_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_year_create_dto->closed
    if(fiscal_year_create_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", fiscal_year_create_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // fiscal_year_create_dto->end_date
    if(fiscal_year_create_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", fiscal_year_create_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_year_create_dto->start_date
    if(fiscal_year_create_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", fiscal_year_create_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_year_create_dto->fiscal_authority_id
    if(fiscal_year_create_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", fiscal_year_create_dto->fiscal_authority_id) == NULL) {
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

fiscal_year_create_dto_t *fiscal_year_create_dto_parseFromJSON(cJSON *fiscal_year_create_dtoJSON){

    fiscal_year_create_dto_t *fiscal_year_create_dto_local_var = NULL;

    // fiscal_year_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // fiscal_year_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_year_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_year_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // fiscal_year_create_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // fiscal_year_create_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_year_create_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_year_create_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(fiscal_year_create_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }


    fiscal_year_create_dto_local_var = fiscal_year_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        closed ? closed->valueint : 0,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL
        );

    return fiscal_year_create_dto_local_var;
end:
    return NULL;

}
