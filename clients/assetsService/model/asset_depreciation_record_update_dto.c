#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_depreciation_record_update_dto.h"



asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto_create(
    double depreciation_amount,
    double accumulated_depreciation,
    double book_value,
    char *depreciation_date,
    int year,
    int month
    ) {
    asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto_local_var = malloc(sizeof(asset_depreciation_record_update_dto_t));
    if (!asset_depreciation_record_update_dto_local_var) {
        return NULL;
    }
    asset_depreciation_record_update_dto_local_var->depreciation_amount = depreciation_amount;
    asset_depreciation_record_update_dto_local_var->accumulated_depreciation = accumulated_depreciation;
    asset_depreciation_record_update_dto_local_var->book_value = book_value;
    asset_depreciation_record_update_dto_local_var->depreciation_date = depreciation_date;
    asset_depreciation_record_update_dto_local_var->year = year;
    asset_depreciation_record_update_dto_local_var->month = month;

    return asset_depreciation_record_update_dto_local_var;
}


void asset_depreciation_record_update_dto_free(asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto) {
    if(NULL == asset_depreciation_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_depreciation_record_update_dto->depreciation_date) {
        free(asset_depreciation_record_update_dto->depreciation_date);
        asset_depreciation_record_update_dto->depreciation_date = NULL;
    }
    free(asset_depreciation_record_update_dto);
}

cJSON *asset_depreciation_record_update_dto_convertToJSON(asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_depreciation_record_update_dto->depreciation_amount
    if(asset_depreciation_record_update_dto->depreciation_amount) {
    if(cJSON_AddNumberToObject(item, "depreciationAmount", asset_depreciation_record_update_dto->depreciation_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_update_dto->accumulated_depreciation
    if(asset_depreciation_record_update_dto->accumulated_depreciation) {
    if(cJSON_AddNumberToObject(item, "accumulatedDepreciation", asset_depreciation_record_update_dto->accumulated_depreciation) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_update_dto->book_value
    if(asset_depreciation_record_update_dto->book_value) {
    if(cJSON_AddNumberToObject(item, "bookValue", asset_depreciation_record_update_dto->book_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_update_dto->depreciation_date
    if(asset_depreciation_record_update_dto->depreciation_date) {
    if(cJSON_AddStringToObject(item, "depreciationDate", asset_depreciation_record_update_dto->depreciation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_depreciation_record_update_dto->year
    if(asset_depreciation_record_update_dto->year) {
    if(cJSON_AddNumberToObject(item, "year", asset_depreciation_record_update_dto->year) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_update_dto->month
    if(asset_depreciation_record_update_dto->month) {
    if(cJSON_AddNumberToObject(item, "month", asset_depreciation_record_update_dto->month) == NULL) {
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

asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto_parseFromJSON(cJSON *asset_depreciation_record_update_dtoJSON){

    asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto_local_var = NULL;

    // asset_depreciation_record_update_dto->depreciation_amount
    cJSON *depreciation_amount = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_update_dtoJSON, "depreciationAmount");
    if (depreciation_amount) { 
    if(!cJSON_IsNumber(depreciation_amount))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_update_dto->accumulated_depreciation
    cJSON *accumulated_depreciation = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_update_dtoJSON, "accumulatedDepreciation");
    if (accumulated_depreciation) { 
    if(!cJSON_IsNumber(accumulated_depreciation))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_update_dto->book_value
    cJSON *book_value = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_update_dtoJSON, "bookValue");
    if (book_value) { 
    if(!cJSON_IsNumber(book_value))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_update_dto->depreciation_date
    cJSON *depreciation_date = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_update_dtoJSON, "depreciationDate");
    if (depreciation_date) { 
    if(!cJSON_IsString(depreciation_date) && !cJSON_IsNull(depreciation_date))
    {
    goto end; //DateTime
    }
    }

    // asset_depreciation_record_update_dto->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_update_dtoJSON, "year");
    if (year) { 
    if(!cJSON_IsNumber(year))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_update_dto->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_update_dtoJSON, "month");
    if (month) { 
    if(!cJSON_IsNumber(month))
    {
    goto end; //Numeric
    }
    }


    asset_depreciation_record_update_dto_local_var = asset_depreciation_record_update_dto_create (
        depreciation_amount ? depreciation_amount->valuedouble : 0,
        accumulated_depreciation ? accumulated_depreciation->valuedouble : 0,
        book_value ? book_value->valuedouble : 0,
        depreciation_date && !cJSON_IsNull(depreciation_date) ? strdup(depreciation_date->valuestring) : NULL,
        year ? year->valuedouble : 0,
        month ? month->valuedouble : 0
        );

    return asset_depreciation_record_update_dto_local_var;
end:
    return NULL;

}
