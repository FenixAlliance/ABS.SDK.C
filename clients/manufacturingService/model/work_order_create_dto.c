#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "work_order_create_dto.h"



work_order_create_dto_t *work_order_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    char *production_plan_id,
    char *work_order_type_id,
    char *workstation_id,
    char *currency_id,
    char *individual_id,
    char *organization_id,
    char *promised_start_date,
    char *promised_end_date
    ) {
    work_order_create_dto_t *work_order_create_dto_local_var = malloc(sizeof(work_order_create_dto_t));
    if (!work_order_create_dto_local_var) {
        return NULL;
    }
    work_order_create_dto_local_var->id = id;
    work_order_create_dto_local_var->timestamp = timestamp;
    work_order_create_dto_local_var->title = title;
    work_order_create_dto_local_var->description = description;
    work_order_create_dto_local_var->instructions = instructions;
    work_order_create_dto_local_var->production_plan_id = production_plan_id;
    work_order_create_dto_local_var->work_order_type_id = work_order_type_id;
    work_order_create_dto_local_var->workstation_id = workstation_id;
    work_order_create_dto_local_var->currency_id = currency_id;
    work_order_create_dto_local_var->individual_id = individual_id;
    work_order_create_dto_local_var->organization_id = organization_id;
    work_order_create_dto_local_var->promised_start_date = promised_start_date;
    work_order_create_dto_local_var->promised_end_date = promised_end_date;

    return work_order_create_dto_local_var;
}


void work_order_create_dto_free(work_order_create_dto_t *work_order_create_dto) {
    if(NULL == work_order_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (work_order_create_dto->id) {
        free(work_order_create_dto->id);
        work_order_create_dto->id = NULL;
    }
    if (work_order_create_dto->timestamp) {
        free(work_order_create_dto->timestamp);
        work_order_create_dto->timestamp = NULL;
    }
    if (work_order_create_dto->title) {
        free(work_order_create_dto->title);
        work_order_create_dto->title = NULL;
    }
    if (work_order_create_dto->description) {
        free(work_order_create_dto->description);
        work_order_create_dto->description = NULL;
    }
    if (work_order_create_dto->instructions) {
        free(work_order_create_dto->instructions);
        work_order_create_dto->instructions = NULL;
    }
    if (work_order_create_dto->production_plan_id) {
        free(work_order_create_dto->production_plan_id);
        work_order_create_dto->production_plan_id = NULL;
    }
    if (work_order_create_dto->work_order_type_id) {
        free(work_order_create_dto->work_order_type_id);
        work_order_create_dto->work_order_type_id = NULL;
    }
    if (work_order_create_dto->workstation_id) {
        free(work_order_create_dto->workstation_id);
        work_order_create_dto->workstation_id = NULL;
    }
    if (work_order_create_dto->currency_id) {
        free(work_order_create_dto->currency_id);
        work_order_create_dto->currency_id = NULL;
    }
    if (work_order_create_dto->individual_id) {
        free(work_order_create_dto->individual_id);
        work_order_create_dto->individual_id = NULL;
    }
    if (work_order_create_dto->organization_id) {
        free(work_order_create_dto->organization_id);
        work_order_create_dto->organization_id = NULL;
    }
    if (work_order_create_dto->promised_start_date) {
        free(work_order_create_dto->promised_start_date);
        work_order_create_dto->promised_start_date = NULL;
    }
    if (work_order_create_dto->promised_end_date) {
        free(work_order_create_dto->promised_end_date);
        work_order_create_dto->promised_end_date = NULL;
    }
    free(work_order_create_dto);
}

cJSON *work_order_create_dto_convertToJSON(work_order_create_dto_t *work_order_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // work_order_create_dto->id
    if(work_order_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", work_order_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->timestamp
    if(work_order_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", work_order_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // work_order_create_dto->title
    if (!work_order_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", work_order_create_dto->title) == NULL) {
    goto fail; //String
    }


    // work_order_create_dto->description
    if(work_order_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", work_order_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->instructions
    if(work_order_create_dto->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", work_order_create_dto->instructions) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->production_plan_id
    if(work_order_create_dto->production_plan_id) {
    if(cJSON_AddStringToObject(item, "productionPlanId", work_order_create_dto->production_plan_id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->work_order_type_id
    if(work_order_create_dto->work_order_type_id) {
    if(cJSON_AddStringToObject(item, "workOrderTypeId", work_order_create_dto->work_order_type_id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->workstation_id
    if(work_order_create_dto->workstation_id) {
    if(cJSON_AddStringToObject(item, "workstationId", work_order_create_dto->workstation_id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->currency_id
    if(work_order_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", work_order_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->individual_id
    if(work_order_create_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", work_order_create_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->organization_id
    if(work_order_create_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", work_order_create_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_create_dto->promised_start_date
    if(work_order_create_dto->promised_start_date) {
    if(cJSON_AddStringToObject(item, "promisedStartDate", work_order_create_dto->promised_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // work_order_create_dto->promised_end_date
    if(work_order_create_dto->promised_end_date) {
    if(cJSON_AddStringToObject(item, "promisedEndDate", work_order_create_dto->promised_end_date) == NULL) {
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

work_order_create_dto_t *work_order_create_dto_parseFromJSON(cJSON *work_order_create_dtoJSON){

    work_order_create_dto_t *work_order_create_dto_local_var = NULL;

    // work_order_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // work_order_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // work_order_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->production_plan_id
    cJSON *production_plan_id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "productionPlanId");
    if (production_plan_id) { 
    if(!cJSON_IsString(production_plan_id) && !cJSON_IsNull(production_plan_id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->work_order_type_id
    cJSON *work_order_type_id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "workOrderTypeId");
    if (work_order_type_id) { 
    if(!cJSON_IsString(work_order_type_id) && !cJSON_IsNull(work_order_type_id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->workstation_id
    cJSON *workstation_id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "workstationId");
    if (workstation_id) { 
    if(!cJSON_IsString(workstation_id) && !cJSON_IsNull(workstation_id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // work_order_create_dto->promised_start_date
    cJSON *promised_start_date = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "promisedStartDate");
    if (promised_start_date) { 
    if(!cJSON_IsString(promised_start_date) && !cJSON_IsNull(promised_start_date))
    {
    goto end; //DateTime
    }
    }

    // work_order_create_dto->promised_end_date
    cJSON *promised_end_date = cJSON_GetObjectItemCaseSensitive(work_order_create_dtoJSON, "promisedEndDate");
    if (promised_end_date) { 
    if(!cJSON_IsString(promised_end_date) && !cJSON_IsNull(promised_end_date))
    {
    goto end; //DateTime
    }
    }


    work_order_create_dto_local_var = work_order_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        production_plan_id && !cJSON_IsNull(production_plan_id) ? strdup(production_plan_id->valuestring) : NULL,
        work_order_type_id && !cJSON_IsNull(work_order_type_id) ? strdup(work_order_type_id->valuestring) : NULL,
        workstation_id && !cJSON_IsNull(workstation_id) ? strdup(workstation_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        promised_start_date && !cJSON_IsNull(promised_start_date) ? strdup(promised_start_date->valuestring) : NULL,
        promised_end_date && !cJSON_IsNull(promised_end_date) ? strdup(promised_end_date->valuestring) : NULL
        );

    return work_order_create_dto_local_var;
end:
    return NULL;

}
