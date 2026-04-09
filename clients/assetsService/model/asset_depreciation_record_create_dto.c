#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_depreciation_record_create_dto.h"



asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto_create(
    char *asset_id,
    char *asset_depreciation_policy_id,
    double depreciation_amount,
    double accumulated_depreciation,
    double book_value,
    char *depreciation_date,
    int year,
    int month
    ) {
    asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto_local_var = malloc(sizeof(asset_depreciation_record_create_dto_t));
    if (!asset_depreciation_record_create_dto_local_var) {
        return NULL;
    }
    asset_depreciation_record_create_dto_local_var->asset_id = asset_id;
    asset_depreciation_record_create_dto_local_var->asset_depreciation_policy_id = asset_depreciation_policy_id;
    asset_depreciation_record_create_dto_local_var->depreciation_amount = depreciation_amount;
    asset_depreciation_record_create_dto_local_var->accumulated_depreciation = accumulated_depreciation;
    asset_depreciation_record_create_dto_local_var->book_value = book_value;
    asset_depreciation_record_create_dto_local_var->depreciation_date = depreciation_date;
    asset_depreciation_record_create_dto_local_var->year = year;
    asset_depreciation_record_create_dto_local_var->month = month;

    return asset_depreciation_record_create_dto_local_var;
}


void asset_depreciation_record_create_dto_free(asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto) {
    if(NULL == asset_depreciation_record_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_depreciation_record_create_dto->asset_id) {
        free(asset_depreciation_record_create_dto->asset_id);
        asset_depreciation_record_create_dto->asset_id = NULL;
    }
    if (asset_depreciation_record_create_dto->asset_depreciation_policy_id) {
        free(asset_depreciation_record_create_dto->asset_depreciation_policy_id);
        asset_depreciation_record_create_dto->asset_depreciation_policy_id = NULL;
    }
    if (asset_depreciation_record_create_dto->depreciation_date) {
        free(asset_depreciation_record_create_dto->depreciation_date);
        asset_depreciation_record_create_dto->depreciation_date = NULL;
    }
    free(asset_depreciation_record_create_dto);
}

cJSON *asset_depreciation_record_create_dto_convertToJSON(asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_depreciation_record_create_dto->asset_id
    if(asset_depreciation_record_create_dto->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", asset_depreciation_record_create_dto->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_create_dto->asset_depreciation_policy_id
    if(asset_depreciation_record_create_dto->asset_depreciation_policy_id) {
    if(cJSON_AddStringToObject(item, "assetDepreciationPolicyId", asset_depreciation_record_create_dto->asset_depreciation_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_create_dto->depreciation_amount
    if(asset_depreciation_record_create_dto->depreciation_amount) {
    if(cJSON_AddNumberToObject(item, "depreciationAmount", asset_depreciation_record_create_dto->depreciation_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_create_dto->accumulated_depreciation
    if(asset_depreciation_record_create_dto->accumulated_depreciation) {
    if(cJSON_AddNumberToObject(item, "accumulatedDepreciation", asset_depreciation_record_create_dto->accumulated_depreciation) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_create_dto->book_value
    if(asset_depreciation_record_create_dto->book_value) {
    if(cJSON_AddNumberToObject(item, "bookValue", asset_depreciation_record_create_dto->book_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_create_dto->depreciation_date
    if(asset_depreciation_record_create_dto->depreciation_date) {
    if(cJSON_AddStringToObject(item, "depreciationDate", asset_depreciation_record_create_dto->depreciation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_depreciation_record_create_dto->year
    if(asset_depreciation_record_create_dto->year) {
    if(cJSON_AddNumberToObject(item, "year", asset_depreciation_record_create_dto->year) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_create_dto->month
    if(asset_depreciation_record_create_dto->month) {
    if(cJSON_AddNumberToObject(item, "month", asset_depreciation_record_create_dto->month) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto_parseFromJSON(cJSON *asset_depreciation_record_create_dtoJSON){

    asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto_local_var = NULL;

    // asset_depreciation_record_create_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "assetId");
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_create_dto->asset_depreciation_policy_id
    cJSON *asset_depreciation_policy_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "assetDepreciationPolicyId");
    if (asset_depreciation_policy_id) { 
    if(!cJSON_IsString(asset_depreciation_policy_id) && !cJSON_IsNull(asset_depreciation_policy_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_create_dto->depreciation_amount
    cJSON *depreciation_amount = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "depreciationAmount");
    if (depreciation_amount) { 
    if(!cJSON_IsNumber(depreciation_amount))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_create_dto->accumulated_depreciation
    cJSON *accumulated_depreciation = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "accumulatedDepreciation");
    if (accumulated_depreciation) { 
    if(!cJSON_IsNumber(accumulated_depreciation))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_create_dto->book_value
    cJSON *book_value = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "bookValue");
    if (book_value) { 
    if(!cJSON_IsNumber(book_value))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_create_dto->depreciation_date
    cJSON *depreciation_date = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "depreciationDate");
    if (depreciation_date) { 
    if(!cJSON_IsString(depreciation_date) && !cJSON_IsNull(depreciation_date))
    {
    goto end; //DateTime
    }
    }

    // asset_depreciation_record_create_dto->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "year");
    if (year) { 
    if(!cJSON_IsNumber(year))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_create_dto->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_create_dtoJSON, "month");
    if (month) { 
    if(!cJSON_IsNumber(month))
    {
    goto end; //Numeric
    }
    }


    asset_depreciation_record_create_dto_local_var = asset_depreciation_record_create_dto_create (
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        asset_depreciation_policy_id && !cJSON_IsNull(asset_depreciation_policy_id) ? strdup(asset_depreciation_policy_id->valuestring) : NULL,
        depreciation_amount ? depreciation_amount->valuedouble : 0,
        accumulated_depreciation ? accumulated_depreciation->valuedouble : 0,
        book_value ? book_value->valuedouble : 0,
        depreciation_date && !cJSON_IsNull(depreciation_date) ? strdup(depreciation_date->valuestring) : NULL,
        year ? year->valuedouble : 0,
        month ? month->valuedouble : 0
        );

    return asset_depreciation_record_create_dto_local_var;
end:
    return NULL;

}
