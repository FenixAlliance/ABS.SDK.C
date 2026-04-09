#ifndef subscription_dto_TEST
#define subscription_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_dto.h"
subscription_dto_t* instantiate_subscription_dto(int include_optional);



subscription_dto_t* instantiate_subscription_dto(int include_optional) {
  subscription_dto_t* subscription_dto = NULL;
  if (include_optional) {
    subscription_dto = subscription_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      subscriptionsservice_subscription_dto_SUBSCRIPTIONCLASS_Trial
    );
  } else {
    subscription_dto = subscription_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      subscriptionsservice_subscription_dto_SUBSCRIPTIONCLASS_Trial
    );
  }

  return subscription_dto;
}


#ifdef subscription_dto_MAIN

void test_subscription_dto(int include_optional) {
    subscription_dto_t* subscription_dto_1 = instantiate_subscription_dto(include_optional);

	cJSON* jsonsubscription_dto_1 = subscription_dto_convertToJSON(subscription_dto_1);
	printf("subscription_dto :\n%s\n", cJSON_Print(jsonsubscription_dto_1));
	subscription_dto_t* subscription_dto_2 = subscription_dto_parseFromJSON(jsonsubscription_dto_1);
	cJSON* jsonsubscription_dto_2 = subscription_dto_convertToJSON(subscription_dto_2);
	printf("repeating subscription_dto:\n%s\n", cJSON_Print(jsonsubscription_dto_2));
}

int main() {
  test_subscription_dto(1);
  test_subscription_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_dto_MAIN
#endif // subscription_dto_TEST
