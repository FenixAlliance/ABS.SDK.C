#ifndef currency_dto_list_envelope_TEST
#define currency_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define currency_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/currency_dto_list_envelope.h"
currency_dto_list_envelope_t* instantiate_currency_dto_list_envelope(int include_optional);



currency_dto_list_envelope_t* instantiate_currency_dto_list_envelope(int include_optional) {
  currency_dto_list_envelope_t* currency_dto_list_envelope = NULL;
  if (include_optional) {
    currency_dto_list_envelope = currency_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    currency_dto_list_envelope = currency_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return currency_dto_list_envelope;
}


#ifdef currency_dto_list_envelope_MAIN

void test_currency_dto_list_envelope(int include_optional) {
    currency_dto_list_envelope_t* currency_dto_list_envelope_1 = instantiate_currency_dto_list_envelope(include_optional);

	cJSON* jsoncurrency_dto_list_envelope_1 = currency_dto_list_envelope_convertToJSON(currency_dto_list_envelope_1);
	printf("currency_dto_list_envelope :\n%s\n", cJSON_Print(jsoncurrency_dto_list_envelope_1));
	currency_dto_list_envelope_t* currency_dto_list_envelope_2 = currency_dto_list_envelope_parseFromJSON(jsoncurrency_dto_list_envelope_1);
	cJSON* jsoncurrency_dto_list_envelope_2 = currency_dto_list_envelope_convertToJSON(currency_dto_list_envelope_2);
	printf("repeating currency_dto_list_envelope:\n%s\n", cJSON_Print(jsoncurrency_dto_list_envelope_2));
}

int main() {
  test_currency_dto_list_envelope(1);
  test_currency_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // currency_dto_list_envelope_MAIN
#endif // currency_dto_list_envelope_TEST
