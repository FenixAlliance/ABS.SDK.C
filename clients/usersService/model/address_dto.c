#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_dto.h"



address_dto_t *address_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *business,
    char *email,
    char *phone,
    char *fax,
    char *address1,
    char *address2,
    char *address3,
    char *unit,
    char *city_id,
    char *state_id,
    char *postal_code,
    char *country_id,
    double longitude,
    double latitude,
    int is_routable,
    int is_global_primary,
    int is_country_primary,
    int can_generate_labels,
    int is_default_sender_address,
    int is_default_return_address,
    int is_default_supping_location
    ) {
    address_dto_t *address_dto_local_var = malloc(sizeof(address_dto_t));
    if (!address_dto_local_var) {
        return NULL;
    }
    address_dto_local_var->id = id;
    address_dto_local_var->timestamp = timestamp;
    address_dto_local_var->title = title;
    address_dto_local_var->business = business;
    address_dto_local_var->email = email;
    address_dto_local_var->phone = phone;
    address_dto_local_var->fax = fax;
    address_dto_local_var->address1 = address1;
    address_dto_local_var->address2 = address2;
    address_dto_local_var->address3 = address3;
    address_dto_local_var->unit = unit;
    address_dto_local_var->city_id = city_id;
    address_dto_local_var->state_id = state_id;
    address_dto_local_var->postal_code = postal_code;
    address_dto_local_var->country_id = country_id;
    address_dto_local_var->longitude = longitude;
    address_dto_local_var->latitude = latitude;
    address_dto_local_var->is_routable = is_routable;
    address_dto_local_var->is_global_primary = is_global_primary;
    address_dto_local_var->is_country_primary = is_country_primary;
    address_dto_local_var->can_generate_labels = can_generate_labels;
    address_dto_local_var->is_default_sender_address = is_default_sender_address;
    address_dto_local_var->is_default_return_address = is_default_return_address;
    address_dto_local_var->is_default_supping_location = is_default_supping_location;

    return address_dto_local_var;
}


