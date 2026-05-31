#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rounding_policy_create_dto.h"



rounding_policy_create_dto_t *rounding_policy_create_dto_create(
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
    char *city_id
    ) {
    rounding_policy_create_dto_t *rounding_policy_create_dto_local_var = malloc(sizeof(rounding_policy_create_dto_t));
    if (!rounding_policy_create_dto_local_var) {
        return NULL;
    }
    rounding_policy_create_dto_local_var->id = id;
    rounding_policy_create_dto_local_var->timestamp = timestamp;
    rounding_policy_create_dto_local_var->code = code;
    rounding_policy_create_dto_local_var->title = title;
    rounding_policy_create_dto_local_var->description = description;
    rounding_policy_create_dto_local_var->is_free = is_free;
    rounding_policy_create_dto_local_var->reduce = reduce;
    rounding_policy_create_dto_local_var->is_enabled = is_enabled;
    rounding_policy_create_dto_local_var->is_default = is_default;
    rounding_policy_create_dto_local_var->allow_international = allow_international;
    rounding_policy_create_dto_local_var->hours = hours;
    rounding_policy_create_dto_local_var->days = days;
    rounding_policy_create_dto_local_var->weeks = weeks;
    rounding_policy_create_dto_local_var->months = months;
    rounding_policy_create_dto_local_var->years = years;
    rounding_policy_create_dto_local_var->value = value;
    rounding_policy_create_dto_local_var->percentage = percentage;
    rounding_policy_create_dto_local_var->currency_id = currency_id;
    rounding_policy_create_dto_local_var->country_id = country_id;
    rounding_policy_create_dto_local_var->country_state_id = country_state_id;
    rounding_policy_create_dto_local_var->custom_state = custom_state;
    rounding_policy_create_dto_local_var->custom_city = custom_city;
    rounding_policy_create_dto_local_var->city_id = city_id;

    return rounding_policy_create_dto_local_var;
}


