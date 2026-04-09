#ifndef microsoft_azure_integration_options_TEST
#define microsoft_azure_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define microsoft_azure_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/microsoft_azure_integration_options.h"
microsoft_azure_integration_options_t* instantiate_microsoft_azure_integration_options(int include_optional);

#include "test_azure_app_insight_integration_options.c"
#include "test_azure_storage_integration_options.c"


microsoft_azure_integration_options_t* instantiate_microsoft_azure_integration_options(int include_optional) {
  microsoft_azure_integration_options_t* microsoft_azure_integration_options = NULL;
  if (include_optional) {
    microsoft_azure_integration_options = microsoft_azure_integration_options_create(
      1,
       // false, not to have infinite recursion
      instantiate_azure_app_insight_integration_options(0),
       // false, not to have infinite recursion
      instantiate_azure_storage_integration_options(0)
    );
  } else {
    microsoft_azure_integration_options = microsoft_azure_integration_options_create(
      1,
      NULL,
      NULL
    );
  }

  return microsoft_azure_integration_options;
}


#ifdef microsoft_azure_integration_options_MAIN

void test_microsoft_azure_integration_options(int include_optional) {
    microsoft_azure_integration_options_t* microsoft_azure_integration_options_1 = instantiate_microsoft_azure_integration_options(include_optional);

	cJSON* jsonmicrosoft_azure_integration_options_1 = microsoft_azure_integration_options_convertToJSON(microsoft_azure_integration_options_1);
	printf("microsoft_azure_integration_options :\n%s\n", cJSON_Print(jsonmicrosoft_azure_integration_options_1));
	microsoft_azure_integration_options_t* microsoft_azure_integration_options_2 = microsoft_azure_integration_options_parseFromJSON(jsonmicrosoft_azure_integration_options_1);
	cJSON* jsonmicrosoft_azure_integration_options_2 = microsoft_azure_integration_options_convertToJSON(microsoft_azure_integration_options_2);
	printf("repeating microsoft_azure_integration_options:\n%s\n", cJSON_Print(jsonmicrosoft_azure_integration_options_2));
}

int main() {
  test_microsoft_azure_integration_options(1);
  test_microsoft_azure_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // microsoft_azure_integration_options_MAIN
#endif // microsoft_azure_integration_options_TEST
