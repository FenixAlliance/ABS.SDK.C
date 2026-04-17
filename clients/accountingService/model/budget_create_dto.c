#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_create_dto.h"



budget_create_dto_t *budget_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *fiscal_year_id
    ) {
    budget_create_dto_t *budget_create_dto_local_var = malloc(sizeof(budget_create_dto_t));
    if (!budget_create_dto_local_var) {
        return NULL;
    }
    budget_create_dto_local_var->id = id;
    budget_create_dto_local_var->timestamp = timestamp;
    budget_create_dto_local_var->name = name;
    budget_create_dto_local_var->fiscal_year_id = fiscal_year_id;

    return budget_create_dto_local_var;
}


void budget_create_dto_free(budget_create_dto_t *budget_create_dto) {
    if(NULL == budget_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_create_dto->id) {
        free(budget_create_dto->id);
        budget_create_dto->id = NULL;
    }
    if (budget_create_dto->timestamp) {
        free(budget_create_dto->timestamp);
        budget_create_dto->timestamp = NULL;
    }
    if (budget_create_dto->name) {
        free(budget_create_dto->name);
        budget_create_dto->name = NULL;
    }
    if (budget_create_dto->fiscal_year_id) {
        free(budget_create_dto->fiscal_year_id);
        budget_create_dto->fiscal_year_id = NULL;
    }
    free(budget_create_dto);
}

cJSON *budget_create_dto_convertToJSON(budget_create_dto_t *budget_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // budget_create_dto->id
    if(budget_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", budget_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // budget_create_dto->timestamp
    if(budget_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", budget_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_create_dto->name
    if(budget_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", budget_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // budget_create_dto->fiscal_year_id
    if(budget_create_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", budget_create_dto->fiscal_year_id) == NULL) {
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

budget_create_dto_t *budget_create_dto_parseFromJSON(cJSON *budget_create_dtoJSON){

    budget_create_dto_t *budget_create_dto_local_var = NULL;

    // budget_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(budget_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // budget_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(budget_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // budget_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(budget_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // budget_create_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(budget_create_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }


    budget_create_dto_local_var = budget_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL
        );

    return budget_create_dto_local_var;
end:
    return NULL;

}
