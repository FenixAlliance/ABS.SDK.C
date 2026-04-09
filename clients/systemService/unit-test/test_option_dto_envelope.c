#ifndef option_dto_envelope_TEST
#define option_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define option_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/option_dto_envelope.h"
option_dto_envelope_t* instantiate_option_dto_envelope(int include_optional);

#include "test_option_dto.c"


option_dto_envelope_t* instantiate_option_dto_envelope(int include_optional) {
  option_dto_envelope_t* option_dto_envelope = NULL;
  if (include_optional) {
    option_dto_envelope = option_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_option_dto(0)
    );
  } else {
    option_dto_envelope = option_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return option_dto_envelope;
}


#ifdef option_dto_envelope_MAIN

void test_option_dto_envelope(int include_optional) {
    option_dto_envelope_t* option_dto_envelope_1 = instantiate_option_dto_envelope(include_optional);

	cJSON* jsonoption_dto_envelope_1 = option_dto_envelope_convertToJSON(option_dto_envelope_1);
	printf("option_dto_envelope :\n%s\n", cJSON_Print(jsonoption_dto_envelope_1));
	option_dto_envelope_t* option_dto_envelope_2 = option_dto_envelope_parseFromJSON(jsonoption_dto_envelope_1);
	cJSON* jsonoption_dto_envelope_2 = option_dto_envelope_convertToJSON(option_dto_envelope_2);
	printf("repeating option_dto_envelope:\n%s\n", cJSON_Print(jsonoption_dto_envelope_2));
}

int main() {
  test_option_dto_envelope(1);
  test_option_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // option_dto_envelope_MAIN
#endif // option_dto_envelope_TEST
