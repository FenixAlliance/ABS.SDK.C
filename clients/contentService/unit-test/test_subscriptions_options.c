#ifndef subscriptions_options_TEST
#define subscriptions_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscriptions_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscriptions_options.h"
subscriptions_options_t* instantiate_subscriptions_options(int include_optional);



subscriptions_options_t* instantiate_subscriptions_options(int include_optional) {
  subscriptions_options_t* subscriptions_options = NULL;
  if (include_optional) {
    subscriptions_options = subscriptions_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_AlwaysAndNoCharge
    );
  } else {
    subscriptions_options = subscriptions_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_AlwaysAndNoCharge
    );
  }

  return subscriptions_options;
}


#ifdef subscriptions_options_MAIN

void test_subscriptions_options(int include_optional) {
    subscriptions_options_t* subscriptions_options_1 = instantiate_subscriptions_options(include_optional);

	cJSON* jsonsubscriptions_options_1 = subscriptions_options_convertToJSON(subscriptions_options_1);
	printf("subscriptions_options :\n%s\n", cJSON_Print(jsonsubscriptions_options_1));
	subscriptions_options_t* subscriptions_options_2 = subscriptions_options_parseFromJSON(jsonsubscriptions_options_1);
	cJSON* jsonsubscriptions_options_2 = subscriptions_options_convertToJSON(subscriptions_options_2);
	printf("repeating subscriptions_options:\n%s\n", cJSON_Print(jsonsubscriptions_options_2));
}

int main() {
  test_subscriptions_options(1);
  test_subscriptions_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscriptions_options_MAIN
#endif // subscriptions_options_TEST
