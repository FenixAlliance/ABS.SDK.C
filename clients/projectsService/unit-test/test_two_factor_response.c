#ifndef two_factor_response_TEST
#define two_factor_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define two_factor_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/two_factor_response.h"
two_factor_response_t* instantiate_two_factor_response(int include_optional);



two_factor_response_t* instantiate_two_factor_response(int include_optional) {
  two_factor_response_t* two_factor_response = NULL;
  if (include_optional) {
    two_factor_response = two_factor_response_create(
      "0",
      56,
      list_createList(),
      1,
      1
    );
  } else {
    two_factor_response = two_factor_response_create(
      "0",
      56,
      list_createList(),
      1,
      1
    );
  }

  return two_factor_response;
}


#ifdef two_factor_response_MAIN

void test_two_factor_response(int include_optional) {
    two_factor_response_t* two_factor_response_1 = instantiate_two_factor_response(include_optional);

	cJSON* jsontwo_factor_response_1 = two_factor_response_convertToJSON(two_factor_response_1);
	printf("two_factor_response :\n%s\n", cJSON_Print(jsontwo_factor_response_1));
	two_factor_response_t* two_factor_response_2 = two_factor_response_parseFromJSON(jsontwo_factor_response_1);
	cJSON* jsontwo_factor_response_2 = two_factor_response_convertToJSON(two_factor_response_2);
	printf("repeating two_factor_response:\n%s\n", cJSON_Print(jsontwo_factor_response_2));
}

int main() {
  test_two_factor_response(1);
  test_two_factor_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // two_factor_response_MAIN
#endif // two_factor_response_TEST
