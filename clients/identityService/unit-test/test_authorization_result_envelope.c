#ifndef authorization_result_envelope_TEST
#define authorization_result_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorization_result_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorization_result_envelope.h"
authorization_result_envelope_t* instantiate_authorization_result_envelope(int include_optional);

#include "test_authorization_result.c"


authorization_result_envelope_t* instantiate_authorization_result_envelope(int include_optional) {
  authorization_result_envelope_t* authorization_result_envelope = NULL;
  if (include_optional) {
    authorization_result_envelope = authorization_result_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_authorization_result(0)
    );
  } else {
    authorization_result_envelope = authorization_result_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return authorization_result_envelope;
}


#ifdef authorization_result_envelope_MAIN

void test_authorization_result_envelope(int include_optional) {
    authorization_result_envelope_t* authorization_result_envelope_1 = instantiate_authorization_result_envelope(include_optional);

	cJSON* jsonauthorization_result_envelope_1 = authorization_result_envelope_convertToJSON(authorization_result_envelope_1);
	printf("authorization_result_envelope :\n%s\n", cJSON_Print(jsonauthorization_result_envelope_1));
	authorization_result_envelope_t* authorization_result_envelope_2 = authorization_result_envelope_parseFromJSON(jsonauthorization_result_envelope_1);
	cJSON* jsonauthorization_result_envelope_2 = authorization_result_envelope_convertToJSON(authorization_result_envelope_2);
	printf("repeating authorization_result_envelope:\n%s\n", cJSON_Print(jsonauthorization_result_envelope_2));
}

int main() {
  test_authorization_result_envelope(1);
  test_authorization_result_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorization_result_envelope_MAIN
#endif // authorization_result_envelope_TEST
