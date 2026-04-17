#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_period_update_dto.h"



fiscal_period_update_dto_t *fiscal_period_update_dto_create(
    char *name,
    char *from_date,
    char *to_date,
    char *fiscal_year_id
    ) {
    fiscal_period_update_dto_t *fiscal_period_update_dto_local_var = malloc(sizeof(fiscal_period_update_dto_t));
    if (!fiscal_period_update_dto_local_var) {
        return NULL;
    }
    fiscal_period_update_dto_local_var->name = name;
    fiscal_period_update_dto_local_var->from_date = from_date;
    fiscal_period_update_dto_local_var->to_date = to_date;
    fiscal_period_update_dto_local_var->fiscal_year_id = fiscal_year_id;

    return fiscal_period_update_dto_local_var;
}


void fiscal_period_update_dto_free(fiscal_period_update_dto_t *fiscal_period_update_dto) {
    if(NULL == fiscal_period_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_period_update_dto->name) {
        free(fiscal_period_update_dto->name);
        fiscal_period_update_dto->name = NULL;
    }
    if (fiscal_period_update_dto->from_date) {
        free(fiscal_period_update_dto->from_date);
        fiscal_period_update_dto->from_date = NULL;
    }
    if (fiscal_period_update_dto->to_date) {
        free(fiscal_period_update_dto->to_date);
        fiscal_period_update_dto->to_date = NULL;
    }
    if (fiscal_period_update_dto->fiscal_year_id) {
        free(fiscal_period_update_dto->fiscal_year_id);
        fiscal_period_update_dto->fiscal_year_id = NULL;
    }
    free(fiscal_period_update_dto);
}

cJSON *fiscal_period_update_dto_convertToJSON(fiscal_period_update_dto_t *fiscal_period_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_period_update_dto->name
    if(fiscal_period_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_period_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_update_dto->from_date
    if(fiscal_period_update_dto->from_date) {
    if(cJSON_AddStringToObject(item, "fromDate", fiscal_period_update_dto->from_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_period_update_dto->to_date
    if(fiscal_period_update_dto->to_date) {
    if(cJSON_AddStringToObject(item, "toDate", fiscal_period_update_dto->to_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_period_update_dto->fiscal_year_id
    if(fiscal_period_update_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", fiscal_period_update_dto->fiscal_year_id) == NULL) {
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

fiscal_period_update_dto_t *fiscal_period_update_dto_parseFromJSON(cJSON *fiscal_period_update_dtoJSON){

    fiscal_period_update_dto_t *fiscal_period_update_dto_local_var = NULL;

    // fiscal_period_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_period_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_period_update_dto->from_date
    cJSON *from_date = cJSON_GetObjectItemCaseSensitive(fiscal_period_update_dtoJSON, "fromDate");
    if (from_date) { 
    if(!cJSON_IsString(from_date) && !cJSON_IsNull(from_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_period_update_dto->to_date
    cJSON *to_date = cJSON_GetObjectItemCaseSensitive(fiscal_period_update_dtoJSON, "toDate");
    if (to_date) { 
    if(!cJSON_IsString(to_date) && !cJSON_IsNull(to_date))
    {
    goto end; //DateTime
    }
    }

    // fiscal_period_update_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(fiscal_period_update_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }


    fiscal_period_update_dto_local_var = fiscal_period_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        from_date && !cJSON_IsNull(from_date) ? strdup(from_date->valuestring) : NULL,
        to_date && !cJSON_IsNull(to_date) ? strdup(to_date->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL
        );

    return fiscal_period_update_dto_local_var;
end:
    return NULL;

}
