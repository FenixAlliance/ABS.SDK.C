#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "location_create_dto.h"



location_create_dto_t *location_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
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
    location_create_dto_t *location_create_dto_local_var = malloc(sizeof(location_create_dto_t));
    if (!location_create_dto_local_var) {
        return NULL;
    }
    location_create_dto_local_var->id = id;
    location_create_dto_local_var->timestamp = timestamp;
    location_create_dto_local_var->title = title;
    location_create_dto_local_var->email = email;
    location_create_dto_local_var->phone = phone;
    location_create_dto_local_var->fax = fax;
    location_create_dto_local_var->address1 = address1;
    location_create_dto_local_var->address2 = address2;
    location_create_dto_local_var->address3 = address3;
    location_create_dto_local_var->unit = unit;
    location_create_dto_local_var->city_id = city_id;
    location_create_dto_local_var->state_id = state_id;
    location_create_dto_local_var->postal_code = postal_code;
    location_create_dto_local_var->country_id = country_id;
    location_create_dto_local_var->longitude = longitude;
    location_create_dto_local_var->latitude = latitude;
    location_create_dto_local_var->is_routable = is_routable;
    location_create_dto_local_var->is_global_primary = is_global_primary;
    location_create_dto_local_var->is_country_primary = is_country_primary;
    location_create_dto_local_var->can_generate_labels = can_generate_labels;
    location_create_dto_local_var->is_default_sender_address = is_default_sender_address;
    location_create_dto_local_var->is_default_return_address = is_default_return_address;
    location_create_dto_local_var->is_default_supping_location = is_default_supping_location;

    return location_create_dto_local_var;
}


