#ifndef theming_options_TEST
#define theming_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define theming_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/theming_options.h"
theming_options_t* instantiate_theming_options(int include_optional);



theming_options_t* instantiate_theming_options(int include_optional) {
  theming_options_t* theming_options = NULL;
  if (include_optional) {
    theming_options = theming_options_create(
      1,
      "0",
      "0",
      "0"
    );
  } else {
    theming_options = theming_options_create(
      1,
      "0",
      "0",
      "0"
    );
  }

  return theming_options;
}


#ifdef theming_options_MAIN

void test_theming_options(int include_optional) {
    theming_options_t* theming_options_1 = instantiate_theming_options(include_optional);

	cJSON* jsontheming_options_1 = theming_options_convertToJSON(theming_options_1);
	printf("theming_options :\n%s\n", cJSON_Print(jsontheming_options_1));
	theming_options_t* theming_options_2 = theming_options_parseFromJSON(jsontheming_options_1);
	cJSON* jsontheming_options_2 = theming_options_convertToJSON(theming_options_2);
	printf("repeating theming_options:\n%s\n", cJSON_Print(jsontheming_options_2));
}

int main() {
  test_theming_options(1);
  test_theming_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // theming_options_MAIN
#endif // theming_options_TEST
