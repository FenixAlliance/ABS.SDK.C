#ifndef subscription_dto_envelope_TEST
#define subscription_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_dto_envelope.h"
subscription_dto_envelope_t* instantiate_subscription_dto_envelope(int include_optional);

#include "test_subscription_dto.c"


subscription_dto_envelope_t* instantiate_subscription_dto_envelope(int include_optional) {
  subscription_dto_envelope_t* subscription_dto_envelope = NULL;
  if (include_optional) {
    subscription_dto_envelope = subscription_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_subscription_dto(0)
    );
  } else {
    subscription_dto_envelope = subscription_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return subscription_dto_envelope;
}


#ifdef subscription_dto_envelope_MAIN

void test_subscription_dto_envelope(int include_optional) {
    subscription_dto_envelope_t* subscription_dto_envelope_1 = instantiate_subscription_dto_envelope(include_optional);

	cJSON* jsonsubscription_dto_envelope_1 = subscription_dto_envelope_convertToJSON(subscription_dto_envelope_1);
	printf("subscription_dto_envelope :\n%s\n", cJSON_Print(jsonsubscription_dto_envelope_1));
	subscription_dto_envelope_t* subscription_dto_envelope_2 = subscription_dto_envelope_parseFromJSON(jsonsubscription_dto_envelope_1);
	cJSON* jsonsubscription_dto_envelope_2 = subscription_dto_envelope_convertToJSON(subscription_dto_envelope_2);
	printf("repeating subscription_dto_envelope:\n%s\n", cJSON_Print(jsonsubscription_dto_envelope_2));
}

int main() {
  test_subscription_dto_envelope(1);
  test_subscription_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_dto_envelope_MAIN
#endif // subscription_dto_envelope_TEST
