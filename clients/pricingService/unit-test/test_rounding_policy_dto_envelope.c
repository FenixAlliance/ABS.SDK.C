#ifndef rounding_policy_dto_envelope_TEST
#define rounding_policy_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rounding_policy_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rounding_policy_dto_envelope.h"
rounding_policy_dto_envelope_t* instantiate_rounding_policy_dto_envelope(int include_optional);

#include "test_rounding_policy_dto.c"


rounding_policy_dto_envelope_t* instantiate_rounding_policy_dto_envelope(int include_optional) {
  rounding_policy_dto_envelope_t* rounding_policy_dto_envelope = NULL;
  if (include_optional) {
    rounding_policy_dto_envelope = rounding_policy_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_rounding_policy_dto(0)
    );
  } else {
    rounding_policy_dto_envelope = rounding_policy_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return rounding_policy_dto_envelope;
}


#ifdef rounding_policy_dto_envelope_MAIN

void test_rounding_policy_dto_envelope(int include_optional) {
    rounding_policy_dto_envelope_t* rounding_policy_dto_envelope_1 = instantiate_rounding_policy_dto_envelope(include_optional);

	cJSON* jsonrounding_policy_dto_envelope_1 = rounding_policy_dto_envelope_convertToJSON(rounding_policy_dto_envelope_1);
	printf("rounding_policy_dto_envelope :\n%s\n", cJSON_Print(jsonrounding_policy_dto_envelope_1));
	rounding_policy_dto_envelope_t* rounding_policy_dto_envelope_2 = rounding_policy_dto_envelope_parseFromJSON(jsonrounding_policy_dto_envelope_1);
	cJSON* jsonrounding_policy_dto_envelope_2 = rounding_policy_dto_envelope_convertToJSON(rounding_policy_dto_envelope_2);
	printf("repeating rounding_policy_dto_envelope:\n%s\n", cJSON_Print(jsonrounding_policy_dto_envelope_2));
}

int main() {
  test_rounding_policy_dto_envelope(1);
  test_rounding_policy_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // rounding_policy_dto_envelope_MAIN
#endif // rounding_policy_dto_envelope_TEST
