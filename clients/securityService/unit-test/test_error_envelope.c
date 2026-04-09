#ifndef error_envelope_TEST
#define error_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define error_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/error_envelope.h"
error_envelope_t* instantiate_error_envelope(int include_optional);



error_envelope_t* instantiate_error_envelope(int include_optional) {
  error_envelope_t* error_envelope = NULL;
  if (include_optional) {
    error_envelope = error_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    error_envelope = error_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return error_envelope;
}


#ifdef error_envelope_MAIN

void test_error_envelope(int include_optional) {
    error_envelope_t* error_envelope_1 = instantiate_error_envelope(include_optional);

	cJSON* jsonerror_envelope_1 = error_envelope_convertToJSON(error_envelope_1);
	printf("error_envelope :\n%s\n", cJSON_Print(jsonerror_envelope_1));
	error_envelope_t* error_envelope_2 = error_envelope_parseFromJSON(jsonerror_envelope_1);
	cJSON* jsonerror_envelope_2 = error_envelope_convertToJSON(error_envelope_2);
	printf("repeating error_envelope:\n%s\n", cJSON_Print(jsonerror_envelope_2));
}

int main() {
  test_error_envelope(1);
  test_error_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // error_envelope_MAIN
#endif // error_envelope_TEST
