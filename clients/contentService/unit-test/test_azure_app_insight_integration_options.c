#ifndef azure_app_insight_integration_options_TEST
#define azure_app_insight_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define azure_app_insight_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/azure_app_insight_integration_options.h"
azure_app_insight_integration_options_t* instantiate_azure_app_insight_integration_options(int include_optional);



azure_app_insight_integration_options_t* instantiate_azure_app_insight_integration_options(int include_optional) {
  azure_app_insight_integration_options_t* azure_app_insight_integration_options = NULL;
  if (include_optional) {
    azure_app_insight_integration_options = azure_app_insight_integration_options_create(
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      1,
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    azure_app_insight_integration_options = azure_app_insight_integration_options_create(
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      1,
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return azure_app_insight_integration_options;
}


#ifdef azure_app_insight_integration_options_MAIN

void test_azure_app_insight_integration_options(int include_optional) {
    azure_app_insight_integration_options_t* azure_app_insight_integration_options_1 = instantiate_azure_app_insight_integration_options(include_optional);

	cJSON* jsonazure_app_insight_integration_options_1 = azure_app_insight_integration_options_convertToJSON(azure_app_insight_integration_options_1);
	printf("azure_app_insight_integration_options :\n%s\n", cJSON_Print(jsonazure_app_insight_integration_options_1));
	azure_app_insight_integration_options_t* azure_app_insight_integration_options_2 = azure_app_insight_integration_options_parseFromJSON(jsonazure_app_insight_integration_options_1);
	cJSON* jsonazure_app_insight_integration_options_2 = azure_app_insight_integration_options_convertToJSON(azure_app_insight_integration_options_2);
	printf("repeating azure_app_insight_integration_options:\n%s\n", cJSON_Print(jsonazure_app_insight_integration_options_2));
}

int main() {
  test_azure_app_insight_integration_options(1);
  test_azure_app_insight_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // azure_app_insight_integration_options_MAIN
#endif // azure_app_insight_integration_options_TEST
