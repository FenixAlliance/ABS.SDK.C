#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "truck_dto.h"



truck_dto_t *truck_dto_create(
    char *id,
    char *timestamp,
    char *plate_number,
    char *name,
    char *truck_type,
    double max_payload_kg,
    int teu_capacity,
    char *driver_name,
    char *driver_phone,
    char *driver_license_number,
    int is_active,
    int is_refrigerated,
    char *shipping_courier_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    truck_dto_t *truck_dto_local_var = malloc(sizeof(truck_dto_t));
    if (!truck_dto_local_var) {
        return NULL;
    }
    truck_dto_local_var->id = id;
    truck_dto_local_var->timestamp = timestamp;
    truck_dto_local_var->plate_number = plate_number;
    truck_dto_local_var->name = name;
    truck_dto_local_var->truck_type = truck_type;
    truck_dto_local_var->max_payload_kg = max_payload_kg;
    truck_dto_local_var->teu_capacity = teu_capacity;
    truck_dto_local_var->driver_name = driver_name;
    truck_dto_local_var->driver_phone = driver_phone;
    truck_dto_local_var->driver_license_number = driver_license_number;
    truck_dto_local_var->is_active = is_active;
    truck_dto_local_var->is_refrigerated = is_refrigerated;
    truck_dto_local_var->shipping_courier_id = shipping_courier_id;
    truck_dto_local_var->tenant_id = tenant_id;
    truck_dto_local_var->enrollment_id = enrollment_id;

    return truck_dto_local_var;
}


