#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_shipping_policy_dto.h"



item_shipping_policy_dto_t *item_shipping_policy_dto_create(
    char *id,
    char *timestamp,
    int is_express_shipment_policy,
    char *shipping_courier_id,
    char *type,
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
    char *business_id,
    char *business_profile_record_id
    ) {
    item_shipping_policy_dto_t *item_shipping_policy_dto_local_var = malloc(sizeof(item_shipping_policy_dto_t));
    if (!item_shipping_policy_dto_local_var) {
        return NULL;
    }
    item_shipping_policy_dto_local_var->id = id;
    item_shipping_policy_dto_local_var->timestamp = timestamp;
    item_shipping_policy_dto_local_var->is_express_shipment_policy = is_express_shipment_policy;
    item_shipping_policy_dto_local_var->shipping_courier_id = shipping_courier_id;
    item_shipping_policy_dto_local_var->type = type;
    item_shipping_policy_dto_local_var->code = code;
    item_shipping_policy_dto_local_var->title = title;
    item_shipping_policy_dto_local_var->description = description;
    item_shipping_policy_dto_local_var->is_free = is_free;
    item_shipping_policy_dto_local_var->reduce = reduce;
    item_shipping_policy_dto_local_var->is_enabled = is_enabled;
    item_shipping_policy_dto_local_var->is_default = is_default;
    item_shipping_policy_dto_local_var->allow_international = allow_international;
    item_shipping_policy_dto_local_var->hours = hours;
    item_shipping_policy_dto_local_var->days = days;
    item_shipping_policy_dto_local_var->weeks = weeks;
    item_shipping_policy_dto_local_var->months = months;
    item_shipping_policy_dto_local_var->years = years;
    item_shipping_policy_dto_local_var->value = value;
    item_shipping_policy_dto_local_var->percentage = percentage;
    item_shipping_policy_dto_local_var->currency_id = currency_id;
    item_shipping_policy_dto_local_var->country_id = country_id;
    item_shipping_policy_dto_local_var->country_state_id = country_state_id;
    item_shipping_policy_dto_local_var->custom_state = custom_state;
    item_shipping_policy_dto_local_var->custom_city = custom_city;
    item_shipping_policy_dto_local_var->city_id = city_id;
    item_shipping_policy_dto_local_var->business_id = business_id;
    item_shipping_policy_dto_local_var->business_profile_record_id = business_profile_record_id;

    return item_shipping_policy_dto_local_var;
}


void item_shipping_policy_dto_free(item_shipping_policy_dto_t *item_shipping_policy_dto) {
    if(NULL == item_shipping_policy_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_shipping_policy_dto->id) {
        free(item_shipping_policy_dto->id);
        item_shipping_policy_dto->id = NULL;
    }
    if (item_shipping_policy_dto->timestamp) {
        free(item_shipping_policy_dto->timestamp);
        item_shipping_policy_dto->timestamp = NULL;
    }
    if (item_shipping_policy_dto->shipping_courier_id) {
        free(item_shipping_policy_dto->shipping_courier_id);
        item_shipping_policy_dto->shipping_courier_id = NULL;
    }
    if (item_shipping_policy_dto->type) {
        free(item_shipping_policy_dto->type);
        item_shipping_policy_dto->type = NULL;
    }
    if (item_shipping_policy_dto->code) {
        free(item_shipping_policy_dto->code);
        item_shipping_policy_dto->code = NULL;
    }
    if (item_shipping_policy_dto->title) {
        free(item_shipping_policy_dto->title);
        item_shipping_policy_dto->title = NULL;
    }
    if (item_shipping_policy_dto->description) {
        free(item_shipping_policy_dto->description);
        item_shipping_policy_dto->description = NULL;
    }
    if (item_shipping_policy_dto->currency_id) {
        free(item_shipping_policy_dto->currency_id);
        item_shipping_policy_dto->currency_id = NULL;
    }
    if (item_shipping_policy_dto->country_id) {
        free(item_shipping_policy_dto->country_id);
        item_shipping_policy_dto->country_id = NULL;
    }
    if (item_shipping_policy_dto->country_state_id) {
        free(item_shipping_policy_dto->country_state_id);
        item_shipping_policy_dto->country_state_id = NULL;
    }
    if (item_shipping_policy_dto->custom_state) {
        free(item_shipping_policy_dto->custom_state);
        item_shipping_policy_dto->custom_state = NULL;
    }
    if (item_shipping_policy_dto->custom_city) {
        free(item_shipping_policy_dto->custom_city);
        item_shipping_policy_dto->custom_city = NULL;
    }
    if (item_shipping_policy_dto->city_id) {
        free(item_shipping_policy_dto->city_id);
        item_shipping_policy_dto->city_id = NULL;
    }
    if (item_shipping_policy_dto->business_id) {
        free(item_shipping_policy_dto->business_id);
        item_shipping_policy_dto->business_id = NULL;
    }
    if (item_shipping_policy_dto->business_profile_record_id) {
        free(item_shipping_policy_dto->business_profile_record_id);
        item_shipping_policy_dto->business_profile_record_id = NULL;
    }
    free(item_shipping_policy_dto);
}

