#ifndef portal_settings_TEST
#define portal_settings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define portal_settings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/portal_settings.h"
portal_settings_t* instantiate_portal_settings(int include_optional);

#include "test_portal_options.c"


portal_settings_t* instantiate_portal_settings(int include_optional) {
  portal_settings_t* portal_settings = NULL;
  if (include_optional) {
    portal_settings = portal_settings_create(
      1,
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
      "0",
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_portal_options(0)
    );
  } else {
    portal_settings = portal_settings_create(
      1,
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
      "0",
      "0",
      56,
      NULL
    );
  }

  return portal_settings;
}


#ifdef portal_settings_MAIN

void test_portal_settings(int include_optional) {
    portal_settings_t* portal_settings_1 = instantiate_portal_settings(include_optional);

	cJSON* jsonportal_settings_1 = portal_settings_convertToJSON(portal_settings_1);
	printf("portal_settings :\n%s\n", cJSON_Print(jsonportal_settings_1));
	portal_settings_t* portal_settings_2 = portal_settings_parseFromJSON(jsonportal_settings_1);
	cJSON* jsonportal_settings_2 = portal_settings_convertToJSON(portal_settings_2);
	printf("repeating portal_settings:\n%s\n", cJSON_Print(jsonportal_settings_2));
}

int main() {
  test_portal_settings(1);
  test_portal_settings(0);

  printf("Hello world \n");
  return 0;
}

#endif // portal_settings_MAIN
#endif // portal_settings_TEST
