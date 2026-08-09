#ifndef newsletter_subscription_dto_collection_query_parameters_TEST
#define newsletter_subscription_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_subscription_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_subscription_dto_collection_query_parameters.h"
newsletter_subscription_dto_collection_query_parameters_t* instantiate_newsletter_subscription_dto_collection_query_parameters(int include_optional);



newsletter_subscription_dto_collection_query_parameters_t* instantiate_newsletter_subscription_dto_collection_query_parameters(int include_optional) {
  newsletter_subscription_dto_collection_query_parameters_t* newsletter_subscription_dto_collection_query_parameters = NULL;
  if (include_optional) {
    newsletter_subscription_dto_collection_query_parameters = newsletter_subscription_dto_collection_query_parameters_create(
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
    newsletter_subscription_dto_collection_query_parameters = newsletter_subscription_dto_collection_query_parameters_create(
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

  return newsletter_subscription_dto_collection_query_parameters;
}


#ifdef newsletter_subscription_dto_collection_query_parameters_MAIN

void test_newsletter_subscription_dto_collection_query_parameters(int include_optional) {
    newsletter_subscription_dto_collection_query_parameters_t* newsletter_subscription_dto_collection_query_parameters_1 = instantiate_newsletter_subscription_dto_collection_query_parameters(include_optional);

	cJSON* jsonnewsletter_subscription_dto_collection_query_parameters_1 = newsletter_subscription_dto_collection_query_parameters_convertToJSON(newsletter_subscription_dto_collection_query_parameters_1);
	printf("newsletter_subscription_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonnewsletter_subscription_dto_collection_query_parameters_1));
	newsletter_subscription_dto_collection_query_parameters_t* newsletter_subscription_dto_collection_query_parameters_2 = newsletter_subscription_dto_collection_query_parameters_parseFromJSON(jsonnewsletter_subscription_dto_collection_query_parameters_1);
	cJSON* jsonnewsletter_subscription_dto_collection_query_parameters_2 = newsletter_subscription_dto_collection_query_parameters_convertToJSON(newsletter_subscription_dto_collection_query_parameters_2);
	printf("repeating newsletter_subscription_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonnewsletter_subscription_dto_collection_query_parameters_2));
}

int main() {
  test_newsletter_subscription_dto_collection_query_parameters(1);
  test_newsletter_subscription_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_subscription_dto_collection_query_parameters_MAIN
#endif // newsletter_subscription_dto_collection_query_parameters_TEST
