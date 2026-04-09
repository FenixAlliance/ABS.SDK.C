#ifndef color_scheme_TEST
#define color_scheme_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define color_scheme_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/color_scheme.h"
color_scheme_t* instantiate_color_scheme(int include_optional);



color_scheme_t* instantiate_color_scheme(int include_optional) {
  color_scheme_t* color_scheme = NULL;
  if (include_optional) {
    color_scheme = color_scheme_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    color_scheme = color_scheme_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return color_scheme;
}


#ifdef color_scheme_MAIN

void test_color_scheme(int include_optional) {
    color_scheme_t* color_scheme_1 = instantiate_color_scheme(include_optional);

	cJSON* jsoncolor_scheme_1 = color_scheme_convertToJSON(color_scheme_1);
	printf("color_scheme :\n%s\n", cJSON_Print(jsoncolor_scheme_1));
	color_scheme_t* color_scheme_2 = color_scheme_parseFromJSON(jsoncolor_scheme_1);
	cJSON* jsoncolor_scheme_2 = color_scheme_convertToJSON(color_scheme_2);
	printf("repeating color_scheme:\n%s\n", cJSON_Print(jsoncolor_scheme_2));
}

int main() {
  test_color_scheme(1);
  test_color_scheme(0);

  printf("Hello world \n");
  return 0;
}

#endif // color_scheme_MAIN
#endif // color_scheme_TEST
