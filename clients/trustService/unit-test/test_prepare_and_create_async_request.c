#ifndef prepare_and_create_async_request_TEST
#define prepare_and_create_async_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_and_create_async_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_and_create_async_request.h"
prepare_and_create_async_request_t* instantiate_prepare_and_create_async_request(int include_optional);



prepare_and_create_async_request_t* instantiate_prepare_and_create_async_request(int include_optional) {
  prepare_and_create_async_request_t* prepare_and_create_async_request = NULL;
  if (include_optional) {
    prepare_and_create_async_request = prepare_and_create_async_request_create(
      instantiate_binary_t("blah", 5),
      "0",
      "0",
      trustservice_prepare_and_create_async_request_ROUTINGMODE_Parallel,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    prepare_and_create_async_request = prepare_and_create_async_request_create(
      instantiate_binary_t("blah", 5),
      "0",
      "0",
      trustservice_prepare_and_create_async_request_ROUTINGMODE_Parallel,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return prepare_and_create_async_request;
}


#ifdef prepare_and_create_async_request_MAIN

void test_prepare_and_create_async_request(int include_optional) {
    prepare_and_create_async_request_t* prepare_and_create_async_request_1 = instantiate_prepare_and_create_async_request(include_optional);

	cJSON* jsonprepare_and_create_async_request_1 = prepare_and_create_async_request_convertToJSON(prepare_and_create_async_request_1);
	printf("prepare_and_create_async_request :\n%s\n", cJSON_Print(jsonprepare_and_create_async_request_1));
	prepare_and_create_async_request_t* prepare_and_create_async_request_2 = prepare_and_create_async_request_parseFromJSON(jsonprepare_and_create_async_request_1);
	cJSON* jsonprepare_and_create_async_request_2 = prepare_and_create_async_request_convertToJSON(prepare_and_create_async_request_2);
	printf("repeating prepare_and_create_async_request:\n%s\n", cJSON_Print(jsonprepare_and_create_async_request_2));
}

int main() {
  test_prepare_and_create_async_request(1);
  test_prepare_and_create_async_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_and_create_async_request_MAIN
#endif // prepare_and_create_async_request_TEST
