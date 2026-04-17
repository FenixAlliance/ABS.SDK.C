#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_flow_stage_update_dto.h"



deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto_create(
    int order,
    char *name,
    char *description,
    char *deal_unit_flow_id,
    char *parent_business_process_stage_id
    ) {
    deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto_local_var = malloc(sizeof(deal_unit_flow_stage_update_dto_t));
    if (!deal_unit_flow_stage_update_dto_local_var) {
        return NULL;
    }
    deal_unit_flow_stage_update_dto_local_var->order = order;
    deal_unit_flow_stage_update_dto_local_var->name = name;
    deal_unit_flow_stage_update_dto_local_var->description = description;
    deal_unit_flow_stage_update_dto_local_var->deal_unit_flow_id = deal_unit_flow_id;
    deal_unit_flow_stage_update_dto_local_var->parent_business_process_stage_id = parent_business_process_stage_id;

    return deal_unit_flow_stage_update_dto_local_var;
}


void deal_unit_flow_stage_update_dto_free(deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto) {
    if(NULL == deal_unit_flow_stage_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_flow_stage_update_dto->name) {
        free(deal_unit_flow_stage_update_dto->name);
        deal_unit_flow_stage_update_dto->name = NULL;
    }
    if (deal_unit_flow_stage_update_dto->description) {
        free(deal_unit_flow_stage_update_dto->description);
        deal_unit_flow_stage_update_dto->description = NULL;
    }
    if (deal_unit_flow_stage_update_dto->deal_unit_flow_id) {
        free(deal_unit_flow_stage_update_dto->deal_unit_flow_id);
        deal_unit_flow_stage_update_dto->deal_unit_flow_id = NULL;
    }
    if (deal_unit_flow_stage_update_dto->parent_business_process_stage_id) {
        free(deal_unit_flow_stage_update_dto->parent_business_process_stage_id);
        deal_unit_flow_stage_update_dto->parent_business_process_stage_id = NULL;
    }
    free(deal_unit_flow_stage_update_dto);
}

cJSON *deal_unit_flow_stage_update_dto_convertToJSON(deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_flow_stage_update_dto->order
    if(deal_unit_flow_stage_update_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", deal_unit_flow_stage_update_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_flow_stage_update_dto->name
    if(deal_unit_flow_stage_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", deal_unit_flow_stage_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_update_dto->description
    if(deal_unit_flow_stage_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", deal_unit_flow_stage_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_update_dto->deal_unit_flow_id
    if(deal_unit_flow_stage_update_dto->deal_unit_flow_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFlowId", deal_unit_flow_stage_update_dto->deal_unit_flow_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_update_dto->parent_business_process_stage_id
    if(deal_unit_flow_stage_update_dto->parent_business_process_stage_id) {
    if(cJSON_AddStringToObject(item, "parentBusinessProcessStageId", deal_unit_flow_stage_update_dto->parent_business_process_stage_id) == NULL) {
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

deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto_parseFromJSON(cJSON *deal_unit_flow_stage_update_dtoJSON){

    deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto_local_var = NULL;

    // deal_unit_flow_stage_update_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_update_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_flow_stage_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_update_dto->deal_unit_flow_id
    cJSON *deal_unit_flow_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_update_dtoJSON, "dealUnitFlowId");
    if (deal_unit_flow_id) { 
    if(!cJSON_IsString(deal_unit_flow_id) && !cJSON_IsNull(deal_unit_flow_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_update_dto->parent_business_process_stage_id
    cJSON *parent_business_process_stage_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_update_dtoJSON, "parentBusinessProcessStageId");
    if (parent_business_process_stage_id) { 
    if(!cJSON_IsString(parent_business_process_stage_id) && !cJSON_IsNull(parent_business_process_stage_id))
    {
    goto end; //String
    }
    }


    deal_unit_flow_stage_update_dto_local_var = deal_unit_flow_stage_update_dto_create (
        order ? order->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        deal_unit_flow_id && !cJSON_IsNull(deal_unit_flow_id) ? strdup(deal_unit_flow_id->valuestring) : NULL,
        parent_business_process_stage_id && !cJSON_IsNull(parent_business_process_stage_id) ? strdup(parent_business_process_stage_id->valuestring) : NULL
        );

    return deal_unit_flow_stage_update_dto_local_var;
end:
    return NULL;

}
