#ifndef open_exchange_rates_integrations_options_TEST
#define open_exchange_rates_integrations_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define open_exchange_rates_integrations_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/open_exchange_rates_integrations_options.h"
open_exchange_rates_integrations_options_t* instantiate_open_exchange_rates_integrations_options(int include_optional);



open_exchange_rates_integrations_options_t* instantiate_open_exchange_rates_integrations_options(int include_optional) {
  open_exchange_rates_integrations_options_t* open_exchange_rates_integrations_options = NULL;
  if (include_optional) {
    open_exchange_rates_integrations_options = open_exchange_rates_integrations_options_create(
      1,
      "0"
    );
  } else {
    open_exchange_rates_integrations_options = open_exchange_rates_integrations_options_create(
      1,
      "0"
    );
  }

  return open_exchange_rates_integrations_options;
}


#ifdef open_exchange_rates_integrations_options_MAIN

void test_open_exchange_rates_integrations_options(int include_optional) {
    open_exchange_rates_integrations_options_t* open_exchange_rates_integrations_options_1 = instantiate_open_exchange_rates_integrations_options(include_optional);

	cJSON* jsonopen_exchange_rates_integrations_options_1 = open_exchange_rates_integrations_options_convertToJSON(open_exchange_rates_integrations_options_1);
	printf("open_exchange_rates_integrations_options :\n%s\n", cJSON_Print(jsonopen_exchange_rates_integrations_options_1));
	open_exchange_rates_integrations_options_t* open_exchange_rates_integrations_options_2 = open_exchange_rates_integrations_options_parseFromJSON(jsonopen_exchange_rates_integrations_options_1);
	cJSON* jsonopen_exchange_rates_integrations_options_2 = open_exchange_rates_integrations_options_convertToJSON(open_exchange_rates_integrations_options_2);
	printf("repeating open_exchange_rates_integrations_options:\n%s\n", cJSON_Print(jsonopen_exchange_rates_integrations_options_2));
}

int main() {
  test_open_exchange_rates_integrations_options(1);
  test_open_exchange_rates_integrations_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // open_exchange_rates_integrations_options_MAIN
#endif // open_exchange_rates_integrations_options_TEST
