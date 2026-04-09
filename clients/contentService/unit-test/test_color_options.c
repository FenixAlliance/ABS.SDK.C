#ifndef color_options_TEST
#define color_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define color_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/color_options.h"
color_options_t* instantiate_color_options(int include_optional);

#include "test_color_scheme.c"


color_options_t* instantiate_color_options(int include_optional) {
  color_options_t* color_options = NULL;
  if (include_optional) {
    color_options = color_options_create(
      contentservice_color_options_PRIMARYSKIN_Dark,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_color_scheme(0)
    );
  } else {
    color_options = color_options_create(
      contentservice_color_options_PRIMARYSKIN_Dark,
      "0",
      "0",
      NULL
    );
  }

  return color_options;
}


#ifdef color_options_MAIN

void test_color_options(int include_optional) {
    color_options_t* color_options_1 = instantiate_color_options(include_optional);

	cJSON* jsoncolor_options_1 = color_options_convertToJSON(color_options_1);
	printf("color_options :\n%s\n", cJSON_Print(jsoncolor_options_1));
	color_options_t* color_options_2 = color_options_parseFromJSON(jsoncolor_options_1);
	cJSON* jsoncolor_options_2 = color_options_convertToJSON(color_options_2);
	printf("repeating color_options:\n%s\n", cJSON_Print(jsoncolor_options_2));
}

int main() {
  test_color_options(1);
  test_color_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // color_options_MAIN
#endif // color_options_TEST
