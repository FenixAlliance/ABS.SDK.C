#ifndef forex_rates_dto_TEST
#define forex_rates_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define forex_rates_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/forex_rates_dto.h"
forex_rates_dto_t* instantiate_forex_rates_dto(int include_optional);



forex_rates_dto_t* instantiate_forex_rates_dto(int include_optional) {
  forex_rates_dto_t* forex_rates_dto = NULL;
  if (include_optional) {
    forex_rates_dto = forex_rates_dto_create(
      1,
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    forex_rates_dto = forex_rates_dto_create(
      1,
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return forex_rates_dto;
}


#ifdef forex_rates_dto_MAIN

void test_forex_rates_dto(int include_optional) {
    forex_rates_dto_t* forex_rates_dto_1 = instantiate_forex_rates_dto(include_optional);

	cJSON* jsonforex_rates_dto_1 = forex_rates_dto_convertToJSON(forex_rates_dto_1);
	printf("forex_rates_dto :\n%s\n", cJSON_Print(jsonforex_rates_dto_1));
	forex_rates_dto_t* forex_rates_dto_2 = forex_rates_dto_parseFromJSON(jsonforex_rates_dto_1);
	cJSON* jsonforex_rates_dto_2 = forex_rates_dto_convertToJSON(forex_rates_dto_2);
	printf("repeating forex_rates_dto:\n%s\n", cJSON_Print(jsonforex_rates_dto_2));
}

int main() {
  test_forex_rates_dto(1);
  test_forex_rates_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // forex_rates_dto_MAIN
#endif // forex_rates_dto_TEST
