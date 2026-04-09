#ifndef social_media_options_TEST
#define social_media_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_media_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_media_options.h"
social_media_options_t* instantiate_social_media_options(int include_optional);



social_media_options_t* instantiate_social_media_options(int include_optional) {
  social_media_options_t* social_media_options = NULL;
  if (include_optional) {
    social_media_options = social_media_options_create(
      "0",
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
    social_media_options = social_media_options_create(
      "0",
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

  return social_media_options;
}


#ifdef social_media_options_MAIN

void test_social_media_options(int include_optional) {
    social_media_options_t* social_media_options_1 = instantiate_social_media_options(include_optional);

	cJSON* jsonsocial_media_options_1 = social_media_options_convertToJSON(social_media_options_1);
	printf("social_media_options :\n%s\n", cJSON_Print(jsonsocial_media_options_1));
	social_media_options_t* social_media_options_2 = social_media_options_parseFromJSON(jsonsocial_media_options_1);
	cJSON* jsonsocial_media_options_2 = social_media_options_convertToJSON(social_media_options_2);
	printf("repeating social_media_options:\n%s\n", cJSON_Print(jsonsocial_media_options_2));
}

int main() {
  test_social_media_options(1);
  test_social_media_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_media_options_MAIN
#endif // social_media_options_TEST
