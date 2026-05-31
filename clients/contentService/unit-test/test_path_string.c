#ifndef path_string_TEST
#define path_string_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define path_string_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/path_string.h"
path_string_t* instantiate_path_string(int include_optional);



path_string_t* instantiate_path_string(int include_optional) {
  path_string_t* path_string = NULL;
  if (include_optional) {
    path_string = path_string_create(
      "0",
      1
    );
  } else {
    path_string = path_string_create(
      "0",
      1
    );
  }

  return path_string;
}


#ifdef path_string_MAIN

void test_path_string(int include_optional) {
    path_string_t* path_string_1 = instantiate_path_string(include_optional);

	cJSON* jsonpath_string_1 = path_string_convertToJSON(path_string_1);
	printf("path_string :\n%s\n", cJSON_Print(jsonpath_string_1));
	path_string_t* path_string_2 = path_string_parseFromJSON(jsonpath_string_1);
	cJSON* jsonpath_string_2 = path_string_convertToJSON(path_string_2);
	printf("repeating path_string:\n%s\n", cJSON_Print(jsonpath_string_2));
}

int main() {
  test_path_string(1);
  test_path_string(0);

  printf("Hello world \n");
  return 0;
}

#endif // path_string_MAIN
#endif // path_string_TEST
