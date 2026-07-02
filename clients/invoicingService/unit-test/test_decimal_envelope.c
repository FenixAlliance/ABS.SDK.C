#ifndef decimal_envelope_TEST
#define decimal_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define decimal_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/decimal_envelope.h"
decimal_envelope_t* instantiate_decimal_envelope(int include_optional);



decimal_envelope_t* instantiate_decimal_envelope(int include_optional) {
  decimal_envelope_t* decimal_envelope = NULL;
  if (include_optional) {
    decimal_envelope = decimal_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337
    );
  } else {
    decimal_envelope = decimal_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337
    );
  }

  return decimal_envelope;
}


#ifdef decimal_envelope_MAIN

void test_decimal_envelope(int include_optional) {
    decimal_envelope_t* decimal_envelope_1 = instantiate_decimal_envelope(include_optional);

	cJSON* jsondecimal_envelope_1 = decimal_envelope_convertToJSON(decimal_envelope_1);
	printf("decimal_envelope :\n%s\n", cJSON_Print(jsondecimal_envelope_1));
	decimal_envelope_t* decimal_envelope_2 = decimal_envelope_parseFromJSON(jsondecimal_envelope_1);
	cJSON* jsondecimal_envelope_2 = decimal_envelope_convertToJSON(decimal_envelope_2);
	printf("repeating decimal_envelope:\n%s\n", cJSON_Print(jsondecimal_envelope_2));
}

int main() {
  test_decimal_envelope(1);
  test_decimal_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // decimal_envelope_MAIN
#endif // decimal_envelope_TEST
