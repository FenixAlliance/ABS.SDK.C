#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "waybill_line_create_dto.h"



waybill_line_create_dto_t *waybill_line_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    int quantity,
    double gross_weight_kg,
    double volume_m3,
    char *package_type,
    double length_cm,
    double width_cm,
    double height_cm,
    char *hs_code,
    char *marks_and_numbers,
    double declared_value,
    char *declared_value_currency_id,
    char *seal_number,
    char *container_number,
    double chargeable_weight_kg,
    char *iata_rate_class,
    char *dangerous_goods_class,
    char *un_hazmat_number,
    char *wagon_number
    ) {
    waybill_line_create_dto_t *waybill_line_create_dto_local_var = malloc(sizeof(waybill_line_create_dto_t));
    if (!waybill_line_create_dto_local_var) {
        return NULL;
    }
    waybill_line_create_dto_local_var->id = id;
    waybill_line_create_dto_local_var->timestamp = timestamp;
    waybill_line_create_dto_local_var->description = description;
    waybill_line_create_dto_local_var->quantity = quantity;
    waybill_line_create_dto_local_var->gross_weight_kg = gross_weight_kg;
    waybill_line_create_dto_local_var->volume_m3 = volume_m3;
    waybill_line_create_dto_local_var->package_type = package_type;
    waybill_line_create_dto_local_var->length_cm = length_cm;
    waybill_line_create_dto_local_var->width_cm = width_cm;
    waybill_line_create_dto_local_var->height_cm = height_cm;
    waybill_line_create_dto_local_var->hs_code = hs_code;
    waybill_line_create_dto_local_var->marks_and_numbers = marks_and_numbers;
    waybill_line_create_dto_local_var->declared_value = declared_value;
    waybill_line_create_dto_local_var->declared_value_currency_id = declared_value_currency_id;
    waybill_line_create_dto_local_var->seal_number = seal_number;
    waybill_line_create_dto_local_var->container_number = container_number;
    waybill_line_create_dto_local_var->chargeable_weight_kg = chargeable_weight_kg;
    waybill_line_create_dto_local_var->iata_rate_class = iata_rate_class;
    waybill_line_create_dto_local_var->dangerous_goods_class = dangerous_goods_class;
    waybill_line_create_dto_local_var->un_hazmat_number = un_hazmat_number;
    waybill_line_create_dto_local_var->wagon_number = wagon_number;

    return waybill_line_create_dto_local_var;
}


