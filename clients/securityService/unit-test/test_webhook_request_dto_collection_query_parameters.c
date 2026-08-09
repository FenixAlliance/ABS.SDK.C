#ifndef webhook_request_dto_collection_query_parameters_TEST
#define webhook_request_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_request_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_request_dto_collection_query_parameters.h"
webhook_request_dto_collection_query_parameters_t* instantiate_webhook_request_dto_collection_query_parameters(int include_optional);



webhook_request_dto_collection_query_parameters_t* instantiate_webhook_request_dto_collection_query_parameters(int include_optional) {
  webhook_request_dto_collection_query_parameters_t* webhook_request_dto_collection_query_parameters = NULL;
  if (include_optional) {
    webhook_request_dto_collection_query_parameters = webhook_request_dto_collection_query_parameters_create(
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
    webhook_request_dto_collection_query_parameters = webhook_request_dto_collection_query_parameters_create(
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

  return webhook_request_dto_collection_query_parameters;
}


#ifdef webhook_request_dto_collection_query_parameters_MAIN

void test_webhook_request_dto_collection_query_parameters(int include_optional) {
    webhook_request_dto_collection_query_parameters_t* webhook_request_dto_collection_query_parameters_1 = instantiate_webhook_request_dto_collection_query_parameters(include_optional);

	cJSON* jsonwebhook_request_dto_collection_query_parameters_1 = webhook_request_dto_collection_query_parameters_convertToJSON(webhook_request_dto_collection_query_parameters_1);
	printf("webhook_request_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwebhook_request_dto_collection_query_parameters_1));
	webhook_request_dto_collection_query_parameters_t* webhook_request_dto_collection_query_parameters_2 = webhook_request_dto_collection_query_parameters_parseFromJSON(jsonwebhook_request_dto_collection_query_parameters_1);
	cJSON* jsonwebhook_request_dto_collection_query_parameters_2 = webhook_request_dto_collection_query_parameters_convertToJSON(webhook_request_dto_collection_query_parameters_2);
	printf("repeating webhook_request_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwebhook_request_dto_collection_query_parameters_2));
}

int main() {
  test_webhook_request_dto_collection_query_parameters(1);
  test_webhook_request_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_request_dto_collection_query_parameters_MAIN
#endif // webhook_request_dto_collection_query_parameters_TEST
