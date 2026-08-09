#ifndef subscription_dto_collection_query_parameters_TEST
#define subscription_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_dto_collection_query_parameters.h"
subscription_dto_collection_query_parameters_t* instantiate_subscription_dto_collection_query_parameters(int include_optional);



subscription_dto_collection_query_parameters_t* instantiate_subscription_dto_collection_query_parameters(int include_optional) {
  subscription_dto_collection_query_parameters_t* subscription_dto_collection_query_parameters = NULL;
  if (include_optional) {
    subscription_dto_collection_query_parameters = subscription_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    subscription_dto_collection_query_parameters = subscription_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return subscription_dto_collection_query_parameters;
}


#ifdef subscription_dto_collection_query_parameters_MAIN

void test_subscription_dto_collection_query_parameters(int include_optional) {
    subscription_dto_collection_query_parameters_t* subscription_dto_collection_query_parameters_1 = instantiate_subscription_dto_collection_query_parameters(include_optional);

	cJSON* jsonsubscription_dto_collection_query_parameters_1 = subscription_dto_collection_query_parameters_convertToJSON(subscription_dto_collection_query_parameters_1);
	printf("subscription_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsubscription_dto_collection_query_parameters_1));
	subscription_dto_collection_query_parameters_t* subscription_dto_collection_query_parameters_2 = subscription_dto_collection_query_parameters_parseFromJSON(jsonsubscription_dto_collection_query_parameters_1);
	cJSON* jsonsubscription_dto_collection_query_parameters_2 = subscription_dto_collection_query_parameters_convertToJSON(subscription_dto_collection_query_parameters_2);
	printf("repeating subscription_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsubscription_dto_collection_query_parameters_2));
}

int main() {
  test_subscription_dto_collection_query_parameters(1);
  test_subscription_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_dto_collection_query_parameters_MAIN
#endif // subscription_dto_collection_query_parameters_TEST
