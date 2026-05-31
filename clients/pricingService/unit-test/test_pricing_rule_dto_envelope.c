#ifndef pricing_rule_dto_envelope_TEST
#define pricing_rule_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pricing_rule_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pricing_rule_dto_envelope.h"
pricing_rule_dto_envelope_t* instantiate_pricing_rule_dto_envelope(int include_optional);

#include "test_pricing_rule_dto.c"


pricing_rule_dto_envelope_t* instantiate_pricing_rule_dto_envelope(int include_optional) {
  pricing_rule_dto_envelope_t* pricing_rule_dto_envelope = NULL;
  if (include_optional) {
    pricing_rule_dto_envelope = pricing_rule_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_pricing_rule_dto(0)
    );
  } else {
    pricing_rule_dto_envelope = pricing_rule_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return pricing_rule_dto_envelope;
}


#ifdef pricing_rule_dto_envelope_MAIN

void test_pricing_rule_dto_envelope(int include_optional) {
    pricing_rule_dto_envelope_t* pricing_rule_dto_envelope_1 = instantiate_pricing_rule_dto_envelope(include_optional);

	cJSON* jsonpricing_rule_dto_envelope_1 = pricing_rule_dto_envelope_convertToJSON(pricing_rule_dto_envelope_1);
	printf("pricing_rule_dto_envelope :\n%s\n", cJSON_Print(jsonpricing_rule_dto_envelope_1));
	pricing_rule_dto_envelope_t* pricing_rule_dto_envelope_2 = pricing_rule_dto_envelope_parseFromJSON(jsonpricing_rule_dto_envelope_1);
	cJSON* jsonpricing_rule_dto_envelope_2 = pricing_rule_dto_envelope_convertToJSON(pricing_rule_dto_envelope_2);
	printf("repeating pricing_rule_dto_envelope:\n%s\n", cJSON_Print(jsonpricing_rule_dto_envelope_2));
}

int main() {
  test_pricing_rule_dto_envelope(1);
  test_pricing_rule_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // pricing_rule_dto_envelope_MAIN
#endif // pricing_rule_dto_envelope_TEST
