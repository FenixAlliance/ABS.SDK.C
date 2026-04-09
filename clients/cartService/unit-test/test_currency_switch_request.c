#ifndef currency_switch_request_TEST
#define currency_switch_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define currency_switch_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/currency_switch_request.h"
currency_switch_request_t* instantiate_currency_switch_request(int include_optional);



currency_switch_request_t* instantiate_currency_switch_request(int include_optional) {
  currency_switch_request_t* currency_switch_request = NULL;
  if (include_optional) {
    currency_switch_request = currency_switch_request_create(
      "0",
      "0"
    );
  } else {
    currency_switch_request = currency_switch_request_create(
      "0",
      "0"
    );
  }

  return currency_switch_request;
}


#ifdef currency_switch_request_MAIN

void test_currency_switch_request(int include_optional) {
    currency_switch_request_t* currency_switch_request_1 = instantiate_currency_switch_request(include_optional);

	cJSON* jsoncurrency_switch_request_1 = currency_switch_request_convertToJSON(currency_switch_request_1);
	printf("currency_switch_request :\n%s\n", cJSON_Print(jsoncurrency_switch_request_1));
	currency_switch_request_t* currency_switch_request_2 = currency_switch_request_parseFromJSON(jsoncurrency_switch_request_1);
	cJSON* jsoncurrency_switch_request_2 = currency_switch_request_convertToJSON(currency_switch_request_2);
	printf("repeating currency_switch_request:\n%s\n", cJSON_Print(jsoncurrency_switch_request_2));
}

int main() {
  test_currency_switch_request(1);
  test_currency_switch_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // currency_switch_request_MAIN
#endif // currency_switch_request_TEST
