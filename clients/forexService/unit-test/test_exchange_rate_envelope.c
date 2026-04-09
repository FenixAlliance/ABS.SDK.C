#ifndef exchange_rate_envelope_TEST
#define exchange_rate_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define exchange_rate_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/exchange_rate_envelope.h"
exchange_rate_envelope_t* instantiate_exchange_rate_envelope(int include_optional);

#include "test_exchange_rate.c"


exchange_rate_envelope_t* instantiate_exchange_rate_envelope(int include_optional) {
  exchange_rate_envelope_t* exchange_rate_envelope = NULL;
  if (include_optional) {
    exchange_rate_envelope = exchange_rate_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_exchange_rate(0)
    );
  } else {
    exchange_rate_envelope = exchange_rate_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return exchange_rate_envelope;
}


#ifdef exchange_rate_envelope_MAIN

void test_exchange_rate_envelope(int include_optional) {
    exchange_rate_envelope_t* exchange_rate_envelope_1 = instantiate_exchange_rate_envelope(include_optional);

	cJSON* jsonexchange_rate_envelope_1 = exchange_rate_envelope_convertToJSON(exchange_rate_envelope_1);
	printf("exchange_rate_envelope :\n%s\n", cJSON_Print(jsonexchange_rate_envelope_1));
	exchange_rate_envelope_t* exchange_rate_envelope_2 = exchange_rate_envelope_parseFromJSON(jsonexchange_rate_envelope_1);
	cJSON* jsonexchange_rate_envelope_2 = exchange_rate_envelope_convertToJSON(exchange_rate_envelope_2);
	printf("repeating exchange_rate_envelope:\n%s\n", cJSON_Print(jsonexchange_rate_envelope_2));
}

int main() {
  test_exchange_rate_envelope(1);
  test_exchange_rate_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // exchange_rate_envelope_MAIN
#endif // exchange_rate_envelope_TEST
