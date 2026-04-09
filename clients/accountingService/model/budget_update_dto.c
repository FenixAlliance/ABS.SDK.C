#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_update_dto.h"



budget_update_dto_t *budget_update_dto_create(
    char *name,
    char *fiscal_year_id
    ) {
    budget_update_dto_t *budget_update_dto_local_var = malloc(sizeof(budget_update_dto_t));
    if (!budget_update_dto_local_var) {
        return NULL;
    }
    budget_update_dto_local_var->name = name;
    budget_update_dto_local_var->fiscal_year_id = fiscal_year_id;

    return budget_update_dto_local_var;
}


void budget_update_dto_free(budget_update_dto_t *budget_update_dto) {
    if(NULL == budget_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_update_dto->name) {
        free(budget_update_dto->name);
        budget_update_dto->name = NULL;
    }
    if (budget_update_dto->fiscal_year_id) {
        free(budget_update_dto->fiscal_year_id);
        budget_update_dto->fiscal_year_id = NULL;
    }
    free(budget_update_dto);
}

cJSON *budget_update_dto_convertToJSON(budget_update_dto_t *budget_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // budget_update_dto->name
    if(budget_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", budget_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // budget_update_dto->fiscal_year_id
    if(budget_update_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", budget_update_dto->fiscal_year_id) == NULL) {
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

budget_update_dto_t *budget_update_dto_parseFromJSON(cJSON *budget_update_dtoJSON){

    budget_update_dto_t *budget_update_dto_local_var = NULL;

    // budget_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(budget_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // budget_update_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(budget_update_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }


    budget_update_dto_local_var = budget_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL
        );

    return budget_update_dto_local_var;
end:
    return NULL;

}
