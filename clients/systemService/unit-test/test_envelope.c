#ifndef envelope_TEST
#define envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/envelope.h"
envelope_t* instantiate_envelope(int include_optional);



envelope_t* instantiate_envelope(int include_optional) {
  envelope_t* envelope = NULL;
  if (include_optional) {
    envelope = envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    envelope = envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return envelope;
}


#ifdef envelope_MAIN

void test_envelope(int include_optional) {
    envelope_t* envelope_1 = instantiate_envelope(include_optional);

	cJSON* jsonenvelope_1 = envelope_convertToJSON(envelope_1);
	printf("envelope :\n%s\n", cJSON_Print(jsonenvelope_1));
	envelope_t* envelope_2 = envelope_parseFromJSON(jsonenvelope_1);
	cJSON* jsonenvelope_2 = envelope_convertToJSON(envelope_2);
	printf("repeating envelope:\n%s\n", cJSON_Print(jsonenvelope_2));
}

int main() {
  test_envelope(1);
  test_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // envelope_MAIN
#endif // envelope_TEST
