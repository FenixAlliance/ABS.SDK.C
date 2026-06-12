#ifndef two_factor_request_TEST
#define two_factor_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define two_factor_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/two_factor_request.h"
two_factor_request_t* instantiate_two_factor_request(int include_optional);



two_factor_request_t* instantiate_two_factor_request(int include_optional) {
  two_factor_request_t* two_factor_request = NULL;
  if (include_optional) {
    two_factor_request = two_factor_request_create(
      1,
      "0",
      1,
      1,
      1
    );
  } else {
    two_factor_request = two_factor_request_create(
      1,
      "0",
      1,
      1,
      1
    );
  }

  return two_factor_request;
}


#ifdef two_factor_request_MAIN

void test_two_factor_request(int include_optional) {
    two_factor_request_t* two_factor_request_1 = instantiate_two_factor_request(include_optional);

	cJSON* jsontwo_factor_request_1 = two_factor_request_convertToJSON(two_factor_request_1);
	printf("two_factor_request :\n%s\n", cJSON_Print(jsontwo_factor_request_1));
	two_factor_request_t* two_factor_request_2 = two_factor_request_parseFromJSON(jsontwo_factor_request_1);
	cJSON* jsontwo_factor_request_2 = two_factor_request_convertToJSON(two_factor_request_2);
	printf("repeating two_factor_request:\n%s\n", cJSON_Print(jsontwo_factor_request_2));
}

int main() {
  test_two_factor_request(1);
  test_two_factor_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // two_factor_request_MAIN
#endif // two_factor_request_TEST
