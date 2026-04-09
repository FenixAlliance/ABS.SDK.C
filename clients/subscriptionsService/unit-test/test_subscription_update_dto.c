#ifndef subscription_update_dto_TEST
#define subscription_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_update_dto.h"
subscription_update_dto_t* instantiate_subscription_update_dto(int include_optional);



subscription_update_dto_t* instantiate_subscription_update_dto(int include_optional) {
  subscription_update_dto_t* subscription_update_dto = NULL;
  if (include_optional) {
    subscription_update_dto = subscription_update_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_Trial
    );
  } else {
    subscription_update_dto = subscription_update_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      subscriptionsservice_subscription_update_dto_SUBSCRIPTIONCLASS_Trial
    );
  }

  return subscription_update_dto;
}


#ifdef subscription_update_dto_MAIN

void test_subscription_update_dto(int include_optional) {
    subscription_update_dto_t* subscription_update_dto_1 = instantiate_subscription_update_dto(include_optional);

	cJSON* jsonsubscription_update_dto_1 = subscription_update_dto_convertToJSON(subscription_update_dto_1);
	printf("subscription_update_dto :\n%s\n", cJSON_Print(jsonsubscription_update_dto_1));
	subscription_update_dto_t* subscription_update_dto_2 = subscription_update_dto_parseFromJSON(jsonsubscription_update_dto_1);
	cJSON* jsonsubscription_update_dto_2 = subscription_update_dto_convertToJSON(subscription_update_dto_2);
	printf("repeating subscription_update_dto:\n%s\n", cJSON_Print(jsonsubscription_update_dto_2));
}

int main() {
  test_subscription_update_dto(1);
  test_subscription_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_update_dto_MAIN
#endif // subscription_update_dto_TEST