void location_create_dto_free(location_create_dto_t *location_create_dto) {
    if(NULL == location_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (location_create_dto->id) {
        free(location_create_dto->id);
        location_create_dto->id = NULL;
    }
    if (location_create_dto->timestamp) {
        free(location_create_dto->timestamp);
        location_create_dto->timestamp = NULL;
    }
    if (location_create_dto->title) {
        free(location_create_dto->title);
        location_create_dto->title = NULL;
    }
    if (location_create_dto->email) {
        free(location_create_dto->email);
        location_create_dto->email = NULL;
    }
    if (location_create_dto->phone) {
        free(location_create_dto->phone);
        location_create_dto->phone = NULL;
    }
    if (location_create_dto->fax) {
        free(location_create_dto->fax);
        location_create_dto->fax = NULL;
    }
    if (location_create_dto->address1) {
        free(location_create_dto->address1);
        location_create_dto->address1 = NULL;
    }
    if (location_create_dto->address2) {
        free(location_create_dto->address2);
        location_create_dto->address2 = NULL;
    }
    if (location_create_dto->address3) {
        free(location_create_dto->address3);
        location_create_dto->address3 = NULL;
    }
    if (location_create_dto->unit) {
        free(location_create_dto->unit);
        location_create_dto->unit = NULL;
    }
    if (location_create_dto->city_id) {
        free(location_create_dto->city_id);
        location_create_dto->city_id = NULL;
    }
    if (location_create_dto->state_id) {
        free(location_create_dto->state_id);
        location_create_dto->state_id = NULL;
    }
    if (location_create_dto->postal_code) {
        free(location_create_dto->postal_code);
        location_create_dto->postal_code = NULL;
    }
    if (location_create_dto->country_id) {
        free(location_create_dto->country_id);
        location_create_dto->country_id = NULL;
    }
    free(location_create_dto);
}

cJSON *location_create_dto_convertToJSON(location_create_dto_t *location_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // location_create_dto->id
    if(location_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", location_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->timestamp
    if(location_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", location_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // location_create_dto->title
    if(location_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", location_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->email
    if(location_create_dto->email) {
    if(cJSON_AddStringToObject(item, "email", location_create_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->phone
    if(location_create_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", location_create_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->fax
    if(location_create_dto->fax) {
    if(cJSON_AddStringToObject(item, "fax", location_create_dto->fax) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->address1
    if(location_create_dto->address1) {
    if(cJSON_AddStringToObject(item, "address1", location_create_dto->address1) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->address2
    if(location_create_dto->address2) {
    if(cJSON_AddStringToObject(item, "address2", location_create_dto->address2) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->address3
    if(location_create_dto->address3) {
    if(cJSON_AddStringToObject(item, "address3", location_create_dto->address3) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->unit
    if(location_create_dto->unit) {
    if(cJSON_AddStringToObject(item, "unit", location_create_dto->unit) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->city_id
    if(location_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", location_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->state_id
    if(location_create_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", location_create_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->postal_code
    if(location_create_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", location_create_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->country_id
    if(location_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", location_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // location_create_dto->longitude
    if(location_create_dto->longitude) {
    if(cJSON_AddNumberToObject(item, "longitude", location_create_dto->longitude) == NULL) {
    goto fail; //Numeric
    }
    }


    // location_create_dto->latitude
    if(location_create_dto->latitude) {
    if(cJSON_AddNumberToObject(item, "latitude", location_create_dto->latitude) == NULL) {
    goto fail; //Numeric
    }
    }


    // location_create_dto->is_routable
    if(location_create_dto->is_routable) {
    if(cJSON_AddBoolToObject(item, "isRoutable", location_create_dto->is_routable) == NULL) {
    goto fail; //Bool
    }
    }


    // location_create_dto->is_global_primary
    if(location_create_dto->is_global_primary) {
    if(cJSON_AddBoolToObject(item, "isGlobalPrimary", location_create_dto->is_global_primary) == NULL) {
    goto fail; //Bool
    }
    }


    // location_create_dto->is_country_primary
    if(location_create_dto->is_country_primary) {
    if(cJSON_AddBoolToObject(item, "isCountryPrimary", location_create_dto->is_country_primary) == NULL) {
    goto fail; //Bool
    }
    }


    // location_create_dto->can_generate_labels
    if(location_create_dto->can_generate_labels) {
    if(cJSON_AddBoolToObject(item, "canGenerateLabels", location_create_dto->can_generate_labels) == NULL) {
    goto fail; //Bool
    }
    }


    // location_create_dto->is_default_sender_address
    if(location_create_dto->is_default_sender_address) {
    if(cJSON_AddBoolToObject(item, "isDefaultSenderAddress", location_create_dto->is_default_sender_address) == NULL) {
    goto fail; //Bool
    }
    }


    // location_create_dto->is_default_return_address
    if(location_create_dto->is_default_return_address) {
    if(cJSON_AddBoolToObject(item, "isDefaultReturnAddress", location_create_dto->is_default_return_address) == NULL) {
    goto fail; //Bool
    }
    }


    // location_create_dto->is_default_supping_location
    if(location_create_dto->is_default_supping_location) {
    if(cJSON_AddBoolToObject(item, "isDefaultSuppingLocation", location_create_dto->is_default_supping_location) == NULL) {
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

location_create_dto_t *location_create_dto_parseFromJSON(cJSON *location_create_dtoJSON){

    location_create_dto_t *location_create_dto_local_var = NULL;

    // location_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // location_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // location_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // location_create_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // location_create_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // location_create_dto->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "fax");
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // location_create_dto->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "address1");
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // location_create_dto->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "address2");
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // location_create_dto->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "address3");
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // location_create_dto->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit) && !cJSON_IsNull(unit))
    {
    goto end; //String
    }
    }

    // location_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // location_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // location_create_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // location_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // location_create_dto->longitude
    cJSON *longitude = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "longitude");
    if (longitude) { 
    if(!cJSON_IsNumber(longitude))
    {
    goto end; //Numeric
    }
    }

    // location_create_dto->latitude
    cJSON *latitude = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "latitude");
    if (latitude) { 
    if(!cJSON_IsNumber(latitude))
    {
    goto end; //Numeric
    }
    }

    // location_create_dto->is_routable
    cJSON *is_routable = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "isRoutable");
    if (is_routable) { 
    if(!cJSON_IsBool(is_routable))
    {
    goto end; //Bool
    }
    }

    // location_create_dto->is_global_primary
    cJSON *is_global_primary = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "isGlobalPrimary");
    if (is_global_primary) { 
    if(!cJSON_IsBool(is_global_primary))
    {
    goto end; //Bool
    }
    }

    // location_create_dto->is_country_primary
    cJSON *is_country_primary = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "isCountryPrimary");
    if (is_country_primary) { 
    if(!cJSON_IsBool(is_country_primary))
    {
    goto end; //Bool
    }
    }

    // location_create_dto->can_generate_labels
    cJSON *can_generate_labels = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "canGenerateLabels");
    if (can_generate_labels) { 
    if(!cJSON_IsBool(can_generate_labels))
    {
    goto end; //Bool
    }
    }

    // location_create_dto->is_default_sender_address
    cJSON *is_default_sender_address = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "isDefaultSenderAddress");
    if (is_default_sender_address) { 
    if(!cJSON_IsBool(is_default_sender_address))
    {
    goto end; //Bool
    }
    }

    // location_create_dto->is_default_return_address
    cJSON *is_default_return_address = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "isDefaultReturnAddress");
    if (is_default_return_address) { 
    if(!cJSON_IsBool(is_default_return_address))
    {
    goto end; //Bool
    }
    }

    // location_create_dto->is_default_supping_location
    cJSON *is_default_supping_location = cJSON_GetObjectItemCaseSensitive(location_create_dtoJSON, "isDefaultSuppingLocation");
    if (is_default_supping_location) { 
    if(!cJSON_IsBool(is_default_supping_location))
    {
    goto end; //Bool
    }
    }


    location_create_dto_local_var = location_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
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

    return location_create_dto_local_var;
end:
    return NULL;

}
