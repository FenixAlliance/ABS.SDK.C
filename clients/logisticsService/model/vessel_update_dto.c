#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vessel_update_dto.h"



vessel_update_dto_t *vessel_update_dto_create(
    char *name,
    char *imo_number,
    char *mmsi_number,
    char *call_sign,
    char *flag_country_id,
    char *vessel_type,
    char *vessel_status,
    double gross_tonnage,
    double deadweight_tonnage,
    int teu_capacity,
    double length_meters,
    double beam_meters,
    double draft_meters,
    int year_built,
    char *shipping_courier_id
    ) {
    vessel_update_dto_t *vessel_update_dto_local_var = malloc(sizeof(vessel_update_dto_t));
    if (!vessel_update_dto_local_var) {
        return NULL;
    }
    vessel_update_dto_local_var->name = name;
    vessel_update_dto_local_var->imo_number = imo_number;
    vessel_update_dto_local_var->mmsi_number = mmsi_number;
    vessel_update_dto_local_var->call_sign = call_sign;
    vessel_update_dto_local_var->flag_country_id = flag_country_id;
    vessel_update_dto_local_var->vessel_type = vessel_type;
    vessel_update_dto_local_var->vessel_status = vessel_status;
    vessel_update_dto_local_var->gross_tonnage = gross_tonnage;
    vessel_update_dto_local_var->deadweight_tonnage = deadweight_tonnage;
    vessel_update_dto_local_var->teu_capacity = teu_capacity;
    vessel_update_dto_local_var->length_meters = length_meters;
    vessel_update_dto_local_var->beam_meters = beam_meters;
    vessel_update_dto_local_var->draft_meters = draft_meters;
    vessel_update_dto_local_var->year_built = year_built;
    vessel_update_dto_local_var->shipping_courier_id = shipping_courier_id;

    return vessel_update_dto_local_var;
}


