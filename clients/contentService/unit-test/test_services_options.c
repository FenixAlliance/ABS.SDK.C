#ifndef services_options_TEST
#define services_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define services_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/services_options.h"
services_options_t* instantiate_services_options(int include_optional);



services_options_t* instantiate_services_options(int include_optional) {
  services_options_t* services_options = NULL;
  if (include_optional) {
    services_options = services_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      contentservice_services_options_PRORATEFIRSTRENEWAL_AlwaysAndNoCharge
    );
  } else {
    services_options = services_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      contentservice_services_options_PRORATEFIRSTRENEWAL_AlwaysAndNoCharge
    );
  }

  return services_options;
}


#ifdef services_options_MAIN

void test_services_options(int include_optional) {
    services_options_t* services_options_1 = instantiate_services_options(include_optional);

	cJSON* jsonservices_options_1 = services_options_convertToJSON(services_options_1);
	printf("services_options :\n%s\n", cJSON_Print(jsonservices_options_1));
	services_options_t* services_options_2 = services_options_parseFromJSON(jsonservices_options_1);
	cJSON* jsonservices_options_2 = services_options_convertToJSON(services_options_2);
	printf("repeating services_options:\n%s\n", cJSON_Print(jsonservices_options_2));
}

int main() {
  test_services_options(1);
  test_services_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // services_options_MAIN
#endif // services_options_TEST
