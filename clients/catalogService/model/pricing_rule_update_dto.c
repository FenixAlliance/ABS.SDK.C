#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pricing_rule_update_dto.h"



pricing_rule_update_dto_t *pricing_rule_update_dto_create(
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
    char *city_id
    ) {
    pricing_rule_update_dto_t *pricing_rule_update_dto_local_var = malloc(sizeof(pricing_rule_update_dto_t));
    if (!pricing_rule_update_dto_local_var) {
        return NULL;
    }
    pricing_rule_update_dto_local_var->title = title;
    pricing_rule_update_dto_local_var->description = description;
    pricing_rule_update_dto_local_var->is_free = is_free;
    pricing_rule_update_dto_local_var->reduce = reduce;
    pricing_rule_update_dto_local_var->is_enabled = is_enabled;
    pricing_rule_update_dto_local_var->is_default = is_default;
    pricing_rule_update_dto_local_var->allow_international = allow_international;
    pricing_rule_update_dto_local_var->hours = hours;
    pricing_rule_update_dto_local_var->days = days;
    pricing_rule_update_dto_local_var->weeks = weeks;
    pricing_rule_update_dto_local_var->months = months;
    pricing_rule_update_dto_local_var->years = years;
    pricing_rule_update_dto_local_var->value = value;
    pricing_rule_update_dto_local_var->percentage = percentage;
    pricing_rule_update_dto_local_var->currency_id = currency_id;
    pricing_rule_update_dto_local_var->country_id = country_id;
    pricing_rule_update_dto_local_var->country_state_id = country_state_id;
    pricing_rule_update_dto_local_var->custom_state = custom_state;
    pricing_rule_update_dto_local_var->custom_city = custom_city;
    pricing_rule_update_dto_local_var->city_id = city_id;

    return pricing_rule_update_dto_local_var;
}


