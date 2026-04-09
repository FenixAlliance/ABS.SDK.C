#ifndef forex_rates_dto_envelope_TEST
#define forex_rates_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define forex_rates_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/forex_rates_dto_envelope.h"
forex_rates_dto_envelope_t* instantiate_forex_rates_dto_envelope(int include_optional);

#include "test_forex_rates_dto.c"


forex_rates_dto_envelope_t* instantiate_forex_rates_dto_envelope(int include_optional) {
  forex_rates_dto_envelope_t* forex_rates_dto_envelope = NULL;
  if (include_optional) {
    forex_rates_dto_envelope = forex_rates_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_forex_rates_dto(0)
    );
  } else {
    forex_rates_dto_envelope = forex_rates_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return forex_rates_dto_envelope;
}


#ifdef forex_rates_dto_envelope_MAIN

void test_forex_rates_dto_envelope(int include_optional) {
    forex_rates_dto_envelope_t* forex_rates_dto_envelope_1 = instantiate_forex_rates_dto_envelope(include_optional);

	cJSON* jsonforex_rates_dto_envelope_1 = forex_rates_dto_envelope_convertToJSON(forex_rates_dto_envelope_1);
	printf("forex_rates_dto_envelope :\n%s\n", cJSON_Print(jsonforex_rates_dto_envelope_1));
	forex_rates_dto_envelope_t* forex_rates_dto_envelope_2 = forex_rates_dto_envelope_parseFromJSON(jsonforex_rates_dto_envelope_1);
	cJSON* jsonforex_rates_dto_envelope_2 = forex_rates_dto_envelope_convertToJSON(forex_rates_dto_envelope_2);
	printf("repeating forex_rates_dto_envelope:\n%s\n", cJSON_Print(jsonforex_rates_dto_envelope_2));
}

int main() {
  test_forex_rates_dto_envelope(1);
  test_forex_rates_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // forex_rates_dto_envelope_MAIN
#endif // forex_rates_dto_envelope_TEST