cJSON *item_shipping_policy_dto_convertToJSON(item_shipping_policy_dto_t *item_shipping_policy_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_shipping_policy_dto->id
    if(item_shipping_policy_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_shipping_policy_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->timestamp
    if(item_shipping_policy_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_shipping_policy_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_shipping_policy_dto->is_express_shipment_policy
    if(item_shipping_policy_dto->is_express_shipment_policy) {
    if(cJSON_AddBoolToObject(item, "isExpressShipmentPolicy", item_shipping_policy_dto->is_express_shipment_policy) == NULL) {
    goto fail; //Bool
    }
    }


    // item_shipping_policy_dto->shipping_courier_id
    if (!item_shipping_policy_dto->shipping_courier_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shippingCourierID", item_shipping_policy_dto->shipping_courier_id) == NULL) {
    goto fail; //String
    }


    // item_shipping_policy_dto->type
    if (!item_shipping_policy_dto->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", item_shipping_policy_dto->type) == NULL) {
    goto fail; //String
    }


    // item_shipping_policy_dto->code
    if (!item_shipping_policy_dto->code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "code", item_shipping_policy_dto->code) == NULL) {
    goto fail; //String
    }


    // item_shipping_policy_dto->title
    if (!item_shipping_policy_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", item_shipping_policy_dto->title) == NULL) {
    goto fail; //String
    }


    // item_shipping_policy_dto->description
    if(item_shipping_policy_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_shipping_policy_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->is_free
    if(item_shipping_policy_dto->is_free) {
    if(cJSON_AddBoolToObject(item, "isFree", item_shipping_policy_dto->is_free) == NULL) {
    goto fail; //Bool
    }
    }


    // item_shipping_policy_dto->reduce
    if(item_shipping_policy_dto->reduce) {
    if(cJSON_AddBoolToObject(item, "reduce", item_shipping_policy_dto->reduce) == NULL) {
    goto fail; //Bool
    }
    }


    // item_shipping_policy_dto->is_enabled
    if(item_shipping_policy_dto->is_enabled) {
    if(cJSON_AddBoolToObject(item, "isEnabled", item_shipping_policy_dto->is_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // item_shipping_policy_dto->is_default
    if(item_shipping_policy_dto->is_default) {
    if(cJSON_AddBoolToObject(item, "isDefault", item_shipping_policy_dto->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // item_shipping_policy_dto->allow_international
    if(item_shipping_policy_dto->allow_international) {
    if(cJSON_AddBoolToObject(item, "allowInternational", item_shipping_policy_dto->allow_international) == NULL) {
    goto fail; //Bool
    }
    }


    // item_shipping_policy_dto->hours
    if(item_shipping_policy_dto->hours) {
    if(cJSON_AddNumberToObject(item, "hours", item_shipping_policy_dto->hours) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->days
    if(item_shipping_policy_dto->days) {
    if(cJSON_AddNumberToObject(item, "days", item_shipping_policy_dto->days) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->weeks
    if(item_shipping_policy_dto->weeks) {
    if(cJSON_AddNumberToObject(item, "weeks", item_shipping_policy_dto->weeks) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->months
    if(item_shipping_policy_dto->months) {
    if(cJSON_AddNumberToObject(item, "months", item_shipping_policy_dto->months) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->years
    if(item_shipping_policy_dto->years) {
    if(cJSON_AddNumberToObject(item, "years", item_shipping_policy_dto->years) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->value
    if(item_shipping_policy_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", item_shipping_policy_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->percentage
    if(item_shipping_policy_dto->percentage) {
    if(cJSON_AddNumberToObject(item, "percentage", item_shipping_policy_dto->percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_shipping_policy_dto->currency_id
    if (!item_shipping_policy_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyID", item_shipping_policy_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // item_shipping_policy_dto->country_id
    if(item_shipping_policy_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", item_shipping_policy_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->country_state_id
    if(item_shipping_policy_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateID", item_shipping_policy_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->custom_state
    if(item_shipping_policy_dto->custom_state) {
    if(cJSON_AddStringToObject(item, "customState", item_shipping_policy_dto->custom_state) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->custom_city
    if(item_shipping_policy_dto->custom_city) {
    if(cJSON_AddStringToObject(item, "customCity", item_shipping_policy_dto->custom_city) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->city_id
    if(item_shipping_policy_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityID", item_shipping_policy_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // item_shipping_policy_dto->business_id
    if (!item_shipping_policy_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_shipping_policy_dto->business_id) == NULL) {
    goto fail; //String
    }


    // item_shipping_policy_dto->business_profile_record_id
    if(item_shipping_policy_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", item_shipping_policy_dto->business_profile_record_id) == NULL) {
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

item_shipping_policy_dto_t *item_shipping_policy_dto_parseFromJSON(cJSON *item_shipping_policy_dtoJSON){

    item_shipping_policy_dto_t *item_shipping_policy_dto_local_var = NULL;

    // item_shipping_policy_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_shipping_policy_dto->is_express_shipment_policy
    cJSON *is_express_shipment_policy = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "isExpressShipmentPolicy");
    if (is_express_shipment_policy) { 
    if(!cJSON_IsBool(is_express_shipment_policy))
    {
    goto end; //Bool
    }
    }

    // item_shipping_policy_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "shippingCourierID");
    if (!shipping_courier_id) {
        goto end;
    }

    
    if(!cJSON_IsString(shipping_courier_id))
    {
    goto end; //String
    }

    // item_shipping_policy_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // item_shipping_policy_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "code");
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }

    // item_shipping_policy_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // item_shipping_policy_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->is_free
    cJSON *is_free = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "isFree");
    if (is_free) { 
    if(!cJSON_IsBool(is_free))
    {
    goto end; //Bool
    }
    }

    // item_shipping_policy_dto->reduce
    cJSON *reduce = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "reduce");
    if (reduce) { 
    if(!cJSON_IsBool(reduce))
    {
    goto end; //Bool
    }
    }

    // item_shipping_policy_dto->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // item_shipping_policy_dto->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "isDefault");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // item_shipping_policy_dto->allow_international
    cJSON *allow_international = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "allowInternational");
    if (allow_international) { 
    if(!cJSON_IsBool(allow_international))
    {
    goto end; //Bool
    }
    }

    // item_shipping_policy_dto->hours
    cJSON *hours = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "hours");
    if (hours) { 
    if(!cJSON_IsNumber(hours))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->days
    cJSON *days = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "days");
    if (days) { 
    if(!cJSON_IsNumber(days))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->weeks
    cJSON *weeks = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "weeks");
    if (weeks) { 
    if(!cJSON_IsNumber(weeks))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->months
    cJSON *months = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "months");
    if (months) { 
    if(!cJSON_IsNumber(months))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->years
    cJSON *years = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "years");
    if (years) { 
    if(!cJSON_IsNumber(years))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->percentage
    cJSON *percentage = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "percentage");
    if (percentage) { 
    if(!cJSON_IsNumber(percentage))
    {
    goto end; //Numeric
    }
    }

    // item_shipping_policy_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "currencyID");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // item_shipping_policy_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "countryStateID");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->custom_state
    cJSON *custom_state = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "customState");
    if (custom_state) { 
    if(!cJSON_IsString(custom_state) && !cJSON_IsNull(custom_state))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->custom_city
    cJSON *custom_city = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "customCity");
    if (custom_city) { 
    if(!cJSON_IsString(custom_city) && !cJSON_IsNull(custom_city))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "cityID");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // item_shipping_policy_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // item_shipping_policy_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(item_shipping_policy_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }


    item_shipping_policy_dto_local_var = item_shipping_policy_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        is_express_shipment_policy ? is_express_shipment_policy->valueint : 0,
        strdup(shipping_courier_id->valuestring),
        strdup(type->valuestring),
        strdup(code->valuestring),
        strdup(title->valuestring),
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
        strdup(currency_id->valuestring),
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        country_state_id && !cJSON_IsNull(country_state_id) ? strdup(country_state_id->valuestring) : NULL,
        custom_state && !cJSON_IsNull(custom_state) ? strdup(custom_state->valuestring) : NULL,
        custom_city && !cJSON_IsNull(custom_city) ? strdup(custom_city->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        strdup(business_id->valuestring),
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL
        );

    return item_shipping_policy_dto_local_var;
end:
    return NULL;

}
