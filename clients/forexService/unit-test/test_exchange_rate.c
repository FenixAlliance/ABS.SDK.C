#ifndef exchange_rate_TEST
#define exchange_rate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define exchange_rate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/exchange_rate.h"
exchange_rate_t* instantiate_exchange_rate(int include_optional);

#include "test_money.c"
#include "test_money.c"
#include "test_money.c"


exchange_rate_t* instantiate_exchange_rate(int include_optional) {
  exchange_rate_t* exchange_rate = NULL;
  if (include_optional) {
    exchange_rate = exchange_rate_create(
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0)
    );
  } else {
    exchange_rate = exchange_rate_create(
      NULL,
      NULL,
      NULL
    );
  }

  return exchange_rate;
}


#ifdef exchange_rate_MAIN

void test_exchange_rate(int include_optional) {
    exchange_rate_t* exchange_rate_1 = instantiate_exchange_rate(include_optional);

	cJSON* jsonexchange_rate_1 = exchange_rate_convertToJSON(exchange_rate_1);
	printf("exchange_rate :\n%s\n", cJSON_Print(jsonexchange_rate_1));
	exchange_rate_t* exchange_rate_2 = exchange_rate_parseFromJSON(jsonexchange_rate_1);
	cJSON* jsonexchange_rate_2 = exchange_rate_convertToJSON(exchange_rate_2);
	printf("repeating exchange_rate:\n%s\n", cJSON_Print(jsonexchange_rate_2));
}

int main() {
  test_exchange_rate(1);
  test_exchange_rate(0);

  printf("Hello world \n");
  return 0;
}

#endif // exchange_rate_MAIN
#endif // exchange_rate_TEST
