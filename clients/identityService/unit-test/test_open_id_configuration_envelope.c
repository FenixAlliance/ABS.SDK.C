#ifndef open_id_configuration_envelope_TEST
#define open_id_configuration_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define open_id_configuration_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/open_id_configuration_envelope.h"
open_id_configuration_envelope_t* instantiate_open_id_configuration_envelope(int include_optional);

#include "test_open_id_configuration.c"


open_id_configuration_envelope_t* instantiate_open_id_configuration_envelope(int include_optional) {
  open_id_configuration_envelope_t* open_id_configuration_envelope = NULL;
  if (include_optional) {
    open_id_configuration_envelope = open_id_configuration_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_open_id_configuration(0)
    );
  } else {
    open_id_configuration_envelope = open_id_configuration_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return open_id_configuration_envelope;
}


#ifdef open_id_configuration_envelope_MAIN

void test_open_id_configuration_envelope(int include_optional) {
    open_id_configuration_envelope_t* open_id_configuration_envelope_1 = instantiate_open_id_configuration_envelope(include_optional);

	cJSON* jsonopen_id_configuration_envelope_1 = open_id_configuration_envelope_convertToJSON(open_id_configuration_envelope_1);
	printf("open_id_configuration_envelope :\n%s\n", cJSON_Print(jsonopen_id_configuration_envelope_1));
	open_id_configuration_envelope_t* open_id_configuration_envelope_2 = open_id_configuration_envelope_parseFromJSON(jsonopen_id_configuration_envelope_1);
	cJSON* jsonopen_id_configuration_envelope_2 = open_id_configuration_envelope_convertToJSON(open_id_configuration_envelope_2);
	printf("repeating open_id_configuration_envelope:\n%s\n", cJSON_Print(jsonopen_id_configuration_envelope_2));
}

int main() {
  test_open_id_configuration_envelope(1);
  test_open_id_configuration_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // open_id_configuration_envelope_MAIN
#endif // open_id_configuration_envelope_TEST
