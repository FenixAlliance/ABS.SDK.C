#ifndef fenix_alliance_integrations_options_TEST
#define fenix_alliance_integrations_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fenix_alliance_integrations_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fenix_alliance_integrations_options.h"
fenix_alliance_integrations_options_t* instantiate_fenix_alliance_integrations_options(int include_optional);

#include "test_infinity_comex_integration_options.c"
#include "test_alliance_business_suite_integration_options.c"


fenix_alliance_integrations_options_t* instantiate_fenix_alliance_integrations_options(int include_optional) {
  fenix_alliance_integrations_options_t* fenix_alliance_integrations_options = NULL;
  if (include_optional) {
    fenix_alliance_integrations_options = fenix_alliance_integrations_options_create(
      1,
       // false, not to have infinite recursion
      instantiate_infinity_comex_integration_options(0),
       // false, not to have infinite recursion
      instantiate_alliance_business_suite_integration_options(0)
    );
  } else {
    fenix_alliance_integrations_options = fenix_alliance_integrations_options_create(
      1,
      NULL,
      NULL
    );
  }

  return fenix_alliance_integrations_options;
}


#ifdef fenix_alliance_integrations_options_MAIN

void test_fenix_alliance_integrations_options(int include_optional) {
    fenix_alliance_integrations_options_t* fenix_alliance_integrations_options_1 = instantiate_fenix_alliance_integrations_options(include_optional);

	cJSON* jsonfenix_alliance_integrations_options_1 = fenix_alliance_integrations_options_convertToJSON(fenix_alliance_integrations_options_1);
	printf("fenix_alliance_integrations_options :\n%s\n", cJSON_Print(jsonfenix_alliance_integrations_options_1));
	fenix_alliance_integrations_options_t* fenix_alliance_integrations_options_2 = fenix_alliance_integrations_options_parseFromJSON(jsonfenix_alliance_integrations_options_1);
	cJSON* jsonfenix_alliance_integrations_options_2 = fenix_alliance_integrations_options_convertToJSON(fenix_alliance_integrations_options_2);
	printf("repeating fenix_alliance_integrations_options:\n%s\n", cJSON_Print(jsonfenix_alliance_integrations_options_2));
}

int main() {
  test_fenix_alliance_integrations_options(1);
  test_fenix_alliance_integrations_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // fenix_alliance_integrations_options_MAIN
#endif // fenix_alliance_integrations_options_TEST
