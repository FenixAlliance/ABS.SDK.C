#ifndef forex_rates_TEST
#define forex_rates_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define forex_rates_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/forex_rates.h"
forex_rates_t* instantiate_forex_rates(int include_optional);



forex_rates_t* instantiate_forex_rates(int include_optional) {
  forex_rates_t* forex_rates = NULL;
  if (include_optional) {
    forex_rates = forex_rates_create(
      1,
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    forex_rates = forex_rates_create(
      1,
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return forex_rates;
}


#ifdef forex_rates_MAIN

void test_forex_rates(int include_optional) {
    forex_rates_t* forex_rates_1 = instantiate_forex_rates(include_optional);

	cJSON* jsonforex_rates_1 = forex_rates_convertToJSON(forex_rates_1);
	printf("forex_rates :\n%s\n", cJSON_Print(jsonforex_rates_1));
	forex_rates_t* forex_rates_2 = forex_rates_parseFromJSON(jsonforex_rates_1);
	cJSON* jsonforex_rates_2 = forex_rates_convertToJSON(forex_rates_2);
	printf("repeating forex_rates:\n%s\n", cJSON_Print(jsonforex_rates_2));
}

int main() {
  test_forex_rates(1);
  test_forex_rates(0);

  printf("Hello world \n");
  return 0;
}

#endif // forex_rates_MAIN
#endif // forex_rates_TEST
