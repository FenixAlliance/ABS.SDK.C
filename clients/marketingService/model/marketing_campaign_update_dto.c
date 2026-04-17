#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_campaign_update_dto.h"



marketing_campaign_update_dto_t *marketing_campaign_update_dto_create(
    char *name,
    char *offer,
    int active,
    char *proposed_start,
    char *proposed_end,
    char *actual_start,
    char *actual_end,
    char *code,
    double allocated_budget,
    double activity_cost,
    double misc_cost,
    double expected_response_percent,
    char *marketing_area_id,
    char *currency_id
    ) {
    marketing_campaign_update_dto_t *marketing_campaign_update_dto_local_var = malloc(sizeof(marketing_campaign_update_dto_t));
    if (!marketing_campaign_update_dto_local_var) {
        return NULL;
    }
    marketing_campaign_update_dto_local_var->name = name;
    marketing_campaign_update_dto_local_var->offer = offer;
    marketing_campaign_update_dto_local_var->active = active;
    marketing_campaign_update_dto_local_var->proposed_start = proposed_start;
    marketing_campaign_update_dto_local_var->proposed_end = proposed_end;
    marketing_campaign_update_dto_local_var->actual_start = actual_start;
    marketing_campaign_update_dto_local_var->actual_end = actual_end;
    marketing_campaign_update_dto_local_var->code = code;
    marketing_campaign_update_dto_local_var->allocated_budget = allocated_budget;
    marketing_campaign_update_dto_local_var->activity_cost = activity_cost;
    marketing_campaign_update_dto_local_var->misc_cost = misc_cost;
    marketing_campaign_update_dto_local_var->expected_response_percent = expected_response_percent;
    marketing_campaign_update_dto_local_var->marketing_area_id = marketing_area_id;
    marketing_campaign_update_dto_local_var->currency_id = currency_id;

    return marketing_campaign_update_dto_local_var;
}


void marketing_campaign_update_dto_free(marketing_campaign_update_dto_t *marketing_campaign_update_dto) {
    if(NULL == marketing_campaign_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_campaign_update_dto->name) {
        free(marketing_campaign_update_dto->name);
        marketing_campaign_update_dto->name = NULL;
    }
    if (marketing_campaign_update_dto->offer) {
        free(marketing_campaign_update_dto->offer);
        marketing_campaign_update_dto->offer = NULL;
    }
    if (marketing_campaign_update_dto->proposed_start) {
        free(marketing_campaign_update_dto->proposed_start);
        marketing_campaign_update_dto->proposed_start = NULL;
    }
    if (marketing_campaign_update_dto->proposed_end) {
        free(marketing_campaign_update_dto->proposed_end);
        marketing_campaign_update_dto->proposed_end = NULL;
    }
    if (marketing_campaign_update_dto->actual_start) {
        free(marketing_campaign_update_dto->actual_start);
        marketing_campaign_update_dto->actual_start = NULL;
    }
    if (marketing_campaign_update_dto->actual_end) {
        free(marketing_campaign_update_dto->actual_end);
        marketing_campaign_update_dto->actual_end = NULL;
    }
    if (marketing_campaign_update_dto->code) {
        free(marketing_campaign_update_dto->code);
        marketing_campaign_update_dto->code = NULL;
    }
    if (marketing_campaign_update_dto->marketing_area_id) {
        free(marketing_campaign_update_dto->marketing_area_id);
        marketing_campaign_update_dto->marketing_area_id = NULL;
    }
    if (marketing_campaign_update_dto->currency_id) {
        free(marketing_campaign_update_dto->currency_id);
        marketing_campaign_update_dto->currency_id = NULL;
    }
    free(marketing_campaign_update_dto);
}