void vessel_update_dto_free(vessel_update_dto_t *vessel_update_dto) {
    if(NULL == vessel_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (vessel_update_dto->name) {
        free(vessel_update_dto->name);
        vessel_update_dto->name = NULL;
    }
    if (vessel_update_dto->imo_number) {
        free(vessel_update_dto->imo_number);
        vessel_update_dto->imo_number = NULL;
    }
    if (vessel_update_dto->mmsi_number) {
        free(vessel_update_dto->mmsi_number);
        vessel_update_dto->mmsi_number = NULL;
    }
    if (vessel_update_dto->call_sign) {
        free(vessel_update_dto->call_sign);
        vessel_update_dto->call_sign = NULL;
    }
    if (vessel_update_dto->flag_country_id) {
        free(vessel_update_dto->flag_country_id);
        vessel_update_dto->flag_country_id = NULL;
    }
    if (vessel_update_dto->vessel_type) {
        free(vessel_update_dto->vessel_type);
        vessel_update_dto->vessel_type = NULL;
    }
    if (vessel_update_dto->vessel_status) {
        free(vessel_update_dto->vessel_status);
        vessel_update_dto->vessel_status = NULL;
    }
    if (vessel_update_dto->shipping_courier_id) {
        free(vessel_update_dto->shipping_courier_id);
        vessel_update_dto->shipping_courier_id = NULL;
    }
    free(vessel_update_dto);
}

cJSON *vessel_update_dto_convertToJSON(vessel_update_dto_t *vessel_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // vessel_update_dto->name
    if(vessel_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", vessel_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->imo_number
    if(vessel_update_dto->imo_number) {
    if(cJSON_AddStringToObject(item, "imoNumber", vessel_update_dto->imo_number) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->mmsi_number
    if(vessel_update_dto->mmsi_number) {
    if(cJSON_AddStringToObject(item, "mmsiNumber", vessel_update_dto->mmsi_number) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->call_sign
    if(vessel_update_dto->call_sign) {
    if(cJSON_AddStringToObject(item, "callSign", vessel_update_dto->call_sign) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->flag_country_id
    if(vessel_update_dto->flag_country_id) {
    if(cJSON_AddStringToObject(item, "flagCountryId", vessel_update_dto->flag_country_id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->vessel_type
    if(vessel_update_dto->vessel_type) {
    if(cJSON_AddStringToObject(item, "vesselType", vessel_update_dto->vessel_type) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->vessel_status
    if(vessel_update_dto->vessel_status) {
    if(cJSON_AddStringToObject(item, "vesselStatus", vessel_update_dto->vessel_status) == NULL) {
    goto fail; //String
    }
    }


    // vessel_update_dto->gross_tonnage
    if(vessel_update_dto->gross_tonnage) {
    if(cJSON_AddNumberToObject(item, "grossTonnage", vessel_update_dto->gross_tonnage) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->deadweight_tonnage
    if(vessel_update_dto->deadweight_tonnage) {
    if(cJSON_AddNumberToObject(item, "deadweightTonnage", vessel_update_dto->deadweight_tonnage) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->teu_capacity
    if(vessel_update_dto->teu_capacity) {
    if(cJSON_AddNumberToObject(item, "teuCapacity", vessel_update_dto->teu_capacity) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->length_meters
    if(vessel_update_dto->length_meters) {
    if(cJSON_AddNumberToObject(item, "lengthMeters", vessel_update_dto->length_meters) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->beam_meters
    if(vessel_update_dto->beam_meters) {
    if(cJSON_AddNumberToObject(item, "beamMeters", vessel_update_dto->beam_meters) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->draft_meters
    if(vessel_update_dto->draft_meters) {
    if(cJSON_AddNumberToObject(item, "draftMeters", vessel_update_dto->draft_meters) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->year_built
    if(vessel_update_dto->year_built) {
    if(cJSON_AddNumberToObject(item, "yearBuilt", vessel_update_dto->year_built) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_update_dto->shipping_courier_id
    if(vessel_update_dto->shipping_courier_id) {
    if(cJSON_AddStringToObject(item, "shippingCourierId", vessel_update_dto->shipping_courier_id) == NULL) {
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

vessel_update_dto_t *vessel_update_dto_parseFromJSON(cJSON *vessel_update_dtoJSON){

    vessel_update_dto_t *vessel_update_dto_local_var = NULL;

    // vessel_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->imo_number
    cJSON *imo_number = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "imoNumber");
    if (imo_number) { 
    if(!cJSON_IsString(imo_number) && !cJSON_IsNull(imo_number))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->mmsi_number
    cJSON *mmsi_number = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "mmsiNumber");
    if (mmsi_number) { 
    if(!cJSON_IsString(mmsi_number) && !cJSON_IsNull(mmsi_number))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->call_sign
    cJSON *call_sign = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "callSign");
    if (call_sign) { 
    if(!cJSON_IsString(call_sign) && !cJSON_IsNull(call_sign))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->flag_country_id
    cJSON *flag_country_id = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "flagCountryId");
    if (flag_country_id) { 
    if(!cJSON_IsString(flag_country_id) && !cJSON_IsNull(flag_country_id))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->vessel_type
    cJSON *vessel_type = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "vesselType");
    if (vessel_type) { 
    if(!cJSON_IsString(vessel_type) && !cJSON_IsNull(vessel_type))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->vessel_status
    cJSON *vessel_status = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "vesselStatus");
    if (vessel_status) { 
    if(!cJSON_IsString(vessel_status) && !cJSON_IsNull(vessel_status))
    {
    goto end; //String
    }
    }

    // vessel_update_dto->gross_tonnage
    cJSON *gross_tonnage = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "grossTonnage");
    if (gross_tonnage) { 
    if(!cJSON_IsNumber(gross_tonnage))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->deadweight_tonnage
    cJSON *deadweight_tonnage = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "deadweightTonnage");
    if (deadweight_tonnage) { 
    if(!cJSON_IsNumber(deadweight_tonnage))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->teu_capacity
    cJSON *teu_capacity = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "teuCapacity");
    if (teu_capacity) { 
    if(!cJSON_IsNumber(teu_capacity))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->length_meters
    cJSON *length_meters = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "lengthMeters");
    if (length_meters) { 
    if(!cJSON_IsNumber(length_meters))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->beam_meters
    cJSON *beam_meters = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "beamMeters");
    if (beam_meters) { 
    if(!cJSON_IsNumber(beam_meters))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->draft_meters
    cJSON *draft_meters = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "draftMeters");
    if (draft_meters) { 
    if(!cJSON_IsNumber(draft_meters))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->year_built
    cJSON *year_built = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "yearBuilt");
    if (year_built) { 
    if(!cJSON_IsNumber(year_built))
    {
    goto end; //Numeric
    }
    }

    // vessel_update_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(vessel_update_dtoJSON, "shippingCourierId");
    if (shipping_courier_id) { 
    if(!cJSON_IsString(shipping_courier_id) && !cJSON_IsNull(shipping_courier_id))
    {
    goto end; //String
    }
    }


    vessel_update_dto_local_var = vessel_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        imo_number && !cJSON_IsNull(imo_number) ? strdup(imo_number->valuestring) : NULL,
        mmsi_number && !cJSON_IsNull(mmsi_number) ? strdup(mmsi_number->valuestring) : NULL,
        call_sign && !cJSON_IsNull(call_sign) ? strdup(call_sign->valuestring) : NULL,
        flag_country_id && !cJSON_IsNull(flag_country_id) ? strdup(flag_country_id->valuestring) : NULL,
        vessel_type && !cJSON_IsNull(vessel_type) ? strdup(vessel_type->valuestring) : NULL,
        vessel_status && !cJSON_IsNull(vessel_status) ? strdup(vessel_status->valuestring) : NULL,
        gross_tonnage ? gross_tonnage->valuedouble : 0,
        deadweight_tonnage ? deadweight_tonnage->valuedouble : 0,
        teu_capacity ? teu_capacity->valuedouble : 0,
        length_meters ? length_meters->valuedouble : 0,
        beam_meters ? beam_meters->valuedouble : 0,
        draft_meters ? draft_meters->valuedouble : 0,
        year_built ? year_built->valuedouble : 0,
        shipping_courier_id && !cJSON_IsNull(shipping_courier_id) ? strdup(shipping_courier_id->valuestring) : NULL
        );

    return vessel_update_dto_local_var;
end:
    return NULL;

}
