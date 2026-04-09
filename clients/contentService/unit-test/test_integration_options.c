#ifndef integration_options_TEST
#define integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/integration_options.h"
integration_options_t* instantiate_integration_options(int include_optional);



integration_options_t* instantiate_integration_options(int include_optional) {
  integration_options_t* integration_options = NULL;
  if (include_optional) {
    integration_options = integration_options_create(
      "0",
      "0"
    );
  } else {
    integration_options = integration_options_create(
      "0",
      "0"
    );
  }

  return integration_options;
}


#ifdef integration_options_MAIN

void test_integration_options(int include_optional) {
    integration_options_t* integration_options_1 = instantiate_integration_options(include_optional);

	cJSON* jsonintegration_options_1 = integration_options_convertToJSON(integration_options_1);
	printf("integration_options :\n%s\n", cJSON_Print(jsonintegration_options_1));
	integration_options_t* integration_options_2 = integration_options_parseFromJSON(jsonintegration_options_1);
	cJSON* jsonintegration_options_2 = integration_options_convertToJSON(integration_options_2);
	printf("repeating integration_options:\n%s\n", cJSON_Print(jsonintegration_options_2));
}

int main() {
  test_integration_options(1);
  test_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // integration_options_MAIN
#endif // integration_options_TEST
