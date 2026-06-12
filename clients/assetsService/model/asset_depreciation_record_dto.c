#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_depreciation_record_dto.h"



asset_depreciation_record_dto_t *asset_depreciation_record_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *asset_id,
    char *asset_name,
    char *asset_depreciation_policy_id,
    char *asset_depreciation_policy_name,
    char *financial_book_id,
    char *start_date,
    int total_depreciations,
    int depreciation_frequency,
    double depreciation_rate,
    double expected_value_aul,
    double depreciation_amount,
    double accumulated_depreciation,
    double book_value,
    char *depreciation_date,
    int year,
    int month,
    char *period
    ) {
    asset_depreciation_record_dto_t *asset_depreciation_record_dto_local_var = malloc(sizeof(asset_depreciation_record_dto_t));
    if (!asset_depreciation_record_dto_local_var) {
        return NULL;
    }
    asset_depreciation_record_dto_local_var->id = id;
    asset_depreciation_record_dto_local_var->timestamp = timestamp;
    asset_depreciation_record_dto_local_var->tenant_id = tenant_id;
    asset_depreciation_record_dto_local_var->enrollment_id = enrollment_id;
    asset_depreciation_record_dto_local_var->asset_id = asset_id;
    asset_depreciation_record_dto_local_var->asset_name = asset_name;
    asset_depreciation_record_dto_local_var->asset_depreciation_policy_id = asset_depreciation_policy_id;
    asset_depreciation_record_dto_local_var->asset_depreciation_policy_name = asset_depreciation_policy_name;
    asset_depreciation_record_dto_local_var->financial_book_id = financial_book_id;
    asset_depreciation_record_dto_local_var->start_date = start_date;
    asset_depreciation_record_dto_local_var->total_depreciations = total_depreciations;
    asset_depreciation_record_dto_local_var->depreciation_frequency = depreciation_frequency;
    asset_depreciation_record_dto_local_var->depreciation_rate = depreciation_rate;
    asset_depreciation_record_dto_local_var->expected_value_aul = expected_value_aul;
    asset_depreciation_record_dto_local_var->depreciation_amount = depreciation_amount;
    asset_depreciation_record_dto_local_var->accumulated_depreciation = accumulated_depreciation;
    asset_depreciation_record_dto_local_var->book_value = book_value;
    asset_depreciation_record_dto_local_var->depreciation_date = depreciation_date;
    asset_depreciation_record_dto_local_var->year = year;
    asset_depreciation_record_dto_local_var->month = month;
    asset_depreciation_record_dto_local_var->period = period;

    return asset_depreciation_record_dto_local_var;
}


void asset_depreciation_record_dto_free(asset_depreciation_record_dto_t *asset_depreciation_record_dto) {
    if(NULL == asset_depreciation_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_depreciation_record_dto->id) {
        free(asset_depreciation_record_dto->id);
        asset_depreciation_record_dto->id = NULL;
    }
    if (asset_depreciation_record_dto->timestamp) {
        free(asset_depreciation_record_dto->timestamp);
        asset_depreciation_record_dto->timestamp = NULL;
    }
    if (asset_depreciation_record_dto->tenant_id) {
        free(asset_depreciation_record_dto->tenant_id);
        asset_depreciation_record_dto->tenant_id = NULL;
    }
    if (asset_depreciation_record_dto->enrollment_id) {
        free(asset_depreciation_record_dto->enrollment_id);
        asset_depreciation_record_dto->enrollment_id = NULL;
    }
    if (asset_depreciation_record_dto->asset_id) {
        free(asset_depreciation_record_dto->asset_id);
        asset_depreciation_record_dto->asset_id = NULL;
    }
    if (asset_depreciation_record_dto->asset_name) {
        free(asset_depreciation_record_dto->asset_name);
        asset_depreciation_record_dto->asset_name = NULL;
    }
    if (asset_depreciation_record_dto->asset_depreciation_policy_id) {
        free(asset_depreciation_record_dto->asset_depreciation_policy_id);
        asset_depreciation_record_dto->asset_depreciation_policy_id = NULL;
    }
    if (asset_depreciation_record_dto->asset_depreciation_policy_name) {
        free(asset_depreciation_record_dto->asset_depreciation_policy_name);
        asset_depreciation_record_dto->asset_depreciation_policy_name = NULL;
    }
    if (asset_depreciation_record_dto->financial_book_id) {
        free(asset_depreciation_record_dto->financial_book_id);
        asset_depreciation_record_dto->financial_book_id = NULL;
    }
    if (asset_depreciation_record_dto->start_date) {
        free(asset_depreciation_record_dto->start_date);
        asset_depreciation_record_dto->start_date = NULL;
    }
    if (asset_depreciation_record_dto->depreciation_date) {
        free(asset_depreciation_record_dto->depreciation_date);
        asset_depreciation_record_dto->depreciation_date = NULL;
    }
    if (asset_depreciation_record_dto->period) {
        free(asset_depreciation_record_dto->period);
        asset_depreciation_record_dto->period = NULL;
    }
    free(asset_depreciation_record_dto);
}

