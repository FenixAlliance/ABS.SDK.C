#ifndef string_list_envelope_TEST
#define string_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define string_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/string_list_envelope.h"
string_list_envelope_t* instantiate_string_list_envelope(int include_optional);



string_list_envelope_t* instantiate_string_list_envelope(int include_optional) {
  string_list_envelope_t* string_list_envelope = NULL;
  if (include_optional) {
    string_list_envelope = string_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    string_list_envelope = string_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return string_list_envelope;
}


#ifdef string_list_envelope_MAIN

void test_string_list_envelope(int include_optional) {
    string_list_envelope_t* string_list_envelope_1 = instantiate_string_list_envelope(include_optional);

	cJSON* jsonstring_list_envelope_1 = string_list_envelope_convertToJSON(string_list_envelope_1);
	printf("string_list_envelope :\n%s\n", cJSON_Print(jsonstring_list_envelope_1));
	string_list_envelope_t* string_list_envelope_2 = string_list_envelope_parseFromJSON(jsonstring_list_envelope_1);
	cJSON* jsonstring_list_envelope_2 = string_list_envelope_convertToJSON(string_list_envelope_2);
	printf("repeating string_list_envelope:\n%s\n", cJSON_Print(jsonstring_list_envelope_2));
}

int main() {
  test_string_list_envelope(1);
  test_string_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // string_list_envelope_MAIN
#endif // string_list_envelope_TEST
