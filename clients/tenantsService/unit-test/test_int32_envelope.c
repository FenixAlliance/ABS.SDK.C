#ifndef int32_envelope_TEST
#define int32_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define int32_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/int32_envelope.h"
int32_envelope_t* instantiate_int32_envelope(int include_optional);



int32_envelope_t* instantiate_int32_envelope(int include_optional) {
  int32_envelope_t* int32_envelope = NULL;
  if (include_optional) {
    int32_envelope = int32_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      56
    );
  } else {
    int32_envelope = int32_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      56
    );
  }

  return int32_envelope;
}


#ifdef int32_envelope_MAIN

void test_int32_envelope(int include_optional) {
    int32_envelope_t* int32_envelope_1 = instantiate_int32_envelope(include_optional);

	cJSON* jsonint32_envelope_1 = int32_envelope_convertToJSON(int32_envelope_1);
	printf("int32_envelope :\n%s\n", cJSON_Print(jsonint32_envelope_1));
	int32_envelope_t* int32_envelope_2 = int32_envelope_parseFromJSON(jsonint32_envelope_1);
	cJSON* jsonint32_envelope_2 = int32_envelope_convertToJSON(int32_envelope_2);
	printf("repeating int32_envelope:\n%s\n", cJSON_Print(jsonint32_envelope_2));
}

int main() {
  test_int32_envelope(1);
  test_int32_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // int32_envelope_MAIN
#endif // int32_envelope_TEST
