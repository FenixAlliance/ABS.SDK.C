#ifndef microsoft_integrations_options_TEST
#define microsoft_integrations_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define microsoft_integrations_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/microsoft_integrations_options.h"
microsoft_integrations_options_t* instantiate_microsoft_integrations_options(int include_optional);

#include "test_microsoft_azure_integration_options.c"


microsoft_integrations_options_t* instantiate_microsoft_integrations_options(int include_optional) {
  microsoft_integrations_options_t* microsoft_integrations_options = NULL;
  if (include_optional) {
    microsoft_integrations_options = microsoft_integrations_options_create(
      1,
       // false, not to have infinite recursion
      instantiate_microsoft_azure_integration_options(0)
    );
  } else {
    microsoft_integrations_options = microsoft_integrations_options_create(
      1,
      NULL
    );
  }

  return microsoft_integrations_options;
}


#ifdef microsoft_integrations_options_MAIN

void test_microsoft_integrations_options(int include_optional) {
    microsoft_integrations_options_t* microsoft_integrations_options_1 = instantiate_microsoft_integrations_options(include_optional);

	cJSON* jsonmicrosoft_integrations_options_1 = microsoft_integrations_options_convertToJSON(microsoft_integrations_options_1);
	printf("microsoft_integrations_options :\n%s\n", cJSON_Print(jsonmicrosoft_integrations_options_1));
	microsoft_integrations_options_t* microsoft_integrations_options_2 = microsoft_integrations_options_parseFromJSON(jsonmicrosoft_integrations_options_1);
	cJSON* jsonmicrosoft_integrations_options_2 = microsoft_integrations_options_convertToJSON(microsoft_integrations_options_2);
	printf("repeating microsoft_integrations_options:\n%s\n", cJSON_Print(jsonmicrosoft_integrations_options_2));
}

int main() {
  test_microsoft_integrations_options(1);
  test_microsoft_integrations_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // microsoft_integrations_options_MAIN
#endif // microsoft_integrations_options_TEST
