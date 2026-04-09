#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_policy_dto.h"



tax_policy_dto_t *tax_policy_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *title,
    char *description,
    int is_free,
    int reduce,
    int is_enabled,
    int is_default,
    int allow_international,
    int hours,
    int days,
    int weeks,
    int months,
    int years,
    double value,
    double percentage,
    char *currency_id,
    char *country_id,
    char *country_state_id,
    char *custom_state,
    char *custom_city,
    char *city_id,
    char *enrollment_id,
    char *tenant_id,
    int zero,
    int reduced,
    int withholding,
    char *fiscal_authority_id
    ) {
    tax_policy_dto_t *tax_policy_dto_local_var = malloc(sizeof(tax_policy_dto_t));
    if (!tax_policy_dto_local_var) {
        return NULL;
    }
    tax_policy_dto_local_var->id = id;
    tax_policy_dto_local_var->timestamp = timestamp;
    tax_policy_dto_local_var->code = code;
    tax_policy_dto_local_var->title = title;
    tax_policy_dto_local_var->description = description;
    tax_policy_dto_local_var->is_free = is_free;
    tax_policy_dto_local_var->reduce = reduce;
    tax_policy_dto_local_var->is_enabled = is_enabled;
    tax_policy_dto_local_var->is_default = is_default;
    tax_policy_dto_local_var->allow_international = allow_international;
    tax_policy_dto_local_var->hours = hours;
    tax_policy_dto_local_var->days = days;
    tax_policy_dto_local_var->weeks = weeks;
    tax_policy_dto_local_var->months = months;
    tax_policy_dto_local_var->years = years;
    tax_policy_dto_local_var->value = value;
    tax_policy_dto_local_var->percentage = percentage;
    tax_policy_dto_local_var->currency_id = currency_id;
    tax_policy_dto_local_var->country_id = country_id;
    tax_policy_dto_local_var->country_state_id = country_state_id;
    tax_policy_dto_local_var->custom_state = custom_state;
    tax_policy_dto_local_var->custom_city = custom_city;
    tax_policy_dto_local_var->city_id = city_id;
    tax_policy_dto_local_var->enrollment_id = enrollment_id;
    tax_policy_dto_local_var->tenant_id = tenant_id;
    tax_policy_dto_local_var->zero = zero;
    tax_policy_dto_local_var->reduced = reduced;
    tax_policy_dto_local_var->withholding = withholding;
    tax_policy_dto_local_var->fiscal_authority_id = fiscal_authority_id;

    return tax_policy_dto_local_var;
}


void tax_policy_dto_free(tax_policy_dto_t *tax_policy_dto) {
    if(NULL == tax_policy_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_policy_dto->id) {
        free(tax_policy_dto->id);
        tax_policy_dto->id = NULL;
    }
    if (tax_policy_dto->timestamp) {
        free(tax_policy_dto->timestamp);
        tax_policy_dto->timestamp = NULL;
    }
    if (tax_policy_dto->code) {
        free(tax_policy_dto->code);
        tax_policy_dto->code = NULL;
    }
    if (tax_policy_dto->title) {
        free(tax_policy_dto->title);
        tax_policy_dto->title = NULL;
    }
    if (tax_policy_dto->description) {
        free(tax_policy_dto->description);
        tax_policy_dto->description = NULL;
    }
    if (tax_policy_dto->currency_id) {
        free(tax_policy_dto->currency_id);
        tax_policy_dto->currency_id = NULL;
    }
    if (tax_policy_dto->country_id) {
        free(tax_policy_dto->country_id);
        tax_policy_dto->country_id = NULL;
    }
    if (tax_policy_dto->country_state_id) {
        free(tax_policy_dto->country_state_id);
        tax_policy_dto->country_state_id = NULL;
    }
    if (tax_policy_dto->custom_state) {
        free(tax_policy_dto->custom_state);
        tax_policy_dto->custom_state = NULL;
    }
    if (tax_policy_dto->custom_city) {
        free(tax_policy_dto->custom_city);
        tax_policy_dto->custom_city = NULL;
    }
    if (tax_policy_dto->city_id) {
        free(tax_policy_dto->city_id);
        tax_policy_dto->city_id = NULL;
    }
    if (tax_policy_dto->enrollment_id) {
        free(tax_policy_dto->enrollment_id);
        tax_policy_dto->enrollment_id = NULL;
    }
    if (tax_policy_dto->tenant_id) {
        free(tax_policy_dto->tenant_id);
        tax_policy_dto->tenant_id = NULL;
    }
    if (tax_policy_dto->fiscal_authority_id) {
        free(tax_policy_dto->fiscal_authority_id);
        tax_policy_dto->fiscal_authority_id = NULL;
    }
    free(tax_policy_dto);
}

