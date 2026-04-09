#ifndef dashboard_options_TEST
#define dashboard_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dashboard_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dashboard_options.h"
dashboard_options_t* instantiate_dashboard_options(int include_optional);



dashboard_options_t* instantiate_dashboard_options(int include_optional) {
  dashboard_options_t* dashboard_options = NULL;
  if (include_optional) {
    dashboard_options = dashboard_options_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    dashboard_options = dashboard_options_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return dashboard_options;
}


#ifdef dashboard_options_MAIN

void test_dashboard_options(int include_optional) {
    dashboard_options_t* dashboard_options_1 = instantiate_dashboard_options(include_optional);

	cJSON* jsondashboard_options_1 = dashboard_options_convertToJSON(dashboard_options_1);
	printf("dashboard_options :\n%s\n", cJSON_Print(jsondashboard_options_1));
	dashboard_options_t* dashboard_options_2 = dashboard_options_parseFromJSON(jsondashboard_options_1);
	cJSON* jsondashboard_options_2 = dashboard_options_convertToJSON(dashboard_options_2);
	printf("repeating dashboard_options:\n%s\n", cJSON_Print(jsondashboard_options_2));
}

int main() {
  test_dashboard_options(1);
  test_dashboard_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // dashboard_options_MAIN
#endif // dashboard_options_TEST
