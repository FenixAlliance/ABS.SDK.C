#ifndef boolean_envelope_TEST
#define boolean_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define boolean_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/boolean_envelope.h"
boolean_envelope_t* instantiate_boolean_envelope(int include_optional);



boolean_envelope_t* instantiate_boolean_envelope(int include_optional) {
  boolean_envelope_t* boolean_envelope = NULL;
  if (include_optional) {
    boolean_envelope = boolean_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1
    );
  } else {
    boolean_envelope = boolean_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1
    );
  }

  return boolean_envelope;
}


#ifdef boolean_envelope_MAIN

void test_boolean_envelope(int include_optional) {
    boolean_envelope_t* boolean_envelope_1 = instantiate_boolean_envelope(include_optional);

	cJSON* jsonboolean_envelope_1 = boolean_envelope_convertToJSON(boolean_envelope_1);
	printf("boolean_envelope :\n%s\n", cJSON_Print(jsonboolean_envelope_1));
	boolean_envelope_t* boolean_envelope_2 = boolean_envelope_parseFromJSON(jsonboolean_envelope_1);
	cJSON* jsonboolean_envelope_2 = boolean_envelope_convertToJSON(boolean_envelope_2);
	printf("repeating boolean_envelope:\n%s\n", cJSON_Print(jsonboolean_envelope_2));
}

int main() {
  test_boolean_envelope(1);
  test_boolean_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // boolean_envelope_MAIN
#endif // boolean_envelope_TEST