cJSON *tax_policy_dto_convertToJSON(tax_policy_dto_t *tax_policy_dto) {
    cJSON *item = cJSON_CreateObject();

    // tax_policy_dto->id
    if(tax_policy_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tax_policy_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->timestamp
    if(tax_policy_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tax_policy_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tax_policy_dto->code
    if(tax_policy_dto->code) {
    if(cJSON_AddStringToObject(item, "code", tax_policy_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->title
    if(tax_policy_dto->title) {
    if(cJSON_AddStringToObject(item, "title", tax_policy_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->description
    if(tax_policy_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tax_policy_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->is_free
    if(tax_policy_dto->is_free) {
    if(cJSON_AddBoolToObject(item, "isFree", tax_policy_dto->is_free) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->reduce
    if(tax_policy_dto->reduce) {
    if(cJSON_AddBoolToObject(item, "reduce", tax_policy_dto->reduce) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->is_enabled
    if(tax_policy_dto->is_enabled) {
    if(cJSON_AddBoolToObject(item, "isEnabled", tax_policy_dto->is_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->is_default
    if(tax_policy_dto->is_default) {
    if(cJSON_AddBoolToObject(item, "isDefault", tax_policy_dto->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->allow_international
    if(tax_policy_dto->allow_international) {
    if(cJSON_AddBoolToObject(item, "allowInternational", tax_policy_dto->allow_international) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->hours
    if(tax_policy_dto->hours) {
    if(cJSON_AddNumberToObject(item, "hours", tax_policy_dto->hours) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->days
    if(tax_policy_dto->days) {
    if(cJSON_AddNumberToObject(item, "days", tax_policy_dto->days) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->weeks
    if(tax_policy_dto->weeks) {
    if(cJSON_AddNumberToObject(item, "weeks", tax_policy_dto->weeks) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->months
    if(tax_policy_dto->months) {
    if(cJSON_AddNumberToObject(item, "months", tax_policy_dto->months) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->years
    if(tax_policy_dto->years) {
    if(cJSON_AddNumberToObject(item, "years", tax_policy_dto->years) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->value
    if(tax_policy_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", tax_policy_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->percentage
    if(tax_policy_dto->percentage) {
    if(cJSON_AddNumberToObject(item, "percentage", tax_policy_dto->percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_policy_dto->currency_id
    if(tax_policy_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", tax_policy_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->country_id
    if(tax_policy_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", tax_policy_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->country_state_id
    if(tax_policy_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateId", tax_policy_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->custom_state
    if(tax_policy_dto->custom_state) {
    if(cJSON_AddStringToObject(item, "customState", tax_policy_dto->custom_state) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->custom_city
    if(tax_policy_dto->custom_city) {
    if(cJSON_AddStringToObject(item, "customCity", tax_policy_dto->custom_city) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->city_id
    if(tax_policy_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", tax_policy_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->enrollment_id
    if(tax_policy_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", tax_policy_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->tenant_id
    if(tax_policy_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", tax_policy_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto->zero
    if(tax_policy_dto->zero) {
    if(cJSON_AddBoolToObject(item, "zero", tax_policy_dto->zero) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->reduced
    if(tax_policy_dto->reduced) {
    if(cJSON_AddBoolToObject(item, "reduced", tax_policy_dto->reduced) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->withholding
    if(tax_policy_dto->withholding) {
    if(cJSON_AddBoolToObject(item, "withholding", tax_policy_dto->withholding) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto->fiscal_authority_id
    if(tax_policy_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityID", tax_policy_dto->fiscal_authority_id) == NULL) {
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

tax_policy_dto_t *tax_policy_dto_parseFromJSON(cJSON *tax_policy_dtoJSON){

    tax_policy_dto_t *tax_policy_dto_local_var = NULL;

    // tax_policy_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tax_policy_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->is_free
    cJSON *is_free = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "isFree");
    if (is_free) { 
    if(!cJSON_IsBool(is_free))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->reduce
    cJSON *reduce = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "reduce");
    if (reduce) { 
    if(!cJSON_IsBool(reduce))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "isDefault");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->allow_international
    cJSON *allow_international = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "allowInternational");
    if (allow_international) { 
    if(!cJSON_IsBool(allow_international))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->hours
    cJSON *hours = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "hours");
    if (hours) { 
    if(!cJSON_IsNumber(hours))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->days
    cJSON *days = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "days");
    if (days) { 
    if(!cJSON_IsNumber(days))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->weeks
    cJSON *weeks = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "weeks");
    if (weeks) { 
    if(!cJSON_IsNumber(weeks))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->months
    cJSON *months = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "months");
    if (months) { 
    if(!cJSON_IsNumber(months))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->years
    cJSON *years = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "years");
    if (years) { 
    if(!cJSON_IsNumber(years))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->percentage
    cJSON *percentage = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "percentage");
    if (percentage) { 
    if(!cJSON_IsNumber(percentage))
    {
    goto end; //Numeric
    }
    }

    // tax_policy_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "countryStateId");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->custom_state
    cJSON *custom_state = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "customState");
    if (custom_state) { 
    if(!cJSON_IsString(custom_state) && !cJSON_IsNull(custom_state))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->custom_city
    cJSON *custom_city = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "customCity");
    if (custom_city) { 
    if(!cJSON_IsString(custom_city) && !cJSON_IsNull(custom_city))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto->zero
    cJSON *zero = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "zero");
    if (zero) { 
    if(!cJSON_IsBool(zero))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->reduced
    cJSON *reduced = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "reduced");
    if (reduced) { 
    if(!cJSON_IsBool(reduced))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->withholding
    cJSON *withholding = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "withholding");
    if (withholding) { 
    if(!cJSON_IsBool(withholding))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dtoJSON, "fiscalAuthorityID");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }


    tax_policy_dto_local_var = tax_policy_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        is_free ? is_free->valueint : 0,
        reduce ? reduce->valueint : 0,
        is_enabled ? is_enabled->valueint : 0,
        is_default ? is_default->valueint : 0,
        allow_international ? allow_international->valueint : 0,
        hours ? hours->valuedouble : 0,
        days ? days->valuedouble : 0,
        weeks ? weeks->valuedouble : 0,
        months ? months->valuedouble : 0,
        years ? years->valuedouble : 0,
        value ? value->valuedouble : 0,
        percentage ? percentage->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        country_state_id && !cJSON_IsNull(country_state_id) ? strdup(country_state_id->valuestring) : NULL,
        custom_state && !cJSON_IsNull(custom_state) ? strdup(custom_state->valuestring) : NULL,
        custom_city && !cJSON_IsNull(custom_city) ? strdup(custom_city->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        zero ? zero->valueint : 0,
        reduced ? reduced->valueint : 0,
        withholding ? withholding->valueint : 0,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL
        );

    return tax_policy_dto_local_var;
end:
    return NULL;

}
