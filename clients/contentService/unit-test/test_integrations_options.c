#ifndef integrations_options_TEST
#define integrations_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define integrations_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/integrations_options.h"
integrations_options_t* instantiate_integrations_options(int include_optional);

#include "test_e_payco_integration_options.c"
#include "test_google_integration_options.c"
#include "test_facebook_integration_options.c"
#include "test_sendgrid_integrations_options.c"
#include "test_free_geo_ip_integration_options.c"
#include "test_microsoft_integrations_options.c"
#include "test_fenix_alliance_integrations_options.c"
#include "test_open_exchange_rates_integrations_options.c"


integrations_options_t* instantiate_integrations_options(int include_optional) {
  integrations_options_t* integrations_options = NULL;
  if (include_optional) {
    integrations_options = integrations_options_create(
      1,
       // false, not to have infinite recursion
      instantiate_e_payco_integration_options(0),
       // false, not to have infinite recursion
      instantiate_google_integration_options(0),
       // false, not to have infinite recursion
      instantiate_facebook_integration_options(0),
       // false, not to have infinite recursion
      instantiate_sendgrid_integrations_options(0),
       // false, not to have infinite recursion
      instantiate_free_geo_ip_integration_options(0),
       // false, not to have infinite recursion
      instantiate_microsoft_integrations_options(0),
       // false, not to have infinite recursion
      instantiate_fenix_alliance_integrations_options(0),
       // false, not to have infinite recursion
      instantiate_open_exchange_rates_integrations_options(0)
    );
  } else {
    integrations_options = integrations_options_create(
      1,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return integrations_options;
}


#ifdef integrations_options_MAIN

void test_integrations_options(int include_optional) {
    integrations_options_t* integrations_options_1 = instantiate_integrations_options(include_optional);

	cJSON* jsonintegrations_options_1 = integrations_options_convertToJSON(integrations_options_1);
	printf("integrations_options :\n%s\n", cJSON_Print(jsonintegrations_options_1));
	integrations_options_t* integrations_options_2 = integrations_options_parseFromJSON(jsonintegrations_options_1);
	cJSON* jsonintegrations_options_2 = integrations_options_convertToJSON(integrations_options_2);
	printf("repeating integrations_options:\n%s\n", cJSON_Print(jsonintegrations_options_2));
}

int main() {
  test_integrations_options(1);
  test_integrations_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // integrations_options_MAIN
#endif // integrations_options_TEST
