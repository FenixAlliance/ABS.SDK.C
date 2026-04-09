#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "price_list_dto.h"



price_list_dto_t *price_list_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *start_date,
    char *end_date,
    char *description,
    char *currency_id,
    char *tenant_id,
    char *unit_id,
    char *unit_group_id,
    int partner_visible,
    int unit_of_measure_dependant,
    char *enrollment_id
    ) {
    price_list_dto_t *price_list_dto_local_var = malloc(sizeof(price_list_dto_t));
    if (!price_list_dto_local_var) {
        return NULL;
    }
    price_list_dto_local_var->id = id;
    price_list_dto_local_var->timestamp = timestamp;
    price_list_dto_local_var->name = name;
    price_list_dto_local_var->start_date = start_date;
    price_list_dto_local_var->end_date = end_date;
    price_list_dto_local_var->description = description;
    price_list_dto_local_var->currency_id = currency_id;
    price_list_dto_local_var->tenant_id = tenant_id;
    price_list_dto_local_var->unit_id = unit_id;
    price_list_dto_local_var->unit_group_id = unit_group_id;
    price_list_dto_local_var->partner_visible = partner_visible;
    price_list_dto_local_var->unit_of_measure_dependant = unit_of_measure_dependant;
    price_list_dto_local_var->enrollment_id = enrollment_id;

    return price_list_dto_local_var;
}


void price_list_dto_free(price_list_dto_t *price_list_dto) {
    if(NULL == price_list_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (price_list_dto->id) {
        free(price_list_dto->id);
        price_list_dto->id = NULL;
    }
    if (price_list_dto->timestamp) {
        free(price_list_dto->timestamp);
        price_list_dto->timestamp = NULL;
    }
    if (price_list_dto->name) {
        free(price_list_dto->name);
        price_list_dto->name = NULL;
    }
    if (price_list_dto->start_date) {
        free(price_list_dto->start_date);
        price_list_dto->start_date = NULL;
    }
    if (price_list_dto->end_date) {
        free(price_list_dto->end_date);
        price_list_dto->end_date = NULL;
    }
    if (price_list_dto->description) {
        free(price_list_dto->description);
        price_list_dto->description = NULL;
    }
    if (price_list_dto->currency_id) {
        free(price_list_dto->currency_id);
        price_list_dto->currency_id = NULL;
    }
    if (price_list_dto->tenant_id) {
        free(price_list_dto->tenant_id);
        price_list_dto->tenant_id = NULL;
    }
    if (price_list_dto->unit_id) {
        free(price_list_dto->unit_id);
        price_list_dto->unit_id = NULL;
    }
    if (price_list_dto->unit_group_id) {
        free(price_list_dto->unit_group_id);
        price_list_dto->unit_group_id = NULL;
    }
    if (price_list_dto->enrollment_id) {
        free(price_list_dto->enrollment_id);
        price_list_dto->enrollment_id = NULL;
    }
    free(price_list_dto);
}

cJSON *price_list_dto_convertToJSON(price_list_dto_t *price_list_dto) {
    cJSON *item = cJSON_CreateObject();

    // price_list_dto->id
    if(price_list_dto->id) {
    if(cJSON_AddStringToObject(item, "id", price_list_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->timestamp
    if(price_list_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", price_list_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // price_list_dto->name
    if(price_list_dto->name) {
    if(cJSON_AddStringToObject(item, "name", price_list_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->start_date
    if(price_list_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", price_list_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // price_list_dto->end_date
    if(price_list_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", price_list_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // price_list_dto->description
    if(price_list_dto->description) {
    if(cJSON_AddStringToObject(item, "description", price_list_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->currency_id
    if(price_list_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", price_list_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->tenant_id
    if(price_list_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", price_list_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->unit_id
    if(price_list_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", price_list_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->unit_group_id
    if(price_list_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", price_list_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_dto->partner_visible
    if(price_list_dto->partner_visible) {
    if(cJSON_AddBoolToObject(item, "partnerVisible", price_list_dto->partner_visible) == NULL) {
    goto fail; //Bool
    }
    }


    // price_list_dto->unit_of_measure_dependant
    if(price_list_dto->unit_of_measure_dependant) {
    if(cJSON_AddBoolToObject(item, "unitOfMeasureDependant", price_list_dto->unit_of_measure_dependant) == NULL) {
    goto fail; //Bool
    }
    }


    // price_list_dto->enrollment_id
    if(price_list_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", price_list_dto->enrollment_id) == NULL) {
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

price_list_dto_t *price_list_dto_parseFromJSON(cJSON *price_list_dtoJSON){

    price_list_dto_t *price_list_dto_local_var = NULL;

    // price_list_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // price_list_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // price_list_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // price_list_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // price_list_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // price_list_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // price_list_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // price_list_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // price_list_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // price_list_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // price_list_dto->partner_visible
    cJSON *partner_visible = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "partnerVisible");
    if (partner_visible) { 
    if(!cJSON_IsBool(partner_visible))
    {
    goto end; //Bool
    }
    }

    // price_list_dto->unit_of_measure_dependant
    cJSON *unit_of_measure_dependant = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "unitOfMeasureDependant");
    if (unit_of_measure_dependant) { 
    if(!cJSON_IsBool(unit_of_measure_dependant))
    {
    goto end; //Bool
    }
    }

    // price_list_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(price_list_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    price_list_dto_local_var = price_list_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        partner_visible ? partner_visible->valueint : 0,
        unit_of_measure_dependant ? unit_of_measure_dependant->valueint : 0,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return price_list_dto_local_var;
end:
    return NULL;

}
