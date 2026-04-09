#ifndef country_switch_request_TEST
#define country_switch_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_switch_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_switch_request.h"
country_switch_request_t* instantiate_country_switch_request(int include_optional);



country_switch_request_t* instantiate_country_switch_request(int include_optional) {
  country_switch_request_t* country_switch_request = NULL;
  if (include_optional) {
    country_switch_request = country_switch_request_create(
      "0",
      "0"
    );
  } else {
    country_switch_request = country_switch_request_create(
      "0",
      "0"
    );
  }

  return country_switch_request;
}


#ifdef country_switch_request_MAIN

void test_country_switch_request(int include_optional) {
    country_switch_request_t* country_switch_request_1 = instantiate_country_switch_request(include_optional);

	cJSON* jsoncountry_switch_request_1 = country_switch_request_convertToJSON(country_switch_request_1);
	printf("country_switch_request :\n%s\n", cJSON_Print(jsoncountry_switch_request_1));
	country_switch_request_t* country_switch_request_2 = country_switch_request_parseFromJSON(jsoncountry_switch_request_1);
	cJSON* jsoncountry_switch_request_2 = country_switch_request_convertToJSON(country_switch_request_2);
	printf("repeating country_switch_request:\n%s\n", cJSON_Print(jsoncountry_switch_request_2));
}

int main() {
  test_country_switch_request(1);
  test_country_switch_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_switch_request_MAIN
#endif // country_switch_request_TEST
