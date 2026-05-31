#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "port_update_dto.h"



port_update_dto_t *port_update_dto_create(
    char *title,
    char *company,
    char *email,
    char *address1,
    char *address2,
    char *address3,
    char *unit,
    char *custom_city,
    char *custom_state,
    char *postal_code,
    char *phone,
    char *fax,
    double longitude,
    double latitude,
    char *country_id,
    char *country_state_id,
    char *city_id,
    char *un_locode,
    char *iata_code,
    char *port_type,
    char *port_authority,
    int has_customs_facility,
    int is_free_tradezone,
    int is_active,
    char *parent_port_id
    ) {
    port_update_dto_t *port_update_dto_local_var = malloc(sizeof(port_update_dto_t));
    if (!port_update_dto_local_var) {
        return NULL;
    }
    port_update_dto_local_var->title = title;
    port_update_dto_local_var->company = company;
    port_update_dto_local_var->email = email;
    port_update_dto_local_var->address1 = address1;
    port_update_dto_local_var->address2 = address2;
    port_update_dto_local_var->address3 = address3;
    port_update_dto_local_var->unit = unit;
    port_update_dto_local_var->custom_city = custom_city;
    port_update_dto_local_var->custom_state = custom_state;
    port_update_dto_local_var->postal_code = postal_code;
    port_update_dto_local_var->phone = phone;
    port_update_dto_local_var->fax = fax;
    port_update_dto_local_var->longitude = longitude;
    port_update_dto_local_var->latitude = latitude;
    port_update_dto_local_var->country_id = country_id;
    port_update_dto_local_var->country_state_id = country_state_id;
    port_update_dto_local_var->city_id = city_id;
    port_update_dto_local_var->un_locode = un_locode;
    port_update_dto_local_var->iata_code = iata_code;
    port_update_dto_local_var->port_type = port_type;
    port_update_dto_local_var->port_authority = port_authority;
    port_update_dto_local_var->has_customs_facility = has_customs_facility;
    port_update_dto_local_var->is_free_tradezone = is_free_tradezone;
    port_update_dto_local_var->is_active = is_active;
    port_update_dto_local_var->parent_port_id = parent_port_id;

    return port_update_dto_local_var;
}


