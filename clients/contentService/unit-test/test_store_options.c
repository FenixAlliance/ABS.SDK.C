#ifndef store_options_TEST
#define store_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_options.h"
store_options_t* instantiate_store_options(int include_optional);

#include "test_cart_options.c"
#include "test_email_options.c"
#include "test_coupons_options.c"
#include "test_payment_options.c"
#include "test_reviews_options.c"
#include "test_advanced_options.c"
#include "test_services_options.c"
#include "test_inventory_options.c"
#include "test_integration_options.c"
#include "test_measurement_options.c"
#include "test_downloadables_options.c"
#include "test_subscriptions_options.c"
#include "test_tax_calculation_options.c"
#include "test_recommendation_options.c"
#include "test_price_calculation_options.c"
#include "test_identity_and_privacy_options.c"


store_options_t* instantiate_store_options(int include_optional) {
  store_options_t* store_options = NULL;
  if (include_optional) {
    store_options = store_options_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_cart_options(0),
       // false, not to have infinite recursion
      instantiate_email_options(0),
       // false, not to have infinite recursion
      instantiate_coupons_options(0),
       // false, not to have infinite recursion
      instantiate_payment_options(0),
      0,
       // false, not to have infinite recursion
      instantiate_reviews_options(0),
       // false, not to have infinite recursion
      instantiate_advanced_options(0),
       // false, not to have infinite recursion
      instantiate_services_options(0),
       // false, not to have infinite recursion
      instantiate_inventory_options(0),
       // false, not to have infinite recursion
      instantiate_integration_options(0),
       // false, not to have infinite recursion
      instantiate_measurement_options(0),
       // false, not to have infinite recursion
      instantiate_downloadables_options(0),
       // false, not to have infinite recursion
      instantiate_subscriptions_options(0),
       // false, not to have infinite recursion
      instantiate_tax_calculation_options(0),
       // false, not to have infinite recursion
      instantiate_recommendation_options(0),
       // false, not to have infinite recursion
      instantiate_price_calculation_options(0),
       // false, not to have infinite recursion
      instantiate_identity_and_privacy_options(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      contentservice_store_options_CURRENCYPOSITION_Left
    );
  } else {
    store_options = store_options_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      1,
      NULL,
      NULL,
      NULL,
      NULL,
      0,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      contentservice_store_options_CURRENCYPOSITION_Left
    );
  }

  return store_options;
}


#ifdef store_options_MAIN

void test_store_options(int include_optional) {
    store_options_t* store_options_1 = instantiate_store_options(include_optional);

	cJSON* jsonstore_options_1 = store_options_convertToJSON(store_options_1);
	printf("store_options :\n%s\n", cJSON_Print(jsonstore_options_1));
	store_options_t* store_options_2 = store_options_parseFromJSON(jsonstore_options_1);
	cJSON* jsonstore_options_2 = store_options_convertToJSON(store_options_2);
	printf("repeating store_options:\n%s\n", cJSON_Print(jsonstore_options_2));
}

int main() {
  test_store_options(1);
  test_store_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_options_MAIN
#endif // store_options_TEST
