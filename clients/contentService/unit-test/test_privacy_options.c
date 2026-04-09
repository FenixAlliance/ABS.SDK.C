#ifndef privacy_options_TEST
#define privacy_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define privacy_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/privacy_options.h"
privacy_options_t* instantiate_privacy_options(int include_optional);



privacy_options_t* instantiate_privacy_options(int include_optional) {
  privacy_options_t* privacy_options = NULL;
  if (include_optional) {
    privacy_options = privacy_options_create(
      "0"
    );
  } else {
    privacy_options = privacy_options_create(
      "0"
    );
  }

  return privacy_options;
}


#ifdef privacy_options_MAIN

void test_privacy_options(int include_optional) {
    privacy_options_t* privacy_options_1 = instantiate_privacy_options(include_optional);

	cJSON* jsonprivacy_options_1 = privacy_options_convertToJSON(privacy_options_1);
	printf("privacy_options :\n%s\n", cJSON_Print(jsonprivacy_options_1));
	privacy_options_t* privacy_options_2 = privacy_options_parseFromJSON(jsonprivacy_options_1);
	cJSON* jsonprivacy_options_2 = privacy_options_convertToJSON(privacy_options_2);
	printf("repeating privacy_options:\n%s\n", cJSON_Print(jsonprivacy_options_2));
}

int main() {
  test_privacy_options(1);
  test_privacy_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // privacy_options_MAIN
#endif // privacy_options_TEST
