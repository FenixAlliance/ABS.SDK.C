#ifndef background_options_TEST
#define background_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define background_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/background_options.h"
background_options_t* instantiate_background_options(int include_optional);



background_options_t* instantiate_background_options(int include_optional) {
  background_options_t* background_options = NULL;
  if (include_optional) {
    background_options = background_options_create(
      56,
      1,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    background_options = background_options_create(
      56,
      1,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return background_options;
}


#ifdef background_options_MAIN

void test_background_options(int include_optional) {
    background_options_t* background_options_1 = instantiate_background_options(include_optional);

	cJSON* jsonbackground_options_1 = background_options_convertToJSON(background_options_1);
	printf("background_options :\n%s\n", cJSON_Print(jsonbackground_options_1));
	background_options_t* background_options_2 = background_options_parseFromJSON(jsonbackground_options_1);
	cJSON* jsonbackground_options_2 = background_options_convertToJSON(background_options_2);
	printf("repeating background_options:\n%s\n", cJSON_Print(jsonbackground_options_2));
}

int main() {
  test_background_options(1);
  test_background_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // background_options_MAIN
#endif // background_options_TEST
