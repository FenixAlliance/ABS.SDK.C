#ifndef timezone_dto_envelope_TEST
#define timezone_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_dto_envelope.h"
timezone_dto_envelope_t* instantiate_timezone_dto_envelope(int include_optional);

#include "test_timezone_dto.c"


timezone_dto_envelope_t* instantiate_timezone_dto_envelope(int include_optional) {
  timezone_dto_envelope_t* timezone_dto_envelope = NULL;
  if (include_optional) {
    timezone_dto_envelope = timezone_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_timezone_dto(0)
    );
  } else {
    timezone_dto_envelope = timezone_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return timezone_dto_envelope;
}


#ifdef timezone_dto_envelope_MAIN

void test_timezone_dto_envelope(int include_optional) {
    timezone_dto_envelope_t* timezone_dto_envelope_1 = instantiate_timezone_dto_envelope(include_optional);

	cJSON* jsontimezone_dto_envelope_1 = timezone_dto_envelope_convertToJSON(timezone_dto_envelope_1);
	printf("timezone_dto_envelope :\n%s\n", cJSON_Print(jsontimezone_dto_envelope_1));
	timezone_dto_envelope_t* timezone_dto_envelope_2 = timezone_dto_envelope_parseFromJSON(jsontimezone_dto_envelope_1);
	cJSON* jsontimezone_dto_envelope_2 = timezone_dto_envelope_convertToJSON(timezone_dto_envelope_2);
	printf("repeating timezone_dto_envelope:\n%s\n", cJSON_Print(jsontimezone_dto_envelope_2));
}

int main() {
  test_timezone_dto_envelope(1);
  test_timezone_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_dto_envelope_MAIN
#endif // timezone_dto_envelope_TEST
