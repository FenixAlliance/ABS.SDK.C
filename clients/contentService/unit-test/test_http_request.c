#ifndef http_request_TEST
#define http_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define http_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/http_request.h"
http_request_t* instantiate_http_request(int include_optional);

#include "test_http_context.c"
#include "test_host_string.c"
#include "test_path_string.c"
#include "test_path_string.c"
#include "test_query_string.c"


http_request_t* instantiate_http_request(int include_optional) {
  http_request_t* http_request = NULL;
  if (include_optional) {
    http_request = http_request_create(
       // false, not to have infinite recursion
      instantiate_http_context(0),
      "0",
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_host_string(0),
       // false, not to have infinite recursion
      instantiate_path_string(0),
       // false, not to have infinite recursion
      instantiate_path_string(0),
       // false, not to have infinite recursion
      instantiate_query_string(0),
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      56,
      "0",
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      1,
      list_createList(),
      list_createList()
    );
  } else {
    http_request = http_request_create(
      NULL,
      "0",
      "0",
      1,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      56,
      "0",
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      1,
      list_createList(),
      list_createList()
    );
  }

  return http_request;
}


#ifdef http_request_MAIN

void test_http_request(int include_optional) {
    http_request_t* http_request_1 = instantiate_http_request(include_optional);

	cJSON* jsonhttp_request_1 = http_request_convertToJSON(http_request_1);
	printf("http_request :\n%s\n", cJSON_Print(jsonhttp_request_1));
	http_request_t* http_request_2 = http_request_parseFromJSON(jsonhttp_request_1);
	cJSON* jsonhttp_request_2 = http_request_convertToJSON(http_request_2);
	printf("repeating http_request:\n%s\n", cJSON_Print(jsonhttp_request_2));
}

int main() {
  test_http_request(1);
  test_http_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // http_request_MAIN
#endif // http_request_TEST