void rounding_policy_create_dto_free(rounding_policy_create_dto_t *rounding_policy_create_dto) {
    if(NULL == rounding_policy_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (rounding_policy_create_dto->id) {
        free(rounding_policy_create_dto->id);
        rounding_policy_create_dto->id = NULL;
    }
    if (rounding_policy_create_dto->timestamp) {
        free(rounding_policy_create_dto->timestamp);
        rounding_policy_create_dto->timestamp = NULL;
    }
    if (rounding_policy_create_dto->code) {
        free(rounding_policy_create_dto->code);
        rounding_policy_create_dto->code = NULL;
    }
    if (rounding_policy_create_dto->title) {
        free(rounding_policy_create_dto->title);
        rounding_policy_create_dto->title = NULL;
    }
    if (rounding_policy_create_dto->description) {
        free(rounding_policy_create_dto->description);
        rounding_policy_create_dto->description = NULL;
    }
    if (rounding_policy_create_dto->currency_id) {
        free(rounding_policy_create_dto->currency_id);
        rounding_policy_create_dto->currency_id = NULL;
    }
    if (rounding_policy_create_dto->country_id) {
        free(rounding_policy_create_dto->country_id);
        rounding_policy_create_dto->country_id = NULL;
    }
    if (rounding_policy_create_dto->country_state_id) {
        free(rounding_policy_create_dto->country_state_id);
        rounding_policy_create_dto->country_state_id = NULL;
    }
    if (rounding_policy_create_dto->custom_state) {
        free(rounding_policy_create_dto->custom_state);
        rounding_policy_create_dto->custom_state = NULL;
    }
    if (rounding_policy_create_dto->custom_city) {
        free(rounding_policy_create_dto->custom_city);
        rounding_policy_create_dto->custom_city = NULL;
    }
    if (rounding_policy_create_dto->city_id) {
        free(rounding_policy_create_dto->city_id);
        rounding_policy_create_dto->city_id = NULL;
    }
    free(rounding_policy_create_dto);
}

cJSON *rounding_policy_create_dto_convertToJSON(rounding_policy_create_dto_t *rounding_policy_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // rounding_policy_create_dto->id
    if(rounding_policy_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", rounding_policy_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->timestamp
    if(rounding_policy_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", rounding_policy_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // rounding_policy_create_dto->code
    if(rounding_policy_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", rounding_policy_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->title
    if(rounding_policy_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", rounding_policy_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->description
    if(rounding_policy_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", rounding_policy_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->is_free
    if(rounding_policy_create_dto->is_free) {
    if(cJSON_AddBoolToObject(item, "isFree", rounding_policy_create_dto->is_free) == NULL) {
    goto fail; //Bool
    }
    }


    // rounding_policy_create_dto->reduce
    if(rounding_policy_create_dto->reduce) {
    if(cJSON_AddBoolToObject(item, "reduce", rounding_policy_create_dto->reduce) == NULL) {
    goto fail; //Bool
    }
    }


    // rounding_policy_create_dto->is_enabled
    if(rounding_policy_create_dto->is_enabled) {
    if(cJSON_AddBoolToObject(item, "isEnabled", rounding_policy_create_dto->is_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // rounding_policy_create_dto->is_default
    if(rounding_policy_create_dto->is_default) {
    if(cJSON_AddBoolToObject(item, "isDefault", rounding_policy_create_dto->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // rounding_policy_create_dto->allow_international
    if(rounding_policy_create_dto->allow_international) {
    if(cJSON_AddBoolToObject(item, "allowInternational", rounding_policy_create_dto->allow_international) == NULL) {
    goto fail; //Bool
    }
    }


    // rounding_policy_create_dto->hours
    if(rounding_policy_create_dto->hours) {
    if(cJSON_AddNumberToObject(item, "hours", rounding_policy_create_dto->hours) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->days
    if(rounding_policy_create_dto->days) {
    if(cJSON_AddNumberToObject(item, "days", rounding_policy_create_dto->days) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->weeks
    if(rounding_policy_create_dto->weeks) {
    if(cJSON_AddNumberToObject(item, "weeks", rounding_policy_create_dto->weeks) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->months
    if(rounding_policy_create_dto->months) {
    if(cJSON_AddNumberToObject(item, "months", rounding_policy_create_dto->months) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->years
    if(rounding_policy_create_dto->years) {
    if(cJSON_AddNumberToObject(item, "years", rounding_policy_create_dto->years) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->value
    if(rounding_policy_create_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", rounding_policy_create_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->percentage
    if(rounding_policy_create_dto->percentage) {
    if(cJSON_AddNumberToObject(item, "percentage", rounding_policy_create_dto->percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // rounding_policy_create_dto->currency_id
    if(rounding_policy_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", rounding_policy_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->country_id
    if(rounding_policy_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", rounding_policy_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->country_state_id
    if(rounding_policy_create_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateId", rounding_policy_create_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->custom_state
    if(rounding_policy_create_dto->custom_state) {
    if(cJSON_AddStringToObject(item, "customState", rounding_policy_create_dto->custom_state) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->custom_city
    if(rounding_policy_create_dto->custom_city) {
    if(cJSON_AddStringToObject(item, "customCity", rounding_policy_create_dto->custom_city) == NULL) {
    goto fail; //String
    }
    }


    // rounding_policy_create_dto->city_id
    if(rounding_policy_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", rounding_policy_create_dto->city_id) == NULL) {
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

rounding_policy_create_dto_t *rounding_policy_create_dto_parseFromJSON(cJSON *rounding_policy_create_dtoJSON){

    rounding_policy_create_dto_t *rounding_policy_create_dto_local_var = NULL;

    // rounding_policy_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // rounding_policy_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->is_free
    cJSON *is_free = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "isFree");
    if (is_free) { 
    if(!cJSON_IsBool(is_free))
    {
    goto end; //Bool
    }
    }

    // rounding_policy_create_dto->reduce
    cJSON *reduce = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "reduce");
    if (reduce) { 
    if(!cJSON_IsBool(reduce))
    {
    goto end; //Bool
    }
    }

    // rounding_policy_create_dto->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // rounding_policy_create_dto->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "isDefault");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // rounding_policy_create_dto->allow_international
    cJSON *allow_international = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "allowInternational");
    if (allow_international) { 
    if(!cJSON_IsBool(allow_international))
    {
    goto end; //Bool
    }
    }

    // rounding_policy_create_dto->hours
    cJSON *hours = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "hours");
    if (hours) { 
    if(!cJSON_IsNumber(hours))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->days
    cJSON *days = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "days");
    if (days) { 
    if(!cJSON_IsNumber(days))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->weeks
    cJSON *weeks = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "weeks");
    if (weeks) { 
    if(!cJSON_IsNumber(weeks))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->months
    cJSON *months = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "months");
    if (months) { 
    if(!cJSON_IsNumber(months))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->years
    cJSON *years = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "years");
    if (years) { 
    if(!cJSON_IsNumber(years))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->percentage
    cJSON *percentage = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "percentage");
    if (percentage) { 
    if(!cJSON_IsNumber(percentage))
    {
    goto end; //Numeric
    }
    }

    // rounding_policy_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "countryStateId");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->custom_state
    cJSON *custom_state = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "customState");
    if (custom_state) { 
    if(!cJSON_IsString(custom_state) && !cJSON_IsNull(custom_state))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->custom_city
    cJSON *custom_city = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "customCity");
    if (custom_city) { 
    if(!cJSON_IsString(custom_city) && !cJSON_IsNull(custom_city))
    {
    goto end; //String
    }
    }

    // rounding_policy_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(rounding_policy_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }


    rounding_policy_create_dto_local_var = rounding_policy_create_dto_create (
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
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL
        );

    return rounding_policy_create_dto_local_var;
end:
    return NULL;

}
