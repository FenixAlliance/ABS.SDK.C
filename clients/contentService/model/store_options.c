#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_options.h"


char* store_options_currency_position_ToString(contentservice_store_options_CURRENCYPOSITION_e currency_position) {
    char* currency_positionArray[] =  { "NULL", "Left", "Right", "LeftWithSpace", "RightWithSpace" };
    return currency_positionArray[currency_position];
}

contentservice_store_options_CURRENCYPOSITION_e store_options_currency_position_FromString(char* currency_position){
    int stringToReturn = 0;
    char *currency_positionArray[] =  { "NULL", "Left", "Right", "LeftWithSpace", "RightWithSpace" };
    size_t sizeofArray = sizeof(currency_positionArray) / sizeof(currency_positionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(currency_position, currency_positionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

store_options_t *store_options_create(
    int enable,
    char *name,
    char *logo,
    char *footer_logo,
    char *tagline,
    char *description,
    char *address_line1,
    char *address_line2,
    char *city_id,
    char *state_id,
    char *country_id,
    char *currency_id,
    char *postal_code,
    int number_of_decimals,
    char *decimal_separator,
    int sell_to_all_countries,
    cart_options_t *cart_options,
    email_options_t *email_options,
    coupons_options_t *coupons_options,
    payment_options_t *payment_options,
    object_t *product_options,
    reviews_options_t *reviews_options,
    advanced_options_t *advanced_options,
    services_options_t *services_options,
    inventory_options_t *inventory_options,
    integration_options_t *integration_options,
    measurement_options_t *measurement_options,
    downloadables_options_t *downloadables_options,
    subscriptions_options_t *subscriptions_options,
    tax_calculation_options_t *tax_calculation_options,
    recommendation_options_t *recommendation_options,
    price_calculation_options_t *price_calculation_options,
    identity_and_privacy_options_t *identity_and_privacy_options,
    list_t *included_selling_locations,
    list_t *excluded_selling_locations,
    list_t *included_shipping_locations,
    list_t *excluded_shipping_locations,
    contentservice_store_options_CURRENCYPOSITION_e currency_position
    ) {
    store_options_t *store_options_local_var = malloc(sizeof(store_options_t));
    if (!store_options_local_var) {
        return NULL;
    }
    store_options_local_var->enable = enable;
    store_options_local_var->name = name;
    store_options_local_var->logo = logo;
    store_options_local_var->footer_logo = footer_logo;
    store_options_local_var->tagline = tagline;
    store_options_local_var->description = description;
    store_options_local_var->address_line1 = address_line1;
    store_options_local_var->address_line2 = address_line2;
    store_options_local_var->city_id = city_id;
    store_options_local_var->state_id = state_id;
    store_options_local_var->country_id = country_id;
    store_options_local_var->currency_id = currency_id;
    store_options_local_var->postal_code = postal_code;
    store_options_local_var->number_of_decimals = number_of_decimals;
    store_options_local_var->decimal_separator = decimal_separator;
    store_options_local_var->sell_to_all_countries = sell_to_all_countries;
    store_options_local_var->cart_options = cart_options;
    store_options_local_var->email_options = email_options;
    store_options_local_var->coupons_options = coupons_options;
    store_options_local_var->payment_options = payment_options;
    store_options_local_var->product_options = product_options;
    store_options_local_var->reviews_options = reviews_options;
    store_options_local_var->advanced_options = advanced_options;
    store_options_local_var->services_options = services_options;
    store_options_local_var->inventory_options = inventory_options;
    store_options_local_var->integration_options = integration_options;
    store_options_local_var->measurement_options = measurement_options;
    store_options_local_var->downloadables_options = downloadables_options;
    store_options_local_var->subscriptions_options = subscriptions_options;
    store_options_local_var->tax_calculation_options = tax_calculation_options;
    store_options_local_var->recommendation_options = recommendation_options;
    store_options_local_var->price_calculation_options = price_calculation_options;
    store_options_local_var->identity_and_privacy_options = identity_and_privacy_options;
    store_options_local_var->included_selling_locations = included_selling_locations;
    store_options_local_var->excluded_selling_locations = excluded_selling_locations;
    store_options_local_var->included_shipping_locations = included_shipping_locations;
    store_options_local_var->excluded_shipping_locations = excluded_shipping_locations;
    store_options_local_var->currency_position = currency_position;

    return store_options_local_var;
}


void store_options_free(store_options_t *store_options) {
    if(NULL == store_options){
        return ;
    }
    listEntry_t *listEntry;
    if (store_options->name) {
        free(store_options->name);
        store_options->name = NULL;
    }
    if (store_options->logo) {
        free(store_options->logo);
        store_options->logo = NULL;
    }
    if (store_options->footer_logo) {
        free(store_options->footer_logo);
        store_options->footer_logo = NULL;
    }
    if (store_options->tagline) {
        free(store_options->tagline);
        store_options->tagline = NULL;
    }
    if (store_options->description) {
        free(store_options->description);
        store_options->description = NULL;
    }
    if (store_options->address_line1) {
        free(store_options->address_line1);
        store_options->address_line1 = NULL;
    }
    if (store_options->address_line2) {
        free(store_options->address_line2);
        store_options->address_line2 = NULL;
    }
    if (store_options->city_id) {
        free(store_options->city_id);
        store_options->city_id = NULL;
    }
    if (store_options->state_id) {
        free(store_options->state_id);
        store_options->state_id = NULL;
    }
    if (store_options->country_id) {
        free(store_options->country_id);
        store_options->country_id = NULL;
    }
    if (store_options->currency_id) {
        free(store_options->currency_id);
        store_options->currency_id = NULL;
    }
    if (store_options->postal_code) {
        free(store_options->postal_code);
        store_options->postal_code = NULL;
    }
    if (store_options->decimal_separator) {
        free(store_options->decimal_separator);
        store_options->decimal_separator = NULL;
    }
    if (store_options->cart_options) {
        cart_options_free(store_options->cart_options);
        store_options->cart_options = NULL;
    }
    if (store_options->email_options) {
        email_options_free(store_options->email_options);
        store_options->email_options = NULL;
    }
    if (store_options->coupons_options) {
        coupons_options_free(store_options->coupons_options);
        store_options->coupons_options = NULL;
    }
    if (store_options->payment_options) {
        payment_options_free(store_options->payment_options);
        store_options->payment_options = NULL;
    }
    if (store_options->product_options) {
        object_free(store_options->product_options);
        store_options->product_options = NULL;
    }
    if (store_options->reviews_options) {
        reviews_options_free(store_options->reviews_options);
        store_options->reviews_options = NULL;
    }
    if (store_options->advanced_options) {
        advanced_options_free(store_options->advanced_options);
        store_options->advanced_options = NULL;
    }
    if (store_options->services_options) {
        services_options_free(store_options->services_options);
        store_options->services_options = NULL;
    }
    if (store_options->inventory_options) {
        inventory_options_free(store_options->inventory_options);
        store_options->inventory_options = NULL;
    }
    if (store_options->integration_options) {
        integration_options_free(store_options->integration_options);
        store_options->integration_options = NULL;
    }
    if (store_options->measurement_options) {
        measurement_options_free(store_options->measurement_options);
        store_options->measurement_options = NULL;
    }
    if (store_options->downloadables_options) {
        downloadables_options_free(store_options->downloadables_options);
        store_options->downloadables_options = NULL;
    }
    if (store_options->subscriptions_options) {
        subscriptions_options_free(store_options->subscriptions_options);
        store_options->subscriptions_options = NULL;
    }
    if (store_options->tax_calculation_options) {
        tax_calculation_options_free(store_options->tax_calculation_options);
        store_options->tax_calculation_options = NULL;
    }
    if (store_options->recommendation_options) {
        recommendation_options_free(store_options->recommendation_options);
        store_options->recommendation_options = NULL;
    }
    if (store_options->price_calculation_options) {
        price_calculation_options_free(store_options->price_calculation_options);
        store_options->price_calculation_options = NULL;
    }
    if (store_options->identity_and_privacy_options) {
        identity_and_privacy_options_free(store_options->identity_and_privacy_options);
        store_options->identity_and_privacy_options = NULL;
    }
    if (store_options->included_selling_locations) {
        list_ForEach(listEntry, store_options->included_selling_locations) {
            free(listEntry->data);
        }
        list_freeList(store_options->included_selling_locations);
        store_options->included_selling_locations = NULL;
    }
    if (store_options->excluded_selling_locations) {
        list_ForEach(listEntry, store_options->excluded_selling_locations) {
            free(listEntry->data);
        }
        list_freeList(store_options->excluded_selling_locations);
        store_options->excluded_selling_locations = NULL;
    }
    if (store_options->included_shipping_locations) {
        list_ForEach(listEntry, store_options->included_shipping_locations) {
            free(listEntry->data);
        }
        list_freeList(store_options->included_shipping_locations);
        store_options->included_shipping_locations = NULL;
    }
    if (store_options->excluded_shipping_locations) {
        list_ForEach(listEntry, store_options->excluded_shipping_locations) {
            free(listEntry->data);
        }
        list_freeList(store_options->excluded_shipping_locations);
        store_options->excluded_shipping_locations = NULL;
    }
    free(store_options);
}

cJSON *store_options_convertToJSON(store_options_t *store_options) {
    cJSON *item = cJSON_CreateObject();

    // store_options->enable
    if(store_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", store_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // store_options->name
    if(store_options->name) {
    if(cJSON_AddStringToObject(item, "name", store_options->name) == NULL) {
    goto fail; //String
    }
    }


    // store_options->logo
    if(store_options->logo) {
    if(cJSON_AddStringToObject(item, "logo", store_options->logo) == NULL) {
    goto fail; //String
    }
    }


    // store_options->footer_logo
    if(store_options->footer_logo) {
    if(cJSON_AddStringToObject(item, "footerLogo", store_options->footer_logo) == NULL) {
    goto fail; //String
    }
    }


    // store_options->tagline
    if(store_options->tagline) {
    if(cJSON_AddStringToObject(item, "tagline", store_options->tagline) == NULL) {
    goto fail; //String
    }
    }


    // store_options->description
    if(store_options->description) {
    if(cJSON_AddStringToObject(item, "description", store_options->description) == NULL) {
    goto fail; //String
    }
    }


    // store_options->address_line1
    if(store_options->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", store_options->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // store_options->address_line2
    if(store_options->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", store_options->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // store_options->city_id
    if(store_options->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", store_options->city_id) == NULL) {
    goto fail; //String
    }
    }


    // store_options->state_id
    if(store_options->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", store_options->state_id) == NULL) {
    goto fail; //String
    }
    }


    // store_options->country_id
    if(store_options->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", store_options->country_id) == NULL) {
    goto fail; //String
    }
    }


    // store_options->currency_id
    if(store_options->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", store_options->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // store_options->postal_code
    if(store_options->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", store_options->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // store_options->number_of_decimals
    if(store_options->number_of_decimals) {
    if(cJSON_AddNumberToObject(item, "numberOfDecimals", store_options->number_of_decimals) == NULL) {
    goto fail; //Numeric
    }
    }


    // store_options->decimal_separator
    if(store_options->decimal_separator) {
    if(cJSON_AddStringToObject(item, "decimalSeparator", store_options->decimal_separator) == NULL) {
    goto fail; //String
    }
    }


    // store_options->sell_to_all_countries
    if(store_options->sell_to_all_countries) {
    if(cJSON_AddBoolToObject(item, "sellToAllCountries", store_options->sell_to_all_countries) == NULL) {
    goto fail; //Bool
    }
    }


    // store_options->cart_options
    if(store_options->cart_options) {
    cJSON *cart_options_local_JSON = cart_options_convertToJSON(store_options->cart_options);
    if(cart_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cartOptions", cart_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->email_options
    if(store_options->email_options) {
    cJSON *email_options_local_JSON = email_options_convertToJSON(store_options->email_options);
    if(email_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "emailOptions", email_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->coupons_options
    if(store_options->coupons_options) {
    cJSON *coupons_options_local_JSON = coupons_options_convertToJSON(store_options->coupons_options);
    if(coupons_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "couponsOptions", coupons_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->payment_options
    if(store_options->payment_options) {
    cJSON *payment_options_local_JSON = payment_options_convertToJSON(store_options->payment_options);
    if(payment_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "paymentOptions", payment_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->product_options
    if(store_options->product_options) {
    cJSON *product_options_object = object_convertToJSON(store_options->product_options);
    if(product_options_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "productOptions", product_options_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->reviews_options
    if(store_options->reviews_options) {
    cJSON *reviews_options_local_JSON = reviews_options_convertToJSON(store_options->reviews_options);
    if(reviews_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reviewsOptions", reviews_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->advanced_options
    if(store_options->advanced_options) {
    cJSON *advanced_options_local_JSON = advanced_options_convertToJSON(store_options->advanced_options);
    if(advanced_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "advancedOptions", advanced_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->services_options
    if(store_options->services_options) {
    cJSON *services_options_local_JSON = services_options_convertToJSON(store_options->services_options);
    if(services_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "servicesOptions", services_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->inventory_options
    if(store_options->inventory_options) {
    cJSON *inventory_options_local_JSON = inventory_options_convertToJSON(store_options->inventory_options);
    if(inventory_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "inventoryOptions", inventory_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->integration_options
    if(store_options->integration_options) {
    cJSON *integration_options_local_JSON = integration_options_convertToJSON(store_options->integration_options);
    if(integration_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "integrationOptions", integration_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->measurement_options
    if(store_options->measurement_options) {
    cJSON *measurement_options_local_JSON = measurement_options_convertToJSON(store_options->measurement_options);
    if(measurement_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "measurementOptions", measurement_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->downloadables_options
    if(store_options->downloadables_options) {
    cJSON *downloadables_options_local_JSON = downloadables_options_convertToJSON(store_options->downloadables_options);
    if(downloadables_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "downloadablesOptions", downloadables_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->subscriptions_options
    if(store_options->subscriptions_options) {
    cJSON *subscriptions_options_local_JSON = subscriptions_options_convertToJSON(store_options->subscriptions_options);
    if(subscriptions_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionsOptions", subscriptions_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->tax_calculation_options
    if(store_options->tax_calculation_options) {
    cJSON *tax_calculation_options_local_JSON = tax_calculation_options_convertToJSON(store_options->tax_calculation_options);
    if(tax_calculation_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "taxCalculationOptions", tax_calculation_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->recommendation_options
    if(store_options->recommendation_options) {
    cJSON *recommendation_options_local_JSON = recommendation_options_convertToJSON(store_options->recommendation_options);
    if(recommendation_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "recommendationOptions", recommendation_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->price_calculation_options
    if(store_options->price_calculation_options) {
    cJSON *price_calculation_options_local_JSON = price_calculation_options_convertToJSON(store_options->price_calculation_options);
    if(price_calculation_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "priceCalculationOptions", price_calculation_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->identity_and_privacy_options
    if(store_options->identity_and_privacy_options) {
    cJSON *identity_and_privacy_options_local_JSON = identity_and_privacy_options_convertToJSON(store_options->identity_and_privacy_options);
    if(identity_and_privacy_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "identityAndPrivacyOptions", identity_and_privacy_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_options->included_selling_locations
    if(store_options->included_selling_locations) {
    cJSON *included_selling_locations = cJSON_AddArrayToObject(item, "includedSellingLocations");
    if(included_selling_locations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *included_selling_locationsListEntry;
    list_ForEach(included_selling_locationsListEntry, store_options->included_selling_locations) {
    if(cJSON_AddStringToObject(included_selling_locations, "", (char*)included_selling_locationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_options->excluded_selling_locations
    if(store_options->excluded_selling_locations) {
    cJSON *excluded_selling_locations = cJSON_AddArrayToObject(item, "excludedSellingLocations");
    if(excluded_selling_locations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *excluded_selling_locationsListEntry;
    list_ForEach(excluded_selling_locationsListEntry, store_options->excluded_selling_locations) {
    if(cJSON_AddStringToObject(excluded_selling_locations, "", (char*)excluded_selling_locationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_options->included_shipping_locations
    if(store_options->included_shipping_locations) {
    cJSON *included_shipping_locations = cJSON_AddArrayToObject(item, "includedShippingLocations");
    if(included_shipping_locations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *included_shipping_locationsListEntry;
    list_ForEach(included_shipping_locationsListEntry, store_options->included_shipping_locations) {
    if(cJSON_AddStringToObject(included_shipping_locations, "", (char*)included_shipping_locationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_options->excluded_shipping_locations
    if(store_options->excluded_shipping_locations) {
    cJSON *excluded_shipping_locations = cJSON_AddArrayToObject(item, "excludedShippingLocations");
    if(excluded_shipping_locations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *excluded_shipping_locationsListEntry;
    list_ForEach(excluded_shipping_locationsListEntry, store_options->excluded_shipping_locations) {
    if(cJSON_AddStringToObject(excluded_shipping_locations, "", (char*)excluded_shipping_locationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_options->currency_position
    if(store_options->currency_position != contentservice_store_options_CURRENCYPOSITION_NULL) {
    if(cJSON_AddStringToObject(item, "currencyPosition", currency_positionstore_options_ToString(store_options->currency_position)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

store_options_t *store_options_parseFromJSON(cJSON *store_optionsJSON){

    store_options_t *store_options_local_var = NULL;

    // define the local variable for store_options->cart_options
    cart_options_t *cart_options_local_nonprim = NULL;

    // define the local variable for store_options->email_options
    email_options_t *email_options_local_nonprim = NULL;

    // define the local variable for store_options->coupons_options
    coupons_options_t *coupons_options_local_nonprim = NULL;

    // define the local variable for store_options->payment_options
    payment_options_t *payment_options_local_nonprim = NULL;

    // define the local variable for store_options->reviews_options
    reviews_options_t *reviews_options_local_nonprim = NULL;

    // define the local variable for store_options->advanced_options
    advanced_options_t *advanced_options_local_nonprim = NULL;

    // define the local variable for store_options->services_options
    services_options_t *services_options_local_nonprim = NULL;

    // define the local variable for store_options->inventory_options
    inventory_options_t *inventory_options_local_nonprim = NULL;

    // define the local variable for store_options->integration_options
    integration_options_t *integration_options_local_nonprim = NULL;

    // define the local variable for store_options->measurement_options
    measurement_options_t *measurement_options_local_nonprim = NULL;

    // define the local variable for store_options->downloadables_options
    downloadables_options_t *downloadables_options_local_nonprim = NULL;

    // define the local variable for store_options->subscriptions_options
    subscriptions_options_t *subscriptions_options_local_nonprim = NULL;

    // define the local variable for store_options->tax_calculation_options
    tax_calculation_options_t *tax_calculation_options_local_nonprim = NULL;

    // define the local variable for store_options->recommendation_options
    recommendation_options_t *recommendation_options_local_nonprim = NULL;

    // define the local variable for store_options->price_calculation_options
    price_calculation_options_t *price_calculation_options_local_nonprim = NULL;

    // define the local variable for store_options->identity_and_privacy_options
    identity_and_privacy_options_t *identity_and_privacy_options_local_nonprim = NULL;

    // define the local list for store_options->included_selling_locations
    list_t *included_selling_locationsList = NULL;

    // define the local list for store_options->excluded_selling_locations
    list_t *excluded_selling_locationsList = NULL;

    // define the local list for store_options->included_shipping_locations
    list_t *included_shipping_locationsList = NULL;

    // define the local list for store_options->excluded_shipping_locations
    list_t *excluded_shipping_locationsList = NULL;

    // store_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // store_options->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // store_options->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // store_options->footer_logo
    cJSON *footer_logo = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "footerLogo");
    if (footer_logo) { 
    if(!cJSON_IsString(footer_logo) && !cJSON_IsNull(footer_logo))
    {
    goto end; //String
    }
    }

    // store_options->tagline
    cJSON *tagline = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "tagline");
    if (tagline) { 
    if(!cJSON_IsString(tagline) && !cJSON_IsNull(tagline))
    {
    goto end; //String
    }
    }

    // store_options->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // store_options->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // store_options->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // store_options->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // store_options->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // store_options->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // store_options->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // store_options->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // store_options->number_of_decimals
    cJSON *number_of_decimals = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "numberOfDecimals");
    if (number_of_decimals) { 
    if(!cJSON_IsNumber(number_of_decimals))
    {
    goto end; //Numeric
    }
    }

    // store_options->decimal_separator
    cJSON *decimal_separator = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "decimalSeparator");
    if (decimal_separator) { 
    if(!cJSON_IsString(decimal_separator) && !cJSON_IsNull(decimal_separator))
    {
    goto end; //String
    }
    }

    // store_options->sell_to_all_countries
    cJSON *sell_to_all_countries = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "sellToAllCountries");
    if (sell_to_all_countries) { 
    if(!cJSON_IsBool(sell_to_all_countries))
    {
    goto end; //Bool
    }
    }

    // store_options->cart_options
    cJSON *cart_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "cartOptions");
    if (cart_options) { 
    cart_options_local_nonprim = cart_options_parseFromJSON(cart_options); //nonprimitive
    }

    // store_options->email_options
    cJSON *email_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "emailOptions");
    if (email_options) { 
    email_options_local_nonprim = email_options_parseFromJSON(email_options); //nonprimitive
    }

    // store_options->coupons_options
    cJSON *coupons_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "couponsOptions");
    if (coupons_options) { 
    coupons_options_local_nonprim = coupons_options_parseFromJSON(coupons_options); //nonprimitive
    }

    // store_options->payment_options
    cJSON *payment_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "paymentOptions");
    if (payment_options) { 
    payment_options_local_nonprim = payment_options_parseFromJSON(payment_options); //nonprimitive
    }

    // store_options->product_options
    cJSON *product_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "productOptions");
    object_t *product_options_local_object = NULL;
    if (product_options) { 
    product_options_local_object = object_parseFromJSON(product_options); //object
    }

    // store_options->reviews_options
    cJSON *reviews_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "reviewsOptions");
    if (reviews_options) { 
    reviews_options_local_nonprim = reviews_options_parseFromJSON(reviews_options); //nonprimitive
    }

    // store_options->advanced_options
    cJSON *advanced_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "advancedOptions");
    if (advanced_options) { 
    advanced_options_local_nonprim = advanced_options_parseFromJSON(advanced_options); //nonprimitive
    }

    // store_options->services_options
    cJSON *services_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "servicesOptions");
    if (services_options) { 
    services_options_local_nonprim = services_options_parseFromJSON(services_options); //nonprimitive
    }

    // store_options->inventory_options
    cJSON *inventory_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "inventoryOptions");
    if (inventory_options) { 
    inventory_options_local_nonprim = inventory_options_parseFromJSON(inventory_options); //nonprimitive
    }

    // store_options->integration_options
    cJSON *integration_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "integrationOptions");
    if (integration_options) { 
    integration_options_local_nonprim = integration_options_parseFromJSON(integration_options); //nonprimitive
    }

    // store_options->measurement_options
    cJSON *measurement_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "measurementOptions");
    if (measurement_options) { 
    measurement_options_local_nonprim = measurement_options_parseFromJSON(measurement_options); //nonprimitive
    }

    // store_options->downloadables_options
    cJSON *downloadables_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "downloadablesOptions");
    if (downloadables_options) { 
    downloadables_options_local_nonprim = downloadables_options_parseFromJSON(downloadables_options); //nonprimitive
    }

    // store_options->subscriptions_options
    cJSON *subscriptions_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "subscriptionsOptions");
    if (subscriptions_options) { 
    subscriptions_options_local_nonprim = subscriptions_options_parseFromJSON(subscriptions_options); //nonprimitive
    }

    // store_options->tax_calculation_options
    cJSON *tax_calculation_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "taxCalculationOptions");
    if (tax_calculation_options) { 
    tax_calculation_options_local_nonprim = tax_calculation_options_parseFromJSON(tax_calculation_options); //nonprimitive
    }

    // store_options->recommendation_options
    cJSON *recommendation_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "recommendationOptions");
    if (recommendation_options) { 
    recommendation_options_local_nonprim = recommendation_options_parseFromJSON(recommendation_options); //nonprimitive
    }

    // store_options->price_calculation_options
    cJSON *price_calculation_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "priceCalculationOptions");
    if (price_calculation_options) { 
    price_calculation_options_local_nonprim = price_calculation_options_parseFromJSON(price_calculation_options); //nonprimitive
    }

    // store_options->identity_and_privacy_options
    cJSON *identity_and_privacy_options = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "identityAndPrivacyOptions");
    if (identity_and_privacy_options) { 
    identity_and_privacy_options_local_nonprim = identity_and_privacy_options_parseFromJSON(identity_and_privacy_options); //nonprimitive
    }

    // store_options->included_selling_locations
    cJSON *included_selling_locations = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "includedSellingLocations");
    if (included_selling_locations) { 
    cJSON *included_selling_locations_local = NULL;
    if(!cJSON_IsArray(included_selling_locations)) {
        goto end;//primitive container
    }
    included_selling_locationsList = list_createList();

    cJSON_ArrayForEach(included_selling_locations_local, included_selling_locations)
    {
        if(!cJSON_IsString(included_selling_locations_local))
        {
            goto end;
        }
        list_addElement(included_selling_locationsList , strdup(included_selling_locations_local->valuestring));
    }
    }

    // store_options->excluded_selling_locations
    cJSON *excluded_selling_locations = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "excludedSellingLocations");
    if (excluded_selling_locations) { 
    cJSON *excluded_selling_locations_local = NULL;
    if(!cJSON_IsArray(excluded_selling_locations)) {
        goto end;//primitive container
    }
    excluded_selling_locationsList = list_createList();

    cJSON_ArrayForEach(excluded_selling_locations_local, excluded_selling_locations)
    {
        if(!cJSON_IsString(excluded_selling_locations_local))
        {
            goto end;
        }
        list_addElement(excluded_selling_locationsList , strdup(excluded_selling_locations_local->valuestring));
    }
    }

    // store_options->included_shipping_locations
    cJSON *included_shipping_locations = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "includedShippingLocations");
    if (included_shipping_locations) { 
    cJSON *included_shipping_locations_local = NULL;
    if(!cJSON_IsArray(included_shipping_locations)) {
        goto end;//primitive container
    }
    included_shipping_locationsList = list_createList();

    cJSON_ArrayForEach(included_shipping_locations_local, included_shipping_locations)
    {
        if(!cJSON_IsString(included_shipping_locations_local))
        {
            goto end;
        }
        list_addElement(included_shipping_locationsList , strdup(included_shipping_locations_local->valuestring));
    }
    }

    // store_options->excluded_shipping_locations
    cJSON *excluded_shipping_locations = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "excludedShippingLocations");
    if (excluded_shipping_locations) { 
    cJSON *excluded_shipping_locations_local = NULL;
    if(!cJSON_IsArray(excluded_shipping_locations)) {
        goto end;//primitive container
    }
    excluded_shipping_locationsList = list_createList();

    cJSON_ArrayForEach(excluded_shipping_locations_local, excluded_shipping_locations)
    {
        if(!cJSON_IsString(excluded_shipping_locations_local))
        {
            goto end;
        }
        list_addElement(excluded_shipping_locationsList , strdup(excluded_shipping_locations_local->valuestring));
    }
    }

    // store_options->currency_position
    cJSON *currency_position = cJSON_GetObjectItemCaseSensitive(store_optionsJSON, "currencyPosition");
    contentservice_store_options_CURRENCYPOSITION_e currency_positionVariable;
    if (currency_position) { 
    if(!cJSON_IsString(currency_position))
    {
    goto end; //Enum
    }
    currency_positionVariable = store_options_currency_position_FromString(currency_position->valuestring);
    }


    store_options_local_var = store_options_create (
        enable ? enable->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        footer_logo && !cJSON_IsNull(footer_logo) ? strdup(footer_logo->valuestring) : NULL,
        tagline && !cJSON_IsNull(tagline) ? strdup(tagline->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        address_line1 && !cJSON_IsNull(address_line1) ? strdup(address_line1->valuestring) : NULL,
        address_line2 && !cJSON_IsNull(address_line2) ? strdup(address_line2->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        number_of_decimals ? number_of_decimals->valuedouble : 0,
        decimal_separator && !cJSON_IsNull(decimal_separator) ? strdup(decimal_separator->valuestring) : NULL,
        sell_to_all_countries ? sell_to_all_countries->valueint : 0,
        cart_options ? cart_options_local_nonprim : NULL,
        email_options ? email_options_local_nonprim : NULL,
        coupons_options ? coupons_options_local_nonprim : NULL,
        payment_options ? payment_options_local_nonprim : NULL,
        product_options ? product_options_local_object : NULL,
        reviews_options ? reviews_options_local_nonprim : NULL,
        advanced_options ? advanced_options_local_nonprim : NULL,
        services_options ? services_options_local_nonprim : NULL,
        inventory_options ? inventory_options_local_nonprim : NULL,
        integration_options ? integration_options_local_nonprim : NULL,
        measurement_options ? measurement_options_local_nonprim : NULL,
        downloadables_options ? downloadables_options_local_nonprim : NULL,
        subscriptions_options ? subscriptions_options_local_nonprim : NULL,
        tax_calculation_options ? tax_calculation_options_local_nonprim : NULL,
        recommendation_options ? recommendation_options_local_nonprim : NULL,
        price_calculation_options ? price_calculation_options_local_nonprim : NULL,
        identity_and_privacy_options ? identity_and_privacy_options_local_nonprim : NULL,
        included_selling_locations ? included_selling_locationsList : NULL,
        excluded_selling_locations ? excluded_selling_locationsList : NULL,
        included_shipping_locations ? included_shipping_locationsList : NULL,
        excluded_shipping_locations ? excluded_shipping_locationsList : NULL,
        currency_position ? currency_positionVariable : contentservice_store_options_CURRENCYPOSITION_NULL
        );

    return store_options_local_var;
end:
    if (cart_options_local_nonprim) {
        cart_options_free(cart_options_local_nonprim);
        cart_options_local_nonprim = NULL;
    }
    if (email_options_local_nonprim) {
        email_options_free(email_options_local_nonprim);
        email_options_local_nonprim = NULL;
    }
    if (coupons_options_local_nonprim) {
        coupons_options_free(coupons_options_local_nonprim);
        coupons_options_local_nonprim = NULL;
    }
    if (payment_options_local_nonprim) {
        payment_options_free(payment_options_local_nonprim);
        payment_options_local_nonprim = NULL;
    }
    if (reviews_options_local_nonprim) {
        reviews_options_free(reviews_options_local_nonprim);
        reviews_options_local_nonprim = NULL;
    }
    if (advanced_options_local_nonprim) {
        advanced_options_free(advanced_options_local_nonprim);
        advanced_options_local_nonprim = NULL;
    }
    if (services_options_local_nonprim) {
        services_options_free(services_options_local_nonprim);
        services_options_local_nonprim = NULL;
    }
    if (inventory_options_local_nonprim) {
        inventory_options_free(inventory_options_local_nonprim);
        inventory_options_local_nonprim = NULL;
    }
    if (integration_options_local_nonprim) {
        integration_options_free(integration_options_local_nonprim);
        integration_options_local_nonprim = NULL;
    }
    if (measurement_options_local_nonprim) {
        measurement_options_free(measurement_options_local_nonprim);
        measurement_options_local_nonprim = NULL;
    }
    if (downloadables_options_local_nonprim) {
        downloadables_options_free(downloadables_options_local_nonprim);
        downloadables_options_local_nonprim = NULL;
    }
    if (subscriptions_options_local_nonprim) {
        subscriptions_options_free(subscriptions_options_local_nonprim);
        subscriptions_options_local_nonprim = NULL;
    }
    if (tax_calculation_options_local_nonprim) {
        tax_calculation_options_free(tax_calculation_options_local_nonprim);
        tax_calculation_options_local_nonprim = NULL;
    }
    if (recommendation_options_local_nonprim) {
        recommendation_options_free(recommendation_options_local_nonprim);
        recommendation_options_local_nonprim = NULL;
    }
    if (price_calculation_options_local_nonprim) {
        price_calculation_options_free(price_calculation_options_local_nonprim);
        price_calculation_options_local_nonprim = NULL;
    }
    if (identity_and_privacy_options_local_nonprim) {
        identity_and_privacy_options_free(identity_and_privacy_options_local_nonprim);
        identity_and_privacy_options_local_nonprim = NULL;
    }
    if (included_selling_locationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, included_selling_locationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(included_selling_locationsList);
        included_selling_locationsList = NULL;
    }
    if (excluded_selling_locationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, excluded_selling_locationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(excluded_selling_locationsList);
        excluded_selling_locationsList = NULL;
    }
    if (included_shipping_locationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, included_shipping_locationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(included_shipping_locationsList);
        included_shipping_locationsList = NULL;
    }
    if (excluded_shipping_locationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, excluded_shipping_locationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(excluded_shipping_locationsList);
        excluded_shipping_locationsList = NULL;
    }
    return NULL;

}