cJSON *marketing_campaign_update_dto_convertToJSON(marketing_campaign_update_dto_t *marketing_campaign_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // marketing_campaign_update_dto->name
    if(marketing_campaign_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", marketing_campaign_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_update_dto->offer
    if(marketing_campaign_update_dto->offer) {
    if(cJSON_AddStringToObject(item, "offer", marketing_campaign_update_dto->offer) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_update_dto->active
    if(marketing_campaign_update_dto->active) {
    if(cJSON_AddBoolToObject(item, "active", marketing_campaign_update_dto->active) == NULL) {
    goto fail; //Bool
    }
    }


    // marketing_campaign_update_dto->proposed_start
    if(marketing_campaign_update_dto->proposed_start) {
    if(cJSON_AddStringToObject(item, "proposedStart", marketing_campaign_update_dto->proposed_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_campaign_update_dto->proposed_end
    if(marketing_campaign_update_dto->proposed_end) {
    if(cJSON_AddStringToObject(item, "proposedEnd", marketing_campaign_update_dto->proposed_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_campaign_update_dto->actual_start
    if(marketing_campaign_update_dto->actual_start) {
    if(cJSON_AddStringToObject(item, "actualStart", marketing_campaign_update_dto->actual_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_campaign_update_dto->actual_end
    if(marketing_campaign_update_dto->actual_end) {
    if(cJSON_AddStringToObject(item, "actualEnd", marketing_campaign_update_dto->actual_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_campaign_update_dto->code
    if(marketing_campaign_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", marketing_campaign_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_update_dto->allocated_budget
    if(marketing_campaign_update_dto->allocated_budget) {
    if(cJSON_AddNumberToObject(item, "allocatedBudget", marketing_campaign_update_dto->allocated_budget) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_campaign_update_dto->activity_cost
    if(marketing_campaign_update_dto->activity_cost) {
    if(cJSON_AddNumberToObject(item, "activityCost", marketing_campaign_update_dto->activity_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_campaign_update_dto->misc_cost
    if(marketing_campaign_update_dto->misc_cost) {
    if(cJSON_AddNumberToObject(item, "miscCost", marketing_campaign_update_dto->misc_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_campaign_update_dto->expected_response_percent
    if(marketing_campaign_update_dto->expected_response_percent) {
    if(cJSON_AddNumberToObject(item, "expectedResponsePercent", marketing_campaign_update_dto->expected_response_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_campaign_update_dto->marketing_area_id
    if(marketing_campaign_update_dto->marketing_area_id) {
    if(cJSON_AddStringToObject(item, "marketingAreaId", marketing_campaign_update_dto->marketing_area_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_update_dto->currency_id
    if(marketing_campaign_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", marketing_campaign_update_dto->currency_id) == NULL) {
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

marketing_campaign_update_dto_t *marketing_campaign_update_dto_parseFromJSON(cJSON *marketing_campaign_update_dtoJSON){

    marketing_campaign_update_dto_t *marketing_campaign_update_dto_local_var = NULL;

    // marketing_campaign_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // marketing_campaign_update_dto->offer
    cJSON *offer = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "offer");
    if (offer) { 
    if(!cJSON_IsString(offer) && !cJSON_IsNull(offer))
    {
    goto end; //String
    }
    }

    // marketing_campaign_update_dto->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "active");
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // marketing_campaign_update_dto->proposed_start
    cJSON *proposed_start = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "proposedStart");
    if (proposed_start) { 
    if(!cJSON_IsString(proposed_start) && !cJSON_IsNull(proposed_start))
    {
    goto end; //DateTime
    }
    }

    // marketing_campaign_update_dto->proposed_end
    cJSON *proposed_end = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "proposedEnd");
    if (proposed_end) { 
    if(!cJSON_IsString(proposed_end) && !cJSON_IsNull(proposed_end))
    {
    goto end; //DateTime
    }
    }

    // marketing_campaign_update_dto->actual_start
    cJSON *actual_start = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "actualStart");
    if (actual_start) { 
    if(!cJSON_IsString(actual_start) && !cJSON_IsNull(actual_start))
    {
    goto end; //DateTime
    }
    }

    // marketing_campaign_update_dto->actual_end
    cJSON *actual_end = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "actualEnd");
    if (actual_end) { 
    if(!cJSON_IsString(actual_end) && !cJSON_IsNull(actual_end))
    {
    goto end; //DateTime
    }
    }

    // marketing_campaign_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // marketing_campaign_update_dto->allocated_budget
    cJSON *allocated_budget = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "allocatedBudget");
    if (allocated_budget) { 
    if(!cJSON_IsNumber(allocated_budget))
    {
    goto end; //Numeric
    }
    }

    // marketing_campaign_update_dto->activity_cost
    cJSON *activity_cost = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "activityCost");
    if (activity_cost) { 
    if(!cJSON_IsNumber(activity_cost))
    {
    goto end; //Numeric
    }
    }

    // marketing_campaign_update_dto->misc_cost
    cJSON *misc_cost = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "miscCost");
    if (misc_cost) { 
    if(!cJSON_IsNumber(misc_cost))
    {
    goto end; //Numeric
    }
    }

    // marketing_campaign_update_dto->expected_response_percent
    cJSON *expected_response_percent = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "expectedResponsePercent");
    if (expected_response_percent) { 
    if(!cJSON_IsNumber(expected_response_percent))
    {
    goto end; //Numeric
    }
    }

    // marketing_campaign_update_dto->marketing_area_id
    cJSON *marketing_area_id = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "marketingAreaId");
    if (marketing_area_id) { 
    if(!cJSON_IsString(marketing_area_id) && !cJSON_IsNull(marketing_area_id))
    {
    goto end; //String
    }
    }

    // marketing_campaign_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(marketing_campaign_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    marketing_campaign_update_dto_local_var = marketing_campaign_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        offer && !cJSON_IsNull(offer) ? strdup(offer->valuestring) : NULL,
        active ? active->valueint : 0,
        proposed_start && !cJSON_IsNull(proposed_start) ? strdup(proposed_start->valuestring) : NULL,
        proposed_end && !cJSON_IsNull(proposed_end) ? strdup(proposed_end->valuestring) : NULL,
        actual_start && !cJSON_IsNull(actual_start) ? strdup(actual_start->valuestring) : NULL,
        actual_end && !cJSON_IsNull(actual_end) ? strdup(actual_end->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        allocated_budget ? allocated_budget->valuedouble : 0,
        activity_cost ? activity_cost->valuedouble : 0,
        misc_cost ? misc_cost->valuedouble : 0,
        expected_response_percent ? expected_response_percent->valuedouble : 0,
        marketing_area_id && !cJSON_IsNull(marketing_area_id) ? strdup(marketing_area_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return marketing_campaign_update_dto_local_var;
end:
    return NULL;

}