void address_dto_free(address_dto_t *address_dto) {
    if(NULL == address_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (address_dto->id) {
        free(address_dto->id);
        address_dto->id = NULL;
    }
    if (address_dto->timestamp) {
        free(address_dto->timestamp);
        address_dto->timestamp = NULL;
    }
    if (address_dto->title) {
        free(address_dto->title);
        address_dto->title = NULL;
    }
    if (address_dto->business) {
        free(address_dto->business);
        address_dto->business = NULL;
    }
    if (address_dto->email) {
        free(address_dto->email);
        address_dto->email = NULL;
    }
    if (address_dto->phone) {
        free(address_dto->phone);
        address_dto->phone = NULL;
    }
    if (address_dto->fax) {
        free(address_dto->fax);
        address_dto->fax = NULL;
    }
    if (address_dto->address1) {
        free(address_dto->address1);
        address_dto->address1 = NULL;
    }
    if (address_dto->address2) {
        free(address_dto->address2);
        address_dto->address2 = NULL;
    }
    if (address_dto->address3) {
        free(address_dto->address3);
        address_dto->address3 = NULL;
    }
    if (address_dto->unit) {
        free(address_dto->unit);
        address_dto->unit = NULL;
    }
    if (address_dto->city_id) {
        free(address_dto->city_id);
        address_dto->city_id = NULL;
    }
    if (address_dto->state_id) {
        free(address_dto->state_id);
        address_dto->state_id = NULL;
    }
    if (address_dto->postal_code) {
        free(address_dto->postal_code);
        address_dto->postal_code = NULL;
    }
    if (address_dto->country_id) {
        free(address_dto->country_id);
        address_dto->country_id = NULL;
    }
    free(address_dto);
}

cJSON *address_dto_convertToJSON(address_dto_t *address_dto) {
    cJSON *item = cJSON_CreateObject();

    // address_dto->id
    if(address_dto->id) {
    if(cJSON_AddStringToObject(item, "id", address_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->timestamp
    if(address_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", address_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // address_dto->title
    if(address_dto->title) {
    if(cJSON_AddStringToObject(item, "title", address_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->business
    if(address_dto->business) {
    if(cJSON_AddStringToObject(item, "business", address_dto->business) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->email
    if(address_dto->email) {
    if(cJSON_AddStringToObject(item, "email", address_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->phone
    if(address_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", address_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->fax
    if(address_dto->fax) {
    if(cJSON_AddStringToObject(item, "fax", address_dto->fax) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->address1
    if(address_dto->address1) {
    if(cJSON_AddStringToObject(item, "address1", address_dto->address1) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->address2
    if(address_dto->address2) {
    if(cJSON_AddStringToObject(item, "address2", address_dto->address2) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->address3
    if(address_dto->address3) {
    if(cJSON_AddStringToObject(item, "address3", address_dto->address3) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->unit
    if(address_dto->unit) {
    if(cJSON_AddStringToObject(item, "unit", address_dto->unit) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->city_id
    if(address_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", address_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->state_id
    if(address_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", address_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->postal_code
    if(address_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", address_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->country_id
    if(address_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", address_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // address_dto->longitude
    if(address_dto->longitude) {
    if(cJSON_AddNumberToObject(item, "longitude", address_dto->longitude) == NULL) {
    goto fail; //Numeric
    }
    }


    // address_dto->latitude
    if(address_dto->latitude) {
    if(cJSON_AddNumberToObject(item, "latitude", address_dto->latitude) == NULL) {
    goto fail; //Numeric
    }
    }


    // address_dto->is_routable
    if(address_dto->is_routable) {
    if(cJSON_AddBoolToObject(item, "isRoutable", address_dto->is_routable) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto->is_global_primary
    if(address_dto->is_global_primary) {
    if(cJSON_AddBoolToObject(item, "isGlobalPrimary", address_dto->is_global_primary) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto->is_country_primary
    if(address_dto->is_country_primary) {
    if(cJSON_AddBoolToObject(item, "isCountryPrimary", address_dto->is_country_primary) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto->can_generate_labels
    if(address_dto->can_generate_labels) {
    if(cJSON_AddBoolToObject(item, "canGenerateLabels", address_dto->can_generate_labels) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto->is_default_sender_address
    if(address_dto->is_default_sender_address) {
    if(cJSON_AddBoolToObject(item, "isDefaultSenderAddress", address_dto->is_default_sender_address) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto->is_default_return_address
    if(address_dto->is_default_return_address) {
    if(cJSON_AddBoolToObject(item, "isDefaultReturnAddress", address_dto->is_default_return_address) == NULL) {
    goto fail; //Bool
    }
    }


    // address_dto->is_default_supping_location
    if(address_dto->is_default_supping_location) {
    if(cJSON_AddBoolToObject(item, "isDefaultSuppingLocation", address_dto->is_default_supping_location) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

address_dto_t *address_dto_parseFromJSON(cJSON *address_dtoJSON){

    address_dto_t *address_dto_local_var = NULL;

    // address_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // address_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // address_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // address_dto->business
    cJSON *business = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "business");
    if (business) { 
    if(!cJSON_IsString(business) && !cJSON_IsNull(business))
    {
    goto end; //String
    }
    }

    // address_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // address_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // address_dto->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "fax");
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // address_dto->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "address1");
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // address_dto->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "address2");
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // address_dto->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "address3");
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // address_dto->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit) && !cJSON_IsNull(unit))
    {
    goto end; //String
    }
    }

    // address_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // address_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // address_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // address_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // address_dto->longitude
    cJSON *longitude = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "longitude");
    if (longitude) { 
    if(!cJSON_IsNumber(longitude))
    {
    goto end; //Numeric
    }
    }

    // address_dto->latitude
    cJSON *latitude = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "latitude");
    if (latitude) { 
    if(!cJSON_IsNumber(latitude))
    {
    goto end; //Numeric
    }
    }

    // address_dto->is_routable
    cJSON *is_routable = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "isRoutable");
    if (is_routable) { 
    if(!cJSON_IsBool(is_routable))
    {
    goto end; //Bool
    }
    }

    // address_dto->is_global_primary
    cJSON *is_global_primary = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "isGlobalPrimary");
    if (is_global_primary) { 
    if(!cJSON_IsBool(is_global_primary))
    {
    goto end; //Bool
    }
    }

    // address_dto->is_country_primary
    cJSON *is_country_primary = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "isCountryPrimary");
    if (is_country_primary) { 
    if(!cJSON_IsBool(is_country_primary))
    {
    goto end; //Bool
    }
    }

    // address_dto->can_generate_labels
    cJSON *can_generate_labels = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "canGenerateLabels");
    if (can_generate_labels) { 
    if(!cJSON_IsBool(can_generate_labels))
    {
    goto end; //Bool
    }
    }

    // address_dto->is_default_sender_address
    cJSON *is_default_sender_address = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "isDefaultSenderAddress");
    if (is_default_sender_address) { 
    if(!cJSON_IsBool(is_default_sender_address))
    {
    goto end; //Bool
    }
    }

    // address_dto->is_default_return_address
    cJSON *is_default_return_address = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "isDefaultReturnAddress");
    if (is_default_return_address) { 
    if(!cJSON_IsBool(is_default_return_address))
    {
    goto end; //Bool
    }
    }

    // address_dto->is_default_supping_location
    cJSON *is_default_supping_location = cJSON_GetObjectItemCaseSensitive(address_dtoJSON, "isDefaultSuppingLocation");
    if (is_default_supping_location) { 
    if(!cJSON_IsBool(is_default_supping_location))
    {
    goto end; //Bool
    }
    }


    address_dto_local_var = address_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        business && !cJSON_IsNull(business) ? strdup(business->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        address1 && !cJSON_IsNull(address1) ? strdup(address1->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        address3 && !cJSON_IsNull(address3) ? strdup(address3->valuestring) : NULL,
        unit && !cJSON_IsNull(unit) ? strdup(unit->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        longitude ? longitude->valuedouble : 0,
        latitude ? latitude->valuedouble : 0,
        is_routable ? is_routable->valueint : 0,
        is_global_primary ? is_global_primary->valueint : 0,
        is_country_primary ? is_country_primary->valueint : 0,
        can_generate_labels ? can_generate_labels->valueint : 0,
        is_default_sender_address ? is_default_sender_address->valueint : 0,
        is_default_return_address ? is_default_return_address->valueint : 0,
        is_default_supping_location ? is_default_supping_location->valueint : 0
        );

    return address_dto_local_var;
end:
    return NULL;

}
