#ifndef currency_id_TEST
#define currency_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define currency_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/currency_id.h"
currency_id_t* instantiate_currency_id(int include_optional);



currency_id_t* instantiate_currency_id(int include_optional) {
  currency_id_t* currency_id = NULL;
  if (include_optional) {
    currency_id = currency_id_create(
      "0",
      "0",
      "0"
    );
  } else {
    currency_id = currency_id_create(
      "0",
      "0",
      "0"
    );
  }

  return currency_id;
}


#ifdef currency_id_MAIN

void test_currency_id(int include_optional) {
    currency_id_t* currency_id_1 = instantiate_currency_id(include_optional);

	cJSON* jsoncurrency_id_1 = currency_id_convertToJSON(currency_id_1);
	printf("currency_id :\n%s\n", cJSON_Print(jsoncurrency_id_1));
	currency_id_t* currency_id_2 = currency_id_parseFromJSON(jsoncurrency_id_1);
	cJSON* jsoncurrency_id_2 = currency_id_convertToJSON(currency_id_2);
	printf("repeating currency_id:\n%s\n", cJSON_Print(jsoncurrency_id_2));
}

int main() {
  test_currency_id(1);
  test_currency_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // currency_id_MAIN
#endif // currency_id_TEST