cJSON *asset_depreciation_record_dto_convertToJSON(asset_depreciation_record_dto_t *asset_depreciation_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_depreciation_record_dto->id
    if(asset_depreciation_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_depreciation_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->timestamp
    if(asset_depreciation_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_depreciation_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_depreciation_record_dto->tenant_id
    if(asset_depreciation_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", asset_depreciation_record_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->enrollment_id
    if(asset_depreciation_record_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", asset_depreciation_record_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->asset_id
    if(asset_depreciation_record_dto->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", asset_depreciation_record_dto->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->asset_name
    if(asset_depreciation_record_dto->asset_name) {
    if(cJSON_AddStringToObject(item, "assetName", asset_depreciation_record_dto->asset_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->asset_depreciation_policy_id
    if(asset_depreciation_record_dto->asset_depreciation_policy_id) {
    if(cJSON_AddStringToObject(item, "assetDepreciationPolicyId", asset_depreciation_record_dto->asset_depreciation_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->asset_depreciation_policy_name
    if(asset_depreciation_record_dto->asset_depreciation_policy_name) {
    if(cJSON_AddStringToObject(item, "assetDepreciationPolicyName", asset_depreciation_record_dto->asset_depreciation_policy_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->financial_book_id
    if(asset_depreciation_record_dto->financial_book_id) {
    if(cJSON_AddStringToObject(item, "financialBookId", asset_depreciation_record_dto->financial_book_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_depreciation_record_dto->start_date
    if(asset_depreciation_record_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", asset_depreciation_record_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_depreciation_record_dto->total_depreciations
    if(asset_depreciation_record_dto->total_depreciations) {
    if(cJSON_AddNumberToObject(item, "totalDepreciations", asset_depreciation_record_dto->total_depreciations) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->depreciation_frequency
    if(asset_depreciation_record_dto->depreciation_frequency) {
    if(cJSON_AddNumberToObject(item, "depreciationFrequency", asset_depreciation_record_dto->depreciation_frequency) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->depreciation_rate
    if(asset_depreciation_record_dto->depreciation_rate) {
    if(cJSON_AddNumberToObject(item, "depreciationRate", asset_depreciation_record_dto->depreciation_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->expected_value_aul
    if(asset_depreciation_record_dto->expected_value_aul) {
    if(cJSON_AddNumberToObject(item, "expectedValueAUL", asset_depreciation_record_dto->expected_value_aul) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->depreciation_amount
    if(asset_depreciation_record_dto->depreciation_amount) {
    if(cJSON_AddNumberToObject(item, "depreciationAmount", asset_depreciation_record_dto->depreciation_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->accumulated_depreciation
    if(asset_depreciation_record_dto->accumulated_depreciation) {
    if(cJSON_AddNumberToObject(item, "accumulatedDepreciation", asset_depreciation_record_dto->accumulated_depreciation) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->book_value
    if(asset_depreciation_record_dto->book_value) {
    if(cJSON_AddNumberToObject(item, "bookValue", asset_depreciation_record_dto->book_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->depreciation_date
    if(asset_depreciation_record_dto->depreciation_date) {
    if(cJSON_AddStringToObject(item, "depreciationDate", asset_depreciation_record_dto->depreciation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_depreciation_record_dto->year
    if(asset_depreciation_record_dto->year) {
    if(cJSON_AddNumberToObject(item, "year", asset_depreciation_record_dto->year) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->month
    if(asset_depreciation_record_dto->month) {
    if(cJSON_AddNumberToObject(item, "month", asset_depreciation_record_dto->month) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_depreciation_record_dto->period
    if(asset_depreciation_record_dto->period) {
    if(cJSON_AddStringToObject(item, "period", asset_depreciation_record_dto->period) == NULL) {
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

asset_depreciation_record_dto_t *asset_depreciation_record_dto_parseFromJSON(cJSON *asset_depreciation_record_dtoJSON){

    asset_depreciation_record_dto_t *asset_depreciation_record_dto_local_var = NULL;

    // asset_depreciation_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_depreciation_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "assetId");
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->asset_name
    cJSON *asset_name = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "assetName");
    if (asset_name) { 
    if(!cJSON_IsString(asset_name) && !cJSON_IsNull(asset_name))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->asset_depreciation_policy_id
    cJSON *asset_depreciation_policy_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "assetDepreciationPolicyId");
    if (asset_depreciation_policy_id) { 
    if(!cJSON_IsString(asset_depreciation_policy_id) && !cJSON_IsNull(asset_depreciation_policy_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->asset_depreciation_policy_name
    cJSON *asset_depreciation_policy_name = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "assetDepreciationPolicyName");
    if (asset_depreciation_policy_name) { 
    if(!cJSON_IsString(asset_depreciation_policy_name) && !cJSON_IsNull(asset_depreciation_policy_name))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->financial_book_id
    cJSON *financial_book_id = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "financialBookId");
    if (financial_book_id) { 
    if(!cJSON_IsString(financial_book_id) && !cJSON_IsNull(financial_book_id))
    {
    goto end; //String
    }
    }

    // asset_depreciation_record_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // asset_depreciation_record_dto->total_depreciations
    cJSON *total_depreciations = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "totalDepreciations");
    if (total_depreciations) { 
    if(!cJSON_IsNumber(total_depreciations))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->depreciation_frequency
    cJSON *depreciation_frequency = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "depreciationFrequency");
    if (depreciation_frequency) { 
    if(!cJSON_IsNumber(depreciation_frequency))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->depreciation_rate
    cJSON *depreciation_rate = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "depreciationRate");
    if (depreciation_rate) { 
    if(!cJSON_IsNumber(depreciation_rate))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->expected_value_aul
    cJSON *expected_value_aul = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "expectedValueAUL");
    if (expected_value_aul) { 
    if(!cJSON_IsNumber(expected_value_aul))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->depreciation_amount
    cJSON *depreciation_amount = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "depreciationAmount");
    if (depreciation_amount) { 
    if(!cJSON_IsNumber(depreciation_amount))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->accumulated_depreciation
    cJSON *accumulated_depreciation = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "accumulatedDepreciation");
    if (accumulated_depreciation) { 
    if(!cJSON_IsNumber(accumulated_depreciation))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->book_value
    cJSON *book_value = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "bookValue");
    if (book_value) { 
    if(!cJSON_IsNumber(book_value))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->depreciation_date
    cJSON *depreciation_date = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "depreciationDate");
    if (depreciation_date) { 
    if(!cJSON_IsString(depreciation_date) && !cJSON_IsNull(depreciation_date))
    {
    goto end; //DateTime
    }
    }

    // asset_depreciation_record_dto->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "year");
    if (year) { 
    if(!cJSON_IsNumber(year))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "month");
    if (month) { 
    if(!cJSON_IsNumber(month))
    {
    goto end; //Numeric
    }
    }

    // asset_depreciation_record_dto->period
    cJSON *period = cJSON_GetObjectItemCaseSensitive(asset_depreciation_record_dtoJSON, "period");
    if (period) { 
    if(!cJSON_IsString(period) && !cJSON_IsNull(period))
    {
    goto end; //String
    }
    }


    asset_depreciation_record_dto_local_var = asset_depreciation_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        asset_name && !cJSON_IsNull(asset_name) ? strdup(asset_name->valuestring) : NULL,
        asset_depreciation_policy_id && !cJSON_IsNull(asset_depreciation_policy_id) ? strdup(asset_depreciation_policy_id->valuestring) : NULL,
        asset_depreciation_policy_name && !cJSON_IsNull(asset_depreciation_policy_name) ? strdup(asset_depreciation_policy_name->valuestring) : NULL,
        financial_book_id && !cJSON_IsNull(financial_book_id) ? strdup(financial_book_id->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        total_depreciations ? total_depreciations->valuedouble : 0,
        depreciation_frequency ? depreciation_frequency->valuedouble : 0,
        depreciation_rate ? depreciation_rate->valuedouble : 0,
        expected_value_aul ? expected_value_aul->valuedouble : 0,
        depreciation_amount ? depreciation_amount->valuedouble : 0,
        accumulated_depreciation ? accumulated_depreciation->valuedouble : 0,
        book_value ? book_value->valuedouble : 0,
        depreciation_date && !cJSON_IsNull(depreciation_date) ? strdup(depreciation_date->valuestring) : NULL,
        year ? year->valuedouble : 0,
        month ? month->valuedouble : 0,
        period && !cJSON_IsNull(period) ? strdup(period->valuestring) : NULL
        );

    return asset_depreciation_record_dto_local_var;
end:
    return NULL;

}