void waybill_line_create_dto_free(waybill_line_create_dto_t *waybill_line_create_dto) {
    if(NULL == waybill_line_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (waybill_line_create_dto->id) {
        free(waybill_line_create_dto->id);
        waybill_line_create_dto->id = NULL;
    }
    if (waybill_line_create_dto->timestamp) {
        free(waybill_line_create_dto->timestamp);
        waybill_line_create_dto->timestamp = NULL;
    }
    if (waybill_line_create_dto->description) {
        free(waybill_line_create_dto->description);
        waybill_line_create_dto->description = NULL;
    }
    if (waybill_line_create_dto->package_type) {
        free(waybill_line_create_dto->package_type);
        waybill_line_create_dto->package_type = NULL;
    }
    if (waybill_line_create_dto->hs_code) {
        free(waybill_line_create_dto->hs_code);
        waybill_line_create_dto->hs_code = NULL;
    }
    if (waybill_line_create_dto->marks_and_numbers) {
        free(waybill_line_create_dto->marks_and_numbers);
        waybill_line_create_dto->marks_and_numbers = NULL;
    }
    if (waybill_line_create_dto->declared_value_currency_id) {
        free(waybill_line_create_dto->declared_value_currency_id);
        waybill_line_create_dto->declared_value_currency_id = NULL;
    }
    if (waybill_line_create_dto->seal_number) {
        free(waybill_line_create_dto->seal_number);
        waybill_line_create_dto->seal_number = NULL;
    }
    if (waybill_line_create_dto->container_number) {
        free(waybill_line_create_dto->container_number);
        waybill_line_create_dto->container_number = NULL;
    }
    if (waybill_line_create_dto->iata_rate_class) {
        free(waybill_line_create_dto->iata_rate_class);
        waybill_line_create_dto->iata_rate_class = NULL;
    }
    if (waybill_line_create_dto->dangerous_goods_class) {
        free(waybill_line_create_dto->dangerous_goods_class);
        waybill_line_create_dto->dangerous_goods_class = NULL;
    }
    if (waybill_line_create_dto->un_hazmat_number) {
        free(waybill_line_create_dto->un_hazmat_number);
        waybill_line_create_dto->un_hazmat_number = NULL;
    }
    if (waybill_line_create_dto->wagon_number) {
        free(waybill_line_create_dto->wagon_number);
        waybill_line_create_dto->wagon_number = NULL;
    }
    free(waybill_line_create_dto);
}

cJSON *waybill_line_create_dto_convertToJSON(waybill_line_create_dto_t *waybill_line_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // waybill_line_create_dto->id
    if(waybill_line_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", waybill_line_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->timestamp
    if(waybill_line_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", waybill_line_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // waybill_line_create_dto->description
    if(waybill_line_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", waybill_line_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->quantity
    if(waybill_line_create_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", waybill_line_create_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->gross_weight_kg
    if(waybill_line_create_dto->gross_weight_kg) {
    if(cJSON_AddNumberToObject(item, "grossWeightKg", waybill_line_create_dto->gross_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->volume_m3
    if(waybill_line_create_dto->volume_m3) {
    if(cJSON_AddNumberToObject(item, "volumeM3", waybill_line_create_dto->volume_m3) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->package_type
    if(waybill_line_create_dto->package_type) {
    if(cJSON_AddStringToObject(item, "packageType", waybill_line_create_dto->package_type) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->length_cm
    if(waybill_line_create_dto->length_cm) {
    if(cJSON_AddNumberToObject(item, "lengthCm", waybill_line_create_dto->length_cm) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->width_cm
    if(waybill_line_create_dto->width_cm) {
    if(cJSON_AddNumberToObject(item, "widthCm", waybill_line_create_dto->width_cm) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->height_cm
    if(waybill_line_create_dto->height_cm) {
    if(cJSON_AddNumberToObject(item, "heightCm", waybill_line_create_dto->height_cm) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->hs_code
    if(waybill_line_create_dto->hs_code) {
    if(cJSON_AddStringToObject(item, "hsCode", waybill_line_create_dto->hs_code) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->marks_and_numbers
    if(waybill_line_create_dto->marks_and_numbers) {
    if(cJSON_AddStringToObject(item, "marksAndNumbers", waybill_line_create_dto->marks_and_numbers) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->declared_value
    if(waybill_line_create_dto->declared_value) {
    if(cJSON_AddNumberToObject(item, "declaredValue", waybill_line_create_dto->declared_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->declared_value_currency_id
    if(waybill_line_create_dto->declared_value_currency_id) {
    if(cJSON_AddStringToObject(item, "declaredValueCurrencyId", waybill_line_create_dto->declared_value_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->seal_number
    if(waybill_line_create_dto->seal_number) {
    if(cJSON_AddStringToObject(item, "sealNumber", waybill_line_create_dto->seal_number) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->container_number
    if(waybill_line_create_dto->container_number) {
    if(cJSON_AddStringToObject(item, "containerNumber", waybill_line_create_dto->container_number) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->chargeable_weight_kg
    if(waybill_line_create_dto->chargeable_weight_kg) {
    if(cJSON_AddNumberToObject(item, "chargeableWeightKg", waybill_line_create_dto->chargeable_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // waybill_line_create_dto->iata_rate_class
    if(waybill_line_create_dto->iata_rate_class) {
    if(cJSON_AddStringToObject(item, "iataRateClass", waybill_line_create_dto->iata_rate_class) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->dangerous_goods_class
    if(waybill_line_create_dto->dangerous_goods_class) {
    if(cJSON_AddStringToObject(item, "dangerousGoodsClass", waybill_line_create_dto->dangerous_goods_class) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->un_hazmat_number
    if(waybill_line_create_dto->un_hazmat_number) {
    if(cJSON_AddStringToObject(item, "unHazmatNumber", waybill_line_create_dto->un_hazmat_number) == NULL) {
    goto fail; //String
    }
    }


    // waybill_line_create_dto->wagon_number
    if(waybill_line_create_dto->wagon_number) {
    if(cJSON_AddStringToObject(item, "wagonNumber", waybill_line_create_dto->wagon_number) == NULL) {
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

waybill_line_create_dto_t *waybill_line_create_dto_parseFromJSON(cJSON *waybill_line_create_dtoJSON){

    waybill_line_create_dto_t *waybill_line_create_dto_local_var = NULL;

    // waybill_line_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // waybill_line_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->gross_weight_kg
    cJSON *gross_weight_kg = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "grossWeightKg");
    if (gross_weight_kg) { 
    if(!cJSON_IsNumber(gross_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->volume_m3
    cJSON *volume_m3 = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "volumeM3");
    if (volume_m3) { 
    if(!cJSON_IsNumber(volume_m3))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->package_type
    cJSON *package_type = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "packageType");
    if (package_type) { 
    if(!cJSON_IsString(package_type) && !cJSON_IsNull(package_type))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->length_cm
    cJSON *length_cm = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "lengthCm");
    if (length_cm) { 
    if(!cJSON_IsNumber(length_cm))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->width_cm
    cJSON *width_cm = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "widthCm");
    if (width_cm) { 
    if(!cJSON_IsNumber(width_cm))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->height_cm
    cJSON *height_cm = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "heightCm");
    if (height_cm) { 
    if(!cJSON_IsNumber(height_cm))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->hs_code
    cJSON *hs_code = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "hsCode");
    if (hs_code) { 
    if(!cJSON_IsString(hs_code) && !cJSON_IsNull(hs_code))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->marks_and_numbers
    cJSON *marks_and_numbers = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "marksAndNumbers");
    if (marks_and_numbers) { 
    if(!cJSON_IsString(marks_and_numbers) && !cJSON_IsNull(marks_and_numbers))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->declared_value
    cJSON *declared_value = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "declaredValue");
    if (declared_value) { 
    if(!cJSON_IsNumber(declared_value))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->declared_value_currency_id
    cJSON *declared_value_currency_id = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "declaredValueCurrencyId");
    if (declared_value_currency_id) { 
    if(!cJSON_IsString(declared_value_currency_id) && !cJSON_IsNull(declared_value_currency_id))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->seal_number
    cJSON *seal_number = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "sealNumber");
    if (seal_number) { 
    if(!cJSON_IsString(seal_number) && !cJSON_IsNull(seal_number))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->container_number
    cJSON *container_number = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "containerNumber");
    if (container_number) { 
    if(!cJSON_IsString(container_number) && !cJSON_IsNull(container_number))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->chargeable_weight_kg
    cJSON *chargeable_weight_kg = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "chargeableWeightKg");
    if (chargeable_weight_kg) { 
    if(!cJSON_IsNumber(chargeable_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // waybill_line_create_dto->iata_rate_class
    cJSON *iata_rate_class = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "iataRateClass");
    if (iata_rate_class) { 
    if(!cJSON_IsString(iata_rate_class) && !cJSON_IsNull(iata_rate_class))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->dangerous_goods_class
    cJSON *dangerous_goods_class = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "dangerousGoodsClass");
    if (dangerous_goods_class) { 
    if(!cJSON_IsString(dangerous_goods_class) && !cJSON_IsNull(dangerous_goods_class))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->un_hazmat_number
    cJSON *un_hazmat_number = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "unHazmatNumber");
    if (un_hazmat_number) { 
    if(!cJSON_IsString(un_hazmat_number) && !cJSON_IsNull(un_hazmat_number))
    {
    goto end; //String
    }
    }

    // waybill_line_create_dto->wagon_number
    cJSON *wagon_number = cJSON_GetObjectItemCaseSensitive(waybill_line_create_dtoJSON, "wagonNumber");
    if (wagon_number) { 
    if(!cJSON_IsString(wagon_number) && !cJSON_IsNull(wagon_number))
    {
    goto end; //String
    }
    }


    waybill_line_create_dto_local_var = waybill_line_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        gross_weight_kg ? gross_weight_kg->valuedouble : 0,
        volume_m3 ? volume_m3->valuedouble : 0,
        package_type && !cJSON_IsNull(package_type) ? strdup(package_type->valuestring) : NULL,
        length_cm ? length_cm->valuedouble : 0,
        width_cm ? width_cm->valuedouble : 0,
        height_cm ? height_cm->valuedouble : 0,
        hs_code && !cJSON_IsNull(hs_code) ? strdup(hs_code->valuestring) : NULL,
        marks_and_numbers && !cJSON_IsNull(marks_and_numbers) ? strdup(marks_and_numbers->valuestring) : NULL,
        declared_value ? declared_value->valuedouble : 0,
        declared_value_currency_id && !cJSON_IsNull(declared_value_currency_id) ? strdup(declared_value_currency_id->valuestring) : NULL,
        seal_number && !cJSON_IsNull(seal_number) ? strdup(seal_number->valuestring) : NULL,
        container_number && !cJSON_IsNull(container_number) ? strdup(container_number->valuestring) : NULL,
        chargeable_weight_kg ? chargeable_weight_kg->valuedouble : 0,
        iata_rate_class && !cJSON_IsNull(iata_rate_class) ? strdup(iata_rate_class->valuestring) : NULL,
        dangerous_goods_class && !cJSON_IsNull(dangerous_goods_class) ? strdup(dangerous_goods_class->valuestring) : NULL,
        un_hazmat_number && !cJSON_IsNull(un_hazmat_number) ? strdup(un_hazmat_number->valuestring) : NULL,
        wagon_number && !cJSON_IsNull(wagon_number) ? strdup(wagon_number->valuestring) : NULL
        );

    return waybill_line_create_dto_local_var;
end:
    return NULL;

}
