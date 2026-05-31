#ifndef cancellation_token_TEST
#define cancellation_token_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cancellation_token_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cancellation_token.h"
cancellation_token_t* instantiate_cancellation_token(int include_optional);

#include "test_wait_handle.c"


cancellation_token_t* instantiate_cancellation_token(int include_optional) {
  cancellation_token_t* cancellation_token = NULL;
  if (include_optional) {
    cancellation_token = cancellation_token_create(
      1,
      1,
       // false, not to have infinite recursion
      instantiate_wait_handle(0)
    );
  } else {
    cancellation_token = cancellation_token_create(
      1,
      1,
      NULL
    );
  }

  return cancellation_token;
}


#ifdef cancellation_token_MAIN

void test_cancellation_token(int include_optional) {
    cancellation_token_t* cancellation_token_1 = instantiate_cancellation_token(include_optional);

	cJSON* jsoncancellation_token_1 = cancellation_token_convertToJSON(cancellation_token_1);
	printf("cancellation_token :\n%s\n", cJSON_Print(jsoncancellation_token_1));
	cancellation_token_t* cancellation_token_2 = cancellation_token_parseFromJSON(jsoncancellation_token_1);
	cJSON* jsoncancellation_token_2 = cancellation_token_convertToJSON(cancellation_token_2);
	printf("repeating cancellation_token:\n%s\n", cJSON_Print(jsoncancellation_token_2));
}

int main() {
  test_cancellation_token(1);
  test_cancellation_token(0);

  printf("Hello world \n");
  return 0;
}

#endif // cancellation_token_MAIN
#endif // cancellation_token_TEST
