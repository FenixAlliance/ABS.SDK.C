#ifndef currency_dto_TEST
#define currency_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define currency_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/currency_dto.h"
currency_dto_t* instantiate_currency_dto(int include_optional);

#include "test_country_dto.c"


currency_dto_t* instantiate_currency_dto(int include_optional) {
  currency_dto_t* currency_dto = NULL;
  if (include_optional) {
    currency_dto = currency_dto_create(
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_country_dto(0)
    );
  } else {
    currency_dto = currency_dto_create(
      "0",
      "0",
      "0",
      "0",
      NULL
    );
  }

  return currency_dto;
}


#ifdef currency_dto_MAIN

void test_currency_dto(int include_optional) {
    currency_dto_t* currency_dto_1 = instantiate_currency_dto(include_optional);

	cJSON* jsoncurrency_dto_1 = currency_dto_convertToJSON(currency_dto_1);
	printf("currency_dto :\n%s\n", cJSON_Print(jsoncurrency_dto_1));
	currency_dto_t* currency_dto_2 = currency_dto_parseFromJSON(jsoncurrency_dto_1);
	cJSON* jsoncurrency_dto_2 = currency_dto_convertToJSON(currency_dto_2);
	printf("repeating currency_dto:\n%s\n", cJSON_Print(jsoncurrency_dto_2));
}

int main() {
  test_currency_dto(1);
  test_currency_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // currency_dto_MAIN
#endif // currency_dto_TEST
