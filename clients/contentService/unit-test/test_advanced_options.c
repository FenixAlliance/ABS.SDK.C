#ifndef advanced_options_TEST
#define advanced_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define advanced_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/advanced_options.h"
advanced_options_t* instantiate_advanced_options(int include_optional);



advanced_options_t* instantiate_advanced_options(int include_optional) {
  advanced_options_t* advanced_options = NULL;
  if (include_optional) {
    advanced_options = advanced_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    advanced_options = advanced_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return advanced_options;
}


#ifdef advanced_options_MAIN

void test_advanced_options(int include_optional) {
    advanced_options_t* advanced_options_1 = instantiate_advanced_options(include_optional);

	cJSON* jsonadvanced_options_1 = advanced_options_convertToJSON(advanced_options_1);
	printf("advanced_options :\n%s\n", cJSON_Print(jsonadvanced_options_1));
	advanced_options_t* advanced_options_2 = advanced_options_parseFromJSON(jsonadvanced_options_1);
	cJSON* jsonadvanced_options_2 = advanced_options_convertToJSON(advanced_options_2);
	printf("repeating advanced_options:\n%s\n", cJSON_Print(jsonadvanced_options_2));
}

int main() {
  test_advanced_options(1);
  test_advanced_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // advanced_options_MAIN
#endif // advanced_options_TEST
