#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bill_of_lading_line_update_dto.h"



bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto_create(
    char *description,
    double quantity,
    char *package_type,
    double gross_weight_kg,
    double volume_m3,
    char *marks_and_numbers,
    char *hs_code,
    char *item_id
    ) {
    bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto_local_var = malloc(sizeof(bill_of_lading_line_update_dto_t));
    if (!bill_of_lading_line_update_dto_local_var) {
        return NULL;
    }
    bill_of_lading_line_update_dto_local_var->description = description;
    bill_of_lading_line_update_dto_local_var->quantity = quantity;
    bill_of_lading_line_update_dto_local_var->package_type = package_type;
    bill_of_lading_line_update_dto_local_var->gross_weight_kg = gross_weight_kg;
    bill_of_lading_line_update_dto_local_var->volume_m3 = volume_m3;
    bill_of_lading_line_update_dto_local_var->marks_and_numbers = marks_and_numbers;
    bill_of_lading_line_update_dto_local_var->hs_code = hs_code;
    bill_of_lading_line_update_dto_local_var->item_id = item_id;

    return bill_of_lading_line_update_dto_local_var;
}


void bill_of_lading_line_update_dto_free(bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto) {
    if(NULL == bill_of_lading_line_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bill_of_lading_line_update_dto->description) {
        free(bill_of_lading_line_update_dto->description);
        bill_of_lading_line_update_dto->description = NULL;
    }
    if (bill_of_lading_line_update_dto->package_type) {
        free(bill_of_lading_line_update_dto->package_type);
        bill_of_lading_line_update_dto->package_type = NULL;
    }
    if (bill_of_lading_line_update_dto->marks_and_numbers) {
        free(bill_of_lading_line_update_dto->marks_and_numbers);
        bill_of_lading_line_update_dto->marks_and_numbers = NULL;
    }
    if (bill_of_lading_line_update_dto->hs_code) {
        free(bill_of_lading_line_update_dto->hs_code);
        bill_of_lading_line_update_dto->hs_code = NULL;
    }
    if (bill_of_lading_line_update_dto->item_id) {
        free(bill_of_lading_line_update_dto->item_id);
        bill_of_lading_line_update_dto->item_id = NULL;
    }
    free(bill_of_lading_line_update_dto);
}

cJSON *bill_of_lading_line_update_dto_convertToJSON(bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // bill_of_lading_line_update_dto->description
    if(bill_of_lading_line_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", bill_of_lading_line_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_line_update_dto->quantity
    if(bill_of_lading_line_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", bill_of_lading_line_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_line_update_dto->package_type
    if(bill_of_lading_line_update_dto->package_type) {
    if(cJSON_AddStringToObject(item, "packageType", bill_of_lading_line_update_dto->package_type) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_line_update_dto->gross_weight_kg
    if(bill_of_lading_line_update_dto->gross_weight_kg) {
    if(cJSON_AddNumberToObject(item, "grossWeightKg", bill_of_lading_line_update_dto->gross_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_line_update_dto->volume_m3
    if(bill_of_lading_line_update_dto->volume_m3) {
    if(cJSON_AddNumberToObject(item, "volumeM3", bill_of_lading_line_update_dto->volume_m3) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_line_update_dto->marks_and_numbers
    if(bill_of_lading_line_update_dto->marks_and_numbers) {
    if(cJSON_AddStringToObject(item, "marksAndNumbers", bill_of_lading_line_update_dto->marks_and_numbers) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_line_update_dto->hs_code
    if(bill_of_lading_line_update_dto->hs_code) {
    if(cJSON_AddStringToObject(item, "hsCode", bill_of_lading_line_update_dto->hs_code) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_line_update_dto->item_id
    if(bill_of_lading_line_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", bill_of_lading_line_update_dto->item_id) == NULL) {
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

bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto_parseFromJSON(cJSON *bill_of_lading_line_update_dtoJSON){

    bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto_local_var = NULL;

    // bill_of_lading_line_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // bill_of_lading_line_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_line_update_dto->package_type
    cJSON *package_type = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "packageType");
    if (package_type) { 
    if(!cJSON_IsString(package_type) && !cJSON_IsNull(package_type))
    {
    goto end; //String
    }
    }

    // bill_of_lading_line_update_dto->gross_weight_kg
    cJSON *gross_weight_kg = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "grossWeightKg");
    if (gross_weight_kg) { 
    if(!cJSON_IsNumber(gross_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_line_update_dto->volume_m3
    cJSON *volume_m3 = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "volumeM3");
    if (volume_m3) { 
    if(!cJSON_IsNumber(volume_m3))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_line_update_dto->marks_and_numbers
    cJSON *marks_and_numbers = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "marksAndNumbers");
    if (marks_and_numbers) { 
    if(!cJSON_IsString(marks_and_numbers) && !cJSON_IsNull(marks_and_numbers))
    {
    goto end; //String
    }
    }

    // bill_of_lading_line_update_dto->hs_code
    cJSON *hs_code = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "hsCode");
    if (hs_code) { 
    if(!cJSON_IsString(hs_code) && !cJSON_IsNull(hs_code))
    {
    goto end; //String
    }
    }

    // bill_of_lading_line_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_line_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    bill_of_lading_line_update_dto_local_var = bill_of_lading_line_update_dto_create (
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        package_type && !cJSON_IsNull(package_type) ? strdup(package_type->valuestring) : NULL,
        gross_weight_kg ? gross_weight_kg->valuedouble : 0,
        volume_m3 ? volume_m3->valuedouble : 0,
        marks_and_numbers && !cJSON_IsNull(marks_and_numbers) ? strdup(marks_and_numbers->valuestring) : NULL,
        hs_code && !cJSON_IsNull(hs_code) ? strdup(hs_code->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return bill_of_lading_line_update_dto_local_var;
end:
    return NULL;

}
