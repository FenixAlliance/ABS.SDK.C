#ifndef country_state_dto_envelope_TEST
#define country_state_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_state_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_state_dto_envelope.h"
country_state_dto_envelope_t* instantiate_country_state_dto_envelope(int include_optional);

#include "test_country_state_dto.c"


country_state_dto_envelope_t* instantiate_country_state_dto_envelope(int include_optional) {
  country_state_dto_envelope_t* country_state_dto_envelope = NULL;
  if (include_optional) {
    country_state_dto_envelope = country_state_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_country_state_dto(0)
    );
  } else {
    country_state_dto_envelope = country_state_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return country_state_dto_envelope;
}


#ifdef country_state_dto_envelope_MAIN

void test_country_state_dto_envelope(int include_optional) {
    country_state_dto_envelope_t* country_state_dto_envelope_1 = instantiate_country_state_dto_envelope(include_optional);

	cJSON* jsoncountry_state_dto_envelope_1 = country_state_dto_envelope_convertToJSON(country_state_dto_envelope_1);
	printf("country_state_dto_envelope :\n%s\n", cJSON_Print(jsoncountry_state_dto_envelope_1));
	country_state_dto_envelope_t* country_state_dto_envelope_2 = country_state_dto_envelope_parseFromJSON(jsoncountry_state_dto_envelope_1);
	cJSON* jsoncountry_state_dto_envelope_2 = country_state_dto_envelope_convertToJSON(country_state_dto_envelope_2);
	printf("repeating country_state_dto_envelope:\n%s\n", cJSON_Print(jsoncountry_state_dto_envelope_2));
}

int main() {
  test_country_state_dto_envelope(1);
  test_country_state_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_state_dto_envelope_MAIN
#endif // country_state_dto_envelope_TEST
