#ifndef string_envelope_TEST
#define string_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define string_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/string_envelope.h"
string_envelope_t* instantiate_string_envelope(int include_optional);



string_envelope_t* instantiate_string_envelope(int include_optional) {
  string_envelope_t* string_envelope = NULL;
  if (include_optional) {
    string_envelope = string_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    string_envelope = string_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return string_envelope;
}


#ifdef string_envelope_MAIN

void test_string_envelope(int include_optional) {
    string_envelope_t* string_envelope_1 = instantiate_string_envelope(include_optional);

	cJSON* jsonstring_envelope_1 = string_envelope_convertToJSON(string_envelope_1);
	printf("string_envelope :\n%s\n", cJSON_Print(jsonstring_envelope_1));
	string_envelope_t* string_envelope_2 = string_envelope_parseFromJSON(jsonstring_envelope_1);
	cJSON* jsonstring_envelope_2 = string_envelope_convertToJSON(string_envelope_2);
	printf("repeating string_envelope:\n%s\n", cJSON_Print(jsonstring_envelope_2));
}

int main() {
  test_string_envelope(1);
  test_string_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // string_envelope_MAIN
#endif // string_envelope_TEST
