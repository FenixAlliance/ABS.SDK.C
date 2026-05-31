#ifndef vessel_dto_envelope_TEST
#define vessel_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vessel_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vessel_dto_envelope.h"
vessel_dto_envelope_t* instantiate_vessel_dto_envelope(int include_optional);

#include "test_vessel_dto.c"


vessel_dto_envelope_t* instantiate_vessel_dto_envelope(int include_optional) {
  vessel_dto_envelope_t* vessel_dto_envelope = NULL;
  if (include_optional) {
    vessel_dto_envelope = vessel_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_vessel_dto(0)
    );
  } else {
    vessel_dto_envelope = vessel_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return vessel_dto_envelope;
}


#ifdef vessel_dto_envelope_MAIN

void test_vessel_dto_envelope(int include_optional) {
    vessel_dto_envelope_t* vessel_dto_envelope_1 = instantiate_vessel_dto_envelope(include_optional);

	cJSON* jsonvessel_dto_envelope_1 = vessel_dto_envelope_convertToJSON(vessel_dto_envelope_1);
	printf("vessel_dto_envelope :\n%s\n", cJSON_Print(jsonvessel_dto_envelope_1));
	vessel_dto_envelope_t* vessel_dto_envelope_2 = vessel_dto_envelope_parseFromJSON(jsonvessel_dto_envelope_1);
	cJSON* jsonvessel_dto_envelope_2 = vessel_dto_envelope_convertToJSON(vessel_dto_envelope_2);
	printf("repeating vessel_dto_envelope:\n%s\n", cJSON_Print(jsonvessel_dto_envelope_2));
}

int main() {
  test_vessel_dto_envelope(1);
  test_vessel_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // vessel_dto_envelope_MAIN
#endif // vessel_dto_envelope_TEST
