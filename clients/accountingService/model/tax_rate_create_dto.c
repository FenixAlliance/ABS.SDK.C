#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_rate_create_dto.h"



tax_rate_create_dto_t *tax_rate_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    double rate,
    double value,
    char *um,
    char *unit_id,
    char *unit_group_id,
    int priority,
    int compound,
    int shipping,
    int withholding,
    double single_transaction_threshold,
    double cumulative_transaction_threshold,
    char *fiscal_authority_id,
    char *fiscal_year_id,
    char *country_id,
    char *tax_class_id,
    char *currency_id,
    char *tax_policy_id
    ) {
    tax_rate_create_dto_t *tax_rate_create_dto_local_var = malloc(sizeof(tax_rate_create_dto_t));
    if (!tax_rate_create_dto_local_var) {
        return NULL;
    }
    tax_rate_create_dto_local_var->id = id;
    tax_rate_create_dto_local_var->timestamp = timestamp;
    tax_rate_create_dto_local_var->name = name;
    tax_rate_create_dto_local_var->rate = rate;
    tax_rate_create_dto_local_var->value = value;
    tax_rate_create_dto_local_var->um = um;
    tax_rate_create_dto_local_var->unit_id = unit_id;
    tax_rate_create_dto_local_var->unit_group_id = unit_group_id;
    tax_rate_create_dto_local_var->priority = priority;
    tax_rate_create_dto_local_var->compound = compound;
    tax_rate_create_dto_local_var->shipping = shipping;
    tax_rate_create_dto_local_var->withholding = withholding;
    tax_rate_create_dto_local_var->single_transaction_threshold = single_transaction_threshold;
    tax_rate_create_dto_local_var->cumulative_transaction_threshold = cumulative_transaction_threshold;
    tax_rate_create_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    tax_rate_create_dto_local_var->fiscal_year_id = fiscal_year_id;
    tax_rate_create_dto_local_var->country_id = country_id;
    tax_rate_create_dto_local_var->tax_class_id = tax_class_id;
    tax_rate_create_dto_local_var->currency_id = currency_id;
    tax_rate_create_dto_local_var->tax_policy_id = tax_policy_id;

    return tax_rate_create_dto_local_var;
}


void tax_rate_create_dto_free(tax_rate_create_dto_t *tax_rate_create_dto) {
    if(NULL == tax_rate_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_rate_create_dto->id) {
        free(tax_rate_create_dto->id);
        tax_rate_create_dto->id = NULL;
    }
    if (tax_rate_create_dto->timestamp) {
        free(tax_rate_create_dto->timestamp);
        tax_rate_create_dto->timestamp = NULL;
    }
    if (tax_rate_create_dto->name) {
        free(tax_rate_create_dto->name);
        tax_rate_create_dto->name = NULL;
    }
    if (tax_rate_create_dto->um) {
        free(tax_rate_create_dto->um);
        tax_rate_create_dto->um = NULL;
    }
    if (tax_rate_create_dto->unit_id) {
        free(tax_rate_create_dto->unit_id);
        tax_rate_create_dto->unit_id = NULL;
    }
    if (tax_rate_create_dto->unit_group_id) {
        free(tax_rate_create_dto->unit_group_id);
        tax_rate_create_dto->unit_group_id = NULL;
    }
    if (tax_rate_create_dto->fiscal_authority_id) {
        free(tax_rate_create_dto->fiscal_authority_id);
        tax_rate_create_dto->fiscal_authority_id = NULL;
    }
    if (tax_rate_create_dto->fiscal_year_id) {
        free(tax_rate_create_dto->fiscal_year_id);
        tax_rate_create_dto->fiscal_year_id = NULL;
    }
    if (tax_rate_create_dto->country_id) {
        free(tax_rate_create_dto->country_id);
        tax_rate_create_dto->country_id = NULL;
    }
    if (tax_rate_create_dto->tax_class_id) {
        free(tax_rate_create_dto->tax_class_id);
        tax_rate_create_dto->tax_class_id = NULL;
    }
    if (tax_rate_create_dto->currency_id) {
        free(tax_rate_create_dto->currency_id);
        tax_rate_create_dto->currency_id = NULL;
    }
    if (tax_rate_create_dto->tax_policy_id) {
        free(tax_rate_create_dto->tax_policy_id);
        tax_rate_create_dto->tax_policy_id = NULL;
    }
    free(tax_rate_create_dto);
}

