#ifndef billing_profile_dto_envelope_TEST
#define billing_profile_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_profile_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_profile_dto_envelope.h"
billing_profile_dto_envelope_t* instantiate_billing_profile_dto_envelope(int include_optional);

#include "test_billing_profile_dto.c"


billing_profile_dto_envelope_t* instantiate_billing_profile_dto_envelope(int include_optional) {
  billing_profile_dto_envelope_t* billing_profile_dto_envelope = NULL;
  if (include_optional) {
    billing_profile_dto_envelope = billing_profile_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_billing_profile_dto(0)
    );
  } else {
    billing_profile_dto_envelope = billing_profile_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return billing_profile_dto_envelope;
}


#ifdef billing_profile_dto_envelope_MAIN

void test_billing_profile_dto_envelope(int include_optional) {
    billing_profile_dto_envelope_t* billing_profile_dto_envelope_1 = instantiate_billing_profile_dto_envelope(include_optional);

	cJSON* jsonbilling_profile_dto_envelope_1 = billing_profile_dto_envelope_convertToJSON(billing_profile_dto_envelope_1);
	printf("billing_profile_dto_envelope :\n%s\n", cJSON_Print(jsonbilling_profile_dto_envelope_1));
	billing_profile_dto_envelope_t* billing_profile_dto_envelope_2 = billing_profile_dto_envelope_parseFromJSON(jsonbilling_profile_dto_envelope_1);
	cJSON* jsonbilling_profile_dto_envelope_2 = billing_profile_dto_envelope_convertToJSON(billing_profile_dto_envelope_2);
	printf("repeating billing_profile_dto_envelope:\n%s\n", cJSON_Print(jsonbilling_profile_dto_envelope_2));
}

int main() {
  test_billing_profile_dto_envelope(1);
  test_billing_profile_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_profile_dto_envelope_MAIN
#endif // billing_profile_dto_envelope_TEST
