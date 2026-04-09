#ifndef portal_options_envelope_TEST
#define portal_options_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define portal_options_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/portal_options_envelope.h"
portal_options_envelope_t* instantiate_portal_options_envelope(int include_optional);

#include "test_portal_options.c"


portal_options_envelope_t* instantiate_portal_options_envelope(int include_optional) {
  portal_options_envelope_t* portal_options_envelope = NULL;
  if (include_optional) {
    portal_options_envelope = portal_options_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_portal_options(0)
    );
  } else {
    portal_options_envelope = portal_options_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return portal_options_envelope;
}


#ifdef portal_options_envelope_MAIN

void test_portal_options_envelope(int include_optional) {
    portal_options_envelope_t* portal_options_envelope_1 = instantiate_portal_options_envelope(include_optional);

	cJSON* jsonportal_options_envelope_1 = portal_options_envelope_convertToJSON(portal_options_envelope_1);
	printf("portal_options_envelope :\n%s\n", cJSON_Print(jsonportal_options_envelope_1));
	portal_options_envelope_t* portal_options_envelope_2 = portal_options_envelope_parseFromJSON(jsonportal_options_envelope_1);
	cJSON* jsonportal_options_envelope_2 = portal_options_envelope_convertToJSON(portal_options_envelope_2);
	printf("repeating portal_options_envelope:\n%s\n", cJSON_Print(jsonportal_options_envelope_2));
}

int main() {
  test_portal_options_envelope(1);
  test_portal_options_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // portal_options_envelope_MAIN
#endif // portal_options_envelope_TEST
