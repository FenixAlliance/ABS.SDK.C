#ifndef responsive_options_TEST
#define responsive_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define responsive_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/responsive_options.h"
responsive_options_t* instantiate_responsive_options(int include_optional);



responsive_options_t* instantiate_responsive_options(int include_optional) {
  responsive_options_t* responsive_options = NULL;
  if (include_optional) {
    responsive_options = responsive_options_create(
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      1.337,
      1.337
    );
  } else {
    responsive_options = responsive_options_create(
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      1.337,
      1.337
    );
  }

  return responsive_options;
}


#ifdef responsive_options_MAIN

void test_responsive_options(int include_optional) {
    responsive_options_t* responsive_options_1 = instantiate_responsive_options(include_optional);

	cJSON* jsonresponsive_options_1 = responsive_options_convertToJSON(responsive_options_1);
	printf("responsive_options :\n%s\n", cJSON_Print(jsonresponsive_options_1));
	responsive_options_t* responsive_options_2 = responsive_options_parseFromJSON(jsonresponsive_options_1);
	cJSON* jsonresponsive_options_2 = responsive_options_convertToJSON(responsive_options_2);
	printf("repeating responsive_options:\n%s\n", cJSON_Print(jsonresponsive_options_2));
}

int main() {
  test_responsive_options(1);
  test_responsive_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // responsive_options_MAIN
#endif // responsive_options_TEST
