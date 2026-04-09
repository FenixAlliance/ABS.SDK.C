#ifndef subscription_plan_dto_i_read_only_list_envelope_TEST
#define subscription_plan_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_plan_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_plan_dto_i_read_only_list_envelope.h"
subscription_plan_dto_i_read_only_list_envelope_t* instantiate_subscription_plan_dto_i_read_only_list_envelope(int include_optional);



subscription_plan_dto_i_read_only_list_envelope_t* instantiate_subscription_plan_dto_i_read_only_list_envelope(int include_optional) {
  subscription_plan_dto_i_read_only_list_envelope_t* subscription_plan_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    subscription_plan_dto_i_read_only_list_envelope = subscription_plan_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    subscription_plan_dto_i_read_only_list_envelope = subscription_plan_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return subscription_plan_dto_i_read_only_list_envelope;
}


#ifdef subscription_plan_dto_i_read_only_list_envelope_MAIN

void test_subscription_plan_dto_i_read_only_list_envelope(int include_optional) {
    subscription_plan_dto_i_read_only_list_envelope_t* subscription_plan_dto_i_read_only_list_envelope_1 = instantiate_subscription_plan_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonsubscription_plan_dto_i_read_only_list_envelope_1 = subscription_plan_dto_i_read_only_list_envelope_convertToJSON(subscription_plan_dto_i_read_only_list_envelope_1);
	printf("subscription_plan_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonsubscription_plan_dto_i_read_only_list_envelope_1));
	subscription_plan_dto_i_read_only_list_envelope_t* subscription_plan_dto_i_read_only_list_envelope_2 = subscription_plan_dto_i_read_only_list_envelope_parseFromJSON(jsonsubscription_plan_dto_i_read_only_list_envelope_1);
	cJSON* jsonsubscription_plan_dto_i_read_only_list_envelope_2 = subscription_plan_dto_i_read_only_list_envelope_convertToJSON(subscription_plan_dto_i_read_only_list_envelope_2);
	printf("repeating subscription_plan_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonsubscription_plan_dto_i_read_only_list_envelope_2));
}

int main() {
  test_subscription_plan_dto_i_read_only_list_envelope(1);
  test_subscription_plan_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_plan_dto_i_read_only_list_envelope_MAIN
#endif // subscription_plan_dto_i_read_only_list_envelope_TEST