void truck_dto_free(truck_dto_t *truck_dto) {
    if(NULL == truck_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (truck_dto->id) {
        free(truck_dto->id);
        truck_dto->id = NULL;
    }
    if (truck_dto->timestamp) {
        free(truck_dto->timestamp);
        truck_dto->timestamp = NULL;
    }
    if (truck_dto->plate_number) {
        free(truck_dto->plate_number);
        truck_dto->plate_number = NULL;
    }
    if (truck_dto->name) {
        free(truck_dto->name);
        truck_dto->name = NULL;
    }
    if (truck_dto->truck_type) {
        free(truck_dto->truck_type);
        truck_dto->truck_type = NULL;
    }
    if (truck_dto->driver_name) {
        free(truck_dto->driver_name);
        truck_dto->driver_name = NULL;
    }
    if (truck_dto->driver_phone) {
        free(truck_dto->driver_phone);
        truck_dto->driver_phone = NULL;
    }
    if (truck_dto->driver_license_number) {
        free(truck_dto->driver_license_number);
        truck_dto->driver_license_number = NULL;
    }
    if (truck_dto->shipping_courier_id) {
        free(truck_dto->shipping_courier_id);
        truck_dto->shipping_courier_id = NULL;
    }
    if (truck_dto->tenant_id) {
        free(truck_dto->tenant_id);
        truck_dto->tenant_id = NULL;
    }
    if (truck_dto->enrollment_id) {
        free(truck_dto->enrollment_id);
        truck_dto->enrollment_id = NULL;
    }
    free(truck_dto);
}

cJSON *truck_dto_convertToJSON(truck_dto_t *truck_dto) {
    cJSON *item = cJSON_CreateObject();

    // truck_dto->id
    if(truck_dto->id) {
    if(cJSON_AddStringToObject(item, "id", truck_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->timestamp
    if(truck_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", truck_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_dto->plate_number
    if(truck_dto->plate_number) {
    if(cJSON_AddStringToObject(item, "plateNumber", truck_dto->plate_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->name
    if(truck_dto->name) {
    if(cJSON_AddStringToObject(item, "name", truck_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->truck_type
    if(truck_dto->truck_type) {
    if(cJSON_AddStringToObject(item, "truckType", truck_dto->truck_type) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->max_payload_kg
    if(truck_dto->max_payload_kg) {
    if(cJSON_AddNumberToObject(item, "maxPayloadKg", truck_dto->max_payload_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // truck_dto->teu_capacity
    if(truck_dto->teu_capacity) {
    if(cJSON_AddNumberToObject(item, "teuCapacity", truck_dto->teu_capacity) == NULL) {
    goto fail; //Numeric
    }
    }


    // truck_dto->driver_name
    if(truck_dto->driver_name) {
    if(cJSON_AddStringToObject(item, "driverName", truck_dto->driver_name) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->driver_phone
    if(truck_dto->driver_phone) {
    if(cJSON_AddStringToObject(item, "driverPhone", truck_dto->driver_phone) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->driver_license_number
    if(truck_dto->driver_license_number) {
    if(cJSON_AddStringToObject(item, "driverLicenseNumber", truck_dto->driver_license_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->is_active
    if(truck_dto->is_active) {
    if(cJSON_AddBoolToObject(item, "isActive", truck_dto->is_active) == NULL) {
    goto fail; //Bool
    }
    }


    // truck_dto->is_refrigerated
    if(truck_dto->is_refrigerated) {
    if(cJSON_AddBoolToObject(item, "isRefrigerated", truck_dto->is_refrigerated) == NULL) {
    goto fail; //Bool
    }
    }


    // truck_dto->shipping_courier_id
    if(truck_dto->shipping_courier_id) {
    if(cJSON_AddStringToObject(item, "shippingCourierId", truck_dto->shipping_courier_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->tenant_id
    if(truck_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", truck_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_dto->enrollment_id
    if(truck_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", truck_dto->enrollment_id) == NULL) {
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

truck_dto_t *truck_dto_parseFromJSON(cJSON *truck_dtoJSON){

    truck_dto_t *truck_dto_local_var = NULL;

    // truck_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // truck_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // truck_dto->plate_number
    cJSON *plate_number = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "plateNumber");
    if (plate_number) { 
    if(!cJSON_IsString(plate_number) && !cJSON_IsNull(plate_number))
    {
    goto end; //String
    }
    }

    // truck_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // truck_dto->truck_type
    cJSON *truck_type = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "truckType");
    if (truck_type) { 
    if(!cJSON_IsString(truck_type) && !cJSON_IsNull(truck_type))
    {
    goto end; //String
    }
    }

    // truck_dto->max_payload_kg
    cJSON *max_payload_kg = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "maxPayloadKg");
    if (max_payload_kg) { 
    if(!cJSON_IsNumber(max_payload_kg))
    {
    goto end; //Numeric
    }
    }

    // truck_dto->teu_capacity
    cJSON *teu_capacity = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "teuCapacity");
    if (teu_capacity) { 
    if(!cJSON_IsNumber(teu_capacity))
    {
    goto end; //Numeric
    }
    }

    // truck_dto->driver_name
    cJSON *driver_name = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "driverName");
    if (driver_name) { 
    if(!cJSON_IsString(driver_name) && !cJSON_IsNull(driver_name))
    {
    goto end; //String
    }
    }

    // truck_dto->driver_phone
    cJSON *driver_phone = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "driverPhone");
    if (driver_phone) { 
    if(!cJSON_IsString(driver_phone) && !cJSON_IsNull(driver_phone))
    {
    goto end; //String
    }
    }

    // truck_dto->driver_license_number
    cJSON *driver_license_number = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "driverLicenseNumber");
    if (driver_license_number) { 
    if(!cJSON_IsString(driver_license_number) && !cJSON_IsNull(driver_license_number))
    {
    goto end; //String
    }
    }

    // truck_dto->is_active
    cJSON *is_active = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "isActive");
    if (is_active) { 
    if(!cJSON_IsBool(is_active))
    {
    goto end; //Bool
    }
    }

    // truck_dto->is_refrigerated
    cJSON *is_refrigerated = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "isRefrigerated");
    if (is_refrigerated) { 
    if(!cJSON_IsBool(is_refrigerated))
    {
    goto end; //Bool
    }
    }

    // truck_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "shippingCourierId");
    if (shipping_courier_id) { 
    if(!cJSON_IsString(shipping_courier_id) && !cJSON_IsNull(shipping_courier_id))
    {
    goto end; //String
    }
    }

    // truck_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // truck_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(truck_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    truck_dto_local_var = truck_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        plate_number && !cJSON_IsNull(plate_number) ? strdup(plate_number->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        truck_type && !cJSON_IsNull(truck_type) ? strdup(truck_type->valuestring) : NULL,
        max_payload_kg ? max_payload_kg->valuedouble : 0,
        teu_capacity ? teu_capacity->valuedouble : 0,
        driver_name && !cJSON_IsNull(driver_name) ? strdup(driver_name->valuestring) : NULL,
        driver_phone && !cJSON_IsNull(driver_phone) ? strdup(driver_phone->valuestring) : NULL,
        driver_license_number && !cJSON_IsNull(driver_license_number) ? strdup(driver_license_number->valuestring) : NULL,
        is_active ? is_active->valueint : 0,
        is_refrigerated ? is_refrigerated->valueint : 0,
        shipping_courier_id && !cJSON_IsNull(shipping_courier_id) ? strdup(shipping_courier_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return truck_dto_local_var;
end:
    return NULL;

}
