#ifndef localization_string_dto_envelope_TEST
#define localization_string_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define localization_string_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/localization_string_dto_envelope.h"
localization_string_dto_envelope_t* instantiate_localization_string_dto_envelope(int include_optional);

#include "test_localization_string_dto.c"


localization_string_dto_envelope_t* instantiate_localization_string_dto_envelope(int include_optional) {
  localization_string_dto_envelope_t* localization_string_dto_envelope = NULL;
  if (include_optional) {
    localization_string_dto_envelope = localization_string_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_localization_string_dto(0)
    );
  } else {
    localization_string_dto_envelope = localization_string_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return localization_string_dto_envelope;
}


#ifdef localization_string_dto_envelope_MAIN

void test_localization_string_dto_envelope(int include_optional) {
    localization_string_dto_envelope_t* localization_string_dto_envelope_1 = instantiate_localization_string_dto_envelope(include_optional);

	cJSON* jsonlocalization_string_dto_envelope_1 = localization_string_dto_envelope_convertToJSON(localization_string_dto_envelope_1);
	printf("localization_string_dto_envelope :\n%s\n", cJSON_Print(jsonlocalization_string_dto_envelope_1));
	localization_string_dto_envelope_t* localization_string_dto_envelope_2 = localization_string_dto_envelope_parseFromJSON(jsonlocalization_string_dto_envelope_1);
	cJSON* jsonlocalization_string_dto_envelope_2 = localization_string_dto_envelope_convertToJSON(localization_string_dto_envelope_2);
	printf("repeating localization_string_dto_envelope:\n%s\n", cJSON_Print(jsonlocalization_string_dto_envelope_2));
}

int main() {
  test_localization_string_dto_envelope(1);
  test_localization_string_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // localization_string_dto_envelope_MAIN
#endif // localization_string_dto_envelope_TEST
