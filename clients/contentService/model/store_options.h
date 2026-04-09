/*
 * store_options.h
 *
 * 
 */

#ifndef _store_options_H_
#define _store_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_options_t store_options_t;

#include "advanced_options.h"
#include "cart_options.h"
#include "coupons_options.h"
#include "downloadables_options.h"
#include "email_options.h"
#include "identity_and_privacy_options.h"
#include "integration_options.h"
#include "inventory_options.h"
#include "measurement_options.h"
#include "object.h"
#include "payment_options.h"
#include "price_calculation_options.h"
#include "recommendation_options.h"
#include "reviews_options.h"
#include "services_options.h"
#include "subscriptions_options.h"
#include "tax_calculation_options.h"

// Enum CURRENCYPOSITION for store_options

typedef enum  { contentservice_store_options_CURRENCYPOSITION_NULL = 0, contentservice_store_options_CURRENCYPOSITION_Left, contentservice_store_options_CURRENCYPOSITION_Right, contentservice_store_options_CURRENCYPOSITION_LeftWithSpace, contentservice_store_options_CURRENCYPOSITION_RightWithSpace } contentservice_store_options_CURRENCYPOSITION_e;

char* store_options_currency_position_ToString(contentservice_store_options_CURRENCYPOSITION_e currency_position);

contentservice_store_options_CURRENCYPOSITION_e store_options_currency_position_FromString(char* currency_position);



typedef struct store_options_t {
    int enable; //boolean
    char *name; // string
    char *logo; // string
    char *footer_logo; // string
    char *tagline; // string
    char *description; // string
    char *address_line1; // string
    char *address_line2; // string
    char *city_id; // string
    char *state_id; // string
    char *country_id; // string
    char *currency_id; // string
    char *postal_code; // string
    int number_of_decimals; //numeric
    char *decimal_separator; // string
    int sell_to_all_countries; //boolean
    struct cart_options_t *cart_options; //model
    struct email_options_t *email_options; //model
    struct coupons_options_t *coupons_options; //model
    struct payment_options_t *payment_options; //model
    object_t *product_options; //object
    struct reviews_options_t *reviews_options; //model
    struct advanced_options_t *advanced_options; //model
    struct services_options_t *services_options; //model
    struct inventory_options_t *inventory_options; //model
    struct integration_options_t *integration_options; //model
    struct measurement_options_t *measurement_options; //model
    struct downloadables_options_t *downloadables_options; //model
    struct subscriptions_options_t *subscriptions_options; //model
    struct tax_calculation_options_t *tax_calculation_options; //model
    struct recommendation_options_t *recommendation_options; //model
    struct price_calculation_options_t *price_calculation_options; //model
    struct identity_and_privacy_options_t *identity_and_privacy_options; //model
    list_t *included_selling_locations; //primitive container
    list_t *excluded_selling_locations; //primitive container
    list_t *included_shipping_locations; //primitive container
    list_t *excluded_shipping_locations; //primitive container
    contentservice_store_options_CURRENCYPOSITION_e currency_position; //enum

} store_options_t;

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
);

void store_options_free(store_options_t *store_options);

store_options_t *store_options_parseFromJSON(cJSON *store_optionsJSON);

cJSON *store_options_convertToJSON(store_options_t *store_options);

#endif /* _store_options_H_ */

