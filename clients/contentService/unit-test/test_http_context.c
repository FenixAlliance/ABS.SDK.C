#ifndef http_context_TEST
#define http_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define http_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/http_context.h"
http_context_t* instantiate_http_context(int include_optional);

#include "test_http_request.c"
#include "test_http_response.c"
#include "test_connection_info.c"
#include "test_web_socket_manager.c"
#include "test_claims_principal.c"
#include "test_cancellation_token.c"
#include "test_i_session.c"


http_context_t* instantiate_http_context(int include_optional) {
  http_context_t* http_context = NULL;
  if (include_optional) {
    http_context = http_context_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_http_request(0),
       // false, not to have infinite recursion
      instantiate_http_response(0),
       // false, not to have infinite recursion
      instantiate_connection_info(0),
       // false, not to have infinite recursion
      instantiate_web_socket_manager(0),
       // false, not to have infinite recursion
      instantiate_claims_principal(0),
      list_createList(),
      0,
       // false, not to have infinite recursion
      instantiate_cancellation_token(0),
      "0",
       // false, not to have infinite recursion
      instantiate_i_session(0)
    );
  } else {
    http_context = http_context_create(
      list_createList(),
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      0,
      NULL,
      "0",
      NULL
    );
  }

  return http_context;
}


#ifdef http_context_MAIN

void test_http_context(int include_optional) {
    http_context_t* http_context_1 = instantiate_http_context(include_optional);

	cJSON* jsonhttp_context_1 = http_context_convertToJSON(http_context_1);
	printf("http_context :\n%s\n", cJSON_Print(jsonhttp_context_1));
	http_context_t* http_context_2 = http_context_parseFromJSON(jsonhttp_context_1);
	cJSON* jsonhttp_context_2 = http_context_convertToJSON(http_context_2);
	printf("repeating http_context:\n%s\n", cJSON_Print(jsonhttp_context_2));
}

int main() {
  test_http_context(1);
  test_http_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // http_context_MAIN
#endif // http_context_TEST
