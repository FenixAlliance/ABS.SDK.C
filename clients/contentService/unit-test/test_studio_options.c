#ifndef studio_options_TEST
#define studio_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define studio_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/studio_options.h"
studio_options_t* instantiate_studio_options(int include_optional);



studio_options_t* instantiate_studio_options(int include_optional) {
  studio_options_t* studio_options = NULL;
  if (include_optional) {
    studio_options = studio_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    studio_options = studio_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return studio_options;
}


#ifdef studio_options_MAIN

void test_studio_options(int include_optional) {
    studio_options_t* studio_options_1 = instantiate_studio_options(include_optional);

	cJSON* jsonstudio_options_1 = studio_options_convertToJSON(studio_options_1);
	printf("studio_options :\n%s\n", cJSON_Print(jsonstudio_options_1));
	studio_options_t* studio_options_2 = studio_options_parseFromJSON(jsonstudio_options_1);
	cJSON* jsonstudio_options_2 = studio_options_convertToJSON(studio_options_2);
	printf("repeating studio_options:\n%s\n", cJSON_Print(jsonstudio_options_2));
}

int main() {
  test_studio_options(1);
  test_studio_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // studio_options_MAIN
#endif // studio_options_TEST
