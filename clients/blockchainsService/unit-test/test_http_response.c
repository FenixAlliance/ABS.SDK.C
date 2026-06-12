#ifndef http_response_TEST
#define http_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define http_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/http_response.h"
http_response_t* instantiate_http_response(int include_optional);

#include "test_http_context.c"
#include "test_pipe_writer.c"


http_response_t* instantiate_http_response(int include_optional) {
  http_response_t* http_response = NULL;
  if (include_optional) {
    http_response = http_response_create(
       // false, not to have infinite recursion
      instantiate_http_context(0),
      56,
      list_createList(),
      instantiate_binary_t("blah", 5),
       // false, not to have infinite recursion
      instantiate_pipe_writer(0),
      56,
      "0",
      0,
      1
    );
  } else {
    http_response = http_response_create(
      NULL,
      56,
      list_createList(),
      instantiate_binary_t("blah", 5),
      NULL,
      56,
      "0",
      0,
      1
    );
  }

  return http_response;
}


#ifdef http_response_MAIN

void test_http_response(int include_optional) {
    http_response_t* http_response_1 = instantiate_http_response(include_optional);

	cJSON* jsonhttp_response_1 = http_response_convertToJSON(http_response_1);
	printf("http_response :\n%s\n", cJSON_Print(jsonhttp_response_1));
	http_response_t* http_response_2 = http_response_parseFromJSON(jsonhttp_response_1);
	cJSON* jsonhttp_response_2 = http_response_convertToJSON(http_response_2);
	printf("repeating http_response:\n%s\n", cJSON_Print(jsonhttp_response_2));
}

int main() {
  test_http_response(1);
  test_http_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // http_response_MAIN
#endif // http_response_TEST
