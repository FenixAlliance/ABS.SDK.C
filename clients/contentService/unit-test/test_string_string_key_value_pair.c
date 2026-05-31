#ifndef string_string_key_value_pair_TEST
#define string_string_key_value_pair_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define string_string_key_value_pair_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/string_string_key_value_pair.h"
string_string_key_value_pair_t* instantiate_string_string_key_value_pair(int include_optional);



string_string_key_value_pair_t* instantiate_string_string_key_value_pair(int include_optional) {
  string_string_key_value_pair_t* string_string_key_value_pair = NULL;
  if (include_optional) {
    string_string_key_value_pair = string_string_key_value_pair_create(
      "0",
      "0"
    );
  } else {
    string_string_key_value_pair = string_string_key_value_pair_create(
      "0",
      "0"
    );
  }

  return string_string_key_value_pair;
}


#ifdef string_string_key_value_pair_MAIN

void test_string_string_key_value_pair(int include_optional) {
    string_string_key_value_pair_t* string_string_key_value_pair_1 = instantiate_string_string_key_value_pair(include_optional);

	cJSON* jsonstring_string_key_value_pair_1 = string_string_key_value_pair_convertToJSON(string_string_key_value_pair_1);
	printf("string_string_key_value_pair :\n%s\n", cJSON_Print(jsonstring_string_key_value_pair_1));
	string_string_key_value_pair_t* string_string_key_value_pair_2 = string_string_key_value_pair_parseFromJSON(jsonstring_string_key_value_pair_1);
	cJSON* jsonstring_string_key_value_pair_2 = string_string_key_value_pair_convertToJSON(string_string_key_value_pair_2);
	printf("repeating string_string_key_value_pair:\n%s\n", cJSON_Print(jsonstring_string_key_value_pair_2));
}

int main() {
  test_string_string_key_value_pair(1);
  test_string_string_key_value_pair(0);

  printf("Hello world \n");
  return 0;
}

#endif // string_string_key_value_pair_MAIN
#endif // string_string_key_value_pair_TEST
