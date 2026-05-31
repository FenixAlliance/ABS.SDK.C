#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vessel_dto.h"



vessel_dto_t *vessel_dto_create(
    char *id,
    char *timestamp,
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
    char *shipping_courier_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    vessel_dto_t *vessel_dto_local_var = malloc(sizeof(vessel_dto_t));
    if (!vessel_dto_local_var) {
        return NULL;
    }
    vessel_dto_local_var->id = id;
    vessel_dto_local_var->timestamp = timestamp;
    vessel_dto_local_var->name = name;
    vessel_dto_local_var->imo_number = imo_number;
    vessel_dto_local_var->mmsi_number = mmsi_number;
    vessel_dto_local_var->call_sign = call_sign;
    vessel_dto_local_var->flag_country_id = flag_country_id;
    vessel_dto_local_var->vessel_type = vessel_type;
    vessel_dto_local_var->vessel_status = vessel_status;
    vessel_dto_local_var->gross_tonnage = gross_tonnage;
    vessel_dto_local_var->deadweight_tonnage = deadweight_tonnage;
    vessel_dto_local_var->teu_capacity = teu_capacity;
    vessel_dto_local_var->length_meters = length_meters;
    vessel_dto_local_var->beam_meters = beam_meters;
    vessel_dto_local_var->draft_meters = draft_meters;
    vessel_dto_local_var->year_built = year_built;
    vessel_dto_local_var->shipping_courier_id = shipping_courier_id;
    vessel_dto_local_var->tenant_id = tenant_id;
    vessel_dto_local_var->enrollment_id = enrollment_id;

    return vessel_dto_local_var;
}


