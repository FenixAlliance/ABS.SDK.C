#ifndef auth_result_envelope_TEST
#define auth_result_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auth_result_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auth_result_envelope.h"
auth_result_envelope_t* instantiate_auth_result_envelope(int include_optional);

#include "test_auth_result.c"


auth_result_envelope_t* instantiate_auth_result_envelope(int include_optional) {
  auth_result_envelope_t* auth_result_envelope = NULL;
  if (include_optional) {
    auth_result_envelope = auth_result_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_auth_result(0)
    );
  } else {
    auth_result_envelope = auth_result_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return auth_result_envelope;
}


#ifdef auth_result_envelope_MAIN

void test_auth_result_envelope(int include_optional) {
    auth_result_envelope_t* auth_result_envelope_1 = instantiate_auth_result_envelope(include_optional);

	cJSON* jsonauth_result_envelope_1 = auth_result_envelope_convertToJSON(auth_result_envelope_1);
	printf("auth_result_envelope :\n%s\n", cJSON_Print(jsonauth_result_envelope_1));
	auth_result_envelope_t* auth_result_envelope_2 = auth_result_envelope_parseFromJSON(jsonauth_result_envelope_1);
	cJSON* jsonauth_result_envelope_2 = auth_result_envelope_convertToJSON(auth_result_envelope_2);
	printf("repeating auth_result_envelope:\n%s\n", cJSON_Print(jsonauth_result_envelope_2));
}

int main() {
  test_auth_result_envelope(1);
  test_auth_result_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // auth_result_envelope_MAIN
#endif // auth_result_envelope_TEST
