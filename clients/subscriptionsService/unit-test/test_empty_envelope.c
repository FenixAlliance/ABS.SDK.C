#ifndef empty_envelope_TEST
#define empty_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define empty_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/empty_envelope.h"
empty_envelope_t* instantiate_empty_envelope(int include_optional);



empty_envelope_t* instantiate_empty_envelope(int include_optional) {
  empty_envelope_t* empty_envelope = NULL;
  if (include_optional) {
    empty_envelope = empty_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    empty_envelope = empty_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return empty_envelope;
}


#ifdef empty_envelope_MAIN

void test_empty_envelope(int include_optional) {
    empty_envelope_t* empty_envelope_1 = instantiate_empty_envelope(include_optional);

	cJSON* jsonempty_envelope_1 = empty_envelope_convertToJSON(empty_envelope_1);
	printf("empty_envelope :\n%s\n", cJSON_Print(jsonempty_envelope_1));
	empty_envelope_t* empty_envelope_2 = empty_envelope_parseFromJSON(jsonempty_envelope_1);
	cJSON* jsonempty_envelope_2 = empty_envelope_convertToJSON(empty_envelope_2);
	printf("repeating empty_envelope:\n%s\n", cJSON_Print(jsonempty_envelope_2));
}

int main() {
  test_empty_envelope(1);
  test_empty_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // empty_envelope_MAIN
#endif // empty_envelope_TEST