void pricing_rule_update_dto_free(pricing_rule_update_dto_t *pricing_rule_update_dto) {
    if(NULL == pricing_rule_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (pricing_rule_update_dto->title) {
        free(pricing_rule_update_dto->title);
        pricing_rule_update_dto->title = NULL;
    }
    if (pricing_rule_update_dto->description) {
        free(pricing_rule_update_dto->description);
        pricing_rule_update_dto->description = NULL;
    }
    if (pricing_rule_update_dto->currency_id) {
        free(pricing_rule_update_dto->currency_id);
        pricing_rule_update_dto->currency_id = NULL;
    }
    if (pricing_rule_update_dto->country_id) {
        free(pricing_rule_update_dto->country_id);
        pricing_rule_update_dto->country_id = NULL;
    }
    if (pricing_rule_update_dto->country_state_id) {
        free(pricing_rule_update_dto->country_state_id);
        pricing_rule_update_dto->country_state_id = NULL;
    }
    if (pricing_rule_update_dto->custom_state) {
        free(pricing_rule_update_dto->custom_state);
        pricing_rule_update_dto->custom_state = NULL;
    }
    if (pricing_rule_update_dto->custom_city) {
        free(pricing_rule_update_dto->custom_city);
        pricing_rule_update_dto->custom_city = NULL;
    }
    if (pricing_rule_update_dto->city_id) {
        free(pricing_rule_update_dto->city_id);
        pricing_rule_update_dto->city_id = NULL;
    }
    free(pricing_rule_update_dto);
}

cJSON *pricing_rule_update_dto_convertToJSON(pricing_rule_update_dto_t *pricing_rule_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // pricing_rule_update_dto->title
    if(pricing_rule_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", pricing_rule_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->description
    if(pricing_rule_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", pricing_rule_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->is_free
    if(pricing_rule_update_dto->is_free) {
    if(cJSON_AddBoolToObject(item, "isFree", pricing_rule_update_dto->is_free) == NULL) {
    goto fail; //Bool
    }
    }


    // pricing_rule_update_dto->reduce
    if(pricing_rule_update_dto->reduce) {
    if(cJSON_AddBoolToObject(item, "reduce", pricing_rule_update_dto->reduce) == NULL) {
    goto fail; //Bool
    }
    }


    // pricing_rule_update_dto->is_enabled
    if(pricing_rule_update_dto->is_enabled) {
    if(cJSON_AddBoolToObject(item, "isEnabled", pricing_rule_update_dto->is_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // pricing_rule_update_dto->is_default
    if(pricing_rule_update_dto->is_default) {
    if(cJSON_AddBoolToObject(item, "isDefault", pricing_rule_update_dto->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // pricing_rule_update_dto->allow_international
    if(pricing_rule_update_dto->allow_international) {
    if(cJSON_AddBoolToObject(item, "allowInternational", pricing_rule_update_dto->allow_international) == NULL) {
    goto fail; //Bool
    }
    }


    // pricing_rule_update_dto->hours
    if(pricing_rule_update_dto->hours) {
    if(cJSON_AddNumberToObject(item, "hours", pricing_rule_update_dto->hours) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->days
    if(pricing_rule_update_dto->days) {
    if(cJSON_AddNumberToObject(item, "days", pricing_rule_update_dto->days) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->weeks
    if(pricing_rule_update_dto->weeks) {
    if(cJSON_AddNumberToObject(item, "weeks", pricing_rule_update_dto->weeks) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->months
    if(pricing_rule_update_dto->months) {
    if(cJSON_AddNumberToObject(item, "months", pricing_rule_update_dto->months) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->years
    if(pricing_rule_update_dto->years) {
    if(cJSON_AddNumberToObject(item, "years", pricing_rule_update_dto->years) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->value
    if(pricing_rule_update_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", pricing_rule_update_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->percentage
    if(pricing_rule_update_dto->percentage) {
    if(cJSON_AddNumberToObject(item, "percentage", pricing_rule_update_dto->percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // pricing_rule_update_dto->currency_id
    if(pricing_rule_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyID", pricing_rule_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->country_id
    if(pricing_rule_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", pricing_rule_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->country_state_id
    if(pricing_rule_update_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateID", pricing_rule_update_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->custom_state
    if(pricing_rule_update_dto->custom_state) {
    if(cJSON_AddStringToObject(item, "customState", pricing_rule_update_dto->custom_state) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->custom_city
    if(pricing_rule_update_dto->custom_city) {
    if(cJSON_AddStringToObject(item, "customCity", pricing_rule_update_dto->custom_city) == NULL) {
    goto fail; //String
    }
    }


    // pricing_rule_update_dto->city_id
    if(pricing_rule_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityID", pricing_rule_update_dto->city_id) == NULL) {
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

pricing_rule_update_dto_t *pricing_rule_update_dto_parseFromJSON(cJSON *pricing_rule_update_dtoJSON){

    pricing_rule_update_dto_t *pricing_rule_update_dto_local_var = NULL;

    // pricing_rule_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->is_free
    cJSON *is_free = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "isFree");
    if (is_free) { 
    if(!cJSON_IsBool(is_free))
    {
    goto end; //Bool
    }
    }

    // pricing_rule_update_dto->reduce
    cJSON *reduce = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "reduce");
    if (reduce) { 
    if(!cJSON_IsBool(reduce))
    {
    goto end; //Bool
    }
    }

    // pricing_rule_update_dto->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // pricing_rule_update_dto->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "isDefault");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // pricing_rule_update_dto->allow_international
    cJSON *allow_international = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "allowInternational");
    if (allow_international) { 
    if(!cJSON_IsBool(allow_international))
    {
    goto end; //Bool
    }
    }

    // pricing_rule_update_dto->hours
    cJSON *hours = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "hours");
    if (hours) { 
    if(!cJSON_IsNumber(hours))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->days
    cJSON *days = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "days");
    if (days) { 
    if(!cJSON_IsNumber(days))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->weeks
    cJSON *weeks = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "weeks");
    if (weeks) { 
    if(!cJSON_IsNumber(weeks))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->months
    cJSON *months = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "months");
    if (months) { 
    if(!cJSON_IsNumber(months))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->years
    cJSON *years = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "years");
    if (years) { 
    if(!cJSON_IsNumber(years))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->percentage
    cJSON *percentage = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "percentage");
    if (percentage) { 
    if(!cJSON_IsNumber(percentage))
    {
    goto end; //Numeric
    }
    }

    // pricing_rule_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "currencyID");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "countryStateID");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->custom_state
    cJSON *custom_state = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "customState");
    if (custom_state) { 
    if(!cJSON_IsString(custom_state) && !cJSON_IsNull(custom_state))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->custom_city
    cJSON *custom_city = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "customCity");
    if (custom_city) { 
    if(!cJSON_IsString(custom_city) && !cJSON_IsNull(custom_city))
    {
    goto end; //String
    }
    }

    // pricing_rule_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(pricing_rule_update_dtoJSON, "cityID");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }


    pricing_rule_update_dto_local_var = pricing_rule_update_dto_create (
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
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL
        );

    return pricing_rule_update_dto_local_var;
end:
    return NULL;

}
