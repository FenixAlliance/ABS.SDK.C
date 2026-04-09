#ifndef branding_options_TEST
#define branding_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_options.h"
branding_options_t* instantiate_branding_options(int include_optional);

#include "test_logo.c"
#include "test_logo.c"
#include "test_favicons.c"
#include "test_apple_icons.c"
#include "test_ms_app_tile.c"
#include "test_dashboard_options.c"
#include "test_studio_options.c"


branding_options_t* instantiate_branding_options(int include_optional) {
  branding_options_t* branding_options = NULL;
  if (include_optional) {
    branding_options = branding_options_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_logo(0),
       // false, not to have infinite recursion
      instantiate_logo(0),
       // false, not to have infinite recursion
      instantiate_favicons(0),
       // false, not to have infinite recursion
      instantiate_apple_icons(0),
       // false, not to have infinite recursion
      instantiate_ms_app_tile(0),
       // false, not to have infinite recursion
      instantiate_dashboard_options(0),
       // false, not to have infinite recursion
      instantiate_studio_options(0)
    );
  } else {
    branding_options = branding_options_create(
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return branding_options;
}


#ifdef branding_options_MAIN

void test_branding_options(int include_optional) {
    branding_options_t* branding_options_1 = instantiate_branding_options(include_optional);

	cJSON* jsonbranding_options_1 = branding_options_convertToJSON(branding_options_1);
	printf("branding_options :\n%s\n", cJSON_Print(jsonbranding_options_1));
	branding_options_t* branding_options_2 = branding_options_parseFromJSON(jsonbranding_options_1);
	cJSON* jsonbranding_options_2 = branding_options_convertToJSON(branding_options_2);
	printf("repeating branding_options:\n%s\n", cJSON_Print(jsonbranding_options_2));
}

int main() {
  test_branding_options(1);
  test_branding_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_options_MAIN
#endif // branding_options_TEST
