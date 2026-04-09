#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_options.h"



contact_options_t *contact_options_create(
    char *email1,
    char *email2,
    char *phone_number1,
    char *phone_number2,
    char *address_line1,
    char *address_line2,
    char *city_id,
    char *country_state_id,
    char *country_id,
    char *postal_code
    ) {
    contact_options_t *contact_options_local_var = malloc(sizeof(contact_options_t));
    if (!contact_options_local_var) {
        return NULL;
    }
    contact_options_local_var->email1 = email1;
    contact_options_local_var->email2 = email2;
    contact_options_local_var->phone_number1 = phone_number1;
    contact_options_local_var->phone_number2 = phone_number2;
    contact_options_local_var->address_line1 = address_line1;
    contact_options_local_var->address_line2 = address_line2;
    contact_options_local_var->city_id = city_id;
    contact_options_local_var->country_state_id = country_state_id;
    contact_options_local_var->country_id = country_id;
    contact_options_local_var->postal_code = postal_code;

    return contact_options_local_var;
}


void contact_options_free(contact_options_t *contact_options) {
    if(NULL == contact_options){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_options->email1) {
        free(contact_options->email1);
        contact_options->email1 = NULL;
    }
    if (contact_options->email2) {
        free(contact_options->email2);
        contact_options->email2 = NULL;
    }
    if (contact_options->phone_number1) {
        free(contact_options->phone_number1);
        contact_options->phone_number1 = NULL;
    }
    if (contact_options->phone_number2) {
        free(contact_options->phone_number2);
        contact_options->phone_number2 = NULL;
    }
    if (contact_options->address_line1) {
        free(contact_options->address_line1);
        contact_options->address_line1 = NULL;
    }
    if (contact_options->address_line2) {
        free(contact_options->address_line2);
        contact_options->address_line2 = NULL;
    }
    if (contact_options->city_id) {
        free(contact_options->city_id);
        contact_options->city_id = NULL;
    }
    if (contact_options->country_state_id) {
        free(contact_options->country_state_id);
        contact_options->country_state_id = NULL;
    }
    if (contact_options->country_id) {
        free(contact_options->country_id);
        contact_options->country_id = NULL;
    }
    if (contact_options->postal_code) {
        free(contact_options->postal_code);
        contact_options->postal_code = NULL;
    }
    free(contact_options);
}

cJSON *contact_options_convertToJSON(contact_options_t *contact_options) {
    cJSON *item = cJSON_CreateObject();

    // contact_options->email1
    if(contact_options->email1) {
    if(cJSON_AddStringToObject(item, "email1", contact_options->email1) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->email2
    if(contact_options->email2) {
    if(cJSON_AddStringToObject(item, "email2", contact_options->email2) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->phone_number1
    if(contact_options->phone_number1) {
    if(cJSON_AddStringToObject(item, "phoneNumber1", contact_options->phone_number1) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->phone_number2
    if(contact_options->phone_number2) {
    if(cJSON_AddStringToObject(item, "phoneNumber2", contact_options->phone_number2) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->address_line1
    if(contact_options->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", contact_options->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->address_line2
    if(contact_options->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", contact_options->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->city_id
    if(contact_options->city_id) {
    if(cJSON_AddStringToObject(item, "cityID", contact_options->city_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->country_state_id
    if(contact_options->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateID", contact_options->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->country_id
    if(contact_options->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", contact_options->country_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_options->postal_code
    if(contact_options->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", contact_options->postal_code) == NULL) {
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

contact_options_t *contact_options_parseFromJSON(cJSON *contact_optionsJSON){

    contact_options_t *contact_options_local_var = NULL;

    // contact_options->email1
    cJSON *email1 = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "email1");
    if (email1) { 
    if(!cJSON_IsString(email1) && !cJSON_IsNull(email1))
    {
    goto end; //String
    }
    }

    // contact_options->email2
    cJSON *email2 = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "email2");
    if (email2) { 
    if(!cJSON_IsString(email2) && !cJSON_IsNull(email2))
    {
    goto end; //String
    }
    }

    // contact_options->phone_number1
    cJSON *phone_number1 = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "phoneNumber1");
    if (phone_number1) { 
    if(!cJSON_IsString(phone_number1) && !cJSON_IsNull(phone_number1))
    {
    goto end; //String
    }
    }

    // contact_options->phone_number2
    cJSON *phone_number2 = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "phoneNumber2");
    if (phone_number2) { 
    if(!cJSON_IsString(phone_number2) && !cJSON_IsNull(phone_number2))
    {
    goto end; //String
    }
    }

    // contact_options->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // contact_options->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // contact_options->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "cityID");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // contact_options->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "countryStateID");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // contact_options->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // contact_options->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(contact_optionsJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }


    contact_options_local_var = contact_options_create (
        email1 && !cJSON_IsNull(email1) ? strdup(email1->valuestring) : NULL,
        email2 && !cJSON_IsNull(email2) ? strdup(email2->valuestring) : NULL,
        phone_number1 && !cJSON_IsNull(phone_number1) ? strdup(phone_number1->valuestring) : NULL,
        phone_number2 && !cJSON_IsNull(phone_number2) ? strdup(phone_number2->valuestring) : NULL,
        address_line1 && !cJSON_IsNull(address_line1) ? strdup(address_line1->valuestring) : NULL,
        address_line2 && !cJSON_IsNull(address_line2) ? strdup(address_line2->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        country_state_id && !cJSON_IsNull(country_state_id) ? strdup(country_state_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL
        );

    return contact_options_local_var;
end:
    return NULL;

}
