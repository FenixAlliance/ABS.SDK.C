#ifndef alliance_business_suite_integration_options_TEST
#define alliance_business_suite_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define alliance_business_suite_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/alliance_business_suite_integration_options.h"
alliance_business_suite_integration_options_t* instantiate_alliance_business_suite_integration_options(int include_optional);



alliance_business_suite_integration_options_t* instantiate_alliance_business_suite_integration_options(int include_optional) {
  alliance_business_suite_integration_options_t* alliance_business_suite_integration_options = NULL;
  if (include_optional) {
    alliance_business_suite_integration_options = alliance_business_suite_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    alliance_business_suite_integration_options = alliance_business_suite_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return alliance_business_suite_integration_options;
}


#ifdef alliance_business_suite_integration_options_MAIN

void test_alliance_business_suite_integration_options(int include_optional) {
    alliance_business_suite_integration_options_t* alliance_business_suite_integration_options_1 = instantiate_alliance_business_suite_integration_options(include_optional);

	cJSON* jsonalliance_business_suite_integration_options_1 = alliance_business_suite_integration_options_convertToJSON(alliance_business_suite_integration_options_1);
	printf("alliance_business_suite_integration_options :\n%s\n", cJSON_Print(jsonalliance_business_suite_integration_options_1));
	alliance_business_suite_integration_options_t* alliance_business_suite_integration_options_2 = alliance_business_suite_integration_options_parseFromJSON(jsonalliance_business_suite_integration_options_1);
	cJSON* jsonalliance_business_suite_integration_options_2 = alliance_business_suite_integration_options_convertToJSON(alliance_business_suite_integration_options_2);
	printf("repeating alliance_business_suite_integration_options:\n%s\n", cJSON_Print(jsonalliance_business_suite_integration_options_2));
}

int main() {
  test_alliance_business_suite_integration_options(1);
  test_alliance_business_suite_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // alliance_business_suite_integration_options_MAIN
#endif // alliance_business_suite_integration_options_TEST