cJSON *tax_rate_create_dto_convertToJSON(tax_rate_create_dto_t *tax_rate_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tax_rate_create_dto->id
    if(tax_rate_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tax_rate_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->timestamp
    if(tax_rate_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tax_rate_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tax_rate_create_dto->name
    if(tax_rate_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tax_rate_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->rate
    if(tax_rate_create_dto->rate) {
    if(cJSON_AddNumberToObject(item, "rate", tax_rate_create_dto->rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_rate_create_dto->value
    if(tax_rate_create_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", tax_rate_create_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_rate_create_dto->um
    if(tax_rate_create_dto->um) {
    if(cJSON_AddStringToObject(item, "um", tax_rate_create_dto->um) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->unit_id
    if(tax_rate_create_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", tax_rate_create_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->unit_group_id
    if(tax_rate_create_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", tax_rate_create_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->priority
    if(tax_rate_create_dto->priority) {
    if(cJSON_AddNumberToObject(item, "priority", tax_rate_create_dto->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_rate_create_dto->compound
    if(tax_rate_create_dto->compound) {
    if(cJSON_AddBoolToObject(item, "compound", tax_rate_create_dto->compound) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_rate_create_dto->shipping
    if(tax_rate_create_dto->shipping) {
    if(cJSON_AddBoolToObject(item, "shipping", tax_rate_create_dto->shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_rate_create_dto->withholding
    if(tax_rate_create_dto->withholding) {
    if(cJSON_AddBoolToObject(item, "withholding", tax_rate_create_dto->withholding) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_rate_create_dto->single_transaction_threshold
    if(tax_rate_create_dto->single_transaction_threshold) {
    if(cJSON_AddNumberToObject(item, "singleTransactionThreshold", tax_rate_create_dto->single_transaction_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_rate_create_dto->cumulative_transaction_threshold
    if(tax_rate_create_dto->cumulative_transaction_threshold) {
    if(cJSON_AddNumberToObject(item, "cumulativeTransactionThreshold", tax_rate_create_dto->cumulative_transaction_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_rate_create_dto->fiscal_authority_id
    if(tax_rate_create_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", tax_rate_create_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->fiscal_year_id
    if(tax_rate_create_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", tax_rate_create_dto->fiscal_year_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->country_id
    if(tax_rate_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", tax_rate_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->tax_class_id
    if(tax_rate_create_dto->tax_class_id) {
    if(cJSON_AddStringToObject(item, "taxClassId", tax_rate_create_dto->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->currency_id
    if(tax_rate_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", tax_rate_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_rate_create_dto->tax_policy_id
    if(tax_rate_create_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", tax_rate_create_dto->tax_policy_id) == NULL) {
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

tax_rate_create_dto_t *tax_rate_create_dto_parseFromJSON(cJSON *tax_rate_create_dtoJSON){

    tax_rate_create_dto_t *tax_rate_create_dto_local_var = NULL;

    // tax_rate_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tax_rate_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->rate
    cJSON *rate = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "rate");
    if (rate) { 
    if(!cJSON_IsNumber(rate))
    {
    goto end; //Numeric
    }
    }

    // tax_rate_create_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // tax_rate_create_dto->um
    cJSON *um = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "um");
    if (um) { 
    if(!cJSON_IsString(um) && !cJSON_IsNull(um))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // tax_rate_create_dto->compound
    cJSON *compound = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "compound");
    if (compound) { 
    if(!cJSON_IsBool(compound))
    {
    goto end; //Bool
    }
    }

    // tax_rate_create_dto->shipping
    cJSON *shipping = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "shipping");
    if (shipping) { 
    if(!cJSON_IsBool(shipping))
    {
    goto end; //Bool
    }
    }

    // tax_rate_create_dto->withholding
    cJSON *withholding = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "withholding");
    if (withholding) { 
    if(!cJSON_IsBool(withholding))
    {
    goto end; //Bool
    }
    }

    // tax_rate_create_dto->single_transaction_threshold
    cJSON *single_transaction_threshold = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "singleTransactionThreshold");
    if (single_transaction_threshold) { 
    if(!cJSON_IsNumber(single_transaction_threshold))
    {
    goto end; //Numeric
    }
    }

    // tax_rate_create_dto->cumulative_transaction_threshold
    cJSON *cumulative_transaction_threshold = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "cumulativeTransactionThreshold");
    if (cumulative_transaction_threshold) { 
    if(!cJSON_IsNumber(cumulative_transaction_threshold))
    {
    goto end; //Numeric
    }
    }

    // tax_rate_create_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "taxClassId");
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // tax_rate_create_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(tax_rate_create_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }


    tax_rate_create_dto_local_var = tax_rate_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        rate ? rate->valuedouble : 0,
        value ? value->valuedouble : 0,
        um && !cJSON_IsNull(um) ? strdup(um->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        priority ? priority->valuedouble : 0,
        compound ? compound->valueint : 0,
        shipping ? shipping->valueint : 0,
        withholding ? withholding->valueint : 0,
        single_transaction_threshold ? single_transaction_threshold->valuedouble : 0,
        cumulative_transaction_threshold ? cumulative_transaction_threshold->valuedouble : 0,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL
        );

    return tax_rate_create_dto_local_var;
end:
    return NULL;

}