void vessel_dto_free(vessel_dto_t *vessel_dto) {
    if(NULL == vessel_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (vessel_dto->id) {
        free(vessel_dto->id);
        vessel_dto->id = NULL;
    }
    if (vessel_dto->timestamp) {
        free(vessel_dto->timestamp);
        vessel_dto->timestamp = NULL;
    }
    if (vessel_dto->name) {
        free(vessel_dto->name);
        vessel_dto->name = NULL;
    }
    if (vessel_dto->imo_number) {
        free(vessel_dto->imo_number);
        vessel_dto->imo_number = NULL;
    }
    if (vessel_dto->mmsi_number) {
        free(vessel_dto->mmsi_number);
        vessel_dto->mmsi_number = NULL;
    }
    if (vessel_dto->call_sign) {
        free(vessel_dto->call_sign);
        vessel_dto->call_sign = NULL;
    }
    if (vessel_dto->flag_country_id) {
        free(vessel_dto->flag_country_id);
        vessel_dto->flag_country_id = NULL;
    }
    if (vessel_dto->vessel_type) {
        free(vessel_dto->vessel_type);
        vessel_dto->vessel_type = NULL;
    }
    if (vessel_dto->vessel_status) {
        free(vessel_dto->vessel_status);
        vessel_dto->vessel_status = NULL;
    }
    if (vessel_dto->shipping_courier_id) {
        free(vessel_dto->shipping_courier_id);
        vessel_dto->shipping_courier_id = NULL;
    }
    if (vessel_dto->tenant_id) {
        free(vessel_dto->tenant_id);
        vessel_dto->tenant_id = NULL;
    }
    if (vessel_dto->enrollment_id) {
        free(vessel_dto->enrollment_id);
        vessel_dto->enrollment_id = NULL;
    }
    free(vessel_dto);
}

cJSON *vessel_dto_convertToJSON(vessel_dto_t *vessel_dto) {
    cJSON *item = cJSON_CreateObject();

    // vessel_dto->id
    if(vessel_dto->id) {
    if(cJSON_AddStringToObject(item, "id", vessel_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->timestamp
    if(vessel_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", vessel_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // vessel_dto->name
    if(vessel_dto->name) {
    if(cJSON_AddStringToObject(item, "name", vessel_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->imo_number
    if(vessel_dto->imo_number) {
    if(cJSON_AddStringToObject(item, "imoNumber", vessel_dto->imo_number) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->mmsi_number
    if(vessel_dto->mmsi_number) {
    if(cJSON_AddStringToObject(item, "mmsiNumber", vessel_dto->mmsi_number) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->call_sign
    if(vessel_dto->call_sign) {
    if(cJSON_AddStringToObject(item, "callSign", vessel_dto->call_sign) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->flag_country_id
    if(vessel_dto->flag_country_id) {
    if(cJSON_AddStringToObject(item, "flagCountryId", vessel_dto->flag_country_id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->vessel_type
    if(vessel_dto->vessel_type) {
    if(cJSON_AddStringToObject(item, "vesselType", vessel_dto->vessel_type) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->vessel_status
    if(vessel_dto->vessel_status) {
    if(cJSON_AddStringToObject(item, "vesselStatus", vessel_dto->vessel_status) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->gross_tonnage
    if(vessel_dto->gross_tonnage) {
    if(cJSON_AddNumberToObject(item, "grossTonnage", vessel_dto->gross_tonnage) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->deadweight_tonnage
    if(vessel_dto->deadweight_tonnage) {
    if(cJSON_AddNumberToObject(item, "deadweightTonnage", vessel_dto->deadweight_tonnage) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->teu_capacity
    if(vessel_dto->teu_capacity) {
    if(cJSON_AddNumberToObject(item, "teuCapacity", vessel_dto->teu_capacity) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->length_meters
    if(vessel_dto->length_meters) {
    if(cJSON_AddNumberToObject(item, "lengthMeters", vessel_dto->length_meters) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->beam_meters
    if(vessel_dto->beam_meters) {
    if(cJSON_AddNumberToObject(item, "beamMeters", vessel_dto->beam_meters) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->draft_meters
    if(vessel_dto->draft_meters) {
    if(cJSON_AddNumberToObject(item, "draftMeters", vessel_dto->draft_meters) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->year_built
    if(vessel_dto->year_built) {
    if(cJSON_AddNumberToObject(item, "yearBuilt", vessel_dto->year_built) == NULL) {
    goto fail; //Numeric
    }
    }


    // vessel_dto->shipping_courier_id
    if(vessel_dto->shipping_courier_id) {
    if(cJSON_AddStringToObject(item, "shippingCourierId", vessel_dto->shipping_courier_id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->tenant_id
    if(vessel_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", vessel_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto->enrollment_id
    if(vessel_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", vessel_dto->enrollment_id) == NULL) {
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

vessel_dto_t *vessel_dto_parseFromJSON(cJSON *vessel_dtoJSON){

    vessel_dto_t *vessel_dto_local_var = NULL;

    // vessel_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // vessel_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // vessel_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // vessel_dto->imo_number
    cJSON *imo_number = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "imoNumber");
    if (imo_number) { 
    if(!cJSON_IsString(imo_number) && !cJSON_IsNull(imo_number))
    {
    goto end; //String
    }
    }

    // vessel_dto->mmsi_number
    cJSON *mmsi_number = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "mmsiNumber");
    if (mmsi_number) { 
    if(!cJSON_IsString(mmsi_number) && !cJSON_IsNull(mmsi_number))
    {
    goto end; //String
    }
    }

    // vessel_dto->call_sign
    cJSON *call_sign = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "callSign");
    if (call_sign) { 
    if(!cJSON_IsString(call_sign) && !cJSON_IsNull(call_sign))
    {
    goto end; //String
    }
    }

    // vessel_dto->flag_country_id
    cJSON *flag_country_id = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "flagCountryId");
    if (flag_country_id) { 
    if(!cJSON_IsString(flag_country_id) && !cJSON_IsNull(flag_country_id))
    {
    goto end; //String
    }
    }

    // vessel_dto->vessel_type
    cJSON *vessel_type = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "vesselType");
    if (vessel_type) { 
    if(!cJSON_IsString(vessel_type) && !cJSON_IsNull(vessel_type))
    {
    goto end; //String
    }
    }

    // vessel_dto->vessel_status
    cJSON *vessel_status = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "vesselStatus");
    if (vessel_status) { 
    if(!cJSON_IsString(vessel_status) && !cJSON_IsNull(vessel_status))
    {
    goto end; //String
    }
    }

    // vessel_dto->gross_tonnage
    cJSON *gross_tonnage = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "grossTonnage");
    if (gross_tonnage) { 
    if(!cJSON_IsNumber(gross_tonnage))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->deadweight_tonnage
    cJSON *deadweight_tonnage = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "deadweightTonnage");
    if (deadweight_tonnage) { 
    if(!cJSON_IsNumber(deadweight_tonnage))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->teu_capacity
    cJSON *teu_capacity = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "teuCapacity");
    if (teu_capacity) { 
    if(!cJSON_IsNumber(teu_capacity))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->length_meters
    cJSON *length_meters = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "lengthMeters");
    if (length_meters) { 
    if(!cJSON_IsNumber(length_meters))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->beam_meters
    cJSON *beam_meters = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "beamMeters");
    if (beam_meters) { 
    if(!cJSON_IsNumber(beam_meters))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->draft_meters
    cJSON *draft_meters = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "draftMeters");
    if (draft_meters) { 
    if(!cJSON_IsNumber(draft_meters))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->year_built
    cJSON *year_built = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "yearBuilt");
    if (year_built) { 
    if(!cJSON_IsNumber(year_built))
    {
    goto end; //Numeric
    }
    }

    // vessel_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "shippingCourierId");
    if (shipping_courier_id) { 
    if(!cJSON_IsString(shipping_courier_id) && !cJSON_IsNull(shipping_courier_id))
    {
    goto end; //String
    }
    }

    // vessel_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // vessel_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(vessel_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    vessel_dto_local_var = vessel_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
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
        shipping_courier_id && !cJSON_IsNull(shipping_courier_id) ? strdup(shipping_courier_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return vessel_dto_local_var;
end:
    return NULL;

}
