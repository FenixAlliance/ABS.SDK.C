#ifndef access_token_response_TEST
#define access_token_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_token_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_token_response.h"
access_token_response_t* instantiate_access_token_response(int include_optional);



access_token_response_t* instantiate_access_token_response(int include_optional) {
  access_token_response_t* access_token_response = NULL;
  if (include_optional) {
    access_token_response = access_token_response_create(
      "0",
      "0",
      56,
      "0"
    );
  } else {
    access_token_response = access_token_response_create(
      "0",
      "0",
      56,
      "0"
    );
  }

  return access_token_response;
}


#ifdef access_token_response_MAIN

void test_access_token_response(int include_optional) {
    access_token_response_t* access_token_response_1 = instantiate_access_token_response(include_optional);

	cJSON* jsonaccess_token_response_1 = access_token_response_convertToJSON(access_token_response_1);
	printf("access_token_response :\n%s\n", cJSON_Print(jsonaccess_token_response_1));
	access_token_response_t* access_token_response_2 = access_token_response_parseFromJSON(jsonaccess_token_response_1);
	cJSON* jsonaccess_token_response_2 = access_token_response_convertToJSON(access_token_response_2);
	printf("repeating access_token_response:\n%s\n", cJSON_Print(jsonaccess_token_response_2));
}

int main() {
  test_access_token_response(1);
  test_access_token_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_token_response_MAIN
#endif // access_token_response_TEST