void port_update_dto_free(port_update_dto_t *port_update_dto) {
    if(NULL == port_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (port_update_dto->title) {
        free(port_update_dto->title);
        port_update_dto->title = NULL;
    }
    if (port_update_dto->company) {
        free(port_update_dto->company);
        port_update_dto->company = NULL;
    }
    if (port_update_dto->email) {
        free(port_update_dto->email);
        port_update_dto->email = NULL;
    }
    if (port_update_dto->address1) {
        free(port_update_dto->address1);
        port_update_dto->address1 = NULL;
    }
    if (port_update_dto->address2) {
        free(port_update_dto->address2);
        port_update_dto->address2 = NULL;
    }
    if (port_update_dto->address3) {
        free(port_update_dto->address3);
        port_update_dto->address3 = NULL;
    }
    if (port_update_dto->unit) {
        free(port_update_dto->unit);
        port_update_dto->unit = NULL;
    }
    if (port_update_dto->custom_city) {
        free(port_update_dto->custom_city);
        port_update_dto->custom_city = NULL;
    }
    if (port_update_dto->custom_state) {
        free(port_update_dto->custom_state);
        port_update_dto->custom_state = NULL;
    }
    if (port_update_dto->postal_code) {
        free(port_update_dto->postal_code);
        port_update_dto->postal_code = NULL;
    }
    if (port_update_dto->phone) {
        free(port_update_dto->phone);
        port_update_dto->phone = NULL;
    }
    if (port_update_dto->fax) {
        free(port_update_dto->fax);
        port_update_dto->fax = NULL;
    }
    if (port_update_dto->country_id) {
        free(port_update_dto->country_id);
        port_update_dto->country_id = NULL;
    }
    if (port_update_dto->country_state_id) {
        free(port_update_dto->country_state_id);
        port_update_dto->country_state_id = NULL;
    }
    if (port_update_dto->city_id) {
        free(port_update_dto->city_id);
        port_update_dto->city_id = NULL;
    }
    if (port_update_dto->un_locode) {
        free(port_update_dto->un_locode);
        port_update_dto->un_locode = NULL;
    }
    if (port_update_dto->iata_code) {
        free(port_update_dto->iata_code);
        port_update_dto->iata_code = NULL;
    }
    if (port_update_dto->port_type) {
        free(port_update_dto->port_type);
        port_update_dto->port_type = NULL;
    }
    if (port_update_dto->port_authority) {
        free(port_update_dto->port_authority);
        port_update_dto->port_authority = NULL;
    }
    if (port_update_dto->parent_port_id) {
        free(port_update_dto->parent_port_id);
        port_update_dto->parent_port_id = NULL;
    }
    free(port_update_dto);
}

cJSON *port_update_dto_convertToJSON(port_update_dto_t *port_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // port_update_dto->title
    if(port_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", port_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->company
    if(port_update_dto->company) {
    if(cJSON_AddStringToObject(item, "company", port_update_dto->company) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->email
    if(port_update_dto->email) {
    if(cJSON_AddStringToObject(item, "email", port_update_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->address1
    if(port_update_dto->address1) {
    if(cJSON_AddStringToObject(item, "address1", port_update_dto->address1) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->address2
    if(port_update_dto->address2) {
    if(cJSON_AddStringToObject(item, "address2", port_update_dto->address2) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->address3
    if(port_update_dto->address3) {
    if(cJSON_AddStringToObject(item, "address3", port_update_dto->address3) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->unit
    if(port_update_dto->unit) {
    if(cJSON_AddStringToObject(item, "unit", port_update_dto->unit) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->custom_city
    if(port_update_dto->custom_city) {
    if(cJSON_AddStringToObject(item, "customCity", port_update_dto->custom_city) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->custom_state
    if(port_update_dto->custom_state) {
    if(cJSON_AddStringToObject(item, "customState", port_update_dto->custom_state) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->postal_code
    if(port_update_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", port_update_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->phone
    if(port_update_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", port_update_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->fax
    if(port_update_dto->fax) {
    if(cJSON_AddStringToObject(item, "fax", port_update_dto->fax) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->longitude
    if(port_update_dto->longitude) {
    if(cJSON_AddNumberToObject(item, "longitude", port_update_dto->longitude) == NULL) {
    goto fail; //Numeric
    }
    }


    // port_update_dto->latitude
    if(port_update_dto->latitude) {
    if(cJSON_AddNumberToObject(item, "latitude", port_update_dto->latitude) == NULL) {
    goto fail; //Numeric
    }
    }


    // port_update_dto->country_id
    if(port_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", port_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->country_state_id
    if(port_update_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateId", port_update_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->city_id
    if(port_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", port_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->un_locode
    if(port_update_dto->un_locode) {
    if(cJSON_AddStringToObject(item, "unLocode", port_update_dto->un_locode) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->iata_code
    if(port_update_dto->iata_code) {
    if(cJSON_AddStringToObject(item, "iataCode", port_update_dto->iata_code) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->port_type
    if(port_update_dto->port_type) {
    if(cJSON_AddStringToObject(item, "portType", port_update_dto->port_type) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->port_authority
    if(port_update_dto->port_authority) {
    if(cJSON_AddStringToObject(item, "portAuthority", port_update_dto->port_authority) == NULL) {
    goto fail; //String
    }
    }


    // port_update_dto->has_customs_facility
    if(port_update_dto->has_customs_facility) {
    if(cJSON_AddBoolToObject(item, "hasCustomsFacility", port_update_dto->has_customs_facility) == NULL) {
    goto fail; //Bool
    }
    }


    // port_update_dto->is_free_tradezone
    if(port_update_dto->is_free_tradezone) {
    if(cJSON_AddBoolToObject(item, "isFreeTradezone", port_update_dto->is_free_tradezone) == NULL) {
    goto fail; //Bool
    }
    }


    // port_update_dto->is_active
    if(port_update_dto->is_active) {
    if(cJSON_AddBoolToObject(item, "isActive", port_update_dto->is_active) == NULL) {
    goto fail; //Bool
    }
    }


    // port_update_dto->parent_port_id
    if(port_update_dto->parent_port_id) {
    if(cJSON_AddStringToObject(item, "parentPortId", port_update_dto->parent_port_id) == NULL) {
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

port_update_dto_t *port_update_dto_parseFromJSON(cJSON *port_update_dtoJSON){

    port_update_dto_t *port_update_dto_local_var = NULL;

    // port_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // port_update_dto->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "company");
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // port_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // port_update_dto->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "address1");
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // port_update_dto->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "address2");
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // port_update_dto->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "address3");
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // port_update_dto->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit) && !cJSON_IsNull(unit))
    {
    goto end; //String
    }
    }

    // port_update_dto->custom_city
    cJSON *custom_city = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "customCity");
    if (custom_city) { 
    if(!cJSON_IsString(custom_city) && !cJSON_IsNull(custom_city))
    {
    goto end; //String
    }
    }

    // port_update_dto->custom_state
    cJSON *custom_state = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "customState");
    if (custom_state) { 
    if(!cJSON_IsString(custom_state) && !cJSON_IsNull(custom_state))
    {
    goto end; //String
    }
    }

    // port_update_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // port_update_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // port_update_dto->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "fax");
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // port_update_dto->longitude
    cJSON *longitude = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "longitude");
    if (longitude) { 
    if(!cJSON_IsNumber(longitude))
    {
    goto end; //Numeric
    }
    }

    // port_update_dto->latitude
    cJSON *latitude = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "latitude");
    if (latitude) { 
    if(!cJSON_IsNumber(latitude))
    {
    goto end; //Numeric
    }
    }

    // port_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // port_update_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "countryStateId");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // port_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // port_update_dto->un_locode
    cJSON *un_locode = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "unLocode");
    if (un_locode) { 
    if(!cJSON_IsString(un_locode) && !cJSON_IsNull(un_locode))
    {
    goto end; //String
    }
    }

    // port_update_dto->iata_code
    cJSON *iata_code = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "iataCode");
    if (iata_code) { 
    if(!cJSON_IsString(iata_code) && !cJSON_IsNull(iata_code))
    {
    goto end; //String
    }
    }

    // port_update_dto->port_type
    cJSON *port_type = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "portType");
    if (port_type) { 
    if(!cJSON_IsString(port_type) && !cJSON_IsNull(port_type))
    {
    goto end; //String
    }
    }

    // port_update_dto->port_authority
    cJSON *port_authority = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "portAuthority");
    if (port_authority) { 
    if(!cJSON_IsString(port_authority) && !cJSON_IsNull(port_authority))
    {
    goto end; //String
    }
    }

    // port_update_dto->has_customs_facility
    cJSON *has_customs_facility = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "hasCustomsFacility");
    if (has_customs_facility) { 
    if(!cJSON_IsBool(has_customs_facility))
    {
    goto end; //Bool
    }
    }

    // port_update_dto->is_free_tradezone
    cJSON *is_free_tradezone = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "isFreeTradezone");
    if (is_free_tradezone) { 
    if(!cJSON_IsBool(is_free_tradezone))
    {
    goto end; //Bool
    }
    }

    // port_update_dto->is_active
    cJSON *is_active = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "isActive");
    if (is_active) { 
    if(!cJSON_IsBool(is_active))
    {
    goto end; //Bool
    }
    }

    // port_update_dto->parent_port_id
    cJSON *parent_port_id = cJSON_GetObjectItemCaseSensitive(port_update_dtoJSON, "parentPortId");
    if (parent_port_id) { 
    if(!cJSON_IsString(parent_port_id) && !cJSON_IsNull(parent_port_id))
    {
    goto end; //String
    }
    }


    port_update_dto_local_var = port_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        address1 && !cJSON_IsNull(address1) ? strdup(address1->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        address3 && !cJSON_IsNull(address3) ? strdup(address3->valuestring) : NULL,
        unit && !cJSON_IsNull(unit) ? strdup(unit->valuestring) : NULL,
        custom_city && !cJSON_IsNull(custom_city) ? strdup(custom_city->valuestring) : NULL,
        custom_state && !cJSON_IsNull(custom_state) ? strdup(custom_state->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        longitude ? longitude->valuedouble : 0,
        latitude ? latitude->valuedouble : 0,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        country_state_id && !cJSON_IsNull(country_state_id) ? strdup(country_state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        un_locode && !cJSON_IsNull(un_locode) ? strdup(un_locode->valuestring) : NULL,
        iata_code && !cJSON_IsNull(iata_code) ? strdup(iata_code->valuestring) : NULL,
        port_type && !cJSON_IsNull(port_type) ? strdup(port_type->valuestring) : NULL,
        port_authority && !cJSON_IsNull(port_authority) ? strdup(port_authority->valuestring) : NULL,
        has_customs_facility ? has_customs_facility->valueint : 0,
        is_free_tradezone ? is_free_tradezone->valueint : 0,
        is_active ? is_active->valueint : 0,
        parent_port_id && !cJSON_IsNull(parent_port_id) ? strdup(parent_port_id->valuestring) : NULL
        );

    return port_update_dto_local_var;
end:
    return NULL;

}
