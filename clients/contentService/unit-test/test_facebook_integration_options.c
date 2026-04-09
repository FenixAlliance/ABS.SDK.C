#ifndef facebook_integration_options_TEST
#define facebook_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define facebook_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/facebook_integration_options.h"
facebook_integration_options_t* instantiate_facebook_integration_options(int include_optional);



facebook_integration_options_t* instantiate_facebook_integration_options(int include_optional) {
  facebook_integration_options_t* facebook_integration_options = NULL;
  if (include_optional) {
    facebook_integration_options = facebook_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    facebook_integration_options = facebook_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return facebook_integration_options;
}


#ifdef facebook_integration_options_MAIN

void test_facebook_integration_options(int include_optional) {
    facebook_integration_options_t* facebook_integration_options_1 = instantiate_facebook_integration_options(include_optional);

	cJSON* jsonfacebook_integration_options_1 = facebook_integration_options_convertToJSON(facebook_integration_options_1);
	printf("facebook_integration_options :\n%s\n", cJSON_Print(jsonfacebook_integration_options_1));
	facebook_integration_options_t* facebook_integration_options_2 = facebook_integration_options_parseFromJSON(jsonfacebook_integration_options_1);
	cJSON* jsonfacebook_integration_options_2 = facebook_integration_options_convertToJSON(facebook_integration_options_2);
	printf("repeating facebook_integration_options:\n%s\n", cJSON_Print(jsonfacebook_integration_options_2));
}

int main() {
  test_facebook_integration_options(1);
  test_facebook_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // facebook_integration_options_MAIN
#endif // facebook_integration_options_TEST
