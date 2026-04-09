#ifndef subscription_create_dto_TEST
#define subscription_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_create_dto.h"
subscription_create_dto_t* instantiate_subscription_create_dto(int include_optional);



subscription_create_dto_t* instantiate_subscription_create_dto(int include_optional) {
  subscription_create_dto_t* subscription_create_dto = NULL;
  if (include_optional) {
    subscription_create_dto = subscription_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_Trial
    );
  } else {
    subscription_create_dto = subscription_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      subscriptionsservice_subscription_create_dto_SUBSCRIPTIONCLASS_Trial
    );
  }

  return subscription_create_dto;
}


#ifdef subscription_create_dto_MAIN

void test_subscription_create_dto(int include_optional) {
    subscription_create_dto_t* subscription_create_dto_1 = instantiate_subscription_create_dto(include_optional);

	cJSON* jsonsubscription_create_dto_1 = subscription_create_dto_convertToJSON(subscription_create_dto_1);
	printf("subscription_create_dto :\n%s\n", cJSON_Print(jsonsubscription_create_dto_1));
	subscription_create_dto_t* subscription_create_dto_2 = subscription_create_dto_parseFromJSON(jsonsubscription_create_dto_1);
	cJSON* jsonsubscription_create_dto_2 = subscription_create_dto_convertToJSON(subscription_create_dto_2);
	printf("repeating subscription_create_dto:\n%s\n", cJSON_Print(jsonsubscription_create_dto_2));
}

int main() {
  test_subscription_create_dto(1);
  test_subscription_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_create_dto_MAIN
#endif // subscription_create_dto_TEST
